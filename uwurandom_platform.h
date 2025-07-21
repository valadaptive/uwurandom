#ifndef _UWURANDOM_PLATFORM_H
#define _UWURANDOM_PLATFORM_H

#ifdef __KERNEL__

#include <linux/kernel.h>
#include <linux/random.h>
#include <linux/uaccess.h>

#elif defined(__WASM__)
#else

#include <stddef.h>
#include <stdbool.h>
#include <errno.h>
#include <stdlib.h>

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

#ifdef __WASM__
__attribute__((import_name("uwuwasm_getrandom"))) void uwuwasm_getrandom(void* buf, size_t len);
#define UWU_GETRANDOM(buf, len) (uwuwasm_getrandom((buf), (len)))


#define COPY_STR(dst, src, len) for (size_t i = 0; i < len; i++) {\
    dst[i] = src[i];\
}

extern void *malloc (size_t __size);
extern void free (void *__ptr);

#define	EPERM		 1	/* Operation not permitted */
#define	ENOENT		 2	/* No such file or directory */
#define	ESRCH		 3	/* No such process */
#define	EINTR		 4	/* Interrupted system call */
#define	EIO		 5	/* I/O error */
#define	ENXIO		 6	/* No such device or address */
#define	E2BIG		 7	/* Argument list too long */
#define	ENOEXEC		 8	/* Exec format error */
#define	EBADF		 9	/* Bad file number */
#define	ECHILD		10	/* No child processes */
#define	EAGAIN		11	/* Try again */
#define	ENOMEM		12	/* Out of memory */
#define	EACCES		13	/* Permission denied */
#define	EFAULT		14	/* Bad address */
#define	ENOTBLK		15	/* Block device required */
#define	EBUSY		16	/* Device or resource busy */
#define	EEXIST		17	/* File exists */
#define	EXDEV		18	/* Cross-device link */
#define	ENODEV		19	/* No such device */
#define	ENOTDIR		20	/* Not a directory */
#define	EISDIR		21	/* Is a directory */
#define	EINVAL		22	/* Invalid argument */
#define	ENFILE		23	/* File table overflow */
#define	EMFILE		24	/* Too many open files */
#define	ENOTTY		25	/* Not a typewriter */
#define	ETXTBSY		26	/* Text file busy */
#define	EFBIG		27	/* File too large */
#define	ENOSPC		28	/* No space left on device */
#define	ESPIPE		29	/* Illegal seek */
#define	EROFS		30	/* Read-only file system */
#define	EMLINK		31	/* Too many links */
#define	EPIPE		32	/* Broken pipe */
#define	EDOM		33	/* Math argument out of domain of func */
#define	ERANGE		34	/* Math result not representable */
#else

#include <string.h>
#include <sys/random.h>
#define UWU_GETRANDOM(buf, len) (getrandom((buf), (len), 0))

#define COPY_STR(dst, src, len) do {\
    memcpy((dst), (src), (len));\
} while (0)

#endif

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
        UWU_GETRANDOM(state->rng_buf, RAND_SIZE * sizeof(uwu_random_number));
        state->rng_idx = 0;
    }
    uwu_random_number rand_value = state->rng_buf[state->rng_idx];
    state->rng_idx++;
    return rand_value;
}

#define COPY_CHAR(value, dst) do {\
    *(dst) = (value);\
} while (0)

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

#endif // __KERNEL__

#endif // _UWURANDOM_PLATFORM_H
