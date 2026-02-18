#ifndef OBJECT_SPOT11_OBJ_H
#define OBJECT_SPOT11_OBJ_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

#define gDesertColossusOasisWaterTex_WIDTH 32
#define gDesertColossusOasisWaterTex_HEIGHT 32
extern u64 gDesertColossusOasisWaterTex[TEX_LEN(u64, gDesertColossusOasisWaterTex_WIDTH, gDesertColossusOasisWaterTex_HEIGHT, 16)];
extern Vtx gDesertColossusOasisVtx[];
extern Gfx gDesertColossusOasisDL[25];
#define gDesertColossusBombableWallTex_WIDTH 32
#define gDesertColossusBombableWallTex_HEIGHT 64
extern u64 gDesertColossusBombableWallTex[TEX_LEN(u64, gDesertColossusBombableWallTex_WIDTH, gDesertColossusBombableWallTex_HEIGHT, 16)];
extern Vtx gDesertColossusBombableWallVtx[];
extern Gfx gDesertColossusBombableWallDL[18];
extern BgCamInfo gDesertColossusBombableWallBgCamList[];
extern SurfaceType gDesertColossusBombableWallSurfaceTypes[];
extern CollisionPoly gDesertColossusBombableWallPolyList[];
extern Vec3s gDesertColossusBombableWallVtxList[];
extern CollisionHeader gDesertColossusBombableWallCol;

#endif
