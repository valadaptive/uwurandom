KERNELRELEASE ?= $(shell uname -r)
KERNEL_DIR  ?= /usr/src/kernels/$(KERNELRELEASE)
EXTRA_CFLAGS += -I`pwd` -Wno-declaration-after-statement

obj-m += uwurandom.o

all:
	make -C $(KERNEL_DIR) M=`pwd` modules

clean:
	make -C $(KERNEL_DIR) M=`pwd` clean
