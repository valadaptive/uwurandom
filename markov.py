from typing import Tuple, TypeVar, Generic, OrderedDict, Optional
from dataclasses import dataclass
from enum import Enum
import re

T = TypeVar('T')

@dataclass
class NgramChoice:
    next_ngram: int
    cumulative_probability: int

@dataclass
class Ngram(Generic[T]):
    choices: list[NgramChoice]
    total_probability: int
    chars: Tuple[T, ...]

class SpecialMarkov(Enum):
    SCRUNKLY_PUNCTUATION = -1

class MarkovTable(Generic[T]):
    def __init__(self, order: int, *strs: list[T]):
        self.entries: OrderedDict[Tuple[T, ...], dict[T, int]] = OrderedDict()
        self.order = order

        for str in strs:
            self.add_string(str)

    def add_string(self, str: list[T]):
        for i in range(0, len(str) - self.order):
            ngram = tuple(str[i:i + self.order])
            next_char = str[i + self.order]

            ngram_entry = self.entries.setdefault(ngram, {})
            if next_char in ngram_entry:
                ngram_entry[next_char] += 1
            else:
                ngram_entry[next_char] = 1

        # TODO: emit terminal state on last tuple

    def to_table(self) -> Tuple[list[Ngram[T]], dict[Tuple[T, ...], int]]:
        # sorted_entries = OrderedDict(sorted(self.entries.items(), key = lambda item: ''.join(item[0]))) # type: ignore
        sorted_entries = self.entries

        table: list[Ngram[T]] = []
        ngram_indices = {ngram: index for index, ngram in enumerate(sorted_entries.keys())}
        for index, (ngram, probabilities) in enumerate(sorted_entries.items()):

            total_probability = sum(probabilities.values())
            if total_probability > 255:
                raise OverflowError('Total probability overflows a uint8')
            # sort by probability in descending order to minimize linear search steps
            next_chars = sorted(probabilities.items(), key=lambda p: p[1], reverse=True)

            cumulative_probability = 0
            choices = []
            for char, probability in next_chars:
                next_ngram = ngram[1:] + (char,)
                if next_ngram not in ngram_indices:
                    raise ValueError(f'Found terminal ngram {next_ngram}')

                cumulative_probability += probability
                next_ngram_index = ngram_indices[next_ngram]
                if next_ngram_index > 255:
                    raise OverflowError('Ngram index overflows a uint8')
                if cumulative_probability > 255:
                    raise OverflowError('Probability overflows a uint8')
                choice = NgramChoice(next_ngram_index, cumulative_probability)
                choices.append(choice)

            table.append(Ngram(choices, total_probability, ngram))

        return table, ngram_indices

    def to_c(self, prefix: str, initial_ngram: Optional[Tuple[T, ...]] = None, specials: Optional[str] = None) -> str:
        markov_table, ngram_indices = self.to_table()

        choice_defs = ["static const uwu_markov_choice {prefix}_choices[] = {{".format(prefix=prefix)]
        ngram_defs = ["static const uwu_markov_ngram {prefix}_ngrams[] = {{".format(prefix=prefix)]

        table_def = """static const uwu_markov_table {prefix}_table = {{
    .specials = {specials},
    .initial_ngram={initial_ngram},
    .num_ngrams={num_ngrams},
    .choices={prefix}_choices,
    .ngrams={prefix}_ngrams
}};""".format(
            prefix=prefix,
            specials=specials if specials is not None else 'NULL',
            initial_ngram=ngram_indices[initial_ngram] if initial_ngram is not None else -1,
            num_ngrams=len(markov_table)
    )

        choice_table_index = 0
        for ngram_index, ngram in enumerate(markov_table):
            choice_defs.append('    // ngram {index} {chars}'.format(index=ngram_index, chars=ngram.chars))
            for choice_index, choice in enumerate(ngram.choices):
                choice_defs.append('    {{.next_ngram = {next_ngram}, .cumulative_probability = {cumulative_probability}}},'.format(
                    next_ngram=choice.next_ngram,
                    cumulative_probability=choice.cumulative_probability,
                    comma='' if choice_index == len(ngram.choices) - 1 and ngram_index == len(markov_table) - 1 else ','
                ))

            last_char = ngram.chars[-1]

            ngram_defs.append('    {{.choices = {index}, .total_probability = {total_probability}, .character = {character}}}, // "{chars}"'.format(
                prefix=prefix,
                index=choice_table_index,
                total_probability=ngram.total_probability,
                character=last_char.value if isinstance(last_char, SpecialMarkov) else f"'{last_char}'",
                chars=ngram.chars
            ))

            choice_table_index += len(ngram.choices)

        ngram_defs.append('};')
        choice_defs.append('};')

        return '{choices}\n\n{ngrams}\n\n{table_def}'.format(choices='\n'.join(choice_defs), ngrams='\n'.join(ngram_defs), table_def=table_def)


catgirl_nonsense = [list(s) for s in """mraowmraowmewmraowmrrppurrrrmraownyanyamraowwwwwmrwmraowmreowmewmrowmraowmewmraownya
mrrrowmeowmrowrmrowpurrrmrowmeowmraowmewmrowrmewnyaaaamrowrnyaamewmeowmrowrmeownya
mrowrmeow
meowmrowrmrowmeow
mrowrnyaaaaa
mrrowmeowmrowrmrrowmeowmrowrnyaaamrowmewmeowmewpurrrrrmeowmrowrmeownya""".split()]

keysmash = list('alksdhfl;ag;kdhfgjkfhgadskfagdfkajfdhgbklkafghkahgsdfka;dfglkfjhgajdfghkgahjfgafgfkjdhg;lskgjhjkhajhdgfjhkafgl;ajdfglkajdflg;hdkjafhgkgaurgjrahdfgbahiurghrgh;arhnguahraufjalfgnhjhaujeghfgadjog;aldhhjlahuegjfdbhgajkfghafkjgahiurg')

scrunkly_base = 'the little tienpsy! so adornale and cutest tootsit! awww like and double tap now so it can the to live the cute! happy kdb! awww the scrunkly! scrunkly the when! the boinky spunge! crinkly doo! shronkle scrimblo! aww when the.. the limtle tootsie,, tienpsy widdle scrimblo boinkus! boinky spunge! crinkly doo! scrunkly,,, the widdle. the cutest adornale tienpsy tootsit,,, whem the kity,, n flunf and it,, i,. yay! lookit aw!! lookit the little crungle boinko! aw icamt,,, the kimty and cat sooo mipy. little meowmeow tienpsy and smol sproingle scrunkly,, the liddol blibbly spoinky bintle anmd floof,,, flumfy! sooo springly poinkle n liddol mewmew,,,babey,,tha bleeb,,,blinpus,,, the springle!! widdol liddle kity sooo smol,,, teeny tiney meow kity'

punctuation = re.compile('[,.!]+\\s*')

scrunkly_chars = []
prev_match_start = 0
for match in punctuation.finditer(scrunkly_base):
    scrunkly_chars += scrunkly_base[prev_match_start:match.start()]
    prev_match_start = match.end()
    scrunkly_chars.append(SpecialMarkov.SCRUNKLY_PUNCTUATION)

if prev_match_start < len(scrunkly_base):
    scrunkly_chars += scrunkly_base[prev_match_start:]


catgirl_table = MarkovTable(2, *catgirl_nonsense)
keysmash_table = MarkovTable(1, keysmash)
scrunkly_table = MarkovTable(2, scrunkly_chars)

with open('uwurandom_markov_data.h', 'w', encoding='utf-8') as f:
    f.write("""#ifndef _UWURANDOM_MARKOV_DATA_H
#define _UWURANDOM_MARKOV_DATA_H

#include "uwurandom_types.h"
#include "uwurandom_markov_special.h"

""")
    f.write(catgirl_table.to_c('catnonsense', ('m', 'r')))
    f.write('\n\n')
    f.write(keysmash_table.to_c('keysmash'))
    f.write('\n\n')
    f.write(scrunkly_table.to_c('scrunkly', ('a', 'w'), 'scrunkly_specials'))
    f.write("\n\n#endif\n")
