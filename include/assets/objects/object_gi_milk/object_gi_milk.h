#ifndef OBJECT_GI_MILK_H
#define OBJECT_GI_MILK_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiMilkBottleLabelTex_WIDTH 72
#define gGiMilkBottleLabelTex_HEIGHT 24
extern u64 gGiMilkBottleLabelTex[TEX_LEN(u64, gGiMilkBottleLabelTex_WIDTH, gGiMilkBottleLabelTex_HEIGHT, 8)];
extern Vtx gGiMilkBottleContentsVtx[];
extern Vtx gGiMilkBottleVtx[];
extern Gfx gGiMilkBottleContentsDL[69];
extern Gfx gGiMilkBottleDL[60];

#endif
