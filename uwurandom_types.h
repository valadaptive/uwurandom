#ifndef _UWURANDOM_TYPES_H
#define _UWURANDOM_TYPES_H

#include <linux/types.h>

typedef uint32_t uwu_random_number;

typedef struct uwu_markov_choice uwu_markov_choice;
struct uwu_markov_choice {
    size_t next_ngram;
    uint16_t cumulative_probability;
};

typedef struct {
    uwu_markov_choice* choices;
    uint16_t total_probability;
    char character;
} uwu_markov_ngram;

typedef struct uwu_state uwu_state;
typedef void uwu_op_factory(uwu_state* state);

typedef struct {
    uwu_op_factory** specials;
    ssize_t initial_ngram;
    size_t num_ngrams;
    uwu_markov_ngram ngrams[];
} uwu_markov_table;

// Stores the state for a Markov chain operation.
typedef struct {
    size_t prev_ngram; /* previous ngram */
    size_t remaining_chars; /* number of remaining characters */
    uwu_markov_table* ngrams /* ngram table */;
} uwu_markov_state;

// Stores the state for a "print string" operation.
typedef struct {
    char* string; /* pointer to string */
    size_t remaining_chars; /* number of remaining characters */
} uwu_print_string_state;

// Stores the state for a "repeat this character" operation.
typedef struct {
    char character;
    size_t remaining_chars; /* number of remaining times to repeat the character */
} uwu_repeat_character_state;

// Because we're asked to read a certain amount of data at a time, and we
// can't control what that amount is, we need a way to store what we're
// currently doing. This is done using opcodes--currently "repeat character",
// "print string", and the most complicated one, "print using Markov chain".
// An op is executed repeatedly as many times as we need characters.
// Once it's run out of characters, move on to the next one.
// If we're all out of ops, generate a new program.

typedef union {
    uwu_markov_state markov;
    uwu_print_string_state print_string;
    uwu_repeat_character_state repeat_character;
} uwu_op_state;

typedef enum {
    UWU_MARKOV,
    UWU_PRINT_STRING,
    UWU_REPEAT_CHARACTER
} UWU_OPCODE;

typedef struct {
    UWU_OPCODE opcode;
    uwu_op_state state;
} uwu_op;

#define MAX_OPS 6

struct uwu_state {
    uwu_op_factory** ops_table;
    size_t num_ops;

    uwu_op ops[MAX_OPS];
    ssize_t current_op;
    int prev_op;
    bool print_space;
    uwu_random_number* rng_buf;
    size_t rng_idx;
};

typedef struct {
    size_t len;
    char* string;
} string_with_len;

#define STRING_WITH_LEN(literal) {.len = (sizeof(literal) - 1), .string = literal}

#endif