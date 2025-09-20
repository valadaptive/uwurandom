#include <stddef.h>

#include "uwurandom_types.h"

uwu_state* uwulib_init(void);

void uwulib_free(uwu_state* state);

void uwulib_write_chars(uwu_state* state, char* buf, size_t n);
