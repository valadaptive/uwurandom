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
    size_t len = sizeof(uwu_state);

    uwu_state *data = malloc(len);

    if (data == NULL) {
        return -ENOMEM;
    }

    int rng_err = uwu_init_rng(data);
    if (rng_err) {
        free(data);
        return rng_err;
    }

    data->ops_table = uwu_op_table_default;
    data->num_ops = ARRAY_SIZE(uwu_op_table_default);

    data->prev_op = -1;
    data->current_op = -1;

    char* output_buf = malloc(BUF_SIZE);
    if (output_buf == NULL) {
        uwu_destroy_rng(data);
        free(data);
        return -ENOMEM;
    }

    signal(SIGINT, sig_handler);
    while (keep_running) {
        uwu_write_chars(data, output_buf, BUF_SIZE);
        fwrite(output_buf, 1, BUF_SIZE, stdout);
    }

    uwu_destroy_rng(data);
    free(data);
    free(output_buf);

    return 0;
}
