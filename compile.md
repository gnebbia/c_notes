# Compiling and Linking C programs


We can list available libraries with:
```sh
pkgcong --list-all
```

given a specific library, we can check out possible compilation/linking flags by
doing:
```sh
pkgconf  --libs --cflags libclc
# sometimes this is called pkg-config
```
