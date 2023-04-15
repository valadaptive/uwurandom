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
}\

static inline int
uwu_push_op(uwu_state* state, uwu_op op) {
    if (state->current_op == MAX_OPS - 1) {
        return -1;
    }

    state->current_op++;
    state->ops[state->current_op] = op;

    return 0;
}

// Pick a random program from the list of programs and write it to the ops list
static void
generate_new_ops(uwu_state* state) {
    unsigned int op_idx = uwu_random_int(state);

    if (state->prev_op == -1) {
        op_idx %= state->num_ops;
    } else {
        // don't repeat previous op
        op_idx %= state->num_ops - 1;
        if (op_idx >= state->prev_op) {
            op_idx += 1;
        }
    }

    state->prev_op = op_idx;

    state->ops_table[op_idx](state);
}

// Execute an operation once. Returns the number of characters written, or a negative value on error.
static int uwu_exec_op(uwu_state* state, char* buf, size_t len) {
    uwu_op* op = &state->ops[state->current_op];
    switch (op->opcode) {
        case UWU_PRINT_STRING: {
            char* string = op->state.print_string.string;
            size_t remaining = op->state.print_string.remaining_chars;

            if (remaining == 0) {
                state->current_op--;
                return 0;
            }

            size_t num_chars_to_copy = remaining > len ? len : remaining;

            COPY_STR(buf, string, num_chars_to_copy);

            // Advance state by number of characters copied;
            op->state.print_string.string += num_chars_to_copy;
            op->state.print_string.remaining_chars -= num_chars_to_copy;

            return num_chars_to_copy;
        }

        case UWU_MARKOV: {
            size_t ngram_index = op->state.markov.prev_ngram;
            uwu_markov_table* table = op->state.markov.ngrams;
            uwu_markov_ngram* ngrams = table->ngrams;
            size_t remaining = op->state.markov.remaining_chars;

            if (remaining == 0) {
                state->current_op--;
                return 0;
            }

            size_t num_chars_to_copy = remaining > len ? len : remaining;

            int i;
            for (i = 0; i < num_chars_to_copy; i++) {
                uwu_markov_ngram ngram = ngrams[ngram_index];
                unsigned int random = uwu_random_int(state);
                random %= ngram.total_probability;
                int j = 0;
                while (true) {
                    uwu_markov_choice choice = ngram.choices[j];
                    size_t cumulative_probability = choice.cumulative_probability;
                    if (random < cumulative_probability) {
                        ngram_index = choice.next_ngram;
                        break;
                    }
                    j++;
                }

                char ngram_char = ngram.character;

                if (ngram_char < 0) {
                    ssize_t special_idx = -1 - ngram_char;
                    table->specials[special_idx](state);
                    break;
                } else {
                    COPY_CHAR(ngram_char, buf + i);
                }
            }

            op->state.markov.prev_ngram = ngram_index;
            op->state.markov.remaining_chars -= i;

            return i;
        }

        case UWU_REPEAT_CHARACTER: {
            char c = op->state.repeat_character.character;
            int i;
            for (i = 0; i < len; i++) {
                if (op->state.repeat_character.remaining_chars == 0) {
                    // Out of characters. Return the number of characters thus written.
                    state->current_op--;
                    return i;
                }
                COPY_CHAR(c, buf + i);
                op->state.repeat_character.remaining_chars--;
            }
            return len;
        }

        default: return 0;
    }
}

// Fill the given buffer with UwU
static int uwu_write_chars(uwu_state* state, char* buf, size_t n) {
    size_t total_written = 0;
    while (total_written < n) {
        if (state->print_space) {
            COPY_CHAR(' ', buf + total_written);
            total_written++;
            state->print_space = false;
            continue;
        }

        size_t chars_written = uwu_exec_op(state, buf + total_written, n - total_written);
        if (chars_written < 0) return chars_written;

        if (state->current_op == -1) {
            // regenerate ops
            generate_new_ops(state);
            state->print_space = true;
        }

        total_written += chars_written;
    }
    return 0;
}

#endif
