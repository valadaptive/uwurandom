#ifndef _UWURANDOM_PLATFORM_H
#define _UWURANDOM_PLATFORM_H

#ifdef __KERNEL__

#include <linux/kernel.h>
#include <linux/random.h>

#else

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <errno.h>

#endif // __KERNEL__

#include "uwurandom_types.h"

#ifdef __KERNEL__

const size_t RAND_SIZE = 128;
static unsigned int uwu_random_int(uwu_state* state) {
    if (state->rng_idx >= RAND_SIZE) {
        get_random_bytes(state->rng_buf, RAND_SIZE * sizeof(unsigned int));
        state->rng_idx = 0;
    }
    unsigned int rand_value = state->rng_buf[state->rng_idx];
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
static unsigned int uwu_random_int(uwu_state* state) {
    if (state->rng_idx >= RAND_SIZE) {
        getrandom(state->rng_buf, RAND_SIZE * sizeof(unsigned int), 0);
        state->rng_idx = 0;
    }
    unsigned int rand_value = state->rng_buf[state->rng_idx];
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
