#ifndef _UWURANDOM_MARKOV_DATA_H
#define _UWURANDOM_MARKOV_DATA_H

#include "uwurandom_types.h"

static struct uwu_markov_choice catnonsense_ngram0_choices[] = {
    {.next_ngram = 0, .cumulative_probability = 2},
    {.next_ngram = 1, .cumulative_probability = 3}
};
static struct uwu_markov_choice catnonsense_ngram1_choices[] = {
    {.next_ngram = 7, .cumulative_probability = 3},
    {.next_ngram = 6, .cumulative_probability = 4}
};
static struct uwu_markov_choice catnonsense_ngram2_choices[] = {
    {.next_ngram = 8, .cumulative_probability = 1}
};
static struct uwu_markov_choice catnonsense_ngram3_choices[] = {
    {.next_ngram = 9, .cumulative_probability = 1}
};
static struct uwu_markov_choice catnonsense_ngram4_choices[] = {
    {.next_ngram = 9, .cumulative_probability = 1}
};
static struct uwu_markov_choice catnonsense_ngram5_choices[] = {
    {.next_ngram = 21, .cumulative_probability = 6},
    {.next_ngram = 22, .cumulative_probability = 7},
    {.next_ngram = 23, .cumulative_probability = 8}
};
static struct uwu_markov_choice catnonsense_ngram6_choices[] = {
    {.next_ngram = 4, .cumulative_probability = 3},
    {.next_ngram = 5, .cumulative_probability = 5}
};
static struct uwu_markov_choice catnonsense_ngram7_choices[] = {
    {.next_ngram = 16, .cumulative_probability = 15},
    {.next_ngram = 12, .cumulative_probability = 24},
    {.next_ngram = 18, .cumulative_probability = 28},
    {.next_ngram = 19, .cumulative_probability = 29},
    {.next_ngram = 13, .cumulative_probability = 30}
};
static struct uwu_markov_choice catnonsense_ngram8_choices[] = {
    {.next_ngram = 26, .cumulative_probability = 1}
};
static struct uwu_markov_choice catnonsense_ngram9_choices[] = {
    {.next_ngram = 21, .cumulative_probability = 22},
    {.next_ngram = 24, .cumulative_probability = 32},
    {.next_ngram = 22, .cumulative_probability = 36},
    {.next_ngram = 25, .cumulative_probability = 37},
    {.next_ngram = 23, .cumulative_probability = 38}
};
static struct uwu_markov_choice catnonsense_ngram10_choices[] = {
    {.next_ngram = 11, .cumulative_probability = 1}
};
static struct uwu_markov_choice catnonsense_ngram11_choices[] = {
    {.next_ngram = 20, .cumulative_probability = 1}
};
static struct uwu_markov_choice catnonsense_ngram12_choices[] = {
    {.next_ngram = 3, .cumulative_probability = 1}
};
static struct uwu_markov_choice catnonsense_ngram13_choices[] = {
    {.next_ngram = 4, .cumulative_probability = 1}
};
static struct uwu_markov_choice catnonsense_ngram14_choices[] = {
    {.next_ngram = 7, .cumulative_probability = 1},
    {.next_ngram = 6, .cumulative_probability = 2}
};
static struct uwu_markov_choice catnonsense_ngram15_choices[] = {
    {.next_ngram = 8, .cumulative_probability = 1}
};
static struct uwu_markov_choice catnonsense_ngram16_choices[] = {
    {.next_ngram = 9, .cumulative_probability = 1}
};
static struct uwu_markov_choice catnonsense_ngram17_choices[] = {
    {.next_ngram = 10, .cumulative_probability = 1}
};
static struct uwu_markov_choice catnonsense_ngram18_choices[] = {
    {.next_ngram = 18, .cumulative_probability = 7},
    {.next_ngram = 14, .cumulative_probability = 10},
    {.next_ngram = 16, .cumulative_probability = 13},
    {.next_ngram = 17, .cumulative_probability = 14}
};
static struct uwu_markov_choice catnonsense_ngram19_choices[] = {
    {.next_ngram = 21, .cumulative_probability = 1}
};
static struct uwu_markov_choice catnonsense_ngram20_choices[] = {
    {.next_ngram = 18, .cumulative_probability = 1}
};
static struct uwu_markov_choice catnonsense_ngram21_choices[] = {
    {.next_ngram = 7, .cumulative_probability = 17},
    {.next_ngram = 6, .cumulative_probability = 30}
};
static struct uwu_markov_choice catnonsense_ngram22_choices[] = {
    {.next_ngram = 8, .cumulative_probability = 1}
};
static struct uwu_markov_choice catnonsense_ngram23_choices[] = {
    {.next_ngram = 11, .cumulative_probability = 1}
};
static struct uwu_markov_choice catnonsense_ngram24_choices[] = {
    {.next_ngram = 14, .cumulative_probability = 7},
    {.next_ngram = 15, .cumulative_probability = 10}
};
static struct uwu_markov_choice catnonsense_ngram25_choices[] = {
    {.next_ngram = 25, .cumulative_probability = 3},
    {.next_ngram = 21, .cumulative_probability = 4}
};
static struct uwu_markov_choice catnonsense_ngram26_choices[] = {
    {.next_ngram = 0, .cumulative_probability = 4},
    {.next_ngram = 2, .cumulative_probability = 5},
    {.next_ngram = 1, .cumulative_probability = 6}
};

static uwu_markov_ngram catnonsense_ngrams[] = {
    {.choices = catnonsense_ngram0_choices, .total_probability = 3, .character = 'a'}, // "aa"
    {.choices = catnonsense_ngram1_choices, .total_probability = 4, .character = 'm'}, // "am"
    {.choices = catnonsense_ngram2_choices, .total_probability = 1, .character = 'n'}, // "an"
    {.choices = catnonsense_ngram3_choices, .total_probability = 1, .character = 'o'}, // "ao"
    {.choices = catnonsense_ngram4_choices, .total_probability = 1, .character = 'o'}, // "eo"
    {.choices = catnonsense_ngram5_choices, .total_probability = 8, .character = 'w'}, // "ew"
    {.choices = catnonsense_ngram6_choices, .total_probability = 5, .character = 'e'}, // "me"
    {.choices = catnonsense_ngram7_choices, .total_probability = 30, .character = 'r'}, // "mr"
    {.choices = catnonsense_ngram8_choices, .total_probability = 1, .character = 'y'}, // "ny"
    {.choices = catnonsense_ngram9_choices, .total_probability = 38, .character = 'w'}, // "ow"
    {.choices = catnonsense_ngram10_choices, .total_probability = 1, .character = 'p'}, // "pp"
    {.choices = catnonsense_ngram11_choices, .total_probability = 1, .character = 'u'}, // "pu"
    {.choices = catnonsense_ngram12_choices, .total_probability = 1, .character = 'a'}, // "ra"
    {.choices = catnonsense_ngram13_choices, .total_probability = 1, .character = 'e'}, // "re"
    {.choices = catnonsense_ngram14_choices, .total_probability = 2, .character = 'm'}, // "rm"
    {.choices = catnonsense_ngram15_choices, .total_probability = 1, .character = 'n'}, // "rn"
    {.choices = catnonsense_ngram16_choices, .total_probability = 1, .character = 'o'}, // "ro"
    {.choices = catnonsense_ngram17_choices, .total_probability = 1, .character = 'p'}, // "rp"
    {.choices = catnonsense_ngram18_choices, .total_probability = 14, .character = 'r'}, // "rr"
    {.choices = catnonsense_ngram19_choices, .total_probability = 1, .character = 'w'}, // "rw"
    {.choices = catnonsense_ngram20_choices, .total_probability = 1, .character = 'r'}, // "ur"
    {.choices = catnonsense_ngram21_choices, .total_probability = 30, .character = 'm'}, // "wm"
    {.choices = catnonsense_ngram22_choices, .total_probability = 1, .character = 'n'}, // "wn"
    {.choices = catnonsense_ngram23_choices, .total_probability = 1, .character = 'p'}, // "wp"
    {.choices = catnonsense_ngram24_choices, .total_probability = 10, .character = 'r'}, // "wr"
    {.choices = catnonsense_ngram25_choices, .total_probability = 4, .character = 'w'}, // "ww"
    {.choices = catnonsense_ngram26_choices, .total_probability = 6, .character = 'a'} // "ya"
};
static struct uwu_markov_choice keysmash_ngram0_choices[] = {
    {.next_ngram = 1, .cumulative_probability = 4},
    {.next_ngram = 10, .cumulative_probability = 5},
    {.next_ngram = 3, .cumulative_probability = 6},
    {.next_ngram = 11, .cumulative_probability = 7},
    {.next_ngram = 7, .cumulative_probability = 8}
};
static struct uwu_markov_choice keysmash_ngram1_choices[] = {
    {.next_ngram = 7, .cumulative_probability = 7},
    {.next_ngram = 9, .cumulative_probability = 13},
    {.next_ngram = 5, .cumulative_probability = 18},
    {.next_ngram = 11, .cumulative_probability = 21},
    {.next_ngram = 16, .cumulative_probability = 24},
    {.next_ngram = 6, .cumulative_probability = 26},
    {.next_ngram = 3, .cumulative_probability = 28},
    {.next_ngram = 0, .cumulative_probability = 29},
    {.next_ngram = 14, .cumulative_probability = 30}
};
static struct uwu_markov_choice keysmash_ngram2_choices[] = {
    {.next_ngram = 10, .cumulative_probability = 1},
    {.next_ngram = 1, .cumulative_probability = 2},
    {.next_ngram = 7, .cumulative_probability = 3}
};
static struct uwu_markov_choice keysmash_ngram3_choices[] = {
    {.next_ngram = 5, .cumulative_probability = 7},
    {.next_ngram = 7, .cumulative_probability = 12},
    {.next_ngram = 15, .cumulative_probability = 13},
    {.next_ngram = 6, .cumulative_probability = 14},
    {.next_ngram = 10, .cumulative_probability = 15},
    {.next_ngram = 9, .cumulative_probability = 16},
    {.next_ngram = 2, .cumulative_probability = 17}
};
static struct uwu_markov_choice keysmash_ngram4_choices[] = {
    {.next_ngram = 6, .cumulative_probability = 1}
};
static struct uwu_markov_choice keysmash_ngram5_choices[] = {
    {.next_ngram = 6, .cumulative_probability = 12},
    {.next_ngram = 10, .cumulative_probability = 16},
    {.next_ngram = 9, .cumulative_probability = 19},
    {.next_ngram = 11, .cumulative_probability = 21},
    {.next_ngram = 7, .cumulative_probability = 23},
    {.next_ngram = 3, .cumulative_probability = 25},
    {.next_ngram = 1, .cumulative_probability = 26}
};
static struct uwu_markov_choice keysmash_ngram6_choices[] = {
    {.next_ngram = 1, .cumulative_probability = 8},
    {.next_ngram = 7, .cumulative_probability = 14},
    {.next_ngram = 0, .cumulative_probability = 18},
    {.next_ngram = 9, .cumulative_probability = 22},
    {.next_ngram = 11, .cumulative_probability = 25},
    {.next_ngram = 2, .cumulative_probability = 27},
    {.next_ngram = 5, .cumulative_probability = 29},
    {.next_ngram = 3, .cumulative_probability = 30},
    {.next_ngram = 15, .cumulative_probability = 31},
    {.next_ngram = 10, .cumulative_probability = 32},
    {.next_ngram = 16, .cumulative_probability = 33},
    {.next_ngram = 12, .cumulative_probability = 34}
};
static struct uwu_markov_choice keysmash_ngram7_choices[] = {
    {.next_ngram = 6, .cumulative_probability = 7},
    {.next_ngram = 9, .cumulative_probability = 11},
    {.next_ngram = 5, .cumulative_probability = 14},
    {.next_ngram = 10, .cumulative_probability = 17},
    {.next_ngram = 1, .cumulative_probability = 20},
    {.next_ngram = 3, .cumulative_probability = 23},
    {.next_ngram = 8, .cumulative_probability = 25},
    {.next_ngram = 14, .cumulative_probability = 27},
    {.next_ngram = 0, .cumulative_probability = 28},
    {.next_ngram = 12, .cumulative_probability = 29},
    {.next_ngram = 7, .cumulative_probability = 30},
    {.next_ngram = 16, .cumulative_probability = 31}
};
static struct uwu_markov_choice keysmash_ngram8_choices[] = {
    {.next_ngram = 16, .cumulative_probability = 1}
};
static struct uwu_markov_choice keysmash_ngram9_choices[] = {
    {.next_ngram = 7, .cumulative_probability = 5},
    {.next_ngram = 3, .cumulative_probability = 9},
    {.next_ngram = 10, .cumulative_probability = 12},
    {.next_ngram = 5, .cumulative_probability = 15},
    {.next_ngram = 1, .cumulative_probability = 17},
    {.next_ngram = 14, .cumulative_probability = 18},
    {.next_ngram = 4, .cumulative_probability = 19},
    {.next_ngram = 13, .cumulative_probability = 20},
    {.next_ngram = 11, .cumulative_probability = 21},
    {.next_ngram = 6, .cumulative_probability = 22}
};
static struct uwu_markov_choice keysmash_ngram10_choices[] = {
    {.next_ngram = 1, .cumulative_probability = 6},
    {.next_ngram = 5, .cumulative_probability = 10},
    {.next_ngram = 6, .cumulative_probability = 13},
    {.next_ngram = 9, .cumulative_probability = 16},
    {.next_ngram = 15, .cumulative_probability = 17},
    {.next_ngram = 3, .cumulative_probability = 18},
    {.next_ngram = 11, .cumulative_probability = 19},
    {.next_ngram = 7, .cumulative_probability = 20}
};
static struct uwu_markov_choice keysmash_ngram11_choices[] = {
    {.next_ngram = 10, .cumulative_probability = 4},
    {.next_ngram = 0, .cumulative_probability = 6},
    {.next_ngram = 15, .cumulative_probability = 7},
    {.next_ngram = 6, .cumulative_probability = 8},
    {.next_ngram = 5, .cumulative_probability = 9},
    {.next_ngram = 3, .cumulative_probability = 10},
    {.next_ngram = 1, .cumulative_probability = 11}
};
static struct uwu_markov_choice keysmash_ngram12_choices[] = {
    {.next_ngram = 6, .cumulative_probability = 1},
    {.next_ngram = 7, .cumulative_probability = 2}
};
static struct uwu_markov_choice keysmash_ngram13_choices[] = {
    {.next_ngram = 6, .cumulative_probability = 1}
};
static struct uwu_markov_choice keysmash_ngram14_choices[] = {
    {.next_ngram = 6, .cumulative_probability = 4},
    {.next_ngram = 1, .cumulative_probability = 6},
    {.next_ngram = 7, .cumulative_probability = 7}
};
static struct uwu_markov_choice keysmash_ngram15_choices[] = {
    {.next_ngram = 3, .cumulative_probability = 1},
    {.next_ngram = 10, .cumulative_probability = 2}
};
static struct uwu_markov_choice keysmash_ngram16_choices[] = {
    {.next_ngram = 14, .cumulative_probability = 3},
    {.next_ngram = 1, .cumulative_probability = 4},
    {.next_ngram = 5, .cumulative_probability = 5},
    {.next_ngram = 9, .cumulative_probability = 6},
    {.next_ngram = 4, .cumulative_probability = 7}
};

static uwu_markov_ngram keysmash_ngrams[] = {
    {.choices = keysmash_ngram0_choices, .total_probability = 8, .character = ';'}, // ";"
    {.choices = keysmash_ngram1_choices, .total_probability = 30, .character = 'a'}, // "a"
    {.choices = keysmash_ngram2_choices, .total_probability = 3, .character = 'b'}, // "b"
    {.choices = keysmash_ngram3_choices, .total_probability = 17, .character = 'd'}, // "d"
    {.choices = keysmash_ngram4_choices, .total_probability = 1, .character = 'e'}, // "e"
    {.choices = keysmash_ngram5_choices, .total_probability = 26, .character = 'f'}, // "f"
    {.choices = keysmash_ngram6_choices, .total_probability = 34, .character = 'g'}, // "g"
    {.choices = keysmash_ngram7_choices, .total_probability = 31, .character = 'h'}, // "h"
    {.choices = keysmash_ngram8_choices, .total_probability = 1, .character = 'i'}, // "i"
    {.choices = keysmash_ngram9_choices, .total_probability = 22, .character = 'j'}, // "j"
    {.choices = keysmash_ngram10_choices, .total_probability = 20, .character = 'k'}, // "k"
    {.choices = keysmash_ngram11_choices, .total_probability = 11, .character = 'l'}, // "l"
    {.choices = keysmash_ngram12_choices, .total_probability = 2, .character = 'n'}, // "n"
    {.choices = keysmash_ngram13_choices, .total_probability = 1, .character = 'o'}, // "o"
    {.choices = keysmash_ngram14_choices, .total_probability = 7, .character = 'r'}, // "r"
    {.choices = keysmash_ngram15_choices, .total_probability = 2, .character = 's'}, // "s"
    {.choices = keysmash_ngram16_choices, .total_probability = 7, .character = 'u'} // "u"
};
static struct uwu_markov_choice scrunkly_ngram0_choices[] = {
    {.next_ngram = 34, .cumulative_probability = 500},
    {.next_ngram = 37, .cumulative_probability = 867},
    {.next_ngram = 31, .cumulative_probability = 1067}
};
static struct uwu_markov_choice scrunkly_ngram1_choices[] = {
    {.next_ngram = 43, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram2_choices[] = {
    {.next_ngram = 46, .cumulative_probability = 60},
    {.next_ngram = 45, .cumulative_probability = 107},
    {.next_ngram = 44, .cumulative_probability = 147}
};
static struct uwu_markov_choice scrunkly_ngram3_choices[] = {
    {.next_ngram = 51, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram4_choices[] = {
    {.next_ngram = 61, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram5_choices[] = {
    {.next_ngram = 64, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram6_choices[] = {
    {.next_ngram = 77, .cumulative_probability = 200},
    {.next_ngram = 70, .cumulative_probability = 300},
    {.next_ngram = 68, .cumulative_probability = 325},
    {.next_ngram = 67, .cumulative_probability = 349},
    {.next_ngram = 69, .cumulative_probability = 364}
};
static struct uwu_markov_choice scrunkly_ngram7_choices[] = {
    {.next_ngram = 81, .cumulative_probability = 2},
    {.next_ngram = 79, .cumulative_probability = 3}
};
static struct uwu_markov_choice scrunkly_ngram8_choices[] = {
    {.next_ngram = 88, .cumulative_probability = 4},
    {.next_ngram = 89, .cumulative_probability = 5}
};
static struct uwu_markov_choice scrunkly_ngram9_choices[] = {
    {.next_ngram = 95, .cumulative_probability = 1},
    {.next_ngram = 94, .cumulative_probability = 2}
};
static struct uwu_markov_choice scrunkly_ngram10_choices[] = {
    {.next_ngram = 107, .cumulative_probability = 50},
    {.next_ngram = 98, .cumulative_probability = 81}
};
static struct uwu_markov_choice scrunkly_ngram11_choices[] = {
    {.next_ngram = 135, .cumulative_probability = 535},
    {.next_ngram = 140, .cumulative_probability = 835},
    {.next_ngram = 139, .cumulative_probability = 1100},
    {.next_ngram = 138, .cumulative_probability = 1200},
    {.next_ngram = 136, .cumulative_probability = 1271}
};
static struct uwu_markov_choice scrunkly_ngram12_choices[] = {
    {.next_ngram = 149, .cumulative_probability = 262},
    {.next_ngram = 152, .cumulative_probability = 362},
    {.next_ngram = 150, .cumulative_probability = 453},
    {.next_ngram = 147, .cumulative_probability = 478}
};
static struct uwu_markov_choice scrunkly_ngram13_choices[] = {
    {.next_ngram = 165, .cumulative_probability = 11},
    {.next_ngram = 166, .cumulative_probability = 19}
};
static struct uwu_markov_choice scrunkly_ngram14_choices[] = {
    {.next_ngram = 173, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram15_choices[] = {
    {.next_ngram = 12, .cumulative_probability = 190},
    {.next_ngram = 0, .cumulative_probability = 326},
    {.next_ngram = 11, .cumulative_probability = 454},
    {.next_ngram = 8, .cumulative_probability = 572},
    {.next_ngram = 2, .cumulative_probability = 646},
    {.next_ngram = 14, .cumulative_probability = 684},
    {.next_ngram = 5, .cumulative_probability = 722},
    {.next_ngram = 13, .cumulative_probability = 757},
    {.next_ngram = 1, .cumulative_probability = 790},
    {.next_ngram = 10, .cumulative_probability = 821},
    {.next_ngram = 6, .cumulative_probability = 849}
};
static struct uwu_markov_choice scrunkly_ngram16_choices[] = {
    {.next_ngram = 15, .cumulative_probability = 31},
    {.next_ngram = 16, .cumulative_probability = 60}
};
static struct uwu_markov_choice scrunkly_ngram17_choices[] = {
    {.next_ngram = 17, .cumulative_probability = 777},
    {.next_ngram = 26, .cumulative_probability = 965},
    {.next_ngram = 18, .cumulative_probability = 1098},
    {.next_ngram = 25, .cumulative_probability = 1227},
    {.next_ngram = 23, .cumulative_probability = 1322},
    {.next_ngram = 20, .cumulative_probability = 1387},
    {.next_ngram = 24, .cumulative_probability = 1425},
    {.next_ngram = 28, .cumulative_probability = 1462},
    {.next_ngram = 22, .cumulative_probability = 1498},
    {.next_ngram = 19, .cumulative_probability = 1531},
    {.next_ngram = 21, .cumulative_probability = 1560},
    {.next_ngram = 27, .cumulative_probability = 1585}
};
static struct uwu_markov_choice scrunkly_ngram18_choices[] = {
    {.next_ngram = 37, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram19_choices[] = {
    {.next_ngram = 43, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram20_choices[] = {
    {.next_ngram = 45, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram21_choices[] = {
    {.next_ngram = 64, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram22_choices[] = {
    {.next_ngram = 67, .cumulative_probability = 7},
    {.next_ngram = 68, .cumulative_probability = 13},
    {.next_ngram = 69, .cumulative_probability = 18}
};
static struct uwu_markov_choice scrunkly_ngram23_choices[] = {
    {.next_ngram = 89, .cumulative_probability = 59},
    {.next_ngram = 88, .cumulative_probability = 95}
};
static struct uwu_markov_choice scrunkly_ngram24_choices[] = {
    {.next_ngram = 98, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram25_choices[] = {
    {.next_ngram = 135, .cumulative_probability = 65},
    {.next_ngram = 139, .cumulative_probability = 100},
    {.next_ngram = 136, .cumulative_probability = 129}
};
static struct uwu_markov_choice scrunkly_ngram26_choices[] = {
    {.next_ngram = 149, .cumulative_probability = 38},
    {.next_ngram = 150, .cumulative_probability = 47}
};
static struct uwu_markov_choice scrunkly_ngram27_choices[] = {
    {.next_ngram = 165, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram28_choices[] = {
    {.next_ngram = 173, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram29_choices[] = {
    {.next_ngram = 12, .cumulative_probability = 222},
    {.next_ngram = 11, .cumulative_probability = 365},
    {.next_ngram = 0, .cumulative_probability = 496},
    {.next_ngram = 8, .cumulative_probability = 583},
    {.next_ngram = 2, .cumulative_probability = 644},
    {.next_ngram = 13, .cumulative_probability = 684},
    {.next_ngram = 6, .cumulative_probability = 720},
    {.next_ngram = 1, .cumulative_probability = 754},
    {.next_ngram = 5, .cumulative_probability = 787},
    {.next_ngram = 10, .cumulative_probability = 818},
    {.next_ngram = 14, .cumulative_probability = 843}
};
static struct uwu_markov_choice scrunkly_ngram30_choices[] = {
    {.next_ngram = 29, .cumulative_probability = 638},
    {.next_ngram = 30, .cumulative_probability = 1271}
};
static struct uwu_markov_choice scrunkly_ngram31_choices[] = {
    {.next_ngram = 51, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram32_choices[] = {
    {.next_ngram = 87, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram33_choices[] = {
    {.next_ngram = 97, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram34_choices[] = {
    {.next_ngram = 103, .cumulative_probability = 5},
    {.next_ngram = 98, .cumulative_probability = 6}
};
static struct uwu_markov_choice scrunkly_ngram35_choices[] = {
    {.next_ngram = 122, .cumulative_probability = 1},
    {.next_ngram = 123, .cumulative_probability = 2}
};
static struct uwu_markov_choice scrunkly_ngram36_choices[] = {
    {.next_ngram = 143, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram37_choices[] = {
    {.next_ngram = 168, .cumulative_probability = 300},
    {.next_ngram = 161, .cumulative_probability = 400},
    {.next_ngram = 162, .cumulative_probability = 443},
    {.next_ngram = 164, .cumulative_probability = 473},
    {.next_ngram = 163, .cumulative_probability = 500}
};
static struct uwu_markov_choice scrunkly_ngram38_choices[] = {
    {.next_ngram = 170, .cumulative_probability = 17},
    {.next_ngram = 172, .cumulative_probability = 34},
    {.next_ngram = 171, .cumulative_probability = 50}
};
static struct uwu_markov_choice scrunkly_ngram39_choices[] = {
    {.next_ngram = 16, .cumulative_probability = 29},
    {.next_ngram = 15, .cumulative_probability = 33}
};
static struct uwu_markov_choice scrunkly_ngram40_choices[] = {
    {.next_ngram = 17, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram41_choices[] = {
    {.next_ngram = 30, .cumulative_probability = 7},
    {.next_ngram = 29, .cumulative_probability = 9}
};
static struct uwu_markov_choice scrunkly_ngram42_choices[] = {
    {.next_ngram = 89, .cumulative_probability = 2},
    {.next_ngram = 87, .cumulative_probability = 3}
};
static struct uwu_markov_choice scrunkly_ngram43_choices[] = {
    {.next_ngram = 113, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram44_choices[] = {
    {.next_ngram = 34, .cumulative_probability = 1},
    {.next_ngram = 33, .cumulative_probability = 2},
    {.next_ngram = 36, .cumulative_probability = 3}
};
static struct uwu_markov_choice scrunkly_ngram45_choices[] = {
    {.next_ngram = 131, .cumulative_probability = 5},
    {.next_ngram = 128, .cumulative_probability = 9}
};
static struct uwu_markov_choice scrunkly_ngram46_choices[] = {
    {.next_ngram = 159, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram47_choices[] = {
    {.next_ngram = 2, .cumulative_probability = 2},
    {.next_ngram = 3, .cumulative_probability = 3},
    {.next_ngram = 6, .cumulative_probability = 4},
    {.next_ngram = 11, .cumulative_probability = 5}
};
static struct uwu_markov_choice scrunkly_ngram48_choices[] = {
    {.next_ngram = 41, .cumulative_probability = 36},
    {.next_ngram = 39, .cumulative_probability = 69},
    {.next_ngram = 40, .cumulative_probability = 100}
};
static struct uwu_markov_choice scrunkly_ngram49_choices[] = {
    {.next_ngram = 50, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram50_choices[] = {
    {.next_ngram = 87, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram51_choices[] = {
    {.next_ngram = 118, .cumulative_probability = 2},
    {.next_ngram = 117, .cumulative_probability = 4},
    {.next_ngram = 120, .cumulative_probability = 5}
};
static struct uwu_markov_choice scrunkly_ngram52_choices[] = {
    {.next_ngram = 12, .cumulative_probability = 6},
    {.next_ngram = 11, .cumulative_probability = 10},
    {.next_ngram = 8, .cumulative_probability = 13},
    {.next_ngram = 2, .cumulative_probability = 16},
    {.next_ngram = 0, .cumulative_probability = 18},
    {.next_ngram = 13, .cumulative_probability = 20},
    {.next_ngram = 1, .cumulative_probability = 22},
    {.next_ngram = 7, .cumulative_probability = 24},
    {.next_ngram = 9, .cumulative_probability = 25}
};
static struct uwu_markov_choice scrunkly_ngram53_choices[] = {
    {.next_ngram = 16, .cumulative_probability = 157},
    {.next_ngram = 15, .cumulative_probability = 208}
};
static struct uwu_markov_choice scrunkly_ngram54_choices[] = {
    {.next_ngram = 17, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram55_choices[] = {
    {.next_ngram = 30, .cumulative_probability = 80},
    {.next_ngram = 29, .cumulative_probability = 101}
};
static struct uwu_markov_choice scrunkly_ngram56_choices[] = {
    {.next_ngram = 92, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram57_choices[] = {
    {.next_ngram = 108, .cumulative_probability = 400},
    {.next_ngram = 98, .cumulative_probability = 500},
    {.next_ngram = 101, .cumulative_probability = 536},
    {.next_ngram = 99, .cumulative_probability = 569},
    {.next_ngram = 100, .cumulative_probability = 600}
};
static struct uwu_markov_choice scrunkly_ngram58_choices[] = {
    {.next_ngram = 121, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram59_choices[] = {
    {.next_ngram = 141, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram60_choices[] = {
    {.next_ngram = 0, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram61_choices[] = {
    {.next_ngram = 90, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram62_choices[] = {
    {.next_ngram = 53, .cumulative_probability = 74},
    {.next_ngram = 54, .cumulative_probability = 139},
    {.next_ngram = 55, .cumulative_probability = 200}
};
static struct uwu_markov_choice scrunkly_ngram63_choices[] = {
    {.next_ngram = 87, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram64_choices[] = {
    {.next_ngram = 35, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram65_choices[] = {
    {.next_ngram = 52, .cumulative_probability = 1200},
    {.next_ngram = 57, .cumulative_probability = 1400},
    {.next_ngram = 56, .cumulative_probability = 1500},
    {.next_ngram = 53, .cumulative_probability = 1537},
    {.next_ngram = 54, .cumulative_probability = 1569},
    {.next_ngram = 55, .cumulative_probability = 1600}
};
static struct uwu_markov_choice scrunkly_ngram66_choices[] = {
    {.next_ngram = 130, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram67_choices[] = {
    {.next_ngram = 16, .cumulative_probability = 25},
    {.next_ngram = 15, .cumulative_probability = 38}
};
static struct uwu_markov_choice scrunkly_ngram68_choices[] = {
    {.next_ngram = 17, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram69_choices[] = {
    {.next_ngram = 30, .cumulative_probability = 17},
    {.next_ngram = 29, .cumulative_probability = 25}
};
static struct uwu_markov_choice scrunkly_ngram70_choices[] = {
    {.next_ngram = 44, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram71_choices[] = {
    {.next_ngram = 49, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram72_choices[] = {
    {.next_ngram = 57, .cumulative_probability = 400},
    {.next_ngram = 55, .cumulative_probability = 443},
    {.next_ngram = 54, .cumulative_probability = 479},
    {.next_ngram = 53, .cumulative_probability = 500}
};
static struct uwu_markov_choice scrunkly_ngram73_choices[] = {
    {.next_ngram = 80, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram74_choices[] = {
    {.next_ngram = 93, .cumulative_probability = 1},
    {.next_ngram = 97, .cumulative_probability = 2}
};
static struct uwu_markov_choice scrunkly_ngram75_choices[] = {
    {.next_ngram = 106, .cumulative_probability = 6},
    {.next_ngram = 105, .cumulative_probability = 7}
};
static struct uwu_markov_choice scrunkly_ngram76_choices[] = {
    {.next_ngram = 127, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram77_choices[] = {
    {.next_ngram = 154, .cumulative_probability = 300},
    {.next_ngram = 143, .cumulative_probability = 600},
    {.next_ngram = 146, .cumulative_probability = 706},
    {.next_ngram = 155, .cumulative_probability = 806},
    {.next_ngram = 145, .cumulative_probability = 905},
    {.next_ngram = 144, .cumulative_probability = 1000}
};
static struct uwu_markov_choice scrunkly_ngram78_choices[] = {
    {.next_ngram = 160, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram79_choices[] = {
    {.next_ngram = 48, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram80_choices[] = {
    {.next_ngram = 52, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram81_choices[] = {
    {.next_ngram = 77, .cumulative_probability = 3},
    {.next_ngram = 74, .cumulative_probability = 4}
};
static struct uwu_markov_choice scrunkly_ngram82_choices[] = {
    {.next_ngram = 91, .cumulative_probability = 6},
    {.next_ngram = 87, .cumulative_probability = 7}
};
static struct uwu_markov_choice scrunkly_ngram83_choices[] = {
    {.next_ngram = 112, .cumulative_probability = 39},
    {.next_ngram = 110, .cumulative_probability = 72},
    {.next_ngram = 111, .cumulative_probability = 100}
};
static struct uwu_markov_choice scrunkly_ngram84_choices[] = {
    {.next_ngram = 158, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram85_choices[] = {
    {.next_ngram = 169, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram86_choices[] = {
    {.next_ngram = 11, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram87_choices[] = {
    {.next_ngram = 52, .cumulative_probability = 550},
    {.next_ngram = 53, .cumulative_probability = 569},
    {.next_ngram = 55, .cumulative_probability = 586},
    {.next_ngram = 54, .cumulative_probability = 600}
};
static struct uwu_markov_choice scrunkly_ngram88_choices[] = {
    {.next_ngram = 77, .cumulative_probability = 3},
    {.next_ngram = 73, .cumulative_probability = 4},
    {.next_ngram = 78, .cumulative_probability = 5},
    {.next_ngram = 74, .cumulative_probability = 6}
};
static struct uwu_markov_choice scrunkly_ngram89_choices[] = {
    {.next_ngram = 117, .cumulative_probability = 100},
    {.next_ngram = 109, .cumulative_probability = 150},
    {.next_ngram = 110, .cumulative_probability = 169},
    {.next_ngram = 111, .cumulative_probability = 187},
    {.next_ngram = 112, .cumulative_probability = 200}
};
static struct uwu_markov_choice scrunkly_ngram90_choices[] = {
    {.next_ngram = 157, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram91_choices[] = {
    {.next_ngram = 169, .cumulative_probability = 300},
    {.next_ngram = 170, .cumulative_probability = 373},
    {.next_ngram = 172, .cumulative_probability = 439},
    {.next_ngram = 171, .cumulative_probability = 500}
};
static struct uwu_markov_choice scrunkly_ngram92_choices[] = {
    {.next_ngram = 12, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram93_choices[] = {
    {.next_ngram = 42, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram94_choices[] = {
    {.next_ngram = 58, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram95_choices[] = {
    {.next_ngram = 76, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram96_choices[] = {
    {.next_ngram = 115, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram97_choices[] = {
    {.next_ngram = 151, .cumulative_probability = 100},
    {.next_ngram = 155, .cumulative_probability = 200},
    {.next_ngram = 146, .cumulative_probability = 238},
    {.next_ngram = 145, .cumulative_probability = 273},
    {.next_ngram = 144, .cumulative_probability = 300}
};
static struct uwu_markov_choice scrunkly_ngram98_choices[] = {
    {.next_ngram = 12, .cumulative_probability = 2},
    {.next_ngram = 4, .cumulative_probability = 3}
};
static struct uwu_markov_choice scrunkly_ngram99_choices[] = {
    {.next_ngram = 16, .cumulative_probability = 26},
    {.next_ngram = 15, .cumulative_probability = 33}
};
static struct uwu_markov_choice scrunkly_ngram100_choices[] = {
    {.next_ngram = 17, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram101_choices[] = {
    {.next_ngram = 30, .cumulative_probability = 25},
    {.next_ngram = 29, .cumulative_probability = 36}
};
static struct uwu_markov_choice scrunkly_ngram102_choices[] = {
    {.next_ngram = 32, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram103_choices[] = {
    {.next_ngram = 47, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram104_choices[] = {
    {.next_ngram = 60, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram105_choices[] = {
    {.next_ngram = 62, .cumulative_probability = 1},
    {.next_ngram = 63, .cumulative_probability = 2}
};
static struct uwu_markov_choice scrunkly_ngram106_choices[] = {
    {.next_ngram = 82, .cumulative_probability = 7},
    {.next_ngram = 85, .cumulative_probability = 9},
    {.next_ngram = 84, .cumulative_probability = 10},
    {.next_ngram = 83, .cumulative_probability = 11}
};
static struct uwu_markov_choice scrunkly_ngram107_choices[] = {
    {.next_ngram = 121, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram108_choices[] = {
    {.next_ngram = 125, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram109_choices[] = {
    {.next_ngram = 0, .cumulative_probability = 1},
    {.next_ngram = 6, .cumulative_probability = 2},
    {.next_ngram = 8, .cumulative_probability = 3},
    {.next_ngram = 1, .cumulative_probability = 4},
    {.next_ngram = 9, .cumulative_probability = 5}
};
static struct uwu_markov_choice scrunkly_ngram110_choices[] = {
    {.next_ngram = 16, .cumulative_probability = 105},
    {.next_ngram = 15, .cumulative_probability = 136}
};
static struct uwu_markov_choice scrunkly_ngram111_choices[] = {
    {.next_ngram = 17, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram112_choices[] = {
    {.next_ngram = 30, .cumulative_probability = 104},
    {.next_ngram = 29, .cumulative_probability = 141}
};
static struct uwu_markov_choice scrunkly_ngram113_choices[] = {
    {.next_ngram = 75, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram114_choices[] = {
    {.next_ngram = 81, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram115_choices[] = {
    {.next_ngram = 86, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram116_choices[] = {
    {.next_ngram = 106, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram117_choices[] = {
    {.next_ngram = 119, .cumulative_probability = 300},
    {.next_ngram = 114, .cumulative_probability = 500},
    {.next_ngram = 117, .cumulative_probability = 600},
    {.next_ngram = 109, .cumulative_probability = 700},
    {.next_ngram = 112, .cumulative_probability = 776},
    {.next_ngram = 110, .cumulative_probability = 841},
    {.next_ngram = 111, .cumulative_probability = 900}
};
static struct uwu_markov_choice scrunkly_ngram118_choices[] = {
    {.next_ngram = 129, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram119_choices[] = {
    {.next_ngram = 153, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram120_choices[] = {
    {.next_ngram = 156, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram121_choices[] = {
    {.next_ngram = 161, .cumulative_probability = 2},
    {.next_ngram = 167, .cumulative_probability = 3}
};
static struct uwu_markov_choice scrunkly_ngram122_choices[] = {
    {.next_ngram = 10, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram123_choices[] = {
    {.next_ngram = 127, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram124_choices[] = {
    {.next_ngram = 130, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram125_choices[] = {
    {.next_ngram = 142, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram126_choices[] = {
    {.next_ngram = 157, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram127_choices[] = {
    {.next_ngram = 169, .cumulative_probability = 100},
    {.next_ngram = 170, .cumulative_probability = 141},
    {.next_ngram = 171, .cumulative_probability = 177},
    {.next_ngram = 172, .cumulative_probability = 200}
};
static struct uwu_markov_choice scrunkly_ngram128_choices[] = {
    {.next_ngram = 75, .cumulative_probability = 1},
    {.next_ngram = 74, .cumulative_probability = 2}
};
static struct uwu_markov_choice scrunkly_ngram129_choices[] = {
    {.next_ngram = 102, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram130_choices[] = {
    {.next_ngram = 116, .cumulative_probability = 1},
    {.next_ngram = 113, .cumulative_probability = 2}
};
static struct uwu_markov_choice scrunkly_ngram131_choices[] = {
    {.next_ngram = 157, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram132_choices[] = {
    {.next_ngram = 16, .cumulative_probability = 8},
    {.next_ngram = 15, .cumulative_probability = 11}
};
static struct uwu_markov_choice scrunkly_ngram133_choices[] = {
    {.next_ngram = 17, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram134_choices[] = {
    {.next_ngram = 30, .cumulative_probability = 13},
    {.next_ngram = 29, .cumulative_probability = 17}
};
static struct uwu_markov_choice scrunkly_ngram135_choices[] = {
    {.next_ngram = 45, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram136_choices[] = {
    {.next_ngram = 66, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram137_choices[] = {
    {.next_ngram = 77, .cumulative_probability = 2},
    {.next_ngram = 72, .cumulative_probability = 3}
};
static struct uwu_markov_choice scrunkly_ngram138_choices[] = {
    {.next_ngram = 96, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram139_choices[] = {
    {.next_ngram = 109, .cumulative_probability = 2},
    {.next_ngram = 117, .cumulative_probability = 3}
};
static struct uwu_markov_choice scrunkly_ngram140_choices[] = {
    {.next_ngram = 126, .cumulative_probability = 2},
    {.next_ngram = 124, .cumulative_probability = 3}
};
static struct uwu_markov_choice scrunkly_ngram141_choices[] = {
    {.next_ngram = 143, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram142_choices[] = {
    {.next_ngram = 169, .cumulative_probability = 300},
    {.next_ngram = 172, .cumulative_probability = 341},
    {.next_ngram = 171, .cumulative_probability = 376},
    {.next_ngram = 170, .cumulative_probability = 400}
};
static struct uwu_markov_choice scrunkly_ngram143_choices[] = {
    {.next_ngram = 12, .cumulative_probability = 2},
    {.next_ngram = 0, .cumulative_probability = 4},
    {.next_ngram = 2, .cumulative_probability = 5},
    {.next_ngram = 11, .cumulative_probability = 6}
};
static struct uwu_markov_choice scrunkly_ngram144_choices[] = {
    {.next_ngram = 16, .cumulative_probability = 85},
    {.next_ngram = 15, .cumulative_probability = 122}
};
static struct uwu_markov_choice scrunkly_ngram145_choices[] = {
    {.next_ngram = 17, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram146_choices[] = {
    {.next_ngram = 30, .cumulative_probability = 101},
    {.next_ngram = 29, .cumulative_probability = 144}
};
static struct uwu_markov_choice scrunkly_ngram147_choices[] = {
    {.next_ngram = 35, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram148_choices[] = {
    {.next_ngram = 59, .cumulative_probability = 200},
    {.next_ngram = 53, .cumulative_probability = 238},
    {.next_ngram = 55, .cumulative_probability = 271},
    {.next_ngram = 54, .cumulative_probability = 300}
};
static struct uwu_markov_choice scrunkly_ngram149_choices[] = {
    {.next_ngram = 65, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram150_choices[] = {
    {.next_ngram = 72, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram151_choices[] = {
    {.next_ngram = 87, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram152_choices[] = {
    {.next_ngram = 117, .cumulative_probability = 3},
    {.next_ngram = 109, .cumulative_probability = 4}
};
static struct uwu_markov_choice scrunkly_ngram153_choices[] = {
    {.next_ngram = 137, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram154_choices[] = {
    {.next_ngram = 151, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram155_choices[] = {
    {.next_ngram = 169, .cumulative_probability = 100},
    {.next_ngram = 171, .cumulative_probability = 138},
    {.next_ngram = 170, .cumulative_probability = 169},
    {.next_ngram = 172, .cumulative_probability = 200}
};
static struct uwu_markov_choice scrunkly_ngram156_choices[] = {
    {.next_ngram = 42, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram157_choices[] = {
    {.next_ngram = 106, .cumulative_probability = 4},
    {.next_ngram = 105, .cumulative_probability = 7},
    {.next_ngram = 104, .cumulative_probability = 8}
};
static struct uwu_markov_choice scrunkly_ngram158_choices[] = {
    {.next_ngram = 134, .cumulative_probability = 34},
    {.next_ngram = 132, .cumulative_probability = 67},
    {.next_ngram = 133, .cumulative_probability = 100}
};
static struct uwu_markov_choice scrunkly_ngram159_choices[] = {
    {.next_ngram = 148, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram160_choices[] = {
    {.next_ngram = 52, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram161_choices[] = {
    {.next_ngram = 12, .cumulative_probability = 2},
    {.next_ngram = 8, .cumulative_probability = 3},
    {.next_ngram = 11, .cumulative_probability = 4},
    {.next_ngram = 13, .cumulative_probability = 5},
    {.next_ngram = 6, .cumulative_probability = 6}
};
static struct uwu_markov_choice scrunkly_ngram162_choices[] = {
    {.next_ngram = 16, .cumulative_probability = 24},
    {.next_ngram = 15, .cumulative_probability = 43}
};
static struct uwu_markov_choice scrunkly_ngram163_choices[] = {
    {.next_ngram = 17, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram164_choices[] = {
    {.next_ngram = 30, .cumulative_probability = 4},
    {.next_ngram = 29, .cumulative_probability = 5}
};
static struct uwu_markov_choice scrunkly_ngram165_choices[] = {
    {.next_ngram = 65, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram166_choices[] = {
    {.next_ngram = 71, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram167_choices[] = {
    {.next_ngram = 94, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram168_choices[] = {
    {.next_ngram = 161, .cumulative_probability = 3},
    {.next_ngram = 168, .cumulative_probability = 5}
};
static struct uwu_markov_choice scrunkly_ngram169_choices[] = {
    {.next_ngram = 12, .cumulative_probability = 2},
    {.next_ngram = 11, .cumulative_probability = 4},
    {.next_ngram = 3, .cumulative_probability = 6},
    {.next_ngram = 0, .cumulative_probability = 8},
    {.next_ngram = 7, .cumulative_probability = 9},
    {.next_ngram = 13, .cumulative_probability = 10}
};
static struct uwu_markov_choice scrunkly_ngram170_choices[] = {
    {.next_ngram = 16, .cumulative_probability = 5},
    {.next_ngram = 15, .cumulative_probability = 7}
};
static struct uwu_markov_choice scrunkly_ngram171_choices[] = {
    {.next_ngram = 17, .cumulative_probability = 1}
};
static struct uwu_markov_choice scrunkly_ngram172_choices[] = {
    {.next_ngram = 30, .cumulative_probability = 51},
    {.next_ngram = 29, .cumulative_probability = 65}
};
static struct uwu_markov_choice scrunkly_ngram173_choices[] = {
    {.next_ngram = 38, .cumulative_probability = 1}
};

static uwu_markov_ngram scrunkly_ngrams[] = {
    {.choices = scrunkly_ngram0_choices, .total_probability = 1067, .character = 'a'}, // " a"
    {.choices = scrunkly_ngram1_choices, .total_probability = 1, .character = 'b'}, // " b"
    {.choices = scrunkly_ngram2_choices, .total_probability = 147, .character = 'c'}, // " c"
    {.choices = scrunkly_ngram3_choices, .total_probability = 1, .character = 'd'}, // " d"
    {.choices = scrunkly_ngram4_choices, .total_probability = 1, .character = 'f'}, // " f"
    {.choices = scrunkly_ngram5_choices, .total_probability = 1, .character = 'h'}, // " h"
    {.choices = scrunkly_ngram6_choices, .total_probability = 364, .character = 'i'}, // " i"
    {.choices = scrunkly_ngram7_choices, .total_probability = 3, .character = 'k'}, // " k"
    {.choices = scrunkly_ngram8_choices, .total_probability = 5, .character = 'l'}, // " l"
    {.choices = scrunkly_ngram9_choices, .total_probability = 2, .character = 'm'}, // " m"
    {.choices = scrunkly_ngram10_choices, .total_probability = 81, .character = 'n'}, // " n"
    {.choices = scrunkly_ngram11_choices, .total_probability = 1271, .character = 's'}, // " s"
    {.choices = scrunkly_ngram12_choices, .total_probability = 478, .character = 't'}, // " t"
    {.choices = scrunkly_ngram13_choices, .total_probability = 19, .character = 'w'}, // " w"
    {.choices = scrunkly_ngram14_choices, .total_probability = 1, .character = 'y'}, // " y"
    {.choices = scrunkly_ngram15_choices, .total_probability = 849, .character = ' '}, // "! "
    {.choices = scrunkly_ngram16_choices, .total_probability = 60, .character = '!'}, // "!!"
    {.choices = scrunkly_ngram17_choices, .total_probability = 1585, .character = ','}, // ",,"
    {.choices = scrunkly_ngram18_choices, .total_probability = 1, .character = 'a'}, // ",a"
    {.choices = scrunkly_ngram19_choices, .total_probability = 1, .character = 'b'}, // ",b"
    {.choices = scrunkly_ngram20_choices, .total_probability = 1, .character = 'c'}, // ",c"
    {.choices = scrunkly_ngram21_choices, .total_probability = 1, .character = 'h'}, // ",h"
    {.choices = scrunkly_ngram22_choices, .total_probability = 18, .character = 'i'}, // ",i"
    {.choices = scrunkly_ngram23_choices, .total_probability = 95, .character = 'l'}, // ",l"
    {.choices = scrunkly_ngram24_choices, .total_probability = 1, .character = 'n'}, // ",n"
    {.choices = scrunkly_ngram25_choices, .total_probability = 129, .character = 's'}, // ",s"
    {.choices = scrunkly_ngram26_choices, .total_probability = 47, .character = 't'}, // ",t"
    {.choices = scrunkly_ngram27_choices, .total_probability = 1, .character = 'w'}, // ",w"
    {.choices = scrunkly_ngram28_choices, .total_probability = 1, .character = 'y'}, // ",y"
    {.choices = scrunkly_ngram29_choices, .total_probability = 843, .character = ' '}, // ". "
    {.choices = scrunkly_ngram30_choices, .total_probability = 1271, .character = '.'}, // ".."
    {.choices = scrunkly_ngram31_choices, .total_probability = 1, .character = 'd'}, // "ad"
    {.choices = scrunkly_ngram32_choices, .total_probability = 1, .character = 'l'}, // "al"
    {.choices = scrunkly_ngram33_choices, .total_probability = 1, .character = 'm'}, // "am"
    {.choices = scrunkly_ngram34_choices, .total_probability = 6, .character = 'n'}, // "an"
    {.choices = scrunkly_ngram35_choices, .total_probability = 2, .character = 'p'}, // "ap"
    {.choices = scrunkly_ngram36_choices, .total_probability = 1, .character = 't'}, // "at"
    {.choices = scrunkly_ngram37_choices, .total_probability = 500, .character = 'w'}, // "aw"
    {.choices = scrunkly_ngram38_choices, .total_probability = 50, .character = 'y'}, // "ay"
    {.choices = scrunkly_ngram39_choices, .total_probability = 33, .character = '!'}, // "b!"
    {.choices = scrunkly_ngram40_choices, .total_probability = 1, .character = ','}, // "b,"
    {.choices = scrunkly_ngram41_choices, .total_probability = 9, .character = '.'}, // "b."
    {.choices = scrunkly_ngram42_choices, .total_probability = 3, .character = 'l'}, // "bl"
    {.choices = scrunkly_ngram43_choices, .total_probability = 1, .character = 'o'}, // "bo"
    {.choices = scrunkly_ngram44_choices, .total_probability = 3, .character = 'a'}, // "ca"
    {.choices = scrunkly_ngram45_choices, .total_probability = 9, .character = 'r'}, // "cr"
    {.choices = scrunkly_ngram46_choices, .total_probability = 1, .character = 'u'}, // "cu"
    {.choices = scrunkly_ngram47_choices, .total_probability = 5, .character = ' '}, // "d "
    {.choices = scrunkly_ngram48_choices, .total_probability = 100, .character = 'b'}, // "db"
    {.choices = scrunkly_ngram49_choices, .total_probability = 1, .character = 'd'}, // "dd"
    {.choices = scrunkly_ngram50_choices, .total_probability = 1, .character = 'l'}, // "dl"
    {.choices = scrunkly_ngram51_choices, .total_probability = 5, .character = 'o'}, // "do"
    {.choices = scrunkly_ngram52_choices, .total_probability = 25, .character = ' '}, // "e "
    {.choices = scrunkly_ngram53_choices, .total_probability = 208, .character = '!'}, // "e!"
    {.choices = scrunkly_ngram54_choices, .total_probability = 1, .character = ','}, // "e,"
    {.choices = scrunkly_ngram55_choices, .total_probability = 101, .character = '.'}, // "e."
    {.choices = scrunkly_ngram56_choices, .total_probability = 1, .character = 'm'}, // "em"
    {.choices = scrunkly_ngram57_choices, .total_probability = 600, .character = 'n'}, // "en"
    {.choices = scrunkly_ngram58_choices, .total_probability = 1, .character = 'o'}, // "eo"
    {.choices = scrunkly_ngram59_choices, .total_probability = 1, .character = 's'}, // "es"
    {.choices = scrunkly_ngram60_choices, .total_probability = 1, .character = ' '}, // "f "
    {.choices = scrunkly_ngram61_choices, .total_probability = 1, .character = 'l'}, // "fl"
    {.choices = scrunkly_ngram62_choices, .total_probability = 200, .character = 'e'}, // "ge"
    {.choices = scrunkly_ngram63_choices, .total_probability = 1, .character = 'l'}, // "gl"
    {.choices = scrunkly_ngram64_choices, .total_probability = 1, .character = 'a'}, // "ha"
    {.choices = scrunkly_ngram65_choices, .total_probability = 1600, .character = 'e'}, // "he"
    {.choices = scrunkly_ngram66_choices, .total_probability = 1, .character = 'r'}, // "hr"
    {.choices = scrunkly_ngram67_choices, .total_probability = 38, .character = '!'}, // "i!"
    {.choices = scrunkly_ngram68_choices, .total_probability = 1, .character = ','}, // "i,"
    {.choices = scrunkly_ngram69_choices, .total_probability = 25, .character = '.'}, // "i."
    {.choices = scrunkly_ngram70_choices, .total_probability = 1, .character = 'c'}, // "ic"
    {.choices = scrunkly_ngram71_choices, .total_probability = 1, .character = 'd'}, // "id"
    {.choices = scrunkly_ngram72_choices, .total_probability = 500, .character = 'e'}, // "ie"
    {.choices = scrunkly_ngram73_choices, .total_probability = 1, .character = 'k'}, // "ik"
    {.choices = scrunkly_ngram74_choices, .total_probability = 2, .character = 'm'}, // "im"
    {.choices = scrunkly_ngram75_choices, .total_probability = 7, .character = 'n'}, // "in"
    {.choices = scrunkly_ngram76_choices, .total_probability = 1, .character = 'p'}, // "ip"
    {.choices = scrunkly_ngram77_choices, .total_probability = 1000, .character = 't'}, // "it"
    {.choices = scrunkly_ngram78_choices, .total_probability = 1, .character = 'v'}, // "iv"
    {.choices = scrunkly_ngram79_choices, .total_probability = 1, .character = 'd'}, // "kd"
    {.choices = scrunkly_ngram80_choices, .total_probability = 1, .character = 'e'}, // "ke"
    {.choices = scrunkly_ngram81_choices, .total_probability = 4, .character = 'i'}, // "ki"
    {.choices = scrunkly_ngram82_choices, .total_probability = 7, .character = 'l'}, // "kl"
    {.choices = scrunkly_ngram83_choices, .total_probability = 100, .character = 'o'}, // "ko"
    {.choices = scrunkly_ngram84_choices, .total_probability = 1, .character = 'u'}, // "ku"
    {.choices = scrunkly_ngram85_choices, .total_probability = 1, .character = 'y'}, // "ky"
    {.choices = scrunkly_ngram86_choices, .total_probability = 1, .character = ' '}, // "l "
    {.choices = scrunkly_ngram87_choices, .total_probability = 600, .character = 'e'}, // "le"
    {.choices = scrunkly_ngram88_choices, .total_probability = 6, .character = 'i'}, // "li"
    {.choices = scrunkly_ngram89_choices, .total_probability = 200, .character = 'o'}, // "lo"
    {.choices = scrunkly_ngram90_choices, .total_probability = 1, .character = 'u'}, // "lu"
    {.choices = scrunkly_ngram91_choices, .total_probability = 500, .character = 'y'}, // "ly"
    {.choices = scrunkly_ngram92_choices, .total_probability = 1, .character = ' '}, // "m "
    {.choices = scrunkly_ngram93_choices, .total_probability = 1, .character = 'b'}, // "mb"
    {.choices = scrunkly_ngram94_choices, .total_probability = 1, .character = 'e'}, // "me"
    {.choices = scrunkly_ngram95_choices, .total_probability = 1, .character = 'i'}, // "mi"
    {.choices = scrunkly_ngram96_choices, .total_probability = 1, .character = 'o'}, // "mo"
    {.choices = scrunkly_ngram97_choices, .total_probability = 300, .character = 't'}, // "mt"
    {.choices = scrunkly_ngram98_choices, .total_probability = 3, .character = ' '}, // "n "
    {.choices = scrunkly_ngram99_choices, .total_probability = 33, .character = '!'}, // "n!"
    {.choices = scrunkly_ngram100_choices, .total_probability = 1, .character = ','}, // "n,"
    {.choices = scrunkly_ngram101_choices, .total_probability = 36, .character = '.'}, // "n."
    {.choices = scrunkly_ngram102_choices, .total_probability = 1, .character = 'a'}, // "na"
    {.choices = scrunkly_ngram103_choices, .total_probability = 1, .character = 'd'}, // "nd"
    {.choices = scrunkly_ngram104_choices, .total_probability = 1, .character = 'f'}, // "nf"
    {.choices = scrunkly_ngram105_choices, .total_probability = 2, .character = 'g'}, // "ng"
    {.choices = scrunkly_ngram106_choices, .total_probability = 11, .character = 'k'}, // "nk"
    {.choices = scrunkly_ngram107_choices, .total_probability = 1, .character = 'o'}, // "no"
    {.choices = scrunkly_ngram108_choices, .total_probability = 1, .character = 'p'}, // "np"
    {.choices = scrunkly_ngram109_choices, .total_probability = 5, .character = ' '}, // "o "
    {.choices = scrunkly_ngram110_choices, .total_probability = 136, .character = '!'}, // "o!"
    {.choices = scrunkly_ngram111_choices, .total_probability = 1, .character = ','}, // "o,"
    {.choices = scrunkly_ngram112_choices, .total_probability = 141, .character = '.'}, // "o."
    {.choices = scrunkly_ngram113_choices, .total_probability = 1, .character = 'i'}, // "oi"
    {.choices = scrunkly_ngram114_choices, .total_probability = 1, .character = 'k'}, // "ok"
    {.choices = scrunkly_ngram115_choices, .total_probability = 1, .character = 'l'}, // "ol"
    {.choices = scrunkly_ngram116_choices, .total_probability = 1, .character = 'n'}, // "on"
    {.choices = scrunkly_ngram117_choices, .total_probability = 900, .character = 'o'}, // "oo"
    {.choices = scrunkly_ngram118_choices, .total_probability = 1, .character = 'r'}, // "or"
    {.choices = scrunkly_ngram119_choices, .total_probability = 1, .character = 't'}, // "ot"
    {.choices = scrunkly_ngram120_choices, .total_probability = 1, .character = 'u'}, // "ou"
    {.choices = scrunkly_ngram121_choices, .total_probability = 3, .character = 'w'}, // "ow"
    {.choices = scrunkly_ngram122_choices, .total_probability = 1, .character = ' '}, // "p "
    {.choices = scrunkly_ngram123_choices, .total_probability = 1, .character = 'p'}, // "pp"
    {.choices = scrunkly_ngram124_choices, .total_probability = 1, .character = 'r'}, // "pr"
    {.choices = scrunkly_ngram125_choices, .total_probability = 1, .character = 's'}, // "ps"
    {.choices = scrunkly_ngram126_choices, .total_probability = 1, .character = 'u'}, // "pu"
    {.choices = scrunkly_ngram127_choices, .total_probability = 200, .character = 'y'}, // "py"
    {.choices = scrunkly_ngram128_choices, .total_probability = 2, .character = 'i'}, // "ri"
    {.choices = scrunkly_ngram129_choices, .total_probability = 1, .character = 'n'}, // "rn"
    {.choices = scrunkly_ngram130_choices, .total_probability = 2, .character = 'o'}, // "ro"
    {.choices = scrunkly_ngram131_choices, .total_probability = 1, .character = 'u'}, // "ru"
    {.choices = scrunkly_ngram132_choices, .total_probability = 11, .character = '!'}, // "s!"
    {.choices = scrunkly_ngram133_choices, .total_probability = 1, .character = ','}, // "s,"
    {.choices = scrunkly_ngram134_choices, .total_probability = 17, .character = '.'}, // "s."
    {.choices = scrunkly_ngram135_choices, .total_probability = 1, .character = 'c'}, // "sc"
    {.choices = scrunkly_ngram136_choices, .total_probability = 1, .character = 'h'}, // "sh"
    {.choices = scrunkly_ngram137_choices, .total_probability = 3, .character = 'i'}, // "si"
    {.choices = scrunkly_ngram138_choices, .total_probability = 1, .character = 'm'}, // "sm"
    {.choices = scrunkly_ngram139_choices, .total_probability = 3, .character = 'o'}, // "so"
    {.choices = scrunkly_ngram140_choices, .total_probability = 3, .character = 'p'}, // "sp"
    {.choices = scrunkly_ngram141_choices, .total_probability = 1, .character = 't'}, // "st"
    {.choices = scrunkly_ngram142_choices, .total_probability = 400, .character = 'y'}, // "sy"
    {.choices = scrunkly_ngram143_choices, .total_probability = 6, .character = ' '}, // "t "
    {.choices = scrunkly_ngram144_choices, .total_probability = 122, .character = '!'}, // "t!"
    {.choices = scrunkly_ngram145_choices, .total_probability = 1, .character = ','}, // "t,"
    {.choices = scrunkly_ngram146_choices, .total_probability = 144, .character = '.'}, // "t."
    {.choices = scrunkly_ngram147_choices, .total_probability = 1, .character = 'a'}, // "ta"
    {.choices = scrunkly_ngram148_choices, .total_probability = 300, .character = 'e'}, // "te"
    {.choices = scrunkly_ngram149_choices, .total_probability = 1, .character = 'h'}, // "th"
    {.choices = scrunkly_ngram150_choices, .total_probability = 1, .character = 'i'}, // "ti"
    {.choices = scrunkly_ngram151_choices, .total_probability = 1, .character = 'l'}, // "tl"
    {.choices = scrunkly_ngram152_choices, .total_probability = 4, .character = 'o'}, // "to"
    {.choices = scrunkly_ngram153_choices, .total_probability = 1, .character = 's'}, // "ts"
    {.choices = scrunkly_ngram154_choices, .total_probability = 1, .character = 't'}, // "tt"
    {.choices = scrunkly_ngram155_choices, .total_probability = 200, .character = 'y'}, // "ty"
    {.choices = scrunkly_ngram156_choices, .total_probability = 1, .character = 'b'}, // "ub"
    {.choices = scrunkly_ngram157_choices, .total_probability = 8, .character = 'n'}, // "un"
    {.choices = scrunkly_ngram158_choices, .total_probability = 100, .character = 's'}, // "us"
    {.choices = scrunkly_ngram159_choices, .total_probability = 1, .character = 't'}, // "ut"
    {.choices = scrunkly_ngram160_choices, .total_probability = 1, .character = 'e'}, // "ve"
    {.choices = scrunkly_ngram161_choices, .total_probability = 6, .character = ' '}, // "w "
    {.choices = scrunkly_ngram162_choices, .total_probability = 43, .character = '!'}, // "w!"
    {.choices = scrunkly_ngram163_choices, .total_probability = 1, .character = ','}, // "w,"
    {.choices = scrunkly_ngram164_choices, .total_probability = 5, .character = '.'}, // "w."
    {.choices = scrunkly_ngram165_choices, .total_probability = 1, .character = 'h'}, // "wh"
    {.choices = scrunkly_ngram166_choices, .total_probability = 1, .character = 'i'}, // "wi"
    {.choices = scrunkly_ngram167_choices, .total_probability = 1, .character = 'm'}, // "wm"
    {.choices = scrunkly_ngram168_choices, .total_probability = 5, .character = 'w'}, // "ww"
    {.choices = scrunkly_ngram169_choices, .total_probability = 10, .character = ' '}, // "y "
    {.choices = scrunkly_ngram170_choices, .total_probability = 7, .character = '!'}, // "y!"
    {.choices = scrunkly_ngram171_choices, .total_probability = 1, .character = ','}, // "y,"
    {.choices = scrunkly_ngram172_choices, .total_probability = 65, .character = '.'}, // "y."
    {.choices = scrunkly_ngram173_choices, .total_probability = 1, .character = 'a'} // "ya"
};

#endif
