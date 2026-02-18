#ifndef OBJECT_FZ_H
#define OBJECT_FZ_H

#include "tex_len.h"
#include "ultra64.h"

extern Vtx gFreezardIntactVtx[];
extern Gfx gFreezardIntactDL[88];
extern Vtx gFreezardTopRightHornChippedVtx[];
extern Gfx gFreezardTopRightHornChippedDL[74];
extern Vtx gFreezardHeadChippedVtx[];
extern Gfx gFreezardHeadChippedDL[57];
#define gFreezardSteamTex_WIDTH 32
#define gFreezardSteamTex_HEIGHT 32
extern u64 gFreezardSteamTex[TEX_LEN(u64, gFreezardSteamTex_WIDTH, gFreezardSteamTex_HEIGHT, 4)];
extern Vtx gFreezardSteamVtx[];
extern Gfx gFreezardSteamStartDL[23];
extern Gfx gFreezardSteamDL[4];
extern Vtx gFreezardIceTriangleVtx[];
extern Gfx gFreezardIceTriangleDL[22];
extern Vtx gFreezardIceRockVtx[];
extern Gfx gFreezardIceRockDL[28];

#endif
