#ifndef OBJECT_SPOT15_OBJ_H
#define OBJECT_SPOT15_OBJ_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gLonLonMilkCrateVtx[];
extern Gfx gLonLonMilkCrateDL[23];
extern BgCamInfo gLonLonMilkCrateBgCamList[];
extern SurfaceType gLonLonMilkCrateSurfaceTypes[];
extern CollisionPoly gLonLonMilkCratePolyList[];
extern Vec3s gLonLonMilkCrateVtxList[];
extern CollisionHeader gLonLonMilkCrateCol;
extern Vtx gLonLonCorralFenceVtx[];
extern Gfx gLonLonCorralFenceDL[18];
extern BgCamInfo gLonLonCorralFenceBgCamList[];
extern SurfaceType gLonLonCorralFenceSurfaceTypes[];
extern CollisionPoly gLonLonCorralFencePolyList[];
extern Vec3s gLonLonCorralFenceVtxList[];
extern CollisionHeader gLonLonCorralFenceCol;
#define gLonLonCorralFenceTex_WIDTH 32
#define gLonLonCorralFenceTex_HEIGHT 128
extern u64 gLonLonCorralFenceTex[TEX_LEN(u64, gLonLonCorralFenceTex_WIDTH, gLonLonCorralFenceTex_HEIGHT, 4)];
#define gLonLonMilkCrateTex_WIDTH 32
#define gLonLonMilkCrateTex_HEIGHT 64
extern u64 gLonLonMilkCrateTex[TEX_LEN(u64, gLonLonMilkCrateTex_WIDTH, gLonLonMilkCrateTex_HEIGHT, 16)];

#endif
