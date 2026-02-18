#ifndef OBJECT_GI_SOLDOUT_H
#define OBJECT_GI_SOLDOUT_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiSoldOutTex_WIDTH 32
#define gGiSoldOutTex_HEIGHT 32
extern u64 gGiSoldOutTex[TEX_LEN(u64, gGiSoldOutTex_WIDTH, gGiSoldOutTex_HEIGHT, 8)];
extern Vtx gGiSoldOutVtx[];
extern Gfx gGiSoldOutDL[17];

#endif
