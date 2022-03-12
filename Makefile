CFLAGS = -I`pwd`

obj-m += uwurandom.o

all:
	make -C /usr/src/kernels/`uname -r` M=`pwd` modules

clean:
	make -C /usr/src/kernels/`uname -r` M=`pwd` clean
