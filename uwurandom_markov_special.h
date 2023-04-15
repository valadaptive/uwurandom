#include "uwurandom_types.h"
#include "uwurandom_core.h"

static void scrunkly_punctuation(uwu_state* state) {
    unsigned int random = uwu_random_int(state) % 3;

    switch (random) {
        case 0:
            uwu_push_op(state, CREATE_PRINT_STRING("! "));
            break;
        case 1:
        case 2: {
            char punctuation = random == 1 ? '.' : ',';
            unsigned int repeats = (uwu_random_int(state) % 5) + 1;

            // randomly decide whether or not to add a space
            if (repeats == 1 || uwu_random_int(state) % 2 == 0) {
                uwu_push_op(state, CREATE_PRINT_STRING(" "));
            }

            uwu_push_op(state, CREATE_REPEAT_CHARACTER(punctuation, repeats));
            break;
        }
    }
}

static uwu_op_factory* scrunkly_specials[] = {
    scrunkly_punctuation
};
