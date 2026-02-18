#ifndef OBJECT_SPOT17_OBJ_H
#define OBJECT_SPOT17_OBJ_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

//#define gCraterRockTLUT_TLUT_COUNT 16
extern u64 gCraterRockTLUT[];
#define gCraterRockTex_WIDTH 64
#define gCraterRockTex_HEIGHT 64
extern u64 gCraterRockTex[TEX_LEN(u64, gCraterRockTex_WIDTH, gCraterRockTex_HEIGHT, 4)];
extern Vtx gCraterBombableWallVtx[];
extern Vtx gCraterBombableWallCracksVtx[];
extern Gfx gCraterBombableWallDL[24];
extern Gfx gCraterBombableWallCracksDL[18];
extern BgCamInfo gCraterBombableWallBgCamList[];
extern SurfaceType gCraterBombableWallSurfaceTypes[];
extern CollisionPoly gCraterBombableWallPolyList[];
extern Vec3s gCraterBombableWallVtxList[];
extern CollisionHeader gCraterBombableWallCol;
extern Vtx gCraterSmokeConeVtx[];
extern Gfx gCraterSmokeConeDL[30];
#define gCraterSmokeConeTex_WIDTH 32
#define gCraterSmokeConeTex_HEIGHT 32
extern u64 gCraterSmokeConeTex[TEX_LEN(u64, gCraterSmokeConeTex_WIDTH, gCraterSmokeConeTex_HEIGHT, 8)];
#define gCraterBombableWallCracksTex_WIDTH 64
#define gCraterBombableWallCracksTex_HEIGHT 64
extern u64 gCraterBombableWallCracksTex[TEX_LEN(u64, gCraterBombableWallCracksTex_WIDTH, gCraterBombableWallCracksTex_HEIGHT, 4)];

#endif
