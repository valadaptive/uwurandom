#ifndef _UWURANDOM_MARKOV_DATA_H
#define _UWURANDOM_MARKOV_DATA_H

#include "uwurandom_types.h"
#include "uwurandom_markov_special.h"

static uwu_markov_choice catnonsense_ngram0_choices[] = {
    {.next_ngram = 22, .cumulative_probability = 15},
    {.next_ngram = 1, .cumulative_probability = 24},
    {.next_ngram = 7, .cumulative_probability = 28},
    {.next_ngram = 19, .cumulative_probability = 29},
    {.next_ngram = 20, .cumulative_probability = 30}
};
static uwu_markov_choice catnonsense_ngram1_choices[] = {
    {.next_ngram = 2, .cumulative_probability = 9}
};
static uwu_markov_choice catnonsense_ngram2_choices[] = {
    {.next_ngram = 3, .cumulative_probability = 9}
};
static uwu_markov_choice catnonsense_ngram3_choices[] = {
    {.next_ngram = 4, .cumulative_probability = 22},
    {.next_ngram = 23, .cumulative_probability = 32},
    {.next_ngram = 13, .cumulative_probability = 36},
    {.next_ngram = 18, .cumulative_probability = 37},
    {.next_ngram = 24, .cumulative_probability = 38}
};
static uwu_markov_choice catnonsense_ngram4_choices[] = {
    {.next_ngram = 0, .cumulative_probability = 17},
    {.next_ngram = 5, .cumulative_probability = 30}
};
static uwu_markov_choice catnonsense_ngram5_choices[] = {
    {.next_ngram = 21, .cumulative_probability = 12},
    {.next_ngram = 6, .cumulative_probability = 20}
};
static uwu_markov_choice catnonsense_ngram6_choices[] = {
    {.next_ngram = 4, .cumulative_probability = 6},
    {.next_ngram = 13, .cumulative_probability = 7},
    {.next_ngram = 24, .cumulative_probability = 8}
};
static uwu_markov_choice catnonsense_ngram7_choices[] = {
    {.next_ngram = 7, .cumulative_probability = 7},
    {.next_ngram = 12, .cumulative_probability = 10},
    {.next_ngram = 22, .cumulative_probability = 13},
    {.next_ngram = 8, .cumulative_probability = 14}
};
static uwu_markov_choice catnonsense_ngram8_choices[] = {
    {.next_ngram = 9, .cumulative_probability = 1}
};
static uwu_markov_choice catnonsense_ngram9_choices[] = {
    {.next_ngram = 10, .cumulative_probability = 1}
};
static uwu_markov_choice catnonsense_ngram10_choices[] = {
    {.next_ngram = 11, .cumulative_probability = 3}
};
static uwu_markov_choice catnonsense_ngram11_choices[] = {
    {.next_ngram = 7, .cumulative_probability = 3}
};
static uwu_markov_choice catnonsense_ngram12_choices[] = {
    {.next_ngram = 0, .cumulative_probability = 5},
    {.next_ngram = 5, .cumulative_probability = 10}
};
static uwu_markov_choice catnonsense_ngram13_choices[] = {
    {.next_ngram = 14, .cumulative_probability = 5}
};
static uwu_markov_choice catnonsense_ngram14_choices[] = {
    {.next_ngram = 15, .cumulative_probability = 9}
};
static uwu_markov_choice catnonsense_ngram15_choices[] = {
    {.next_ngram = 25, .cumulative_probability = 4},
    {.next_ngram = 16, .cumulative_probability = 5},
    {.next_ngram = 17, .cumulative_probability = 6}
};
static uwu_markov_choice catnonsense_ngram16_choices[] = {
    {.next_ngram = 14, .cumulative_probability = 1}
};
static uwu_markov_choice catnonsense_ngram17_choices[] = {
    {.next_ngram = 0, .cumulative_probability = 3},
    {.next_ngram = 5, .cumulative_probability = 4}
};
static uwu_markov_choice catnonsense_ngram18_choices[] = {
    {.next_ngram = 18, .cumulative_probability = 3},
    {.next_ngram = 4, .cumulative_probability = 4}
};
static uwu_markov_choice catnonsense_ngram19_choices[] = {
    {.next_ngram = 4, .cumulative_probability = 1}
};
static uwu_markov_choice catnonsense_ngram20_choices[] = {
    {.next_ngram = 21, .cumulative_probability = 1}
};
static uwu_markov_choice catnonsense_ngram21_choices[] = {
    {.next_ngram = 3, .cumulative_probability = 13}
};
static uwu_markov_choice catnonsense_ngram22_choices[] = {
    {.next_ngram = 3, .cumulative_probability = 18}
};
static uwu_markov_choice catnonsense_ngram23_choices[] = {
    {.next_ngram = 12, .cumulative_probability = 7},
    {.next_ngram = 26, .cumulative_probability = 10}
};
static uwu_markov_choice catnonsense_ngram24_choices[] = {
    {.next_ngram = 10, .cumulative_probability = 2}
};
static uwu_markov_choice catnonsense_ngram25_choices[] = {
    {.next_ngram = 25, .cumulative_probability = 6},
    {.next_ngram = 17, .cumulative_probability = 9}
};
static uwu_markov_choice catnonsense_ngram26_choices[] = {
    {.next_ngram = 14, .cumulative_probability = 3}
};

static uwu_markov_table catnonsense_ngrams = {
    .specials = NULL,
    .initial_ngram=0,
    .num_ngrams=27,
    .ngrams = {
        {.choices = catnonsense_ngram0_choices, .total_probability = 30, .character = 'r'}, // "('m', 'r')"
        {.choices = catnonsense_ngram1_choices, .total_probability = 9, .character = 'a'}, // "('r', 'a')"
        {.choices = catnonsense_ngram2_choices, .total_probability = 9, .character = 'o'}, // "('a', 'o')"
        {.choices = catnonsense_ngram3_choices, .total_probability = 38, .character = 'w'}, // "('o', 'w')"
        {.choices = catnonsense_ngram4_choices, .total_probability = 30, .character = 'm'}, // "('w', 'm')"
        {.choices = catnonsense_ngram5_choices, .total_probability = 20, .character = 'e'}, // "('m', 'e')"
        {.choices = catnonsense_ngram6_choices, .total_probability = 8, .character = 'w'}, // "('e', 'w')"
        {.choices = catnonsense_ngram7_choices, .total_probability = 14, .character = 'r'}, // "('r', 'r')"
        {.choices = catnonsense_ngram8_choices, .total_probability = 1, .character = 'p'}, // "('r', 'p')"
        {.choices = catnonsense_ngram9_choices, .total_probability = 1, .character = 'p'}, // "('p', 'p')"
        {.choices = catnonsense_ngram10_choices, .total_probability = 3, .character = 'u'}, // "('p', 'u')"
        {.choices = catnonsense_ngram11_choices, .total_probability = 3, .character = 'r'}, // "('u', 'r')"
        {.choices = catnonsense_ngram12_choices, .total_probability = 10, .character = 'm'}, // "('r', 'm')"
        {.choices = catnonsense_ngram13_choices, .total_probability = 5, .character = 'n'}, // "('w', 'n')"
        {.choices = catnonsense_ngram14_choices, .total_probability = 9, .character = 'y'}, // "('n', 'y')"
        {.choices = catnonsense_ngram15_choices, .total_probability = 6, .character = 'a'}, // "('y', 'a')"
        {.choices = catnonsense_ngram16_choices, .total_probability = 1, .character = 'n'}, // "('a', 'n')"
        {.choices = catnonsense_ngram17_choices, .total_probability = 4, .character = 'm'}, // "('a', 'm')"
        {.choices = catnonsense_ngram18_choices, .total_probability = 4, .character = 'w'}, // "('w', 'w')"
        {.choices = catnonsense_ngram19_choices, .total_probability = 1, .character = 'w'}, // "('r', 'w')"
        {.choices = catnonsense_ngram20_choices, .total_probability = 1, .character = 'e'}, // "('r', 'e')"
        {.choices = catnonsense_ngram21_choices, .total_probability = 13, .character = 'o'}, // "('e', 'o')"
        {.choices = catnonsense_ngram22_choices, .total_probability = 18, .character = 'o'}, // "('r', 'o')"
        {.choices = catnonsense_ngram23_choices, .total_probability = 10, .character = 'r'}, // "('w', 'r')"
        {.choices = catnonsense_ngram24_choices, .total_probability = 2, .character = 'p'}, // "('w', 'p')"
        {.choices = catnonsense_ngram25_choices, .total_probability = 9, .character = 'a'}, // "('a', 'a')"
        {.choices = catnonsense_ngram26_choices, .total_probability = 3, .character = 'n'}, // "('r', 'n')"
    }
};

static uwu_markov_choice keysmash_ngram0_choices[] = {
    {.next_ngram = 5, .cumulative_probability = 7},
    {.next_ngram = 9, .cumulative_probability = 13},
    {.next_ngram = 6, .cumulative_probability = 18},
    {.next_ngram = 1, .cumulative_probability = 21},
    {.next_ngram = 11, .cumulative_probability = 24},
    {.next_ngram = 8, .cumulative_probability = 26},
    {.next_ngram = 4, .cumulative_probability = 28},
    {.next_ngram = 7, .cumulative_probability = 29},
    {.next_ngram = 12, .cumulative_probability = 30}
};
static uwu_markov_choice keysmash_ngram1_choices[] = {
    {.next_ngram = 2, .cumulative_probability = 4},
    {.next_ngram = 7, .cumulative_probability = 6},
    {.next_ngram = 3, .cumulative_probability = 7},
    {.next_ngram = 8, .cumulative_probability = 8},
    {.next_ngram = 6, .cumulative_probability = 9},
    {.next_ngram = 4, .cumulative_probability = 10},
    {.next_ngram = 0, .cumulative_probability = 11}
};
static uwu_markov_choice keysmash_ngram2_choices[] = {
    {.next_ngram = 0, .cumulative_probability = 6},
    {.next_ngram = 6, .cumulative_probability = 10},
    {.next_ngram = 8, .cumulative_probability = 13},
    {.next_ngram = 9, .cumulative_probability = 16},
    {.next_ngram = 3, .cumulative_probability = 17},
    {.next_ngram = 4, .cumulative_probability = 18},
    {.next_ngram = 1, .cumulative_probability = 19},
    {.next_ngram = 5, .cumulative_probability = 20}
};
static uwu_markov_choice keysmash_ngram3_choices[] = {
    {.next_ngram = 4, .cumulative_probability = 2},
    {.next_ngram = 2, .cumulative_probability = 4}
};
static uwu_markov_choice keysmash_ngram4_choices[] = {
    {.next_ngram = 6, .cumulative_probability = 7},
    {.next_ngram = 5, .cumulative_probability = 12},
    {.next_ngram = 3, .cumulative_probability = 13},
    {.next_ngram = 8, .cumulative_probability = 14},
    {.next_ngram = 2, .cumulative_probability = 15},
    {.next_ngram = 9, .cumulative_probability = 16},
    {.next_ngram = 10, .cumulative_probability = 17}
};
static uwu_markov_choice keysmash_ngram5_choices[] = {
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
    {.next_ngram = 11, .cumulative_probability = 31}
};
static uwu_markov_choice keysmash_ngram6_choices[] = {
    {.next_ngram = 8, .cumulative_probability = 12},
    {.next_ngram = 2, .cumulative_probability = 16},
    {.next_ngram = 9, .cumulative_probability = 19},
    {.next_ngram = 1, .cumulative_probability = 21},
    {.next_ngram = 5, .cumulative_probability = 23},
    {.next_ngram = 4, .cumulative_probability = 25},
    {.next_ngram = 0, .cumulative_probability = 26}
};
static uwu_markov_choice keysmash_ngram7_choices[] = {
    {.next_ngram = 0, .cumulative_probability = 4},
    {.next_ngram = 2, .cumulative_probability = 5},
    {.next_ngram = 4, .cumulative_probability = 6},
    {.next_ngram = 1, .cumulative_probability = 7},
    {.next_ngram = 5, .cumulative_probability = 8}
};
static uwu_markov_choice keysmash_ngram8_choices[] = {
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
    {.next_ngram = 14, .cumulative_probability = 34}
};
static uwu_markov_choice keysmash_ngram9_choices[] = {
    {.next_ngram = 5, .cumulative_probability = 5},
    {.next_ngram = 4, .cumulative_probability = 9},
    {.next_ngram = 2, .cumulative_probability = 12},
    {.next_ngram = 6, .cumulative_probability = 15},
    {.next_ngram = 0, .cumulative_probability = 17},
    {.next_ngram = 12, .cumulative_probability = 18},
    {.next_ngram = 15, .cumulative_probability = 19},
    {.next_ngram = 16, .cumulative_probability = 20},
    {.next_ngram = 1, .cumulative_probability = 21},
    {.next_ngram = 8, .cumulative_probability = 22}
};
static uwu_markov_choice keysmash_ngram10_choices[] = {
    {.next_ngram = 2, .cumulative_probability = 1},
    {.next_ngram = 0, .cumulative_probability = 2},
    {.next_ngram = 5, .cumulative_probability = 3}
};
static uwu_markov_choice keysmash_ngram11_choices[] = {
    {.next_ngram = 12, .cumulative_probability = 3},
    {.next_ngram = 0, .cumulative_probability = 4},
    {.next_ngram = 6, .cumulative_probability = 5},
    {.next_ngram = 9, .cumulative_probability = 6},
    {.next_ngram = 15, .cumulative_probability = 7}
};
static uwu_markov_choice keysmash_ngram12_choices[] = {
    {.next_ngram = 8, .cumulative_probability = 4},
    {.next_ngram = 0, .cumulative_probability = 6},
    {.next_ngram = 5, .cumulative_probability = 7}
};
static uwu_markov_choice keysmash_ngram13_choices[] = {
    {.next_ngram = 11, .cumulative_probability = 2}
};
static uwu_markov_choice keysmash_ngram14_choices[] = {
    {.next_ngram = 8, .cumulative_probability = 1},
    {.next_ngram = 5, .cumulative_probability = 2}
};
static uwu_markov_choice keysmash_ngram15_choices[] = {
    {.next_ngram = 8, .cumulative_probability = 2}
};
static uwu_markov_choice keysmash_ngram16_choices[] = {
    {.next_ngram = 8, .cumulative_probability = 1}
};

static uwu_markov_table keysmash_ngrams = {
    .specials = NULL,
    .initial_ngram=-1,
    .num_ngrams=17,
    .ngrams = {
        {.choices = keysmash_ngram0_choices, .total_probability = 30, .character = 'a'}, // "('a',)"
        {.choices = keysmash_ngram1_choices, .total_probability = 11, .character = 'l'}, // "('l',)"
        {.choices = keysmash_ngram2_choices, .total_probability = 20, .character = 'k'}, // "('k',)"
        {.choices = keysmash_ngram3_choices, .total_probability = 4, .character = 's'}, // "('s',)"
        {.choices = keysmash_ngram4_choices, .total_probability = 17, .character = 'd'}, // "('d',)"
        {.choices = keysmash_ngram5_choices, .total_probability = 31, .character = 'h'}, // "('h',)"
        {.choices = keysmash_ngram6_choices, .total_probability = 26, .character = 'f'}, // "('f',)"
        {.choices = keysmash_ngram7_choices, .total_probability = 8, .character = ';'}, // "(';',)"
        {.choices = keysmash_ngram8_choices, .total_probability = 34, .character = 'g'}, // "('g',)"
        {.choices = keysmash_ngram9_choices, .total_probability = 22, .character = 'j'}, // "('j',)"
        {.choices = keysmash_ngram10_choices, .total_probability = 3, .character = 'b'}, // "('b',)"
        {.choices = keysmash_ngram11_choices, .total_probability = 7, .character = 'u'}, // "('u',)"
        {.choices = keysmash_ngram12_choices, .total_probability = 7, .character = 'r'}, // "('r',)"
        {.choices = keysmash_ngram13_choices, .total_probability = 2, .character = 'i'}, // "('i',)"
        {.choices = keysmash_ngram14_choices, .total_probability = 2, .character = 'n'}, // "('n',)"
        {.choices = keysmash_ngram15_choices, .total_probability = 2, .character = 'e'}, // "('e',)"
        {.choices = keysmash_ngram16_choices, .total_probability = 1, .character = 'o'}, // "('o',)"
    }
};

static uwu_markov_choice scrunkly_ngram0_choices[] = {
    {.next_ngram = 1, .cumulative_probability = 15},
    {.next_ngram = 67, .cumulative_probability = 16}
};
static uwu_markov_choice scrunkly_ngram1_choices[] = {
    {.next_ngram = 2, .cumulative_probability = 14},
    {.next_ngram = 12, .cumulative_probability = 16},
    {.next_ngram = 65, .cumulative_probability = 17},
    {.next_ngram = 115, .cumulative_probability = 18}
};
static uwu_markov_choice scrunkly_ngram2_choices[] = {
    {.next_ngram = 9, .cumulative_probability = 6},
    {.next_ngram = 59, .cumulative_probability = 11},
    {.next_ngram = 3, .cumulative_probability = 15},
    {.next_ngram = 20, .cumulative_probability = 18},
    {.next_ngram = 30, .cumulative_probability = 21},
    {.next_ngram = 71, .cumulative_probability = 24},
    {.next_ngram = 82, .cumulative_probability = 26},
    {.next_ngram = 86, .cumulative_probability = 28},
    {.next_ngram = 138, .cumulative_probability = 29},
    {.next_ngram = 56, .cumulative_probability = 30}
};
static uwu_markov_choice scrunkly_ngram3_choices[] = {
    {.next_ngram = 4, .cumulative_probability = 8}
};
static uwu_markov_choice scrunkly_ngram4_choices[] = {
    {.next_ngram = 5, .cumulative_probability = 3},
    {.next_ngram = 107, .cumulative_probability = 6},
    {.next_ngram = 47, .cumulative_probability = 7},
    {.next_ngram = 63, .cumulative_probability = 8},
    {.next_ngram = 102, .cumulative_probability = 9},
    {.next_ngram = 149, .cumulative_probability = 10},
    {.next_ngram = 89, .cumulative_probability = 11}
};
static uwu_markov_choice scrunkly_ngram5_choices[] = {
    {.next_ngram = 6, .cumulative_probability = 3},
    {.next_ngram = 42, .cumulative_probability = 6},
    {.next_ngram = 36, .cumulative_probability = 9},
    {.next_ngram = 118, .cumulative_probability = 12}
};
static uwu_markov_choice scrunkly_ngram6_choices[] = {
    {.next_ngram = 7, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram7_choices[] = {
    {.next_ngram = 8, .cumulative_probability = 5}
};
static uwu_markov_choice scrunkly_ngram8_choices[] = {
    {.next_ngram = 2, .cumulative_probability = 14},
    {.next_ngram = 65, .cumulative_probability = 16},
    {.next_ngram = 169, .cumulative_probability = 17}
};
static uwu_markov_choice scrunkly_ngram9_choices[] = {
    {.next_ngram = 0, .cumulative_probability = 7},
    {.next_ngram = 10, .cumulative_probability = 11},
    {.next_ngram = 37, .cumulative_probability = 15},
    {.next_ngram = 53, .cumulative_probability = 16}
};
static uwu_markov_choice scrunkly_ngram10_choices[] = {
    {.next_ngram = 11, .cumulative_probability = 4},
    {.next_ngram = 89, .cumulative_probability = 5}
};
static uwu_markov_choice scrunkly_ngram11_choices[] = {
    {.next_ngram = 12, .cumulative_probability = 4},
    {.next_ngram = 65, .cumulative_probability = 5}
};
static uwu_markov_choice scrunkly_ngram12_choices[] = {
    {.next_ngram = 13, .cumulative_probability = 4},
    {.next_ngram = 84, .cumulative_probability = 5},
    {.next_ngram = 62, .cumulative_probability = 6},
    {.next_ngram = 172, .cumulative_probability = 7}
};
static uwu_markov_choice scrunkly_ngram13_choices[] = {
    {.next_ngram = 14, .cumulative_probability = 4},
    {.next_ngram = 92, .cumulative_probability = 5}
};
static uwu_markov_choice scrunkly_ngram14_choices[] = {
    {.next_ngram = 15, .cumulative_probability = 4}
};
static uwu_markov_choice scrunkly_ngram15_choices[] = {
    {.next_ngram = 70, .cumulative_probability = 3},
    {.next_ngram = 16, .cumulative_probability = 4}
};
static uwu_markov_choice scrunkly_ngram16_choices[] = {
    {.next_ngram = 17, .cumulative_probability = 3},
    {.next_ngram = 85, .cumulative_probability = 6},
    {.next_ngram = 130, .cumulative_probability = 8},
    {.next_ngram = 119, .cumulative_probability = 9}
};
static uwu_markov_choice scrunkly_ngram17_choices[] = {
    {.next_ngram = 18, .cumulative_probability = 2},
    {.next_ngram = 75, .cumulative_probability = 4},
    {.next_ngram = 98, .cumulative_probability = 5}
};
static uwu_markov_choice scrunkly_ngram18_choices[] = {
    {.next_ngram = 38, .cumulative_probability = 3},
    {.next_ngram = 19, .cumulative_probability = 5}
};
static uwu_markov_choice scrunkly_ngram19_choices[] = {
    {.next_ngram = 59, .cumulative_probability = 2},
    {.next_ngram = 20, .cumulative_probability = 3},
    {.next_ngram = 60, .cumulative_probability = 4},
    {.next_ngram = 3, .cumulative_probability = 5},
    {.next_ngram = 86, .cumulative_probability = 6},
    {.next_ngram = 138, .cumulative_probability = 7}
};
static uwu_markov_choice scrunkly_ngram20_choices[] = {
    {.next_ngram = 27, .cumulative_probability = 6},
    {.next_ngram = 21, .cumulative_probability = 8},
    {.next_ngram = 44, .cumulative_probability = 9}
};
static uwu_markov_choice scrunkly_ngram21_choices[] = {
    {.next_ngram = 22, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram22_choices[] = {
    {.next_ngram = 146, .cumulative_probability = 3},
    {.next_ngram = 23, .cumulative_probability = 5},
    {.next_ngram = 38, .cumulative_probability = 7},
    {.next_ngram = 50, .cumulative_probability = 8}
};
static uwu_markov_choice scrunkly_ngram23_choices[] = {
    {.next_ngram = 24, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram24_choices[] = {
    {.next_ngram = 25, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram25_choices[] = {
    {.next_ngram = 26, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram26_choices[] = {
    {.next_ngram = 8, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram27_choices[] = {
    {.next_ngram = 28, .cumulative_probability = 5},
    {.next_ngram = 62, .cumulative_probability = 6},
    {.next_ngram = 154, .cumulative_probability = 7}
};
static uwu_markov_choice scrunkly_ngram28_choices[] = {
    {.next_ngram = 29, .cumulative_probability = 5}
};
static uwu_markov_choice scrunkly_ngram29_choices[] = {
    {.next_ngram = 30, .cumulative_probability = 2},
    {.next_ngram = 49, .cumulative_probability = 3},
    {.next_ngram = 60, .cumulative_probability = 4},
    {.next_ngram = 59, .cumulative_probability = 5},
    {.next_ngram = 120, .cumulative_probability = 6}
};
static uwu_markov_choice scrunkly_ngram30_choices[] = {
    {.next_ngram = 31, .cumulative_probability = 3},
    {.next_ngram = 61, .cumulative_probability = 5},
    {.next_ngram = 76, .cumulative_probability = 6}
};
static uwu_markov_choice scrunkly_ngram31_choices[] = {
    {.next_ngram = 32, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram32_choices[] = {
    {.next_ngram = 33, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram33_choices[] = {
    {.next_ngram = 34, .cumulative_probability = 2},
    {.next_ngram = 65, .cumulative_probability = 3},
    {.next_ngram = 169, .cumulative_probability = 4}
};
static uwu_markov_choice scrunkly_ngram34_choices[] = {
    {.next_ngram = 35, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram35_choices[] = {
    {.next_ngram = 36, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram36_choices[] = {
    {.next_ngram = 9, .cumulative_probability = 2},
    {.next_ngram = 20, .cumulative_probability = 4},
    {.next_ngram = 30, .cumulative_probability = 5},
    {.next_ngram = 59, .cumulative_probability = 6}
};
static uwu_markov_choice scrunkly_ngram37_choices[] = {
    {.next_ngram = 38, .cumulative_probability = 3},
    {.next_ngram = 19, .cumulative_probability = 4}
};
static uwu_markov_choice scrunkly_ngram38_choices[] = {
    {.next_ngram = 39, .cumulative_probability = 3},
    {.next_ngram = 38, .cumulative_probability = 6},
    {.next_ngram = 19, .cumulative_probability = 9},
    {.next_ngram = 97, .cumulative_probability = 11},
    {.next_ngram = 131, .cumulative_probability = 13},
    {.next_ngram = 156, .cumulative_probability = 14}
};
static uwu_markov_choice scrunkly_ngram39_choices[] = {
    {.next_ngram = 40, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram40_choices[] = {
    {.next_ngram = 41, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram41_choices[] = {
    {.next_ngram = 5, .cumulative_probability = 2},
    {.next_ngram = 11, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram42_choices[] = {
    {.next_ngram = 43, .cumulative_probability = 1},
    {.next_ngram = 114, .cumulative_probability = 2},
    {.next_ngram = 125, .cumulative_probability = 3},
    {.next_ngram = 85, .cumulative_probability = 4}
};
static uwu_markov_choice scrunkly_ngram43_choices[] = {
    {.next_ngram = 44, .cumulative_probability = 4}
};
static uwu_markov_choice scrunkly_ngram44_choices[] = {
    {.next_ngram = 45, .cumulative_probability = 3},
    {.next_ngram = 132, .cumulative_probability = 4},
    {.next_ngram = 46, .cumulative_probability = 5}
};
static uwu_markov_choice scrunkly_ngram45_choices[] = {
    {.next_ngram = 46, .cumulative_probability = 3},
    {.next_ngram = 45, .cumulative_probability = 5}
};
static uwu_markov_choice scrunkly_ngram46_choices[] = {
    {.next_ngram = 9, .cumulative_probability = 2},
    {.next_ngram = 3, .cumulative_probability = 3},
    {.next_ngram = 59, .cumulative_probability = 4},
    {.next_ngram = 82, .cumulative_probability = 5},
    {.next_ngram = 60, .cumulative_probability = 6},
    {.next_ngram = 71, .cumulative_probability = 7}
};
static uwu_markov_choice scrunkly_ngram47_choices[] = {
    {.next_ngram = 48, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram48_choices[] = {
    {.next_ngram = 2, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram49_choices[] = {
    {.next_ngram = 22, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram50_choices[] = {
    {.next_ngram = 51, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram51_choices[] = {
    {.next_ngram = 52, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram52_choices[] = {
    {.next_ngram = 8, .cumulative_probability = 2},
    {.next_ngram = 104, .cumulative_probability = 4},
    {.next_ngram = 4, .cumulative_probability = 6},
    {.next_ngram = 81, .cumulative_probability = 7}
};
static uwu_markov_choice scrunkly_ngram53_choices[] = {
    {.next_ngram = 54, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram54_choices[] = {
    {.next_ngram = 55, .cumulative_probability = 1},
    {.next_ngram = 68, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram55_choices[] = {
    {.next_ngram = 56, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram56_choices[] = {
    {.next_ngram = 57, .cumulative_probability = 1},
    {.next_ngram = 62, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram57_choices[] = {
    {.next_ngram = 58, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram58_choices[] = {
    {.next_ngram = 46, .cumulative_probability = 3},
    {.next_ngram = 143, .cumulative_probability = 4}
};
static uwu_markov_choice scrunkly_ngram59_choices[] = {
    {.next_ngram = 91, .cumulative_probability = 6},
    {.next_ngram = 75, .cumulative_probability = 10},
    {.next_ngram = 18, .cumulative_probability = 13},
    {.next_ngram = 144, .cumulative_probability = 15}
};
static uwu_markov_choice scrunkly_ngram60_choices[] = {
    {.next_ngram = 5, .cumulative_probability = 2},
    {.next_ngram = 135, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram61_choices[] = {
    {.next_ngram = 27, .cumulative_probability = 1},
    {.next_ngram = 136, .cumulative_probability = 2},
    {.next_ngram = 137, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram62_choices[] = {
    {.next_ngram = 9, .cumulative_probability = 2},
    {.next_ngram = 120, .cumulative_probability = 3},
    {.next_ngram = 3, .cumulative_probability = 4}
};
static uwu_markov_choice scrunkly_ngram63_choices[] = {
    {.next_ngram = 64, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram64_choices[] = {
    {.next_ngram = 2, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram65_choices[] = {
    {.next_ngram = 85, .cumulative_probability = 3},
    {.next_ngram = 95, .cumulative_probability = 5},
    {.next_ngram = 66, .cumulative_probability = 6},
    {.next_ngram = 114, .cumulative_probability = 7}
};
static uwu_markov_choice scrunkly_ngram66_choices[] = {
    {.next_ngram = 67, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram67_choices[] = {
    {.next_ngram = 54, .cumulative_probability = 1},
    {.next_ngram = 168, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram68_choices[] = {
    {.next_ngram = 69, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram69_choices[] = {
    {.next_ngram = 70, .cumulative_probability = 1},
    {.next_ngram = 16, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram70_choices[] = {
    {.next_ngram = 59, .cumulative_probability = 4},
    {.next_ngram = 9, .cumulative_probability = 7},
    {.next_ngram = 49, .cumulative_probability = 9},
    {.next_ngram = 20, .cumulative_probability = 11},
    {.next_ngram = 71, .cumulative_probability = 12},
    {.next_ngram = 82, .cumulative_probability = 13},
    {.next_ngram = 86, .cumulative_probability = 14},
    {.next_ngram = 162, .cumulative_probability = 15},
    {.next_ngram = 138, .cumulative_probability = 16}
};
static uwu_markov_choice scrunkly_ngram71_choices[] = {
    {.next_ngram = 117, .cumulative_probability = 4},
    {.next_ngram = 72, .cumulative_probability = 5}
};
static uwu_markov_choice scrunkly_ngram72_choices[] = {
    {.next_ngram = 73, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram73_choices[] = {
    {.next_ngram = 74, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram74_choices[] = {
    {.next_ngram = 43, .cumulative_probability = 1},
    {.next_ngram = 113, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram75_choices[] = {
    {.next_ngram = 76, .cumulative_probability = 6}
};
static uwu_markov_choice scrunkly_ngram76_choices[] = {
    {.next_ngram = 77, .cumulative_probability = 5},
    {.next_ngram = 96, .cumulative_probability = 9}
};
static uwu_markov_choice scrunkly_ngram77_choices[] = {
    {.next_ngram = 78, .cumulative_probability = 5}
};
static uwu_markov_choice scrunkly_ngram78_choices[] = {
    {.next_ngram = 79, .cumulative_probability = 4},
    {.next_ngram = 93, .cumulative_probability = 7},
    {.next_ngram = 123, .cumulative_probability = 8}
};
static uwu_markov_choice scrunkly_ngram79_choices[] = {
    {.next_ngram = 80, .cumulative_probability = 8},
    {.next_ngram = 90, .cumulative_probability = 11},
    {.next_ngram = 110, .cumulative_probability = 12},
    {.next_ngram = 134, .cumulative_probability = 13}
};
static uwu_markov_choice scrunkly_ngram80_choices[] = {
    {.next_ngram = 81, .cumulative_probability = 6},
    {.next_ngram = 8, .cumulative_probability = 8}
};
static uwu_markov_choice scrunkly_ngram81_choices[] = {
    {.next_ngram = 70, .cumulative_probability = 5},
    {.next_ngram = 16, .cumulative_probability = 8}
};
static uwu_markov_choice scrunkly_ngram82_choices[] = {
    {.next_ngram = 83, .cumulative_probability = 2},
    {.next_ngram = 106, .cumulative_probability = 4}
};
static uwu_markov_choice scrunkly_ngram83_choices[] = {
    {.next_ngram = 1, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram84_choices[] = {
    {.next_ngram = 85, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram85_choices[] = {
    {.next_ngram = 0, .cumulative_probability = 8},
    {.next_ngram = 10, .cumulative_probability = 9},
    {.next_ngram = 33, .cumulative_probability = 10}
};
static uwu_markov_choice scrunkly_ngram86_choices[] = {
    {.next_ngram = 87, .cumulative_probability = 3},
    {.next_ngram = 52, .cumulative_probability = 5},
    {.next_ngram = 152, .cumulative_probability = 6}
};
static uwu_markov_choice scrunkly_ngram87_choices[] = {
    {.next_ngram = 88, .cumulative_probability = 4}
};
static uwu_markov_choice scrunkly_ngram88_choices[] = {
    {.next_ngram = 89, .cumulative_probability = 7}
};
static uwu_markov_choice scrunkly_ngram89_choices[] = {
    {.next_ngram = 79, .cumulative_probability = 8},
    {.next_ngram = 93, .cumulative_probability = 11},
    {.next_ngram = 153, .cumulative_probability = 12},
    {.next_ngram = 13, .cumulative_probability = 13},
    {.next_ngram = 173, .cumulative_probability = 14}
};
static uwu_markov_choice scrunkly_ngram90_choices[] = {
    {.next_ngram = 70, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram91_choices[] = {
    {.next_ngram = 148, .cumulative_probability = 3},
    {.next_ngram = 92, .cumulative_probability = 5},
    {.next_ngram = 151, .cumulative_probability = 6}
};
static uwu_markov_choice scrunkly_ngram92_choices[] = {
    {.next_ngram = 78, .cumulative_probability = 2},
    {.next_ngram = 111, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram93_choices[] = {
    {.next_ngram = 133, .cumulative_probability = 4},
    {.next_ngram = 94, .cumulative_probability = 6}
};
static uwu_markov_choice scrunkly_ngram94_choices[] = {
    {.next_ngram = 65, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram95_choices[] = {
    {.next_ngram = 76, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram96_choices[] = {
    {.next_ngram = 89, .cumulative_probability = 4},
    {.next_ngram = 102, .cumulative_probability = 6}
};
static uwu_markov_choice scrunkly_ngram97_choices[] = {
    {.next_ngram = 17, .cumulative_probability = 2},
    {.next_ngram = 43, .cumulative_probability = 4}
};
static uwu_markov_choice scrunkly_ngram98_choices[] = {
    {.next_ngram = 99, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram99_choices[] = {
    {.next_ngram = 100, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram100_choices[] = {
    {.next_ngram = 101, .cumulative_probability = 1},
    {.next_ngram = 88, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram101_choices[] = {
    {.next_ngram = 79, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram102_choices[] = {
    {.next_ngram = 103, .cumulative_probability = 2},
    {.next_ngram = 105, .cumulative_probability = 4}
};
static uwu_markov_choice scrunkly_ngram103_choices[] = {
    {.next_ngram = 52, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram104_choices[] = {
    {.next_ngram = 38, .cumulative_probability = 3},
    {.next_ngram = 97, .cumulative_probability = 4},
    {.next_ngram = 19, .cumulative_probability = 5}
};
static uwu_markov_choice scrunkly_ngram105_choices[] = {
    {.next_ngram = 7, .cumulative_probability = 1},
    {.next_ngram = 42, .cumulative_probability = 2},
    {.next_ngram = 118, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram106_choices[] = {
    {.next_ngram = 107, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram107_choices[] = {
    {.next_ngram = 108, .cumulative_probability = 6}
};
static uwu_markov_choice scrunkly_ngram108_choices[] = {
    {.next_ngram = 109, .cumulative_probability = 3},
    {.next_ngram = 22, .cumulative_probability = 6}
};
static uwu_markov_choice scrunkly_ngram109_choices[] = {
    {.next_ngram = 8, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram110_choices[] = {
    {.next_ngram = 111, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram111_choices[] = {
    {.next_ngram = 112, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram112_choices[] = {
    {.next_ngram = 113, .cumulative_probability = 1},
    {.next_ngram = 85, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram113_choices[] = {
    {.next_ngram = 87, .cumulative_probability = 1},
    {.next_ngram = 164, .cumulative_probability = 2},
    {.next_ngram = 52, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram114_choices[] = {
    {.next_ngram = 83, .cumulative_probability = 1},
    {.next_ngram = 106, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram115_choices[] = {
    {.next_ngram = 116, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram116_choices[] = {
    {.next_ngram = 9, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram117_choices[] = {
    {.next_ngram = 5, .cumulative_probability = 5},
    {.next_ngram = 102, .cumulative_probability = 6}
};
static uwu_markov_choice scrunkly_ngram118_choices[] = {
    {.next_ngram = 70, .cumulative_probability = 2},
    {.next_ngram = 16, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram119_choices[] = {
    {.next_ngram = 62, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram120_choices[] = {
    {.next_ngram = 121, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram121_choices[] = {
    {.next_ngram = 122, .cumulative_probability = 2},
    {.next_ngram = 104, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram122_choices[] = {
    {.next_ngram = 78, .cumulative_probability = 1},
    {.next_ngram = 159, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram123_choices[] = {
    {.next_ngram = 124, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram124_choices[] = {
    {.next_ngram = 20, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram125_choices[] = {
    {.next_ngram = 126, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram126_choices[] = {
    {.next_ngram = 127, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram127_choices[] = {
    {.next_ngram = 128, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram128_choices[] = {
    {.next_ngram = 129, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram129_choices[] = {
    {.next_ngram = 16, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram130_choices[] = {
    {.next_ngram = 104, .cumulative_probability = 2},
    {.next_ngram = 4, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram131_choices[] = {
    {.next_ngram = 117, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram132_choices[] = {
    {.next_ngram = 130, .cumulative_probability = 1},
    {.next_ngram = 113, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram133_choices[] = {
    {.next_ngram = 8, .cumulative_probability = 3},
    {.next_ngram = 81, .cumulative_probability = 4}
};
static uwu_markov_choice scrunkly_ngram134_choices[] = {
    {.next_ngram = 97, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram135_choices[] = {
    {.next_ngram = 61, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram136_choices[] = {
    {.next_ngram = 105, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram137_choices[] = {
    {.next_ngram = 36, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram138_choices[] = {
    {.next_ngram = 141, .cumulative_probability = 3},
    {.next_ngram = 139, .cumulative_probability = 4}
};
static uwu_markov_choice scrunkly_ngram139_choices[] = {
    {.next_ngram = 140, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram140_choices[] = {
    {.next_ngram = 69, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram141_choices[] = {
    {.next_ngram = 142, .cumulative_probability = 3},
    {.next_ngram = 163, .cumulative_probability = 5}
};
static uwu_markov_choice scrunkly_ngram142_choices[] = {
    {.next_ngram = 58, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram143_choices[] = {
    {.next_ngram = 141, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram144_choices[] = {
    {.next_ngram = 145, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram145_choices[] = {
    {.next_ngram = 146, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram146_choices[] = {
    {.next_ngram = 147, .cumulative_probability = 4},
    {.next_ngram = 171, .cumulative_probability = 5}
};
static uwu_markov_choice scrunkly_ngram147_choices[] = {
    {.next_ngram = 59, .cumulative_probability = 1},
    {.next_ngram = 86, .cumulative_probability = 2},
    {.next_ngram = 138, .cumulative_probability = 3},
    {.next_ngram = 3, .cumulative_probability = 4}
};
static uwu_markov_choice scrunkly_ngram148_choices[] = {
    {.next_ngram = 96, .cumulative_probability = 2},
    {.next_ngram = 100, .cumulative_probability = 3}
};
static uwu_markov_choice scrunkly_ngram149_choices[] = {
    {.next_ngram = 150, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram150_choices[] = {
    {.next_ngram = 52, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram151_choices[] = {
    {.next_ngram = 88, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram152_choices[] = {
    {.next_ngram = 89, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram153_choices[] = {
    {.next_ngram = 7, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram154_choices[] = {
    {.next_ngram = 155, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram155_choices[] = {
    {.next_ngram = 29, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram156_choices[] = {
    {.next_ngram = 157, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram157_choices[] = {
    {.next_ngram = 158, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram158_choices[] = {
    {.next_ngram = 121, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram159_choices[] = {
    {.next_ngram = 160, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram160_choices[] = {
    {.next_ngram = 161, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram161_choices[] = {
    {.next_ngram = 16, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram162_choices[] = {
    {.next_ngram = 151, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram163_choices[] = {
    {.next_ngram = 143, .cumulative_probability = 1},
    {.next_ngram = 132, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram164_choices[] = {
    {.next_ngram = 165, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram165_choices[] = {
    {.next_ngram = 166, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram166_choices[] = {
    {.next_ngram = 167, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram167_choices[] = {
    {.next_ngram = 16, .cumulative_probability = 1},
    {.next_ngram = 70, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram168_choices[] = {
    {.next_ngram = 86, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram169_choices[] = {
    {.next_ngram = 170, .cumulative_probability = 1},
    {.next_ngram = 12, .cumulative_probability = 2}
};
static uwu_markov_choice scrunkly_ngram170_choices[] = {
    {.next_ngram = 74, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram171_choices[] = {
    {.next_ngram = 85, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram172_choices[] = {
    {.next_ngram = 70, .cumulative_probability = 1}
};
static uwu_markov_choice scrunkly_ngram173_choices[] = {
    {.next_ngram = 167, .cumulative_probability = 1}
};

static uwu_markov_table scrunkly_ngrams = {
    .specials = scrunkly_specials,
    .initial_ngram=44,
    .num_ngrams=174,
    .ngrams = {
        {.choices = scrunkly_ngram0_choices, .total_probability = 16, .character = 'h'}, // "('t', 'h')"
        {.choices = scrunkly_ngram1_choices, .total_probability = 18, .character = 'e'}, // "('h', 'e')"
        {.choices = scrunkly_ngram2_choices, .total_probability = 30, .character = ' '}, // "('e', ' ')"
        {.choices = scrunkly_ngram3_choices, .total_probability = 8, .character = 'l'}, // "(' ', 'l')"
        {.choices = scrunkly_ngram4_choices, .total_probability = 11, .character = 'i'}, // "('l', 'i')"
        {.choices = scrunkly_ngram5_choices, .total_probability = 12, .character = 't'}, // "('i', 't')"
        {.choices = scrunkly_ngram6_choices, .total_probability = 3, .character = 't'}, // "('t', 't')"
        {.choices = scrunkly_ngram7_choices, .total_probability = 5, .character = 'l'}, // "('t', 'l')"
        {.choices = scrunkly_ngram8_choices, .total_probability = 17, .character = 'e'}, // "('l', 'e')"
        {.choices = scrunkly_ngram9_choices, .total_probability = 16, .character = 't'}, // "(' ', 't')"
        {.choices = scrunkly_ngram10_choices, .total_probability = 5, .character = 'i'}, // "('t', 'i')"
        {.choices = scrunkly_ngram11_choices, .total_probability = 5, .character = 'e'}, // "('i', 'e')"
        {.choices = scrunkly_ngram12_choices, .total_probability = 7, .character = 'n'}, // "('e', 'n')"
        {.choices = scrunkly_ngram13_choices, .total_probability = 5, .character = 'p'}, // "('n', 'p')"
        {.choices = scrunkly_ngram14_choices, .total_probability = 4, .character = 's'}, // "('p', 's')"
        {.choices = scrunkly_ngram15_choices, .total_probability = 4, .character = 'y'}, // "('s', 'y')"
        {.choices = scrunkly_ngram16_choices, .total_probability = 9, .character = -1}, // "('y', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
        {.choices = scrunkly_ngram17_choices, .total_probability = 5, .character = 's'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 's')"
        {.choices = scrunkly_ngram18_choices, .total_probability = 5, .character = 'o'}, // "('s', 'o')"
        {.choices = scrunkly_ngram19_choices, .total_probability = 7, .character = ' '}, // "('o', ' ')"
        {.choices = scrunkly_ngram20_choices, .total_probability = 9, .character = 'a'}, // "(' ', 'a')"
        {.choices = scrunkly_ngram21_choices, .total_probability = 2, .character = 'd'}, // "('a', 'd')"
        {.choices = scrunkly_ngram22_choices, .total_probability = 8, .character = 'o'}, // "('d', 'o')"
        {.choices = scrunkly_ngram23_choices, .total_probability = 2, .character = 'r'}, // "('o', 'r')"
        {.choices = scrunkly_ngram24_choices, .total_probability = 2, .character = 'n'}, // "('r', 'n')"
        {.choices = scrunkly_ngram25_choices, .total_probability = 2, .character = 'a'}, // "('n', 'a')"
        {.choices = scrunkly_ngram26_choices, .total_probability = 2, .character = 'l'}, // "('a', 'l')"
        {.choices = scrunkly_ngram27_choices, .total_probability = 7, .character = 'n'}, // "('a', 'n')"
        {.choices = scrunkly_ngram28_choices, .total_probability = 5, .character = 'd'}, // "('n', 'd')"
        {.choices = scrunkly_ngram29_choices, .total_probability = 6, .character = ' '}, // "('d', ' ')"
        {.choices = scrunkly_ngram30_choices, .total_probability = 6, .character = 'c'}, // "(' ', 'c')"
        {.choices = scrunkly_ngram31_choices, .total_probability = 3, .character = 'u'}, // "('c', 'u')"
        {.choices = scrunkly_ngram32_choices, .total_probability = 3, .character = 't'}, // "('u', 't')"
        {.choices = scrunkly_ngram33_choices, .total_probability = 4, .character = 'e'}, // "('t', 'e')"
        {.choices = scrunkly_ngram34_choices, .total_probability = 2, .character = 's'}, // "('e', 's')"
        {.choices = scrunkly_ngram35_choices, .total_probability = 2, .character = 't'}, // "('s', 't')"
        {.choices = scrunkly_ngram36_choices, .total_probability = 6, .character = ' '}, // "('t', ' ')"
        {.choices = scrunkly_ngram37_choices, .total_probability = 4, .character = 'o'}, // "('t', 'o')"
        {.choices = scrunkly_ngram38_choices, .total_probability = 14, .character = 'o'}, // "('o', 'o')"
        {.choices = scrunkly_ngram39_choices, .total_probability = 3, .character = 't'}, // "('o', 't')"
        {.choices = scrunkly_ngram40_choices, .total_probability = 3, .character = 's'}, // "('t', 's')"
        {.choices = scrunkly_ngram41_choices, .total_probability = 3, .character = 'i'}, // "('s', 'i')"
        {.choices = scrunkly_ngram42_choices, .total_probability = 4, .character = -1}, // "('t', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
        {.choices = scrunkly_ngram43_choices, .total_probability = 4, .character = 'a'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'a')"
        {.choices = scrunkly_ngram44_choices, .total_probability = 5, .character = 'w'}, // "('a', 'w')"
        {.choices = scrunkly_ngram45_choices, .total_probability = 5, .character = 'w'}, // "('w', 'w')"
        {.choices = scrunkly_ngram46_choices, .total_probability = 7, .character = ' '}, // "('w', ' ')"
        {.choices = scrunkly_ngram47_choices, .total_probability = 1, .character = 'k'}, // "('i', 'k')"
        {.choices = scrunkly_ngram48_choices, .total_probability = 1, .character = 'e'}, // "('k', 'e')"
        {.choices = scrunkly_ngram49_choices, .total_probability = 3, .character = 'd'}, // "(' ', 'd')"
        {.choices = scrunkly_ngram50_choices, .total_probability = 1, .character = 'u'}, // "('o', 'u')"
        {.choices = scrunkly_ngram51_choices, .total_probability = 1, .character = 'b'}, // "('u', 'b')"
        {.choices = scrunkly_ngram52_choices, .total_probability = 7, .character = 'l'}, // "('b', 'l')"
        {.choices = scrunkly_ngram53_choices, .total_probability = 1, .character = 'a'}, // "('t', 'a')"
        {.choices = scrunkly_ngram54_choices, .total_probability = 2, .character = 'p'}, // "('a', 'p')"
        {.choices = scrunkly_ngram55_choices, .total_probability = 1, .character = ' '}, // "('p', ' ')"
        {.choices = scrunkly_ngram56_choices, .total_probability = 2, .character = 'n'}, // "(' ', 'n')"
        {.choices = scrunkly_ngram57_choices, .total_probability = 1, .character = 'o'}, // "('n', 'o')"
        {.choices = scrunkly_ngram58_choices, .total_probability = 4, .character = 'w'}, // "('o', 'w')"
        {.choices = scrunkly_ngram59_choices, .total_probability = 15, .character = 's'}, // "(' ', 's')"
        {.choices = scrunkly_ngram60_choices, .total_probability = 3, .character = 'i'}, // "(' ', 'i')"
        {.choices = scrunkly_ngram61_choices, .total_probability = 3, .character = 'a'}, // "('c', 'a')"
        {.choices = scrunkly_ngram62_choices, .total_probability = 4, .character = ' '}, // "('n', ' ')"
        {.choices = scrunkly_ngram63_choices, .total_probability = 1, .character = 'v'}, // "('i', 'v')"
        {.choices = scrunkly_ngram64_choices, .total_probability = 1, .character = 'e'}, // "('v', 'e')"
        {.choices = scrunkly_ngram65_choices, .total_probability = 7, .character = -1}, // "('e', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
        {.choices = scrunkly_ngram66_choices, .total_probability = 1, .character = 'h'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'h')"
        {.choices = scrunkly_ngram67_choices, .total_probability = 2, .character = 'a'}, // "('h', 'a')"
        {.choices = scrunkly_ngram68_choices, .total_probability = 1, .character = 'p'}, // "('p', 'p')"
        {.choices = scrunkly_ngram69_choices, .total_probability = 2, .character = 'y'}, // "('p', 'y')"
        {.choices = scrunkly_ngram70_choices, .total_probability = 16, .character = ' '}, // "('y', ' ')"
        {.choices = scrunkly_ngram71_choices, .total_probability = 5, .character = 'k'}, // "(' ', 'k')"
        {.choices = scrunkly_ngram72_choices, .total_probability = 1, .character = 'd'}, // "('k', 'd')"
        {.choices = scrunkly_ngram73_choices, .total_probability = 1, .character = 'b'}, // "('d', 'b')"
        {.choices = scrunkly_ngram74_choices, .total_probability = 2, .character = -1}, // "('b', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
        {.choices = scrunkly_ngram75_choices, .total_probability = 6, .character = 'c'}, // "('s', 'c')"
        {.choices = scrunkly_ngram76_choices, .total_probability = 9, .character = 'r'}, // "('c', 'r')"
        {.choices = scrunkly_ngram77_choices, .total_probability = 5, .character = 'u'}, // "('r', 'u')"
        {.choices = scrunkly_ngram78_choices, .total_probability = 8, .character = 'n'}, // "('u', 'n')"
        {.choices = scrunkly_ngram79_choices, .total_probability = 13, .character = 'k'}, // "('n', 'k')"
        {.choices = scrunkly_ngram80_choices, .total_probability = 8, .character = 'l'}, // "('k', 'l')"
        {.choices = scrunkly_ngram81_choices, .total_probability = 8, .character = 'y'}, // "('l', 'y')"
        {.choices = scrunkly_ngram82_choices, .total_probability = 4, .character = 'w'}, // "(' ', 'w')"
        {.choices = scrunkly_ngram83_choices, .total_probability = 3, .character = 'h'}, // "('w', 'h')"
        {.choices = scrunkly_ngram84_choices, .total_probability = 1, .character = -1}, // "('n', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
        {.choices = scrunkly_ngram85_choices, .total_probability = 10, .character = 't'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 't')"
        {.choices = scrunkly_ngram86_choices, .total_probability = 6, .character = 'b'}, // "(' ', 'b')"
        {.choices = scrunkly_ngram87_choices, .total_probability = 4, .character = 'o'}, // "('b', 'o')"
        {.choices = scrunkly_ngram88_choices, .total_probability = 7, .character = 'i'}, // "('o', 'i')"
        {.choices = scrunkly_ngram89_choices, .total_probability = 14, .character = 'n'}, // "('i', 'n')"
        {.choices = scrunkly_ngram90_choices, .total_probability = 3, .character = 'y'}, // "('k', 'y')"
        {.choices = scrunkly_ngram91_choices, .total_probability = 6, .character = 'p'}, // "('s', 'p')"
        {.choices = scrunkly_ngram92_choices, .total_probability = 3, .character = 'u'}, // "('p', 'u')"
        {.choices = scrunkly_ngram93_choices, .total_probability = 6, .character = 'g'}, // "('n', 'g')"
        {.choices = scrunkly_ngram94_choices, .total_probability = 2, .character = 'e'}, // "('g', 'e')"
        {.choices = scrunkly_ngram95_choices, .total_probability = 2, .character = 'c'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'c')"
        {.choices = scrunkly_ngram96_choices, .total_probability = 6, .character = 'i'}, // "('r', 'i')"
        {.choices = scrunkly_ngram97_choices, .total_probability = 4, .character = -1}, // "('o', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
        {.choices = scrunkly_ngram98_choices, .total_probability = 1, .character = 'h'}, // "('s', 'h')"
        {.choices = scrunkly_ngram99_choices, .total_probability = 1, .character = 'r'}, // "('h', 'r')"
        {.choices = scrunkly_ngram100_choices, .total_probability = 2, .character = 'o'}, // "('r', 'o')"
        {.choices = scrunkly_ngram101_choices, .total_probability = 1, .character = 'n'}, // "('o', 'n')"
        {.choices = scrunkly_ngram102_choices, .total_probability = 4, .character = 'm'}, // "('i', 'm')"
        {.choices = scrunkly_ngram103_choices, .total_probability = 2, .character = 'b'}, // "('m', 'b')"
        {.choices = scrunkly_ngram104_choices, .total_probability = 5, .character = 'o'}, // "('l', 'o')"
        {.choices = scrunkly_ngram105_choices, .total_probability = 3, .character = 't'}, // "('m', 't')"
        {.choices = scrunkly_ngram106_choices, .total_probability = 3, .character = 'i'}, // "('w', 'i')"
        {.choices = scrunkly_ngram107_choices, .total_probability = 6, .character = 'd'}, // "('i', 'd')"
        {.choices = scrunkly_ngram108_choices, .total_probability = 6, .character = 'd'}, // "('d', 'd')"
        {.choices = scrunkly_ngram109_choices, .total_probability = 3, .character = 'l'}, // "('d', 'l')"
        {.choices = scrunkly_ngram110_choices, .total_probability = 1, .character = 'u'}, // "('k', 'u')"
        {.choices = scrunkly_ngram111_choices, .total_probability = 2, .character = 's'}, // "('u', 's')"
        {.choices = scrunkly_ngram112_choices, .total_probability = 2, .character = -1}, // "('s', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
        {.choices = scrunkly_ngram113_choices, .total_probability = 3, .character = 'b'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'b')"
        {.choices = scrunkly_ngram114_choices, .total_probability = 2, .character = 'w'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'w')"
        {.choices = scrunkly_ngram115_choices, .total_probability = 1, .character = 'm'}, // "('e', 'm')"
        {.choices = scrunkly_ngram116_choices, .total_probability = 1, .character = ' '}, // "('m', ' ')"
        {.choices = scrunkly_ngram117_choices, .total_probability = 6, .character = 'i'}, // "('k', 'i')"
        {.choices = scrunkly_ngram118_choices, .total_probability = 3, .character = 'y'}, // "('t', 'y')"
        {.choices = scrunkly_ngram119_choices, .total_probability = 1, .character = 'n'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'n')"
        {.choices = scrunkly_ngram120_choices, .total_probability = 2, .character = 'f'}, // "(' ', 'f')"
        {.choices = scrunkly_ngram121_choices, .total_probability = 3, .character = 'l'}, // "('f', 'l')"
        {.choices = scrunkly_ngram122_choices, .total_probability = 2, .character = 'u'}, // "('l', 'u')"
        {.choices = scrunkly_ngram123_choices, .total_probability = 1, .character = 'f'}, // "('n', 'f')"
        {.choices = scrunkly_ngram124_choices, .total_probability = 1, .character = ' '}, // "('f', ' ')"
        {.choices = scrunkly_ngram125_choices, .total_probability = 1, .character = 'i'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'i')"
        {.choices = scrunkly_ngram126_choices, .total_probability = 1, .character = -1}, // "('i', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
        {.choices = scrunkly_ngram127_choices, .total_probability = 1, .character = 'y'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'y')"
        {.choices = scrunkly_ngram128_choices, .total_probability = 1, .character = 'a'}, // "('y', 'a')"
        {.choices = scrunkly_ngram129_choices, .total_probability = 1, .character = 'y'}, // "('a', 'y')"
        {.choices = scrunkly_ngram130_choices, .total_probability = 3, .character = 'l'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'l')"
        {.choices = scrunkly_ngram131_choices, .total_probability = 2, .character = 'k'}, // "('o', 'k')"
        {.choices = scrunkly_ngram132_choices, .total_probability = 2, .character = -1}, // "('w', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
        {.choices = scrunkly_ngram133_choices, .total_probability = 4, .character = 'l'}, // "('g', 'l')"
        {.choices = scrunkly_ngram134_choices, .total_probability = 1, .character = 'o'}, // "('k', 'o')"
        {.choices = scrunkly_ngram135_choices, .total_probability = 1, .character = 'c'}, // "('i', 'c')"
        {.choices = scrunkly_ngram136_choices, .total_probability = 1, .character = 'm'}, // "('a', 'm')"
        {.choices = scrunkly_ngram137_choices, .total_probability = 1, .character = 't'}, // "('a', 't')"
        {.choices = scrunkly_ngram138_choices, .total_probability = 4, .character = 'm'}, // "(' ', 'm')"
        {.choices = scrunkly_ngram139_choices, .total_probability = 1, .character = 'i'}, // "('m', 'i')"
        {.choices = scrunkly_ngram140_choices, .total_probability = 1, .character = 'p'}, // "('i', 'p')"
        {.choices = scrunkly_ngram141_choices, .total_probability = 5, .character = 'e'}, // "('m', 'e')"
        {.choices = scrunkly_ngram142_choices, .total_probability = 3, .character = 'o'}, // "('e', 'o')"
        {.choices = scrunkly_ngram143_choices, .total_probability = 2, .character = 'm'}, // "('w', 'm')"
        {.choices = scrunkly_ngram144_choices, .total_probability = 2, .character = 'm'}, // "('s', 'm')"
        {.choices = scrunkly_ngram145_choices, .total_probability = 2, .character = 'o'}, // "('m', 'o')"
        {.choices = scrunkly_ngram146_choices, .total_probability = 5, .character = 'l'}, // "('o', 'l')"
        {.choices = scrunkly_ngram147_choices, .total_probability = 4, .character = ' '}, // "('l', ' ')"
        {.choices = scrunkly_ngram148_choices, .total_probability = 3, .character = 'r'}, // "('p', 'r')"
        {.choices = scrunkly_ngram149_choices, .total_probability = 1, .character = 'b'}, // "('i', 'b')"
        {.choices = scrunkly_ngram150_choices, .total_probability = 1, .character = 'b'}, // "('b', 'b')"
        {.choices = scrunkly_ngram151_choices, .total_probability = 2, .character = 'o'}, // "('p', 'o')"
        {.choices = scrunkly_ngram152_choices, .total_probability = 1, .character = 'i'}, // "('b', 'i')"
        {.choices = scrunkly_ngram153_choices, .total_probability = 1, .character = 't'}, // "('n', 't')"
        {.choices = scrunkly_ngram154_choices, .total_probability = 1, .character = 'm'}, // "('n', 'm')"
        {.choices = scrunkly_ngram155_choices, .total_probability = 1, .character = 'd'}, // "('m', 'd')"
        {.choices = scrunkly_ngram156_choices, .total_probability = 1, .character = 'f'}, // "('o', 'f')"
        {.choices = scrunkly_ngram157_choices, .total_probability = 1, .character = -1}, // "('f', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
        {.choices = scrunkly_ngram158_choices, .total_probability = 1, .character = 'f'}, // "(<SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>, 'f')"
        {.choices = scrunkly_ngram159_choices, .total_probability = 1, .character = 'm'}, // "('u', 'm')"
        {.choices = scrunkly_ngram160_choices, .total_probability = 1, .character = 'f'}, // "('m', 'f')"
        {.choices = scrunkly_ngram161_choices, .total_probability = 1, .character = 'y'}, // "('f', 'y')"
        {.choices = scrunkly_ngram162_choices, .total_probability = 1, .character = 'p'}, // "(' ', 'p')"
        {.choices = scrunkly_ngram163_choices, .total_probability = 2, .character = 'w'}, // "('e', 'w')"
        {.choices = scrunkly_ngram164_choices, .total_probability = 1, .character = 'a'}, // "('b', 'a')"
        {.choices = scrunkly_ngram165_choices, .total_probability = 1, .character = 'b'}, // "('a', 'b')"
        {.choices = scrunkly_ngram166_choices, .total_probability = 1, .character = 'e'}, // "('b', 'e')"
        {.choices = scrunkly_ngram167_choices, .total_probability = 2, .character = 'y'}, // "('e', 'y')"
        {.choices = scrunkly_ngram168_choices, .total_probability = 1, .character = ' '}, // "('a', ' ')"
        {.choices = scrunkly_ngram169_choices, .total_probability = 2, .character = 'e'}, // "('e', 'e')"
        {.choices = scrunkly_ngram170_choices, .total_probability = 1, .character = 'b'}, // "('e', 'b')"
        {.choices = scrunkly_ngram171_choices, .total_probability = 1, .character = -1}, // "('l', <SpecialMarkov.SCRUNKLY_PUNCTUATION: -1>)"
        {.choices = scrunkly_ngram172_choices, .total_probability = 1, .character = 'y'}, // "('n', 'y')"
        {.choices = scrunkly_ngram173_choices, .total_probability = 1, .character = 'e'}, // "('n', 'e')"
    }
};

#endif
