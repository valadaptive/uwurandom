#include <stddef.h>

#define __WASM__

#include "uwurandom_core.h"
#include "uwurandom_ops.h"
#include "vendor/walloc.c"

__attribute__((export_name("uwuwasm_init"))) uwu_state* uwuwasm_init(void) {
    uwu_state* data = malloc(sizeof(uwu_state));

    int init_err = uwu_init_state(data, uwu_op_table_default, ARRAY_SIZE(uwu_op_table_default));

    if (init_err) {
        free(data);
        return NULL;
    }

    return data;
}

__attribute__((export_name("uwuwasm_free"))) void uwuwasm_free(uwu_state* state) {
    uwu_destroy_state(state);
    free(state);
}

__attribute__((export_name("uwuwasm_write_chars"))) void uwuwasm_write_chars(uwu_state* state, char* buf, size_t n) {
    uwu_write_chars(state, buf, n);
}
