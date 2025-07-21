# /dev/uwurandom

`/dev/urandom` is made out of cold hard math. Instead, consider using `/dev/uwurandom`, which generates data through a tiny catgirl furiously typing away utter nonsense inside your computer.

**Disclaimer: I am very bad at C. While I've tested this myself and haven't managed to cause a kernel panic, this is not production-quality code. Use at your own risk.**

## Installation and usage

### Installation
Compilation is easy :3

First up, you'll need to install kernel headers for whichever kernel version you've installed.

On Ubuntu or Debian (assuming your kernel is already up-to-date):
```bash
sudo apt-get install linux-headers-generic
```

On Fedora:
```bash
sudo dnf install kernel-devel
```

On Arch:
```bash
sudo pacman -S linux-headers
```

(or `linux-lts-headers` if you're using the `linux-lts` kernel)

Once you've installed the kernel headers, you should be able to run `make kernel` to build the kernel module:
```bash
make kernel
```

### Usage

Usage is also easy! >w< To insert the kernel module, just run:

```bash
sudo insmod uwurandom.ko
```

When the module is loaded, it automatically sets up the `/dev/uwurandom` device, so you can do:

```bash
cat /dev/uwurandom
```
and witness its sheer glory with your own eyes.

If things are a bit too silly and you want to un-load the kernel module, run:

```bash
sudo rmmod uwurandom
```

Or, if you're boring and don't want to load an entire kernel module for generating catgirl keyboard mashing, you can compile the userspace version:

```bash
make usermode
```
