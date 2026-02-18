#ifndef OBJECT_BOMBF_H
#define OBJECT_BOMBF_H

#include "tex_len.h"
#include "ultra64.h"

extern Vtx gBombFlowerLeavesVtx[];
extern Vtx gBombFlowerSparkVtx[];
extern Vtx gBombFlowerBaseLeavesVtx[];
extern Vtx gBombFlowerBombVtx[];
extern Gfx gBombFlowerLeavesDL[25];
extern Gfx gBombFlowerBombAndSparkDL[37];
extern Gfx gBombFlowerBaseLeavesDL[21];
#define gBombFlowerLeafOutwardsTex_WIDTH 32
#define gBombFlowerLeafOutwardsTex_HEIGHT 32
extern u64 gBombFlowerLeafOutwardsTex[TEX_LEN(u64, gBombFlowerLeafOutwardsTex_WIDTH, gBombFlowerLeafOutwardsTex_HEIGHT, 16)];
#define gBombFlowerLeafUpwardsTex_WIDTH 16
#define gBombFlowerLeafUpwardsTex_HEIGHT 32
extern u64 gBombFlowerLeafUpwardsTex[TEX_LEN(u64, gBombFlowerLeafUpwardsTex_WIDTH, gBombFlowerLeafUpwardsTex_HEIGHT, 16)];
#define gBombFlowerBombTex_WIDTH 32
#define gBombFlowerBombTex_HEIGHT 32
extern u64 gBombFlowerBombTex[TEX_LEN(u64, gBombFlowerBombTex_WIDTH, gBombFlowerBombTex_HEIGHT, 16)];
#define gBombFlowerFuseTex_WIDTH 4
#define gBombFlowerFuseTex_HEIGHT 4
extern u64 gBombFlowerFuseTex[TEX_LEN(u64, gBombFlowerFuseTex_WIDTH, gBombFlowerFuseTex_HEIGHT, 16)];

#endif
