#ifndef OBJECT_SPOT16_OBJ_H
#define OBJECT_SPOT16_OBJ_H

#include "tex_len.h"
#include "ultra64.h"

#define gDodongosCavernRockTex_WIDTH 64
#define gDodongosCavernRockTex_HEIGHT 64
extern u64 gDodongosCavernRockTex[TEX_LEN(u64, gDodongosCavernRockTex_WIDTH, gDodongosCavernRockTex_HEIGHT, 4)];
extern Vtx gDodongosCavernRockVtx[];
extern Vtx gDodongosCavernRock2Vtx[];
extern Gfx gDodongosCavernRockDL[32];
extern Gfx gDodongosCavernRock2DL[4];
extern Gfx gDodongosCavernRock3DL[2];
#define gDeathMountainRingTex_WIDTH 32
#define gDeathMountainRingTex_HEIGHT 32
extern u64 gDeathMountainRingTex[TEX_LEN(u64, gDeathMountainRingTex_WIDTH, gDeathMountainRingTex_HEIGHT, 16)];
extern Vtx gDeathMountainRingVtx[];
extern Gfx gDeathMountainRingDL[18];

#endif
