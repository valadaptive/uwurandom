#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

#include "uwurandom_core.h"
#include "uwurandom_ops.h"

static volatile sig_atomic_t keep_running = 1;

static void sig_handler(int _) {
    keep_running = 0;
}

#define BUF_SIZE 8192

int main() {
    uwu_state data = {};

    int init_err = uwu_init_state(&data, uwu_op_table_default, ARRAY_SIZE(uwu_op_table_default));

    if (init_err) {
        return init_err;
    }

    char* output_buf = malloc(BUF_SIZE);
    if (output_buf == NULL) {
        uwu_destroy_state(&data);
        return -ENOMEM;
    }

    signal(SIGINT, sig_handler);
    while (keep_running) {
        uwu_write_chars(&data, output_buf, BUF_SIZE);
        fwrite(output_buf, 1, BUF_SIZE, stdout);
    }

    uwu_destroy_state(&data);
    free(output_buf);

    return 0;
}
