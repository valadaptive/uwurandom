import {UwurandomState, DestBuffer} from './dist/uwurandom.mjs';

const state = new UwurandomState();
const dest = new DestBuffer(8192);
while (true) {
    state.generate(dest);
    process.stdout.write(dest.asText());
}
