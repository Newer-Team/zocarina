#ifndef OBJECT_GOROIWA_H
#define OBJECT_GOROIWA_H

#include "tex_len.h"
#include "ultra64.h"

extern Vtx gRollingRockVtx[];
extern Gfx gRollingRockDL[61];
#define gRollingRockTex_WIDTH 32
#define gRollingRockTex_HEIGHT 64
extern u64 gRollingRockTex[TEX_LEN(u64, gRollingRockTex_WIDTH, gRollingRockTex_HEIGHT, 16)];

#endif
