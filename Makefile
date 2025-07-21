KERNELRELEASE ?= $(shell uname -r)
KERNEL_DIR ?= /lib/modules/$(KERNELRELEASE)/build/
EXTRA_CFLAGS += -I`pwd` -Wno-declaration-after-statement

usermode: CFLAGS += -O3 -std=c99
wasm: CFLAGS += -Oz -std=c99

obj-m += uwurandom.o

kernel:
	make -C $(KERNEL_DIR) M=`pwd` modules

clean-kernel:
	make -C $(KERNEL_DIR) M=`pwd` clean

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
