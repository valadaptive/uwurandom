#ifndef _UWURANDOM_PLATFORM_H
#define _UWURANDOM_PLATFORM_H

#ifdef __KERNEL__

#include <linux/kernel.h>
#include <linux/random.h>
#include <linux/uaccess.h>

#else

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <errno.h>

#endif // __KERNEL__

#include "uwurandom_types.h"

#ifdef __KERNEL__

#define RAND_SIZE 128

static int uwu_init_rng(uwu_state* state) {
    uwu_random_number* rng_buf = kmalloc(RAND_SIZE * sizeof(uwu_random_number), GFP_KERNEL);

    if (rng_buf == NULL) {
        return -ENOMEM;
    }

    state->rng_buf = rng_buf;

    // mark the offset into rng_buf as just past the end of the buffer,
    // meaning we'll regenerate the buffer the first time we ask for random bytes
    state->rng_idx = RAND_SIZE;

    return 0;
}

static void uwu_destroy_rng(uwu_state* state) {
    if (state->rng_buf) {
        kfree(state->rng_buf);
        state->rng_buf = NULL;
    }
}

static uwu_random_number uwu_random_int(uwu_state* state) {
    if (state->rng_idx >= RAND_SIZE) {
        get_random_bytes(state->rng_buf, RAND_SIZE * sizeof(uwu_random_number));
        state->rng_idx = 0;
    }
    uwu_random_number rand_value = state->rng_buf[state->rng_idx];
    state->rng_idx++;
    return rand_value;
}

#define COPY_STR(dst, src, len) do {\
    int result = copy_to_user((dst), (src), (len));\
    if (result) {\
        return -EFAULT;\
    }\
} while (0)

#define COPY_CHAR(value, dst) do {\
    int result = put_user((value), (dst));\
    if (result) {\
        return result;\
    }\
} while (0)

#else

#include <sys/random.h>
#include <string.h>

const size_t RAND_SIZE = 128;

static int uwu_init_rng(uwu_state* state) {
    uwu_random_number* rng_buf = malloc(RAND_SIZE * sizeof(uwu_random_number));

    if (rng_buf == NULL) {
        return -ENOMEM;
    }

    state->rng_buf = rng_buf;

    // mark the offset into rng_buf as just past the end of the buffer,
    // meaning we'll regenerate the buffer the first time we ask for random bytes
    state->rng_idx = RAND_SIZE;

    return 0;
}

static void uwu_destroy_rng(uwu_state* state) {
    if (state->rng_buf) {
        free(state->rng_buf);
        state->rng_buf = NULL;
    }
}

static uwu_random_number uwu_random_int(uwu_state* state) {
    if (state->rng_idx >= RAND_SIZE) {
        getrandom(state->rng_buf, RAND_SIZE * sizeof(uwu_random_number), 0);
        state->rng_idx = 0;
    }
    uwu_random_number rand_value = state->rng_buf[state->rng_idx];
    state->rng_idx++;
    return rand_value;
}

#define COPY_STR(dst, src, len) do {\
    memcpy((dst), (src), (len));\
} while (0)

#define COPY_CHAR(value, dst) do {\
    *(dst) = (value);\
} while (0)

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

#endif // __KERNEL__

#endif // _UWURANDOM_PLATFORM_H
