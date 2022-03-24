const fs = require('fs');

const generateMarkovIntoTable = (str, order, table) => {
    for (let i = 0; i < str.length - 2; i++) {
        const cur = str.slice(i, i + order);
        const next = str[i + order];

        let tableEntry;
        if (Object.prototype.hasOwnProperty.call(table, cur)) {
            tableEntry = table[cur];
            if (Object.prototype.hasOwnProperty.call(tableEntry, next)) {
                tableEntry[next]++;
            } else {
                tableEntry[next] = 1;
            }
        } else {
            tableEntry = {[next]: 1};
            table[cur] = tableEntry;
        }
    }
}

// Generate a Markov chain probability table from a string or array of strings
const generateMarkov = (strings, order = 2) => {
    const table = {};
    if (Array.isArray(strings)) {
        for (const str of strings) {
            generateMarkovIntoTable(str, order, table);
        }
    } else {
        generateMarkovIntoTable(strings, order, table);
    }

    return {table, order};
}

const weightedRand = (table) => {
    const tableSum = Object.values(table).reduce((prev, cur) => prev + cur, 0);
    const random = Math.floor(Math.random() * tableSum);
    let sum = 0;
    for (const key of Object.keys(table)) {
        sum += table[key];
        if (random < sum) return key;
    }
}

const generateFromTable = ({table, order}, len, start) => {
    const generated = start.split('');

    while (generated.length < len) {
        const prev = generated.slice(generated.length - order, generated.length).join('');
        if (!Object.prototype.hasOwnProperty.call(table, prev)) return generated.join('');
        const nextOptions = table[prev];

        generated.push(weightedRand(nextOptions));
    }

    return generated.join('');
}

// You didn't see anything
const markovToC = ({table, order}, functionName) => {
    const characters = new Set();
    for (const key of Object.keys(table)) {
        for (let i = 0; i < key.length; i++) {
            characters.add(key[i]);
        }
        for (const innerKey of Object.keys(table[key])) {
            characters.add(innerKey);
        }
    }

    const charsArr = Array.from(characters);
    charsArr.sort();
    const charsToNum = {};
    for (let i = 0; i < charsArr.length; i++) {
        charsToNum[charsArr[i]] = i;
    }

    const STATE_PREV = 'state->prev';

    const maxNumLen = order * 2;

    const makeCase = key => {
        let caseNum = 0;
        for (let i = 0; i < key.length; i++) {
            caseNum |= charsToNum[key[i]] << (i * 8);
        }

        const keys = Object.keys(table[key]);

        const sum = Object.values(table[key]).reduce((prev, cur) => prev + cur, 0);

        let acc = 0;

        const ifs = [];

        for (let i = 0; i < keys.length; i++) {
            acc += table[key][keys[i]];
            if (i === keys.length - 1) {
                ifs.push(`            return ${charsToNum[keys[i]]}; // ${keys[i]}`);
            } else {
                ifs.push(`            if (random < ${acc}) return ${charsToNum[keys[i]]}; // ${keys[i]}`);
            }
        }

        return `        case 0x${('0'.repeat(maxNumLen) + caseNum.toString(16)).slice(-maxNumLen)}: // ${key}${keys.length > 1 ? `\n            random %= ${sum};` : ''}
${ifs.join('\n')}`;
    }

    const prevCombined = [];
    for (let i = 0; i < order; i++) {
        prevCombined.push(`(prev_tokens[${i}] << ${(order - i - 1) * 8})`);
    }

    const shifts = [];
    for (let i = 1; i < order; i++) {
        shifts.push(`    state->prev[${i}] = state->prev[${i - 1}];`);
    }

    const code = `
static char
${functionName}_next_token(char prev_tokens[]) {
    unsigned int random = 0;
    get_random_bytes(&random, sizeof(random));

    switch (${prevCombined.join(' | ')}) {
${Object.keys(table).map(key => makeCase(key)).join('\n')}
        default:
            return -1;
    }
}

static char
${functionName}_markov(uwu_markov_state* state) {
    static const char tokens[] = {${charsArr.map(c => `'${c}'`).join(' ,')}};

    if (state->remaining_chars == 0) {
        return 0;
    }

    char next_token = ${functionName}_next_token(state->prev);
    char end_token = state->prev[${order - 1}];
${shifts.join('\n')}
    state->prev[0] = next_token;
    state->remaining_chars--;
    if (next_token == -1) {
        state->remaining_chars = 0;
    }

    return tokens[(int) end_token];
}
`;

    return code;
}

const catgirlNonsense = `mraowmraowmewmraowmrrppurrrrmraownyanyamraowwwwwmrwmraowmreowmewmrowmraowmewmraownya
mrrrowmeowmrowrmrowpurrrmrowmeowmraowmewmrowrmewnyaaaamrowrnyaamewmeowmrowrmeownya
mrowrmeow
meowmrowrmrowmeow
mrowrnyaaaaa
mrrowmeowmrowrmrrowmeowmrowrnyaaamrowmewmeowmewpurrrrrmeowmrowrmeownya`;

const keysmash = `alksdhfl;ag;kdhfgjkfhgadskfagdfkajfdhgbklkafghkahgsdfka;dfglkfjhgajdfghkgahjfgafgfkjdhg;lskgjhjkhajhdgfjhkafgl;ajdfglkajdflg;hdkjafhgkgaurgjrahdfgbahiurghrgh;arhnguahraufjalfgnhjhaujeghfgadjog;aldhhjlahuegjfdbhgajkfghafkjgahiurg`;

const scrunklyBase = "the little tienpsy! so adornale and cutest tootsit! awww like and double tap now so it can the to live the cute! happy kdb! awww the scrunkly! scrunkly the when! the boinky spunge! crinkly doo! shronkle scrimblo! aww when the.. the limtle tootsie,, tienpsy widdle scrimblo boinkus! boinky spunge! crinkly doo! scrunkly,,, the widdle. the cutest adornale tienpsy tootsit,,, whem the kity,, n flunf and it,, i,. yay! lookit aw!! lookit the little crungle boinko! aw icamt,,, the kimty and cat sooo mipy. little meowmeow tienpsy and smol sproingle scrunkly"

const punctuationRegex = /[,.!]+ ?/g;

const scrunks = [];

const xoshiro128 = (() => {
    const s = [1697843356, 1544689657, 3646425737, 2133148247];

    const rotl = (x, k) => (x << k) | (x >> (32 - k));

    return () => {
        const x = s[0] + s[3];
        const result = (rotl(s[0] + s[3], 7) + s[0]) & 0xffffffff;

        const t = s[1] << 9;
        s[2] ^= s[0];
        s[3] ^= s[1];
        s[1] ^= s[2];
        s[0] ^= s[3];

        s[2] ^= t;

        s[3] = rotl(s[3], 11);

        return result >>> 0;
    }
})();

for (let i = 0; i < 100; i++) {
    let j = i;
    scrunks.push(scrunklyBase.replace(punctuationRegex, match => {
        if (xoshiro128() % 3 === 0) {
            return ','.repeat((xoshiro128() % 3) + 2);
        }
        return ['!', '.'][xoshiro128() % 2].repeat((xoshiro128() % 4) + 1) + ' ';
    }))
}

const catgirlTable = generateMarkov(catgirlNonsense.split('\n'), 2)
const keysmashTable = generateMarkov(keysmash, 1);
const scrunklyTable = generateMarkov(scrunks, 2);

console.log(markovToC(catgirlTable, 'catnonsense'));
console.log(markovToC(keysmashTable, 'keysmash'));
console.log(markovToC(scrunklyTable, 'scrunkly'));
