# /dev/uwurandom (dot js)

You can now use [uwurandom](https://github.com/valadaptive/uwurandom) in JavaScript! It's compiled to WebAssembly, and it's compact enough that it's all bundled into a single JavaScript file.

There are two classes: `UwurandomState` (which holds a single instance of an uwurandom generator) and `DestBuffer` (which is where the output is written). Use them like so:

```js
import {readFile} from 'node:fs/promises';
import {join} from 'node:path';
import {UwurandomState, DestBuffer} from './dist/uwurandom.mjs';

// Create a new uwurandom generator
const state = new UwurandomState();
// Create an output buffer to write into
const dest = new DestBuffer(8192);

for (let i = 0; i < 100; i++) {
    // Generate catgirl nonsense to your heart's content
    state.generate(dest);

    // Convert the binary output to text
    const uwuText = dest.asText();

    // uwehhhh *lies down on a random surface* owo >//////< :3
    // skgahkfgjhglksksdhgsdhgafgbkskahfkfglg;kjkfgfg;dfgjhdsdhiuegjfghgjdhrhgaj
    // *falls asleep* owo *eats all ur doritos* uwu >///<
    process.stdout.write(uwuText);
}

// Remember to free the buffers once you're done with them
state.destroy();
dest.destroy();
```

This package also contains an `uwurandom` binary which outputs an endless stream of catgirl nonsense, just like the kernel module and native usermode binary.
