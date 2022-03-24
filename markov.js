const { table } = require('console');
const util = require('util');

// An array maps indices to values. Inverting it means returning a map of values to indices.
const invertArray = arr => {
    const inverted = {};
    for (let i = 0; i < arr.length; i++) {
        inverted[arr[i]] = i;
    }
    return inverted;
}

const gcd = (a, b) => {
    if (b > a) {
        const tmp = a;
        a = b;
        b = tmp;
    }
    while (true) {
        if (b === 0) return a;
        a %= b;
        if (a === 0) return b;
        b %= a;
    }
}

const generateMarkovIntoTable = (str, order, table, chars, ngrams) => {
    for (let i = 0; i < str.length - order; i++) {
        const currentNgram = str.slice(i, i + order);
        ngrams.add(currentNgram);
        const nextChar = str[i + order];
        chars.add(nextChar);

        let tableEntry;
        if (Object.prototype.hasOwnProperty.call(table, currentNgram)) {
            tableEntry = table[currentNgram];
            if (Object.prototype.hasOwnProperty.call(tableEntry, nextChar)) {
                tableEntry[nextChar]++;
            } else {
                tableEntry[nextChar] = 1;
            }
        } else {
            tableEntry = {[nextChar]: 1};
            table[currentNgram] = tableEntry;
        }

        if (i === (str.length - order) - 1) {
            // make sure we get the *last* ngram too
            ngrams.add(str.slice(i + 1));
        }
    }
}

// Generate a Markov chain probability table from a string or array of strings
const generateMarkov = (strings, order = 2) => {
    const table = {};
    const chars = new Set();
    const ngrams = new Set();
    if (Array.isArray(strings)) {
        for (const str of strings) {
            generateMarkovIntoTable(str, order, table, chars, ngrams);
        }
    } else {
        generateMarkovIntoTable(strings, order, table, chars, ngrams);
    }

    const ngramsArr = Array.from(ngrams).sort();
    const ngramIndices = invertArray(ngramsArr);

    // Convert string-based table (slow) to numeric indices (fast)
    const markovArr = [];

    for (let i = 0; i < ngramsArr.length; i++) {
        const ngram = ngramsArr[i];
        const probs = table[ngram];
        const probsArr = [];
        let totalProbability = 0;
        for (const nextChar of Object.keys(probs)) {
            const nextNgram = ngram.slice(1) + nextChar;
            const probability = probs[nextChar];
            totalProbability += probability;
            probsArr.push({
                nextNgram: ngramIndices[nextNgram],
                nextChar,
                probability
            });
        }
        // sort by probability in descending order to minimize linear search steps
        probsArr.sort((a, b) => b.probability - a.probability);
        let sum = 0;
        for (let i = 0; i < probsArr.length; i++) {
            sum += probsArr[i].probability;
            probsArr[i].cumulativeProbability = sum;
            delete probsArr[i].probability;
        }
        let probGCD = probsArr[0].cumulativeProbability;
        if (probsArr.length > 1) {
            for (let i = 1; i < probsArr.length; i++) {
                probGCD = gcd(probGCD, probsArr[i].cumulativeProbability);
            }
        }
        if (probGCD > 1) {
            for (const entry of probsArr) {
                entry.cumulativeProbability /= probGCD;
            }
            totalProbability /= probGCD;
        }

        markovArr.push({choices: probsArr, totalProbability});
    }

    return {
        table,
        markovArr,
        order,
        ngrams: {values: ngramsArr, indices: ngramIndices}
    };
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
    let generated = start;

    while (generated.length < len) {
        const prev = generated.slice(generated.length - order, generated.length);
        if (!Object.prototype.hasOwnProperty.call(table, prev)) return generated;
        const nextOptions = table[prev];

        generated += weightedRand(nextOptions);
    }

    return generated;
}

const generateFromArray = ({markovArr: table, ngrams}, len, start) => {
    let generated = start;
    let ngram = ngrams.indices[start];

    while (generated.length < len) {
        const {choices, totalProbability} = table[ngram];
        const random = Math.floor(Math.random() * totalProbability);
        for (let i = 0; i < choices.length; i++) {
            const {nextChar, nextNgram, cumulativeProbability} = choices[i];
            if (random < cumulativeProbability) {
                ngram = nextNgram;
                generated += nextChar;
                break;
            }
        }
    }

    return generated;
}

const markovArrToC = ({markovArr: table, ngrams}, name) => {
    const choicesDefs = [];
    const ngramDefs = [];

    for (let i = 0; i < table.length; i++) {
        const listName = `${name}_ngram${i}_choices`;
        const {choices, totalProbability} = table[i];
        const choiceDefs = [];
        for (let i = 0; i < choices.length; i++) {
            const {nextChar, nextNgram, cumulativeProbability} = choices[i];
            choiceDefs.push(
`    {.next_ngram = ${nextNgram}, .cumulative_probability = ${cumulativeProbability}, .next_char = '${nextChar}'}`
);
        }

        choicesDefs.push(
`static struct uwu_markov_choice ${listName}[] = {
${choiceDefs.join(',\n')}
};`
        );

        ngramDefs.push(`    {.choices = ${listName}, .total_probability = ${totalProbability}}${i === table.length - 1 ? '' : ','} // ${ngrams.values[i]}`);
    }

    const code =
`${choicesDefs.join('\n')}

static uwu_markov_ngram ${name}_ngrams[] = {
${ngramDefs.join('\n')}
};`;

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

/*console.log(generateFromArray(catgirlTable, 100, 'ny'));

console.time('from table');
for (let i = 0; i < 1000; i++) {
    generateFromTable(catgirlTable, 1000, 'ny');
}
console.timeEnd('from table');

console.time('from array');
for (let i = 0; i < 1000; i++) {
    generateFromArray(catgirlTable, 1000, 'ny');
}
console.timeEnd('from array');*/

console.log(markovArrToC(catgirlTable, 'catnonsense'));
console.log(markovArrToC(keysmashTable, 'keysmash'));
console.log(markovArrToC(scrunklyTable, 'scrunkly'));