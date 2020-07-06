# Compiling and Linking C programs


We can list available libraries with:
```sh
pkgcong --list-all
```

or by doing:
```sh
ldconfig -v | less
```

If we find in this list a library e.g., called "libgmxx.so.2"
we can include it in the compilation process by doing:

```sh
gcc -lgmxx source.c
```

Another way to determine the library name, whenever we see the
inclusion of a ".h" file is to search to what library that
".h" file corresponds.

To do this, we can do:
```sh
pkgfile XInput.h
# this will show us something like libxi
# at this point we know that to correctly compile a program using 
# XInput.h we must tell gcc to do something like this:
# gcc -lxi source.c
```


Given a specific library, we can check out possible compilation/linking flags by
doing:
```sh
pkgconf  --libs --cflags libclc
# sometimes this is called pkg-config
```
