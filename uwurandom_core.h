#ifndef _UWURANDOM_CORE_H
#define _UWURANDOM_CORE_H

#include "uwurandom_platform.h"
#include "uwurandom_types.h"

#define CREATE_PRINT_STRING(printed_string) (uwu_op){\
    .opcode = UWU_PRINT_STRING,\
    .state = {\
        .print_string = {\
            .string = (printed_string),\
            .remaining_chars = sizeof(printed_string) - 1\
        }\
    }\
}

#define CREATE_PRINT_STRING_WITH_LEN(printed_string) (uwu_op){\
    .opcode = UWU_PRINT_STRING,\
    .state = {\
        .print_string = {\
            .string = (printed_string).string,\
            .remaining_chars = (printed_string).len\
        }\
    }\
}

#define CREATE_REPEAT_CHARACTER(repeated_character, num_repetitions) (uwu_op){\
    .opcode = UWU_REPEAT_CHARACTER,\
    .state = {\
        .repeat_character = {\
            .character = (repeated_character),\
            .remaining_chars = (num_repetitions)\
        }\
    }\
}

#define CREATE_MARKOV(markov_data, starting_ngram, len) (uwu_op){\
    .opcode = UWU_MARKOV,\
    .state = {\
        .markov = {\
            .prev_ngram = (starting_ngram),\
            .remaining_chars = (len),\
            .ngrams = &(markov_data)\
        }\
    }\
}

#define CREATE_PICK_STRING(actions_table, action_rand) (uwu_op){\
    .opcode = UWU_PRINT_STRING,\
    .state = {\
        .print_string = {\
            .string = actions_table[action_rand % ARRAY_SIZE(actions_table)].string,\
            .remaining_chars = actions_table[action_rand % ARRAY_SIZE(actions_table)].len\
        }\
    }\
}

#define CREATE_GENERATE(factory_fn, count) (uwu_op){\
    .opcode = UWU_GENERATE,\
    .state = {\
        .generate = {\
            .factory = factory_fn,\
            .remaining_iterations = count\
        }\
    }\
}

#define CREATE_CAPITALIZE_NEXT() (uwu_op){\
    .opcode = UWU_CAPITALIZE_NEXT,\
    .state = {\
        .nothing = {}\
    }\
}

static inline void maybe_capitalize(uwu_state* state, char* c) {
    if (state->capitalize_next && *c >= 'a' && *c <= 'z') {
        *c &= ~0x20;
    }
    state->capitalize_next = false;
}

static inline int
uwu_push_op(uwu_state* state, uwu_op op) {
    if (state->current_op == MAX_OPS - 1) {
        return -1;
    }

    state->current_op++;
    state->opcodes[state->current_op] = op.opcode;
    state->op_states[state->current_op] = op.state;

    return 0;
}

static inline uint32_t* uwu_side_data(uwu_state* state) {
    return &state->side_data[state->current_op];
}

static inline void uwu_get_side_data(uwu_state* state, uint8_t op_idx, void* dst) {
    memcpy(dst, &state->side_data[op_idx], sizeof(uint32_t));
}

static inline void uwu_set_side_data(uwu_state* state, uint8_t op_idx, const void* src) {
    memcpy(&state->side_data[op_idx], src, sizeof(uint32_t));
}

// Pick a random program from the list of programs and write it to the ops list
static void
generate_new_ops(uwu_state* state) {
    uwu_random_number op_idx = uwu_random_int(state);

    if (state->prev_op == -1) {
        op_idx %= state->num_ops;
    } else {
        // don't repeat previous op
        op_idx %= state->num_ops - 1;
        if (op_idx >= (unsigned int)state->prev_op) {
            op_idx += 1;
        }
    }

    state->prev_op = op_idx;

    // print a space after the op is done executing
    // uwu_push_op(state, CREATE_PRINT_STRING(" "));

    state->ops_table[op_idx](state);
}

// Execute an operation once. Returns the number of characters written, or a negative value on error.
static int uwu_exec_op(uwu_state* state, char* buf, size_t len) {
    UWU_OPCODE opcode = state->opcodes[state->current_op];
    uwu_op_state* op_state = &state->op_states[state->current_op];
    switch (opcode) {
        case UWU_PRINT_STRING: {
            const char* string = op_state->print_string.string;
            size_t remaining = op_state->print_string.remaining_chars;

            if (remaining == 0) {
                state->current_op--;
                return 0;
            }

            size_t num_chars_to_copy = remaining > len ? len : remaining;

            if (state->capitalize_next) {
                char first = string[0];
                maybe_capitalize(state, &first);
                COPY_CHAR(first, buf);
                if (num_chars_to_copy > 1) COPY_STR(buf + 1, string + 1, num_chars_to_copy - 1);
            } else {
                COPY_STR(buf, string, num_chars_to_copy);
            }

            // Advance state by number of characters copied;
            op_state->print_string.string += num_chars_to_copy;
            op_state->print_string.remaining_chars -= num_chars_to_copy;

            return num_chars_to_copy;
        }

        case UWU_MARKOV: {
            size_t ngram_index = op_state->markov.prev_ngram;
            const uwu_markov_table* table = op_state->markov.ngrams;
            const uwu_markov_ngram* ngrams = table->ngrams;
            const uwu_markov_choice* choices = table->choices;
            size_t remaining = op_state->markov.remaining_chars;

            if (remaining == 0) {
                state->current_op--;
                return 0;
            }

            size_t num_chars_to_copy = remaining > len ? len : remaining;

            size_t i;
            for (i = 0; i < num_chars_to_copy; i++) {
                uwu_markov_ngram ngram = ngrams[ngram_index];
                uwu_random_number random = uwu_random_int(state);
                random %= ngram.total_probability;
                int j = 0;
                while (true) {
                    uwu_markov_choice choice = choices[ngram.choices + j];
                    size_t cumulative_probability = choice.cumulative_probability;
                    if (random < cumulative_probability) {
                        ngram_index = choice.next_ngram;
                        break;
                    }
                    j++;
                }

                char ngram_char = ngram.character;

                if (ngram_char < 0) {
                    size_t special_idx = -1 - ngram_char;
                    table->specials[special_idx](state);
                    break;
                } else {
                    maybe_capitalize(state, &ngram_char);
                    COPY_CHAR(ngram_char, buf + i);
                }
            }

            op_state->markov.prev_ngram = ngram_index;
            op_state->markov.remaining_chars -= i;

            return i;
        }

        case UWU_REPEAT_CHARACTER: {
            char c = op_state->repeat_character.character;
            size_t i;
            for (i = 0; i < len; i++) {
                if (op_state->repeat_character.remaining_chars == 0) {
                    // Out of characters. Return the number of characters thus written.
                    state->current_op--;
                    return i;
                }
                maybe_capitalize(state, &c);
                COPY_CHAR(c, buf + i);
                op_state->repeat_character.remaining_chars--;
            }
            return len;
        }

        case UWU_GENERATE: {
            if (op_state->generate.remaining_iterations == 0) {
                state->current_op--;
                return 0;
            }

            op_state->generate.remaining_iterations--;
            op_state->generate.factory(state);
            return uwu_exec_op(state, buf, len);
        }

        case UWU_CAPITALIZE_NEXT: {
            state->capitalize_next = true;
            state->current_op--;
            return 0;
        }

        default: return 0;
    }
}

// Fill the given buffer with UwU
static int uwu_write_chars(uwu_state* state, char* buf, size_t n) {
    size_t total_written = 0;
    while (total_written < n) {
        if (state->current_op == -1) {
            // regenerate ops
            generate_new_ops(state);
        }

        size_t chars_written = uwu_exec_op(state, buf + total_written, n - total_written);
        if (chars_written < 0) return chars_written;

        total_written += chars_written;
    }
    return 0;
}

static int uwu_init_state(uwu_state* state, uwu_op_factory** ops_table, size_t num_ops) {
    int rng_err = uwu_init_rng(state);
    if (rng_err) return rng_err;

    state->ops_table = ops_table;
    state->num_ops = num_ops;

    state->current_op = -1;
    state->prev_op = -1;
    state->capitalize_next = false;

    return 0;
}

static void uwu_destroy_state(uwu_state* state) {
    uwu_destroy_rng(state);
}

#endif
