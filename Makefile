EXTRA_CFLAGS += -I`pwd` -Wno-declaration-after-statement

usermode: CFLAGS += -O3 -std=c99 -lm
wasm: CFLAGS += -Oz -std=c99 -lm
sharedlib: CFLAGS += -O3 -std=c99 -fPIC -lm

usermode:
	$(CC) $(CFLAGS) uwurandom_user.c -o uwurandom

clean-usermode:
	rm uwurandom

wasm:
	clang --target=wasm32 --no-standard-libraries -Wl,--no-entry -Wl,--strip-all -Wl,--export=malloc -Wl,--export=free -Wall $(CFLAGS) -o uwurandom.wasm uwurandom_wasm.c

clean-wasm:
	rm uwurandom.wasm

js: wasm
	cd uwurandom-js && $(MAKE)

clean-js: clean-wasm
	cd uwurandom-js && $(MAKE) clean

sharedlib:
	$(CC) $(CFLAGS) -shared -o libuwurandom.so uwurandom_lib.c

clean-sharedlib:
	rm -f libuwurandom.so

clean: clean-usermode clean-wasm clean-js clean-sharedlib
