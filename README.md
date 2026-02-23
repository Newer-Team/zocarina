# zocarina
A library for compiling Zelda: Ocarina of Time compatible code.

## `GBI_GLANKK`

Uses Glankk's `gbi.h` instead of the default one used in
OoT decompilation project.

```c
#define GBI_GLANKK 1
#include "gfx.h"
```

## `USE_ANON_TAG`

Uses Microsoft anon tag extension to "inherit" sub-struct into
parent structures namespace. Used to make `gSaveContext` a
little bit more convenient to work with.

This requires the following flags to be passed to the compiler:

```sh
-DUSE_ANON_TAG=1
-fms-extensions
-Wno-microsoft-anon-tag # optional but recommended
```