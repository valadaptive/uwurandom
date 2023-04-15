#ifndef _UWURANDOM_CORE_H
#define _UWURANDOM_CORE_H

#include "uwurandom_platform.h"
#include "uwurandom_types.h"
#include "uwurandom_markov_data.h"

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
            .ngrams = (markov_data)\
        }\
    }\
}\

typedef struct {
    size_t len;
    char* string;
} string_with_len;

#define STRING_WITH_LEN(literal) {.len = (sizeof(literal) - 1), .string = literal}

static string_with_len actions[] = {
    STRING_WITH_LEN("*tilts head*"),
    STRING_WITH_LEN("*twitches ears slightly*"),
    STRING_WITH_LEN("*purrs*"),
    STRING_WITH_LEN("*falls asleep*"),
    STRING_WITH_LEN("*sits on ur keyboard*"),
    STRING_WITH_LEN("*nuzzles*"),
    STRING_WITH_LEN("*stares at u*"),
    STRING_WITH_LEN("*points towards case of monster zero ultra*"),
    STRING_WITH_LEN("*sneezes*"),
    STRING_WITH_LEN("*plays with yarn*"),
    STRING_WITH_LEN("*eats all ur doritos*"),
    STRING_WITH_LEN("*lies down on a random surface*")
};

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

    static const int NUM_OPS = 10;

    if (state->prev_op == -1) {
        op_idx %= NUM_OPS;
    } else {
        // don't repeat previous op
        op_idx %= NUM_OPS - 1;
        if (op_idx >= state->prev_op) {
            op_idx += 1;
        }
    }

    state->prev_op = op_idx;

    switch (op_idx) {
        case 0: { // uwu
            uwu_push_op(state, CREATE_PRINT_STRING("uwu"));
            break;
        }
        case 1: { // catgirl nonsense
            unsigned int len = (uwu_random_int(state) % 125) + 25;
            uwu_push_op(state, CREATE_PRINT_STRING("nya"));
            uwu_push_op(state, CREATE_MARKOV(catnonsense_ngrams, 7 /* mr */, len));
            uwu_push_op(state, CREATE_PRINT_STRING("mr"));
            break;
        }
        case 2: { // nyaaaaaaa
            unsigned int repeats = (uwu_random_int(state) % 7) + 1;
            uwu_push_op(state, CREATE_REPEAT_CHARACTER('a', repeats));
            uwu_push_op(state, CREATE_PRINT_STRING("ny"));
            break;
        }
        case 3: { // >/////<
            unsigned int repeats = (uwu_random_int(state) % 4) + 3;
            uwu_push_op(state, CREATE_PRINT_STRING("<"));
            uwu_push_op(state, CREATE_REPEAT_CHARACTER('/', repeats));
            uwu_push_op(state, CREATE_PRINT_STRING(">"));
            break;
        }
        case 4: { // :3
            uwu_push_op(state, CREATE_PRINT_STRING(":3"));
            break;
        }
        case 5: { // actions
            string_with_len action = actions[uwu_random_int(state) % ARRAY_SIZE(actions)];
            uwu_push_op(state, (uwu_op){
                .opcode = UWU_PRINT_STRING,
                .state = {
                    .print_string = {
                        .string = action.string,
                        .remaining_chars = action.len
                    }
                }
            });
            break;
        }
        case 6: { // keyboard mash
            unsigned int len = (uwu_random_int(state) % 125) + 25;
            unsigned int start_ngram = uwu_random_int(state) % ARRAY_SIZE(keysmash_ngrams);
            uwu_push_op(state, CREATE_MARKOV(keysmash_ngrams, start_ngram, len));
            break;
        }
        case 7: { // screaming
            unsigned int repeats = (uwu_random_int(state) % 12) + 5;
            uwu_push_op(state, CREATE_REPEAT_CHARACTER('A', repeats));
            break;
        }
        case 8: { // aww the scrunkly :)
            unsigned int len = (uwu_random_int(state) % 75) + 25;
            uwu_push_op(state, CREATE_MARKOV(scrunkly_ngrams, 37 /* aw */, len));
            uwu_push_op(state, CREATE_PRINT_STRING("aw"));
            break;
        }
        case 9: { // owo
            uwu_push_op(state, CREATE_PRINT_STRING("owo"));
            break;
        }
    }
}

// Execute an operation once. Returns the number of characters written, or a negative value on error.
static int uwu_exec_op(uwu_state* state, char* buf, size_t len) {
    uwu_op* op = &state->ops[state->current_op];
    switch (op->opcode) {
        case UWU_PRINT_STRING: {
            char* string = op->state.print_string.string;
            size_t remaining = op->state.print_string.remaining_chars;

            if (remaining == 0) return 0;

            size_t num_chars_to_copy = remaining > len ? len : remaining;

            COPY_STR(buf, string, num_chars_to_copy);

            // Advance state by number of characters copied;
            op->state.print_string.string += num_chars_to_copy;
            op->state.print_string.remaining_chars -= num_chars_to_copy;

            return num_chars_to_copy;
        }

        case UWU_MARKOV: {
            size_t ngram_index = op->state.markov.prev_ngram;
            uwu_markov_ngram* ngrams = op->state.markov.ngrams;
            size_t remaining = op->state.markov.remaining_chars;

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

                COPY_CHAR(ngram.character, buf + i);
            }

            op->state.markov.prev_ngram = ngram_index;
            op->state.markov.remaining_chars -= num_chars_to_copy;

            return num_chars_to_copy;
        }

        case UWU_REPEAT_CHARACTER: {
            char c = op->state.repeat_character.character;
            int i;
            for (i = 0; i < len; i++) {
                if (op->state.repeat_character.remaining_chars == 0) {
                    // Out of characters. Return the number of characters thus written.
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

        if (chars_written == 0) {
            state->current_op--;
            if (state->current_op == -1) {
                // regenerate ops
                generate_new_ops(state);
                state->print_space = true;
            }
        } else {
            total_written += chars_written;
        }
    }
    return 0;
}

#endif
