# /dev/uwurandom

`/dev/urandom` is made out of cold hard math. Instead, consider using `/dev/uwurandom`, which generates data through a tiny catgirl furiously typing away utter nonsense inside your computer.

**Disclaimer: I am very bad at C. While I've tested this myself and haven't managed to cause a kernel panic, this is not production-quality code. Use at your own risk.**

## Installation and usage

### Installation
Compilation is easy :3

On Fedora, you can just do:
```bash
make
```

On Arch, just install [uwurandom-git-dkms](https://aur.archlinux.org/packages/uwurandom-git-dkms) from the AUR! >/////<

On other distros, you may need to adjust the include paths in [the Makefile](./Makefile) depending on where your kernel headers are located (I think it's ``/usr/src/linux-headers-`uname -r` `` on Ubuntu and ``/usr/lib/modules/`uname -r`/build`` on Arch but don't quote me on that). After that you *should* be able to `make` as usual.

### Usage

Usage is also easy! >w<

```bash
sudo insmod uwurandom.ko
```

Afterwards, you can just:
```bash
cat /dev/uwurandom
```
and witness its sheer glory with your own eyes.
