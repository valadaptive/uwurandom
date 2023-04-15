#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

#include "uwurandom_core.h"

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

    unsigned int* rng_buf = malloc(RAND_SIZE * sizeof(unsigned int));

    if (rng_buf == NULL) {
        free(data);
        return -ENOMEM;
    }

    data->prev_op = -1;
    data->current_op = -1;
    data->rng_buf = rng_buf;
    // mark the offset into rng_buf as just past the end of the buffer,
    // meaning we'll regenerate the buffer the first time we ask for random bytes
    data->rng_idx = RAND_SIZE;

    generate_new_ops(data);

    char* output_buf = malloc(BUF_SIZE);
    if (output_buf == NULL) {
        free(rng_buf);
        free(data);
        return -ENOMEM;
    }

    signal(SIGINT, sig_handler);
    while (keep_running) {
        uwu_write_chars(data, output_buf, BUF_SIZE);
        fwrite(output_buf, 1, BUF_SIZE, stdout);
    }

    free(rng_buf);
    free(data);
    free(output_buf);

    return 0;
}
