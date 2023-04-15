#ifndef _UWURANDOM_OPS_H
#define _UWURANDOM_OPS_H

#include "uwurandom_platform.h"
#include "uwurandom_types.h"
#include "uwurandom_markov_data.h"
#include "uwurandom_core.h"

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
    STRING_WITH_LEN("*lies down on a random surface*"),
    STRING_WITH_LEN("*rolls around on the floor*"),
    STRING_WITH_LEN("*spins around*"),
    STRING_WITH_LEN("*tugs on ur sleeve*"),
    STRING_WITH_LEN("*jumps a little*"),
    STRING_WITH_LEN("*yawns*")
};

static void uwu_op_uwu(uwu_state* state) {
    uwu_push_op(state, CREATE_PRINT_STRING("uwu"));
}
static void uwu_op_catgirl_nonsense(uwu_state* state) {
    uwu_random_number len = (uwu_random_int(state) % 125) + 25;
    uwu_push_op(state, CREATE_PRINT_STRING("nya"));
    uwu_push_op(state, CREATE_MARKOV(catnonsense_ngrams, catnonsense_ngrams.initial_ngram, len));
    uwu_push_op(state, CREATE_PRINT_STRING("mr"));
}
static void uwu_op_nya(uwu_state* state) {
    uwu_random_number repeats = (uwu_random_int(state) % 7) + 1;
    uwu_push_op(state, CREATE_REPEAT_CHARACTER('a', repeats));
    uwu_push_op(state, CREATE_PRINT_STRING("ny"));
}
static void uwu_op_blush(uwu_state* state) {
    uwu_random_number repeats = (uwu_random_int(state) % 4) + 3;
    uwu_push_op(state, CREATE_PRINT_STRING("<"));
    uwu_push_op(state, CREATE_REPEAT_CHARACTER('/', repeats));
    uwu_push_op(state, CREATE_PRINT_STRING(">"));
}
static void uwu_op_smiley(uwu_state* state) {
    if (uwu_random_int(state) % 100 == 0) {
        uwu_push_op(state, CREATE_PRINT_STRING("c"));
    }
    uwu_push_op(state, CREATE_PRINT_STRING(":3"));
}
static void uwu_op_actions(uwu_state* state) {
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
}
static void uwu_op_keyboard_mash(uwu_state* state) {
    uwu_random_number len = (uwu_random_int(state) % 125) + 25;
    uwu_random_number start_ngram = uwu_random_int(state) % keysmash_ngrams.num_ngrams;
    uwu_push_op(state, CREATE_MARKOV(keysmash_ngrams, start_ngram, len));
}
static void uwu_op_screaming(uwu_state* state) {
    uwu_random_number repeats = (uwu_random_int(state) % 12) + 5;
    uwu_push_op(state, CREATE_REPEAT_CHARACTER('A', repeats));
}
static void uwu_op_scrunkly(uwu_state* state) {
    uwu_random_number len = (uwu_random_int(state) % 75) + 25;
    uwu_push_op(state, CREATE_MARKOV(scrunkly_ngrams, scrunkly_ngrams.initial_ngram, len));
    uwu_push_op(state, CREATE_PRINT_STRING("aw"));
}
static void uwu_op_owo(uwu_state* state) {
    uwu_push_op(state, CREATE_PRINT_STRING("owo"));
}
static void uwu_op_uweh(uwu_state* state) {
    uwu_random_number repeats = (uwu_random_int(state) % 5) + 3;
    uwu_push_op(state, CREATE_REPEAT_CHARACTER('h', repeats));
    uwu_push_op(state, CREATE_PRINT_STRING("uwe"));
}

static uwu_op_factory* uwu_op_table_default[] = {
    uwu_op_uwu,
    uwu_op_catgirl_nonsense,
    uwu_op_nya,
    uwu_op_blush,
    uwu_op_smiley,
    uwu_op_actions,
    uwu_op_keyboard_mash,
    uwu_op_screaming,
    uwu_op_scrunkly,
    uwu_op_owo,
    uwu_op_uweh
};

#endif
