const wasmBinaryString = atob('__WASM_DATA__');
const wasmData = new Uint8Array(wasmBinaryString.length);
for (let i = 0; i < wasmBinaryString.length; i++) {
    wasmData[i] = wasmBinaryString.charCodeAt(i);
}

const module = new WebAssembly.Module(wasmData);
const instance = new WebAssembly.Instance(module, {
    env: {
        uwuwasm_getrandom(dst: number, size: number) {
            crypto.getRandomValues(new Uint8Array(memory.buffer, dst, size));
        }
    }
});

const {uwuwasm_init, uwuwasm_free, uwuwasm_write_chars, malloc, free, memory} = instance.exports as {
    uwuwasm_init(): number;
    uwuwasm_free(instance: number): void;
    uwuwasm_write_chars(instance: number, dest: number, size: number): void;
    malloc(size: number): number;
    free(ptr: number): void;
    memory: WebAssembly.Memory;
};
const DECODER = new TextDecoder();

/**
 * Stateful uwurandom generator.
 */
export class UwurandomState {
    declare private readonly ptr: number;
    constructor() {
        this.ptr = uwuwasm_init();
        if (this.ptr === 0) {
            throw new Error('Out of memory');
        }
    }

    /**
     * Generate cat nonsense into the provided buffer.
     * @param dest A buffer, allocated within this instance.
     */
    generate(dest: DestBuffer) {
        uwuwasm_write_chars(
            this.ptr,
            (dest as unknown as ProtectedDestBuffer).ptr,
            (dest as unknown as ProtectedDestBuffer).size
        );
    }

    /**
     * Destroy this generator, freeing its underlying WASM memory.
     */
    destroy() {
        uwuwasm_free(this.ptr);
    }
}

// Hack for accessing `ptr` and `size` on `DestBuffer` without making them part
// of the public API
interface ProtectedDestBuffer {
    ptr: number;
    size: number;
}

/**
 * Memory allocation within this WASM instance, used for writing cat
 * nonsense into.
 */
export class DestBuffer {
    declare private readonly ptr: number;
    declare private readonly size: number;

    /**
     * Allocate a new buffer.
     * @param size The size, in bytes, of this buffer.
     */
    constructor(size: number) {
        this.ptr = malloc(size);
        if (this.ptr === 0) {
            throw new Error('Out of memory');
        }
        this.size = size;
    }

    /**
     * @returns This buffer as a {@link Uint8Array} view into the underlying
     * WASM memory. Note that allocating further {@link DestBuffer}s or
     * {@link UwurandomState}s may grow the WebAssembly memory and
     * invalidate this array view!
     */
    asTypedArray() {
        return new Uint8Array(memory.buffer, this.ptr, this.size);
    }

    /**
     * @returns The text contents of this buffer.
     */
    asText() {
        return DECODER.decode(this.asTypedArray());
    }

    /**
     * Free this buffer's underlying WASM memory.
     */
    destroy() {
        free(this.ptr);
    }
}
