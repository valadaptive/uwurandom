#include <stddef.h>
#include <stdlib.h>

#include "uwurandom_core.h"
#include "uwurandom_ops.h"

uwu_state* uwulib_init(void) {
    uwu_state* data = (uwu_state*)malloc(sizeof(uwu_state));

    int init_err = uwu_init_state(data, uwu_op_table_default, ARRAY_SIZE(uwu_op_table_default));

    if (init_err) {
        free(data);
        return NULL;
    }

    return data;
}

void uwulib_free(uwu_state* state) {
    uwu_destroy_state(state);
    free(state);
}

void uwulib_write_chars(uwu_state* state, char* buf, size_t n) {
    uwu_write_chars(state, buf, n);
}
