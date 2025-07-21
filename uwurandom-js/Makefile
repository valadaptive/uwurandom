all:
	tsc uwurandom.mts --declaration --outDir dist --lib esnext,dom --target esnext --strict
	sed -i "s,__WASM_DATA__,$$(base64 -w0 ../uwurandom.wasm)," dist/uwurandom.mjs

clean:
	rm -rf ./dist
