#ifndef _UWURANDOM_MARKOV_DATA_H
#define _UWURANDOM_MARKOV_DATA_H

#include "uwurandom_types.h"
#include "uwurandom_markov_special.h"

static uwu_markov_choice catnonsense_choices[] = {
    // ngram 0 ('m', 'r')
    {.next_ngram = 22, .cumulative_probability = 15},
    {.next_ngram = 1, .cumulative_probability = 24},
    {.next_ngram = 7, .cumulative_probability = 28},
    {.next_ngram = 19, .cumulative_probability = 29},
    {.next_ngram = 20, .cumulative_probability = 30},
    // ngram 1 ('r', 'a')
    {.next_ngram = 2, .cumulative_probability = 9},
    // ngram 2 ('a', 'o')
    {.next_ngram = 3, .cumulative_probability = 9},
    // ngram 3 ('o', 'w')
    {.next_ngram = 4, .cumulative_probability = 22},
    {.next_ngram = 23, .cumulative_probability = 32},
    {.next_ngram = 13, .cumulative_probability = 36},
    {.next_ngram = 18, .cumulative_probability = 37},
    {.next_ngram = 24, .cumulative_probability = 38},
    // ngram 4 ('w', 'm')
    {.next_ngram = 0, .cumulative_probability = 17},
    {.next_ngram = 5, .cumulative_probability = 30},
    // ngram 5 ('m', 'e')
    {.next_ngram = 21, .cumulative_probability = 12},
    {.next_ngram = 6, .cumulative_probability = 20},
    // ngram 6 ('e', 'w')
    {.next_ngram = 4, .cumulative_probability = 6},
    {.next_ngram = 13, .cumulative_probability = 7},
    {.next_ngram = 24, .cumulative_probability = 8},
    // ngram 7 ('r', 'r')
    {.next_ngram = 7, .cumulative_probability = 7},
    {.next_ngram = 12, .cumulative_probability = 10},
    {.next_ngram = 22, .cumulative_probability = 13},
    {.next_ngram = 8, .cumulative_probability = 14},
    // ngram 8 ('r', 'p')
    {.next_ngram = 9, .cumulative_probability = 1},
    // ngram 9 ('p', 'p')
    {.next_ngram = 10, .cumulative_probability = 1},
    // ngram 10 ('p', 'u')
    {.next_ngram = 11, .cumulative_probability = 3},
    // ngram 11 ('u', 'r')
    {.next_ngram = 7, .cumulative_probability = 3},
    // ngram 12 ('r', 'm')
    {.next_ngram = 0, .cumulative_probability = 5},
    {.next_ngram = 5, .cumulative_probability = 10},
    // ngram 13 ('w', 'n')
    {.next_ngram = 14, .cumulative_probability = 5},
    // ngram 14 ('n', 'y')
    {.next_ngram = 15, .cumulative_probability = 9},
    // ngram 15 ('y', 'a')
    {.next_ngram = 25, .cumulative_probability = 4},
    {.next_ngram = 16, .cumulative_probability = 5},
    {.next_ngram = 17, .cumulative_probability = 6},
    // ngram 16 ('a', 'n')
    {.next_ngram = 14, .cumulative_probability = 1},
    // ngram 17 ('a', 'm')
    {.next_ngram = 0, .cumulative_probability = 3},
    {.next_ngram = 5, .cumulative_probability = 4},
    // ngram 18 ('w', 'w')
    {.next_ngram = 18, .cumulative_probability = 3},
    {.next_ngram = 4, .cumulative_probability = 4},
    // ngram 19 ('r', 'w')
    {.next_ngram = 4, .cumulative_probability = 1},
    // ngram 20 ('r', 'e')
    {.next_ngram = 21, .cumulative_probability = 1},
    // ngram 21 ('e', 'o')
    {.next_ngram = 3, .cumulative_probability = 13},
    // ngram 22 ('r', 'o')
    {.next_ngram = 3, .cumulative_probability = 18},
    // ngram 23 ('w', 'r')
    {.next_ngram = 12, .cumulative_probability = 7},
    {.next_ngram = 26, .cumulative_probability = 10},
    // ngram 24 ('w', 'p')
    {.next_ngram = 10, .cumulative_probability = 2},
    // ngram 25 ('a', 'a')
    {.next_ngram = 25, .cumulative_probability = 6},
    {.next_ngram = 17, .cumulative_probability = 9},
    // ngram 26 ('r', 'n')
    {.next_ngram = 14, .cumulative_probability = 3},
};

static uwu_markov_ngram catnonsense_ngrams[] = {
    {.choices = 0, .total_probability = 30, .character = 'r'}, // "('m', 'r')"
    {.choices = 5, .total_probability = 9, .character = 'a'}, // "('r', 'a')"
    {.choices = 6, .total_probability = 9, .character = 'o'}, // "('a', 'o')"
    {.choices = 7, .total_probability = 38, .character = 'w'}, // "('o', 'w')"
    {.choices = 12, .total_probability = 30, .character = 'm'}, // "('w', 'm')"
    {.choices = 14, .total_probability = 20, .character = 'e'}, // "('m', 'e')"
    {.choices = 16, .total_probability = 8, .character = 'w'}, // "('e', 'w')"
    {.choices = 19, .total_probability = 14, .character = 'r'}, // "('r', 'r')"
    {.choices = 23, .total_probability = 1, .character = 'p'}, // "('r', 'p')"
    {.choices = 24, .total_probability = 1, .character = 'p'}, // "('p', 'p')"
    {.choices = 25, .total_probability = 3, .character = 'u'}, // "('p', 'u')"
    {.choices = 26, .total_probability = 3, .character = 'r'}, // "('u', 'r')"
    {.choices = 27, .total_probability = 10, .character = 'm'}, // "('r', 'm')"
    {.choices = 29, .total_probability = 5, .character = 'n'}, // "('w', 'n')"
    {.choices = 30, .total_probability = 9, .character = 'y'}, // "('n', 'y')"
    {.choices = 31, .total_probability = 6, .character = 'a'}, // "('y', 'a')"
    {.choices = 34, .total_probability = 1, .character = 'n'}, // "('a', 'n')"
    {.choices = 35, .total_probability = 4, .character = 'm'}, // "('a', 'm')"
    {.choices = 37, .total_probability = 4, .character = 'w'}, // "('w', 'w')"
    {.choices = 39, .total_probability = 1, .character = 'w'}, // "('r', 'w')"
    {.choices = 40, .total_probability = 1, .character = 'e'}, // "('r', 'e')"
    {.choices = 41, .total_probability = 13, .character = 'o'}, // "('e', 'o')"
    {.choices = 42, .total_probability = 18, .character = 'o'}, // "('r', 'o')"
    {.choices = 43, .total_probability = 10, .character = 'r'}, // "('w', 'r')"
    {.choices = 45, .total_probability = 2, .character = 'p'}, // "('w', 'p')"
    {.choices = 46, .total_probability = 9, .character = 'a'}, // "('a', 'a')"
    {.choices = 48, .total_probability = 3, .character = 'n'}, // "('r', 'n')"
};

static uwu_markov_table catnonsense_table = {
    .specials = NULL,
    .initial_ngram=0,
    .num_ngrams=27,
    .choices=catnonsense_choices,
    .ngrams=catnonsense_ngrams
};

static uwu_markov_choice keysmash_choices[] = {
    // ngram 0 ('a',)
    {.next_ngram = 5, .cumulative_probability = 7},
    {.next_ngram = 9, .cumulative_probability = 13},
    {.next_ngram = 6, .cumulative_probability = 18},
    {.next_ngram = 1, .cumulative_probability = 21},
    {.next_ngram = 11, .cumulative_probability = 24},
    {.next_ngram = 8, .cumulative_probability = 26},
    {.next_ngram = 4, .cumulative_probability = 28},
    {.next_ngram = 7, .cumulative_probability = 29},
    {.next_ngram = 12, .cumulative_probability = 30},
    // ngram 1 ('l',)
    {.next_ngram = 2, .cumulative_probability = 4},
    {.next_ngram = 7, .cumulative_probability = 6},
    {.next_ngram = 3, .cumulative_probability = 7},
    {.next_ngram = 8, .cumulative_probability = 8},
    {.next_ngram = 6, .cumulative_probability = 9},
    {.next_ngram = 4, .cumulative_probability = 10},
    {.next_ngram = 0, .cumulative_probability = 11},
    // ngram 2 ('k',)
    {.next_ngram = 0, .cumulative_probability = 6},
    {.next_ngram = 6, .cumulative_probability = 10},
    {.next_ngram = 8, .cumulative_probability = 13},
    {.next_ngram = 9, .cumulative_probability = 16},
    {.next_ngram = 3, .cumulative_probability = 17},
    {.next_ngram = 4, .cumulative_probability = 18},
    {.next_ngram = 1, .cumulative_probability = 19},
    {.next_ngram = 5, .cumulative_probability = 20},
    // ngram 3 ('s',)
    {.next_ngram = 4, .cumulative_probability = 2},
    {.next_ngram = 2, .cumulative_probability = 4},
    // ngram 4 ('d',)
    {.next_ngram = 6, .cumulative_probability = 7},
    {.next_ngram = 5, .cumulative_probability = 12},
    {.next_ngram = 3, .cumulative_probability = 13},
    {.next_ngram = 8, .cumulative_probability = 14},
    {.next_ngram = 2, .cumulative_probability = 15},
    {.next_ngram = 9, .cumulative_probability = 16},
    {.next_ngram = 10, .cumulative_probability = 17},
    // ngram 5 ('h',)
    {.next_ngram = 8, .cumulative_probability = 7},
    {.next_ngram = 9, .cumulative_probability = 11},
    {.next_ngram = 6, .cumulative_probability = 14},
    {.next_ngram = 2, .cumulative_probability = 17},
    {.next_ngram = 0, .cumulative_probability = 20},
    {.next_ngram = 4, .cumulative_probability = 23},
    {.next_ngram = 13, .cumulative_probability = 25},
    {.next_ngram = 12, .cumulative_probability = 27},
    {.next_ngram = 7, .cumulative_probability = 28},
    {.next_ngram = 14, .cumulative_probability = 29},
    {.next_ngram = 5, .cumulative_probability = 30},
    {.next_ngram = 11, .cumulative_probability = 31},
    // ngram 6 ('f',)
    {.next_ngram = 8, .cumulative_probability = 12},
    {.next_ngram = 2, .cumulative_probability = 16},
    {.next_ngram = 9, .cumulative_probability = 19},
    {.next_ngram = 1, .cumulative_probability = 21},
    {.next_ngram = 5, .cumulative_probability = 23},
    {.next_ngram = 4, .cumulative_probability = 25},
    {.next_ngram = 0, .cumulative_probability = 26},
    // ngram 7 (';',)
    {.next_ngram = 0, .cumulative_probability = 4},
    {.next_ngram = 2, .cumulative_probability = 5},
    {.next_ngram = 4, .cumulative_probability = 6},
    {.next_ngram = 1, .cumulative_probability = 7},
    {.next_ngram = 5, .cumulative_probability = 8},
    // ngram 8 ('g',)
    {.next_ngram = 0, .cumulative_probability = 8},
    {.next_ngram = 5, .cumulative_probability = 14},
    {.next_ngram = 7, .cumulative_probability = 18},
    {.next_ngram = 9, .cumulative_probability = 22},
    {.next_ngram = 1, .cumulative_probability = 25},
    {.next_ngram = 10, .cumulative_probability = 27},
    {.next_ngram = 6, .cumulative_probability = 29},
    {.next_ngram = 4, .cumulative_probability = 30},
    {.next_ngram = 3, .cumulative_probability = 31},
    {.next_ngram = 2, .cumulative_probability = 32},
    {.next_ngram = 11, .cumulative_probability = 33},
    {.next_ngram = 14, .cumulative_probability = 34},
    // ngram 9 ('j',)
    {.next_ngram = 5, .cumulative_probability = 5},
    {.next_ngram = 4, .cumulative_probability = 9},
    {.next_ngram = 2, .cumulative_probability = 12},
    {.next_ngram = 6, .cumulative_probability = 15},
    {.next_ngram = 0, .cumulative_probability = 17},
    {.next_ngram = 12, .cumulative_probability = 18},
    {.next_ngram = 15, .cumulative_probability = 19},
    {.next_ngram = 16, .cumulative_probability = 20},
    {.next_ngram = 1, .cumulative_probability = 21},
    {.next_ngram = 8, .cumulative_probability = 22},
    // ngram 10 ('b',)
    {.next_ngram = 2, .cumulative_probability = 1},
    {.next_ngram = 0, .cumulative_probability = 2},
    {.next_ngram = 5, .cumulative_probability = 3},
    // ngram 11 ('u',)
    {.next_ngram = 12, .cumulative_probability = 3},
    {.next_ngram = 0, .cumulative_probability = 4},
    {.next_ngram = 6, .cumulative_probability = 5},
    {.next_ngram = 9, .cumulative_probability = 6},
    {.next_ngram = 15, .cumulative_probability = 7},
    // ngram 12 ('r',)
    {.next_ngram = 8, .cumulative_probability = 4},
    {.next_ngram = 0, .cumulative_probability = 6},
    {.next_ngram = 5, .cumulative_probability = 7},
    // ngram 13 ('i',)
    {.next_ngram = 11, .cumulative_probability = 2},
    // ngram 14 ('n',)
    {.next_ngram = 8, .cumulative_probability = 1},
    {.next_ngram = 5, .cumulative_probability = 2},
    // ngram 15 ('e',)
    {.next_ngram = 8, .cumulative_probability = 2},
    // ngram 16 ('o',)
    {.next_ngram = 8, .cumulative_probability = 1},
};

static uwu_markov_ngram keysmash_ngrams[] = {
    {.choices = 0, .total_probability = 30, .character = 'a'}, // "('a',)"
    {.choices = 9, .total_probability = 11, .character = 'l'}, // "('l',)"
    {.choices = 16, .total_probability = 20, .character = 'k'}, // "('k',)"
    {.choices = 24, .total_probability = 4, .character = 's'}, // "('s',)"
    {.choices = 26, .total_probability = 17, .character = 'd'}, // "('d',)"
    {.choices = 33, .total_probability = 31, .character = 'h'}, // "('h',)"
    {.choices = 45, .total_probability = 26, .character = 'f'}, // "('f',)"
    {.choices = 52, .total_probability = 8, .character = ';'}, // "(';',)"
    {.choices = 57, .total_probability = 34, .character = 'g'}, // "('g',)"
    {.choices = 69, .total_probability = 22, .character = 'j'}, // "('j',)"
    {.choices = 79, .total_probability = 3, .character = 'b'}, // "('b',)"
    {.choices = 82, .total_probability = 7, .character = 'u'}, // "('u',)"
    {.choices = 87, .total_probability = 7, .character = 'r'}, // "('r',)"
    {.choices = 90, .total_probability = 2, .character = 'i'}, // "('i',)"
    {.choices = 91, .total_probability = 2, .character = 'n'}, // "('n',)"
    {.choices = 93, .total_probability = 2, .character = 'e'}, // "('e',)"
    {.choices = 94, .total_probability = 1, .character = 'o'}, // "('o',)"
};

static uwu_markov_table keysmash_table = {
    .specials = NULL,
    .initial_ngram=-1,
    .num_ngrams=17,
    .choices=keysmash_choices,
    .ngrams=keysmash_ngrams
};

static uwu_markov_choice scrunkly_choices[] = {
    // ngram 0 ('t', 'h')
    {.next_ngram = 1, .cumulative_probability = 15},
    {.next_ngram = 67, .cumulative_probability = 16},
    // ngram 1 ('h', 'e')
    {.next_ngram = 2, .cumulative_probability = 14},
    {.next_ngram = 12, .cumulative_probability = 16},
    {.next_ngram = 65, .cumulative_probability = 17},
    {.next_ngram = 115, .cumulative_probability = 18},
    // ngram 2 ('e', ' ')
    {.next_ngram = 9, .cumulative_probability = 6},
    {.next_ngram = 59, .cumulative_probability = 11},
    {.next_ngram = 3, .cumulative_probability = 15},
    {.next_ngram = 20, .cumulative_probability = 18},
    {.next_ngram = 30, .cumulative_probability = 21},
    {.next_ngram = 71, .cumulative_probability = 24},
    {.next_ngram = 82, .cumulative_probability = 26},
    {.next_ngram = 86, .cumulative_probability = 28},
    {.next_ngram = 138, .cumulative_probability = 29},
    {.next_ngram = 56, .cumulative_probability = 30},
    // ngram 3 (' ', 'l')
    {.next_ngram = 4, .cumulative_probability = 8},
    // ngram 4 ('l', 'i')
    {.next_ngram = 5, .cumulative_probability = 3},
    {.next_ngram = 107, .cumulative_probability = 6},
    {.next_ngram = 47, .cumulative_probability = 7},
    {.next_ngram = 63, .cumulative_probability = 8},
    {.next_ngram = 102, .cumulative_probability = 9},
    {.next_ngram = 149, .cumulative_probability = 10},
    {.next_ngram = 89, .cumulative_probability = 11},
    // ngram 5 ('i', 't')
    {.next_ngram = 6, .cumulative_probability = 3},
    {.next_ngram = 42, .cumulative_probability = 6},
    {.next_ngram = 36, .cumulative_probability = 9},
    {.next_ngram = 118, .cumulative_probability = 12},
    // ngram 6 ('t', 't')
    {.next_ngram = 7, .cumulative_probability = 3},
    // ngram 7 ('t', 'l')
    {.next_ngram = 8, .cumulative_probability = 5},
    // ngram 8 ('l', 'e')
    {.next_ngram = 2, .cumulative_probability = 14},
    {.next_ngram = 65, .cumulative_probability = 16},
    {.next_ngram = 169, .cumulative_probability = 17},
    // ngram 9 (' ', 't')
    {.next_ngram = 0, .cumulative_probability = 7},
    {.next_ngram = 10, .cumulative_probability = 11},
    {.next_ngram = 37, .cumulative_probability = 15},
    {.next_ngram = 53, .cumulative_probability = 16},
    // ngram 10 ('t', 'i')
    {.next_ngram = 11, .cumulative_probability = 4},
    {.next_ngram = 89, .cumulative_probability = 5},
    // ngram 11 ('i', 'e')
    {.next_ngram = 12, .cumulative_probability = 4},
    {.next_ngram = 65, .cumulative_probability = 5},
    // ngram 12 ('e', 'n')
    {.next_ngram = 13, .cumulative_probability = 4},
    {.next_ngram = 84, .cumulative_probability = 5},
    {.next_ngram = 62, .cumulative_probability = 6},
    {.next_ngram = 172, .cumulative_probability = 7},
    // ngram 13 ('n', 'p')
    {.next_ngram = 14, .cumulative_probability = 4},
    {.next_ngram = 92, .cumulative_probability = 5},
    // ngram 14 ('p', 's')
    {.next_ngram = 15, .cumulative_probability = 4},
    // ngram 15 ('s', 'y')
    {.next_ngram = 70, .cumulative_probability = 3},
    {.next_ngram = 16, .cumulative_probability = 4},
    // ngram 16 ('y', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)
    {.next_ngram = 17, .cumulative_probability = 3},
    {.next_ngram = 85, .cumulative_probability = 6},
    {.next_ngram = 130, .cumulative_probability = 8},
    {.next_ngram = 119, .cumulative_probability = 9},
    // ngram 17 (<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 's')
    {.next_ngram = 18, .cumulative_probability = 2},
    {.next_ngram = 75, .cumulative_probability = 4},
    {.next_ngram = 98, .cumulative_probability = 5},
    // ngram 18 ('s', 'o')
    {.next_ngram = 38, .cumulative_probability = 3},
    {.next_ngram = 19, .cumulative_probability = 5},
    // ngram 19 ('o', ' ')
    {.next_ngram = 59, .cumulative_probability = 2},
    {.next_ngram = 20, .cumulative_probability = 3},
    {.next_ngram = 60, .cumulative_probability = 4},
    {.next_ngram = 3, .cumulative_probability = 5},
    {.next_ngram = 86, .cumulative_probability = 6},
    {.next_ngram = 138, .cumulative_probability = 7},
    // ngram 20 (' ', 'a')
    {.next_ngram = 27, .cumulative_probability = 6},
    {.next_ngram = 21, .cumulative_probability = 8},
    {.next_ngram = 44, .cumulative_probability = 9},
    // ngram 21 ('a', 'd')
    {.next_ngram = 22, .cumulative_probability = 2},
    // ngram 22 ('d', 'o')
    {.next_ngram = 146, .cumulative_probability = 3},
    {.next_ngram = 23, .cumulative_probability = 5},
    {.next_ngram = 38, .cumulative_probability = 7},
    {.next_ngram = 50, .cumulative_probability = 8},
    // ngram 23 ('o', 'r')
    {.next_ngram = 24, .cumulative_probability = 2},
    // ngram 24 ('r', 'n')
    {.next_ngram = 25, .cumulative_probability = 2},
    // ngram 25 ('n', 'a')
    {.next_ngram = 26, .cumulative_probability = 2},
    // ngram 26 ('a', 'l')
    {.next_ngram = 8, .cumulative_probability = 2},
    // ngram 27 ('a', 'n')
    {.next_ngram = 28, .cumulative_probability = 5},
    {.next_ngram = 62, .cumulative_probability = 6},
    {.next_ngram = 154, .cumulative_probability = 7},
    // ngram 28 ('n', 'd')
    {.next_ngram = 29, .cumulative_probability = 5},
    // ngram 29 ('d', ' ')
    {.next_ngram = 30, .cumulative_probability = 2},
    {.next_ngram = 49, .cumulative_probability = 3},
    {.next_ngram = 60, .cumulative_probability = 4},
    {.next_ngram = 59, .cumulative_probability = 5},
    {.next_ngram = 120, .cumulative_probability = 6},
    // ngram 30 (' ', 'c')
    {.next_ngram = 31, .cumulative_probability = 3},
    {.next_ngram = 61, .cumulative_probability = 5},
    {.next_ngram = 76, .cumulative_probability = 6},
    // ngram 31 ('c', 'u')
    {.next_ngram = 32, .cumulative_probability = 3},
    // ngram 32 ('u', 't')
    {.next_ngram = 33, .cumulative_probability = 3},
    // ngram 33 ('t', 'e')
    {.next_ngram = 34, .cumulative_probability = 2},
    {.next_ngram = 65, .cumulative_probability = 3},
    {.next_ngram = 169, .cumulative_probability = 4},
    // ngram 34 ('e', 's')
    {.next_ngram = 35, .cumulative_probability = 2},
    // ngram 35 ('s', 't')
    {.next_ngram = 36, .cumulative_probability = 2},
    // ngram 36 ('t', ' ')
    {.next_ngram = 9, .cumulative_probability = 2},
    {.next_ngram = 20, .cumulative_probability = 4},
    {.next_ngram = 30, .cumulative_probability = 5},
    {.next_ngram = 59, .cumulative_probability = 6},
    // ngram 37 ('t', 'o')
    {.next_ngram = 38, .cumulative_probability = 3},
    {.next_ngram = 19, .cumulative_probability = 4},
    // ngram 38 ('o', 'o')
    {.next_ngram = 39, .cumulative_probability = 3},
    {.next_ngram = 38, .cumulative_probability = 6},
    {.next_ngram = 19, .cumulative_probability = 9},
    {.next_ngram = 97, .cumulative_probability = 11},
    {.next_ngram = 131, .cumulative_probability = 13},
    {.next_ngram = 156, .cumulative_probability = 14},
    // ngram 39 ('o', 't')
    {.next_ngram = 40, .cumulative_probability = 3},
    // ngram 40 ('t', 's')
    {.next_ngram = 41, .cumulative_probability = 3},
    // ngram 41 ('s', 'i')
    {.next_ngram = 5, .cumulative_probability = 2},
    {.next_ngram = 11, .cumulative_probability = 3},
    // ngram 42 ('t', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)
    {.next_ngram = 43, .cumulative_probability = 1},
    {.next_ngram = 114, .cumulative_probability = 2},
    {.next_ngram = 125, .cumulative_probability = 3},
    {.next_ngram = 85, .cumulative_probability = 4},
    // ngram 43 (<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'a')
    {.next_ngram = 44, .cumulative_probability = 4},
    // ngram 44 ('a', 'w')
    {.next_ngram = 45, .cumulative_probability = 3},
    {.next_ngram = 132, .cumulative_probability = 4},
    {.next_ngram = 46, .cumulative_probability = 5},
    // ngram 45 ('w', 'w')
    {.next_ngram = 46, .cumulative_probability = 3},
    {.next_ngram = 45, .cumulative_probability = 5},
    // ngram 46 ('w', ' ')
    {.next_ngram = 9, .cumulative_probability = 2},
    {.next_ngram = 3, .cumulative_probability = 3},
    {.next_ngram = 59, .cumulative_probability = 4},
    {.next_ngram = 82, .cumulative_probability = 5},
    {.next_ngram = 60, .cumulative_probability = 6},
    {.next_ngram = 71, .cumulative_probability = 7},
    // ngram 47 ('i', 'k')
    {.next_ngram = 48, .cumulative_probability = 1},
    // ngram 48 ('k', 'e')
    {.next_ngram = 2, .cumulative_probability = 1},
    // ngram 49 (' ', 'd')
    {.next_ngram = 22, .cumulative_probability = 3},
    // ngram 50 ('o', 'u')
    {.next_ngram = 51, .cumulative_probability = 1},
    // ngram 51 ('u', 'b')
    {.next_ngram = 52, .cumulative_probability = 1},
    // ngram 52 ('b', 'l')
    {.next_ngram = 8, .cumulative_probability = 2},
    {.next_ngram = 104, .cumulative_probability = 4},
    {.next_ngram = 4, .cumulative_probability = 6},
    {.next_ngram = 81, .cumulative_probability = 7},
    // ngram 53 ('t', 'a')
    {.next_ngram = 54, .cumulative_probability = 1},
    // ngram 54 ('a', 'p')
    {.next_ngram = 55, .cumulative_probability = 1},
    {.next_ngram = 68, .cumulative_probability = 2},
    // ngram 55 ('p', ' ')
    {.next_ngram = 56, .cumulative_probability = 1},
    // ngram 56 (' ', 'n')
    {.next_ngram = 57, .cumulative_probability = 1},
    {.next_ngram = 62, .cumulative_probability = 2},
    // ngram 57 ('n', 'o')
    {.next_ngram = 58, .cumulative_probability = 1},
    // ngram 58 ('o', 'w')
    {.next_ngram = 46, .cumulative_probability = 3},
    {.next_ngram = 143, .cumulative_probability = 4},
    // ngram 59 (' ', 's')
    {.next_ngram = 91, .cumulative_probability = 6},
    {.next_ngram = 75, .cumulative_probability = 10},
    {.next_ngram = 18, .cumulative_probability = 13},
    {.next_ngram = 144, .cumulative_probability = 15},
    // ngram 60 (' ', 'i')
    {.next_ngram = 5, .cumulative_probability = 2},
    {.next_ngram = 135, .cumulative_probability = 3},
    // ngram 61 ('c', 'a')
    {.next_ngram = 27, .cumulative_probability = 1},
    {.next_ngram = 136, .cumulative_probability = 2},
    {.next_ngram = 137, .cumulative_probability = 3},
    // ngram 62 ('n', ' ')
    {.next_ngram = 9, .cumulative_probability = 2},
    {.next_ngram = 120, .cumulative_probability = 3},
    {.next_ngram = 3, .cumulative_probability = 4},
    // ngram 63 ('i', 'v')
    {.next_ngram = 64, .cumulative_probability = 1},
    // ngram 64 ('v', 'e')
    {.next_ngram = 2, .cumulative_probability = 1},
    // ngram 65 ('e', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)
    {.next_ngram = 85, .cumulative_probability = 3},
    {.next_ngram = 95, .cumulative_probability = 5},
    {.next_ngram = 66, .cumulative_probability = 6},
    {.next_ngram = 114, .cumulative_probability = 7},
    // ngram 66 (<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'h')
    {.next_ngram = 67, .cumulative_probability = 1},
    // ngram 67 ('h', 'a')
    {.next_ngram = 54, .cumulative_probability = 1},
    {.next_ngram = 168, .cumulative_probability = 2},
    // ngram 68 ('p', 'p')
    {.next_ngram = 69, .cumulative_probability = 1},
    // ngram 69 ('p', 'y')
    {.next_ngram = 70, .cumulative_probability = 1},
    {.next_ngram = 16, .cumulative_probability = 2},
    // ngram 70 ('y', ' ')
    {.next_ngram = 59, .cumulative_probability = 4},
    {.next_ngram = 9, .cumulative_probability = 7},
    {.next_ngram = 49, .cumulative_probability = 9},
    {.next_ngram = 20, .cumulative_probability = 11},
    {.next_ngram = 71, .cumulative_probability = 12},
    {.next_ngram = 82, .cumulative_probability = 13},
    {.next_ngram = 86, .cumulative_probability = 14},
    {.next_ngram = 162, .cumulative_probability = 15},
    {.next_ngram = 138, .cumulative_probability = 16},
    // ngram 71 (' ', 'k')
    {.next_ngram = 117, .cumulative_probability = 4},
    {.next_ngram = 72, .cumulative_probability = 5},
    // ngram 72 ('k', 'd')
    {.next_ngram = 73, .cumulative_probability = 1},
    // ngram 73 ('d', 'b')
    {.next_ngram = 74, .cumulative_probability = 1},
    // ngram 74 ('b', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)
    {.next_ngram = 43, .cumulative_probability = 1},
    {.next_ngram = 113, .cumulative_probability = 2},
    // ngram 75 ('s', 'c')
    {.next_ngram = 76, .cumulative_probability = 6},
    // ngram 76 ('c', 'r')
    {.next_ngram = 77, .cumulative_probability = 5},
    {.next_ngram = 96, .cumulative_probability = 9},
    // ngram 77 ('r', 'u')
    {.next_ngram = 78, .cumulative_probability = 5},
    // ngram 78 ('u', 'n')
    {.next_ngram = 79, .cumulative_probability = 4},
    {.next_ngram = 93, .cumulative_probability = 7},
    {.next_ngram = 123, .cumulative_probability = 8},
    // ngram 79 ('n', 'k')
    {.next_ngram = 80, .cumulative_probability = 8},
    {.next_ngram = 90, .cumulative_probability = 11},
    {.next_ngram = 110, .cumulative_probability = 12},
    {.next_ngram = 134, .cumulative_probability = 13},
    // ngram 80 ('k', 'l')
    {.next_ngram = 81, .cumulative_probability = 6},
    {.next_ngram = 8, .cumulative_probability = 8},
    // ngram 81 ('l', 'y')
    {.next_ngram = 70, .cumulative_probability = 5},
    {.next_ngram = 16, .cumulative_probability = 8},
    // ngram 82 (' ', 'w')
    {.next_ngram = 83, .cumulative_probability = 2},
    {.next_ngram = 106, .cumulative_probability = 4},
    // ngram 83 ('w', 'h')
    {.next_ngram = 1, .cumulative_probability = 3},
    // ngram 84 ('n', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)
    {.next_ngram = 85, .cumulative_probability = 1},
    // ngram 85 (<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 't')
    {.next_ngram = 0, .cumulative_probability = 8},
    {.next_ngram = 10, .cumulative_probability = 9},
    {.next_ngram = 33, .cumulative_probability = 10},
    // ngram 86 (' ', 'b')
    {.next_ngram = 87, .cumulative_probability = 3},
    {.next_ngram = 52, .cumulative_probability = 5},
    {.next_ngram = 152, .cumulative_probability = 6},
    // ngram 87 ('b', 'o')
    {.next_ngram = 88, .cumulative_probability = 4},
    // ngram 88 ('o', 'i')
    {.next_ngram = 89, .cumulative_probability = 7},
    // ngram 89 ('i', 'n')
    {.next_ngram = 79, .cumulative_probability = 8},
    {.next_ngram = 93, .cumulative_probability = 11},
    {.next_ngram = 153, .cumulative_probability = 12},
    {.next_ngram = 13, .cumulative_probability = 13},
    {.next_ngram = 173, .cumulative_probability = 14},
    // ngram 90 ('k', 'y')
    {.next_ngram = 70, .cumulative_probability = 3},
    // ngram 91 ('s', 'p')
    {.next_ngram = 148, .cumulative_probability = 3},
    {.next_ngram = 92, .cumulative_probability = 5},
    {.next_ngram = 151, .cumulative_probability = 6},
    // ngram 92 ('p', 'u')
    {.next_ngram = 78, .cumulative_probability = 2},
    {.next_ngram = 111, .cumulative_probability = 3},
    // ngram 93 ('n', 'g')
    {.next_ngram = 133, .cumulative_probability = 4},
    {.next_ngram = 94, .cumulative_probability = 6},
    // ngram 94 ('g', 'e')
    {.next_ngram = 65, .cumulative_probability = 2},
    // ngram 95 (<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'c')
    {.next_ngram = 76, .cumulative_probability = 2},
    // ngram 96 ('r', 'i')
    {.next_ngram = 89, .cumulative_probability = 4},
    {.next_ngram = 102, .cumulative_probability = 6},
    // ngram 97 ('o', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)
    {.next_ngram = 17, .cumulative_probability = 2},
    {.next_ngram = 43, .cumulative_probability = 4},
    // ngram 98 ('s', 'h')
    {.next_ngram = 99, .cumulative_probability = 1},
    // ngram 99 ('h', 'r')
    {.next_ngram = 100, .cumulative_probability = 1},
    // ngram 100 ('r', 'o')
    {.next_ngram = 101, .cumulative_probability = 1},
    {.next_ngram = 88, .cumulative_probability = 2},
    // ngram 101 ('o', 'n')
    {.next_ngram = 79, .cumulative_probability = 1},
    // ngram 102 ('i', 'm')
    {.next_ngram = 103, .cumulative_probability = 2},
    {.next_ngram = 105, .cumulative_probability = 4},
    // ngram 103 ('m', 'b')
    {.next_ngram = 52, .cumulative_probability = 2},
    // ngram 104 ('l', 'o')
    {.next_ngram = 38, .cumulative_probability = 3},
    {.next_ngram = 97, .cumulative_probability = 4},
    {.next_ngram = 19, .cumulative_probability = 5},
    // ngram 105 ('m', 't')
    {.next_ngram = 7, .cumulative_probability = 1},
    {.next_ngram = 42, .cumulative_probability = 2},
    {.next_ngram = 118, .cumulative_probability = 3},
    // ngram 106 ('w', 'i')
    {.next_ngram = 107, .cumulative_probability = 3},
    // ngram 107 ('i', 'd')
    {.next_ngram = 108, .cumulative_probability = 6},
    // ngram 108 ('d', 'd')
    {.next_ngram = 109, .cumulative_probability = 3},
    {.next_ngram = 22, .cumulative_probability = 6},
    // ngram 109 ('d', 'l')
    {.next_ngram = 8, .cumulative_probability = 3},
    // ngram 110 ('k', 'u')
    {.next_ngram = 111, .cumulative_probability = 1},
    // ngram 111 ('u', 's')
    {.next_ngram = 112, .cumulative_probability = 2},
    // ngram 112 ('s', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)
    {.next_ngram = 113, .cumulative_probability = 1},
    {.next_ngram = 85, .cumulative_probability = 2},
    // ngram 113 (<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'b')
    {.next_ngram = 87, .cumulative_probability = 1},
    {.next_ngram = 164, .cumulative_probability = 2},
    {.next_ngram = 52, .cumulative_probability = 3},
    // ngram 114 (<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'w')
    {.next_ngram = 83, .cumulative_probability = 1},
    {.next_ngram = 106, .cumulative_probability = 2},
    // ngram 115 ('e', 'm')
    {.next_ngram = 116, .cumulative_probability = 1},
    // ngram 116 ('m', ' ')
    {.next_ngram = 9, .cumulative_probability = 1},
    // ngram 117 ('k', 'i')
    {.next_ngram = 5, .cumulative_probability = 5},
    {.next_ngram = 102, .cumulative_probability = 6},
    // ngram 118 ('t', 'y')
    {.next_ngram = 70, .cumulative_probability = 2},
    {.next_ngram = 16, .cumulative_probability = 3},
    // ngram 119 (<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'n')
    {.next_ngram = 62, .cumulative_probability = 1},
    // ngram 120 (' ', 'f')
    {.next_ngram = 121, .cumulative_probability = 2},
    // ngram 121 ('f', 'l')
    {.next_ngram = 122, .cumulative_probability = 2},
    {.next_ngram = 104, .cumulative_probability = 3},
    // ngram 122 ('l', 'u')
    {.next_ngram = 78, .cumulative_probability = 1},
    {.next_ngram = 159, .cumulative_probability = 2},
    // ngram 123 ('n', 'f')
    {.next_ngram = 124, .cumulative_probability = 1},
    // ngram 124 ('f', ' ')
    {.next_ngram = 20, .cumulative_probability = 1},
    // ngram 125 (<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'i')
    {.next_ngram = 126, .cumulative_probability = 1},
    // ngram 126 ('i', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)
    {.next_ngram = 127, .cumulative_probability = 1},
    // ngram 127 (<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'y')
    {.next_ngram = 128, .cumulative_probability = 1},
    // ngram 128 ('y', 'a')
    {.next_ngram = 129, .cumulative_probability = 1},
    // ngram 129 ('a', 'y')
    {.next_ngram = 16, .cumulative_probability = 1},
    // ngram 130 (<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'l')
    {.next_ngram = 104, .cumulative_probability = 2},
    {.next_ngram = 4, .cumulative_probability = 3},
    // ngram 131 ('o', 'k')
    {.next_ngram = 117, .cumulative_probability = 2},
    // ngram 132 ('w', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)
    {.next_ngram = 130, .cumulative_probability = 1},
    {.next_ngram = 113, .cumulative_probability = 2},
    // ngram 133 ('g', 'l')
    {.next_ngram = 8, .cumulative_probability = 3},
    {.next_ngram = 81, .cumulative_probability = 4},
    // ngram 134 ('k', 'o')
    {.next_ngram = 97, .cumulative_probability = 1},
    // ngram 135 ('i', 'c')
    {.next_ngram = 61, .cumulative_probability = 1},
    // ngram 136 ('a', 'm')
    {.next_ngram = 105, .cumulative_probability = 1},
    // ngram 137 ('a', 't')
    {.next_ngram = 36, .cumulative_probability = 1},
    // ngram 138 (' ', 'm')
    {.next_ngram = 141, .cumulative_probability = 3},
    {.next_ngram = 139, .cumulative_probability = 4},
    // ngram 139 ('m', 'i')
    {.next_ngram = 140, .cumulative_probability = 1},
    // ngram 140 ('i', 'p')
    {.next_ngram = 69, .cumulative_probability = 1},
    // ngram 141 ('m', 'e')
    {.next_ngram = 142, .cumulative_probability = 3},
    {.next_ngram = 163, .cumulative_probability = 5},
    // ngram 142 ('e', 'o')
    {.next_ngram = 58, .cumulative_probability = 3},
    // ngram 143 ('w', 'm')
    {.next_ngram = 141, .cumulative_probability = 2},
    // ngram 144 ('s', 'm')
    {.next_ngram = 145, .cumulative_probability = 2},
    // ngram 145 ('m', 'o')
    {.next_ngram = 146, .cumulative_probability = 2},
    // ngram 146 ('o', 'l')
    {.next_ngram = 147, .cumulative_probability = 4},
    {.next_ngram = 171, .cumulative_probability = 5},
    // ngram 147 ('l', ' ')
    {.next_ngram = 59, .cumulative_probability = 1},
    {.next_ngram = 86, .cumulative_probability = 2},
    {.next_ngram = 138, .cumulative_probability = 3},
    {.next_ngram = 3, .cumulative_probability = 4},
    // ngram 148 ('p', 'r')
    {.next_ngram = 96, .cumulative_probability = 2},
    {.next_ngram = 100, .cumulative_probability = 3},
    // ngram 149 ('i', 'b')
    {.next_ngram = 150, .cumulative_probability = 1},
    // ngram 150 ('b', 'b')
    {.next_ngram = 52, .cumulative_probability = 1},
    // ngram 151 ('p', 'o')
    {.next_ngram = 88, .cumulative_probability = 2},
    // ngram 152 ('b', 'i')
    {.next_ngram = 89, .cumulative_probability = 1},
    // ngram 153 ('n', 't')
    {.next_ngram = 7, .cumulative_probability = 1},
    // ngram 154 ('n', 'm')
    {.next_ngram = 155, .cumulative_probability = 1},
    // ngram 155 ('m', 'd')
    {.next_ngram = 29, .cumulative_probability = 1},
    // ngram 156 ('o', 'f')
    {.next_ngram = 157, .cumulative_probability = 1},
    // ngram 157 ('f', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)
    {.next_ngram = 158, .cumulative_probability = 1},
    // ngram 158 (<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'f')
    {.next_ngram = 121, .cumulative_probability = 1},
    // ngram 159 ('u', 'm')
    {.next_ngram = 160, .cumulative_probability = 1},
    // ngram 160 ('m', 'f')
    {.next_ngram = 161, .cumulative_probability = 1},
    // ngram 161 ('f', 'y')
    {.next_ngram = 16, .cumulative_probability = 1},
    // ngram 162 (' ', 'p')
    {.next_ngram = 151, .cumulative_probability = 1},
    // ngram 163 ('e', 'w')
    {.next_ngram = 143, .cumulative_probability = 1},
    {.next_ngram = 132, .cumulative_probability = 2},
    // ngram 164 ('b', 'a')
    {.next_ngram = 165, .cumulative_probability = 1},
    // ngram 165 ('a', 'b')
    {.next_ngram = 166, .cumulative_probability = 1},
    // ngram 166 ('b', 'e')
    {.next_ngram = 167, .cumulative_probability = 1},
    // ngram 167 ('e', 'y')
    {.next_ngram = 16, .cumulative_probability = 1},
    {.next_ngram = 70, .cumulative_probability = 2},
    // ngram 168 ('a', ' ')
    {.next_ngram = 86, .cumulative_probability = 1},
    // ngram 169 ('e', 'e')
    {.next_ngram = 170, .cumulative_probability = 1},
    {.next_ngram = 12, .cumulative_probability = 2},
    // ngram 170 ('e', 'b')
    {.next_ngram = 74, .cumulative_probability = 1},
    // ngram 171 ('l', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)
    {.next_ngram = 85, .cumulative_probability = 1},
    // ngram 172 ('n', 'y')
    {.next_ngram = 70, .cumulative_probability = 1},
    // ngram 173 ('n', 'e')
    {.next_ngram = 167, .cumulative_probability = 1},
};

static uwu_markov_ngram scrunkly_ngrams[] = {
    {.choices = 0, .total_probability = 16, .character = 'h'}, // "('t', 'h')"
    {.choices = 2, .total_probability = 18, .character = 'e'}, // "('h', 'e')"
    {.choices = 6, .total_probability = 30, .character = ' '}, // "('e', ' ')"
    {.choices = 16, .total_probability = 8, .character = 'l'}, // "(' ', 'l')"
    {.choices = 17, .total_probability = 11, .character = 'i'}, // "('l', 'i')"
    {.choices = 24, .total_probability = 12, .character = 't'}, // "('i', 't')"
    {.choices = 28, .total_probability = 3, .character = 't'}, // "('t', 't')"
    {.choices = 29, .total_probability = 5, .character = 'l'}, // "('t', 'l')"
    {.choices = 30, .total_probability = 17, .character = 'e'}, // "('l', 'e')"
    {.choices = 33, .total_probability = 16, .character = 't'}, // "(' ', 't')"
    {.choices = 37, .total_probability = 5, .character = 'i'}, // "('t', 'i')"
    {.choices = 39, .total_probability = 5, .character = 'e'}, // "('i', 'e')"
    {.choices = 41, .total_probability = 7, .character = 'n'}, // "('e', 'n')"
    {.choices = 45, .total_probability = 5, .character = 'p'}, // "('n', 'p')"
    {.choices = 47, .total_probability = 4, .character = 's'}, // "('p', 's')"
    {.choices = 48, .total_probability = 4, .character = 'y'}, // "('s', 'y')"
    {.choices = 50, .total_probability = 9, .character = -1}, // "('y', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
    {.choices = 54, .total_probability = 5, .character = 's'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 's')"
    {.choices = 57, .total_probability = 5, .character = 'o'}, // "('s', 'o')"
    {.choices = 59, .total_probability = 7, .character = ' '}, // "('o', ' ')"
    {.choices = 65, .total_probability = 9, .character = 'a'}, // "(' ', 'a')"
    {.choices = 68, .total_probability = 2, .character = 'd'}, // "('a', 'd')"
    {.choices = 69, .total_probability = 8, .character = 'o'}, // "('d', 'o')"
    {.choices = 73, .total_probability = 2, .character = 'r'}, // "('o', 'r')"
    {.choices = 74, .total_probability = 2, .character = 'n'}, // "('r', 'n')"
    {.choices = 75, .total_probability = 2, .character = 'a'}, // "('n', 'a')"
    {.choices = 76, .total_probability = 2, .character = 'l'}, // "('a', 'l')"
    {.choices = 77, .total_probability = 7, .character = 'n'}, // "('a', 'n')"
    {.choices = 80, .total_probability = 5, .character = 'd'}, // "('n', 'd')"
    {.choices = 81, .total_probability = 6, .character = ' '}, // "('d', ' ')"
    {.choices = 86, .total_probability = 6, .character = 'c'}, // "(' ', 'c')"
    {.choices = 89, .total_probability = 3, .character = 'u'}, // "('c', 'u')"
    {.choices = 90, .total_probability = 3, .character = 't'}, // "('u', 't')"
    {.choices = 91, .total_probability = 4, .character = 'e'}, // "('t', 'e')"
    {.choices = 94, .total_probability = 2, .character = 's'}, // "('e', 's')"
    {.choices = 95, .total_probability = 2, .character = 't'}, // "('s', 't')"
    {.choices = 96, .total_probability = 6, .character = ' '}, // "('t', ' ')"
    {.choices = 100, .total_probability = 4, .character = 'o'}, // "('t', 'o')"
    {.choices = 102, .total_probability = 14, .character = 'o'}, // "('o', 'o')"
    {.choices = 108, .total_probability = 3, .character = 't'}, // "('o', 't')"
    {.choices = 109, .total_probability = 3, .character = 's'}, // "('t', 's')"
    {.choices = 110, .total_probability = 3, .character = 'i'}, // "('s', 'i')"
    {.choices = 112, .total_probability = 4, .character = -1}, // "('t', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
    {.choices = 116, .total_probability = 4, .character = 'a'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'a')"
    {.choices = 117, .total_probability = 5, .character = 'w'}, // "('a', 'w')"
    {.choices = 120, .total_probability = 5, .character = 'w'}, // "('w', 'w')"
    {.choices = 122, .total_probability = 7, .character = ' '}, // "('w', ' ')"
    {.choices = 128, .total_probability = 1, .character = 'k'}, // "('i', 'k')"
    {.choices = 129, .total_probability = 1, .character = 'e'}, // "('k', 'e')"
    {.choices = 130, .total_probability = 3, .character = 'd'}, // "(' ', 'd')"
    {.choices = 131, .total_probability = 1, .character = 'u'}, // "('o', 'u')"
    {.choices = 132, .total_probability = 1, .character = 'b'}, // "('u', 'b')"
    {.choices = 133, .total_probability = 7, .character = 'l'}, // "('b', 'l')"
    {.choices = 137, .total_probability = 1, .character = 'a'}, // "('t', 'a')"
    {.choices = 138, .total_probability = 2, .character = 'p'}, // "('a', 'p')"
    {.choices = 140, .total_probability = 1, .character = ' '}, // "('p', ' ')"
    {.choices = 141, .total_probability = 2, .character = 'n'}, // "(' ', 'n')"
    {.choices = 143, .total_probability = 1, .character = 'o'}, // "('n', 'o')"
    {.choices = 144, .total_probability = 4, .character = 'w'}, // "('o', 'w')"
    {.choices = 146, .total_probability = 15, .character = 's'}, // "(' ', 's')"
    {.choices = 150, .total_probability = 3, .character = 'i'}, // "(' ', 'i')"
    {.choices = 152, .total_probability = 3, .character = 'a'}, // "('c', 'a')"
    {.choices = 155, .total_probability = 4, .character = ' '}, // "('n', ' ')"
    {.choices = 158, .total_probability = 1, .character = 'v'}, // "('i', 'v')"
    {.choices = 159, .total_probability = 1, .character = 'e'}, // "('v', 'e')"
    {.choices = 160, .total_probability = 7, .character = -1}, // "('e', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
    {.choices = 164, .total_probability = 1, .character = 'h'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'h')"
    {.choices = 165, .total_probability = 2, .character = 'a'}, // "('h', 'a')"
    {.choices = 167, .total_probability = 1, .character = 'p'}, // "('p', 'p')"
    {.choices = 168, .total_probability = 2, .character = 'y'}, // "('p', 'y')"
    {.choices = 170, .total_probability = 16, .character = ' '}, // "('y', ' ')"
    {.choices = 179, .total_probability = 5, .character = 'k'}, // "(' ', 'k')"
    {.choices = 181, .total_probability = 1, .character = 'd'}, // "('k', 'd')"
    {.choices = 182, .total_probability = 1, .character = 'b'}, // "('d', 'b')"
    {.choices = 183, .total_probability = 2, .character = -1}, // "('b', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
    {.choices = 185, .total_probability = 6, .character = 'c'}, // "('s', 'c')"
    {.choices = 186, .total_probability = 9, .character = 'r'}, // "('c', 'r')"
    {.choices = 188, .total_probability = 5, .character = 'u'}, // "('r', 'u')"
    {.choices = 189, .total_probability = 8, .character = 'n'}, // "('u', 'n')"
    {.choices = 192, .total_probability = 13, .character = 'k'}, // "('n', 'k')"
    {.choices = 196, .total_probability = 8, .character = 'l'}, // "('k', 'l')"
    {.choices = 198, .total_probability = 8, .character = 'y'}, // "('l', 'y')"
    {.choices = 200, .total_probability = 4, .character = 'w'}, // "(' ', 'w')"
    {.choices = 202, .total_probability = 3, .character = 'h'}, // "('w', 'h')"
    {.choices = 203, .total_probability = 1, .character = -1}, // "('n', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
    {.choices = 204, .total_probability = 10, .character = 't'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 't')"
    {.choices = 207, .total_probability = 6, .character = 'b'}, // "(' ', 'b')"
    {.choices = 210, .total_probability = 4, .character = 'o'}, // "('b', 'o')"
    {.choices = 211, .total_probability = 7, .character = 'i'}, // "('o', 'i')"
    {.choices = 212, .total_probability = 14, .character = 'n'}, // "('i', 'n')"
    {.choices = 217, .total_probability = 3, .character = 'y'}, // "('k', 'y')"
    {.choices = 218, .total_probability = 6, .character = 'p'}, // "('s', 'p')"
    {.choices = 221, .total_probability = 3, .character = 'u'}, // "('p', 'u')"
    {.choices = 223, .total_probability = 6, .character = 'g'}, // "('n', 'g')"
    {.choices = 225, .total_probability = 2, .character = 'e'}, // "('g', 'e')"
    {.choices = 226, .total_probability = 2, .character = 'c'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'c')"
    {.choices = 227, .total_probability = 6, .character = 'i'}, // "('r', 'i')"
    {.choices = 229, .total_probability = 4, .character = -1}, // "('o', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
    {.choices = 231, .total_probability = 1, .character = 'h'}, // "('s', 'h')"
    {.choices = 232, .total_probability = 1, .character = 'r'}, // "('h', 'r')"
    {.choices = 233, .total_probability = 2, .character = 'o'}, // "('r', 'o')"
    {.choices = 235, .total_probability = 1, .character = 'n'}, // "('o', 'n')"
    {.choices = 236, .total_probability = 4, .character = 'm'}, // "('i', 'm')"
    {.choices = 238, .total_probability = 2, .character = 'b'}, // "('m', 'b')"
    {.choices = 239, .total_probability = 5, .character = 'o'}, // "('l', 'o')"
    {.choices = 242, .total_probability = 3, .character = 't'}, // "('m', 't')"
    {.choices = 245, .total_probability = 3, .character = 'i'}, // "('w', 'i')"
    {.choices = 246, .total_probability = 6, .character = 'd'}, // "('i', 'd')"
    {.choices = 247, .total_probability = 6, .character = 'd'}, // "('d', 'd')"
    {.choices = 249, .total_probability = 3, .character = 'l'}, // "('d', 'l')"
    {.choices = 250, .total_probability = 1, .character = 'u'}, // "('k', 'u')"
    {.choices = 251, .total_probability = 2, .character = 's'}, // "('u', 's')"
    {.choices = 252, .total_probability = 2, .character = -1}, // "('s', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
    {.choices = 254, .total_probability = 3, .character = 'b'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'b')"
    {.choices = 257, .total_probability = 2, .character = 'w'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'w')"
    {.choices = 259, .total_probability = 1, .character = 'm'}, // "('e', 'm')"
    {.choices = 260, .total_probability = 1, .character = ' '}, // "('m', ' ')"
    {.choices = 261, .total_probability = 6, .character = 'i'}, // "('k', 'i')"
    {.choices = 263, .total_probability = 3, .character = 'y'}, // "('t', 'y')"
    {.choices = 265, .total_probability = 1, .character = 'n'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'n')"
    {.choices = 266, .total_probability = 2, .character = 'f'}, // "(' ', 'f')"
    {.choices = 267, .total_probability = 3, .character = 'l'}, // "('f', 'l')"
    {.choices = 269, .total_probability = 2, .character = 'u'}, // "('l', 'u')"
    {.choices = 271, .total_probability = 1, .character = 'f'}, // "('n', 'f')"
    {.choices = 272, .total_probability = 1, .character = ' '}, // "('f', ' ')"
    {.choices = 273, .total_probability = 1, .character = 'i'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'i')"
    {.choices = 274, .total_probability = 1, .character = -1}, // "('i', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
    {.choices = 275, .total_probability = 1, .character = 'y'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'y')"
    {.choices = 276, .total_probability = 1, .character = 'a'}, // "('y', 'a')"
    {.choices = 277, .total_probability = 1, .character = 'y'}, // "('a', 'y')"
    {.choices = 278, .total_probability = 3, .character = 'l'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'l')"
    {.choices = 280, .total_probability = 2, .character = 'k'}, // "('o', 'k')"
    {.choices = 281, .total_probability = 2, .character = -1}, // "('w', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
    {.choices = 283, .total_probability = 4, .character = 'l'}, // "('g', 'l')"
    {.choices = 285, .total_probability = 1, .character = 'o'}, // "('k', 'o')"
    {.choices = 286, .total_probability = 1, .character = 'c'}, // "('i', 'c')"
    {.choices = 287, .total_probability = 1, .character = 'm'}, // "('a', 'm')"
    {.choices = 288, .total_probability = 1, .character = 't'}, // "('a', 't')"
    {.choices = 289, .total_probability = 4, .character = 'm'}, // "(' ', 'm')"
    {.choices = 291, .total_probability = 1, .character = 'i'}, // "('m', 'i')"
    {.choices = 292, .total_probability = 1, .character = 'p'}, // "('i', 'p')"
    {.choices = 293, .total_probability = 5, .character = 'e'}, // "('m', 'e')"
    {.choices = 295, .total_probability = 3, .character = 'o'}, // "('e', 'o')"
    {.choices = 296, .total_probability = 2, .character = 'm'}, // "('w', 'm')"
    {.choices = 297, .total_probability = 2, .character = 'm'}, // "('s', 'm')"
    {.choices = 298, .total_probability = 2, .character = 'o'}, // "('m', 'o')"
    {.choices = 299, .total_probability = 5, .character = 'l'}, // "('o', 'l')"
    {.choices = 301, .total_probability = 4, .character = ' '}, // "('l', ' ')"
    {.choices = 305, .total_probability = 3, .character = 'r'}, // "('p', 'r')"
    {.choices = 307, .total_probability = 1, .character = 'b'}, // "('i', 'b')"
    {.choices = 308, .total_probability = 1, .character = 'b'}, // "('b', 'b')"
    {.choices = 309, .total_probability = 2, .character = 'o'}, // "('p', 'o')"
    {.choices = 310, .total_probability = 1, .character = 'i'}, // "('b', 'i')"
    {.choices = 311, .total_probability = 1, .character = 't'}, // "('n', 't')"
    {.choices = 312, .total_probability = 1, .character = 'm'}, // "('n', 'm')"
    {.choices = 313, .total_probability = 1, .character = 'd'}, // "('m', 'd')"
    {.choices = 314, .total_probability = 1, .character = 'f'}, // "('o', 'f')"
    {.choices = 315, .total_probability = 1, .character = -1}, // "('f', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
    {.choices = 316, .total_probability = 1, .character = 'f'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'f')"
    {.choices = 317, .total_probability = 1, .character = 'm'}, // "('u', 'm')"
    {.choices = 318, .total_probability = 1, .character = 'f'}, // "('m', 'f')"
    {.choices = 319, .total_probability = 1, .character = 'y'}, // "('f', 'y')"
    {.choices = 320, .total_probability = 1, .character = 'p'}, // "(' ', 'p')"
    {.choices = 321, .total_probability = 2, .character = 'w'}, // "('e', 'w')"
    {.choices = 323, .total_probability = 1, .character = 'a'}, // "('b', 'a')"
    {.choices = 324, .total_probability = 1, .character = 'b'}, // "('a', 'b')"
    {.choices = 325, .total_probability = 1, .character = 'e'}, // "('b', 'e')"
    {.choices = 326, .total_probability = 2, .character = 'y'}, // "('e', 'y')"
    {.choices = 328, .total_probability = 1, .character = ' '}, // "('a', ' ')"
    {.choices = 329, .total_probability = 2, .character = 'e'}, // "('e', 'e')"
    {.choices = 331, .total_probability = 1, .character = 'b'}, // "('e', 'b')"
    {.choices = 332, .total_probability = 1, .character = -1}, // "('l', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
    {.choices = 333, .total_probability = 1, .character = 'y'}, // "('n', 'y')"
    {.choices = 334, .total_probability = 1, .character = 'e'}, // "('n', 'e')"
};

static uwu_markov_table scrunkly_table = {
    .specials = scrunkly_specials,
    .initial_ngram=44,
    .num_ngrams=174,
    .choices=scrunkly_choices,
    .ngrams=scrunkly_ngrams
};

#endif
