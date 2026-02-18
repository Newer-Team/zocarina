#ifndef OBJECT_GS_H
#define OBJECT_GS_H

#include "tex_len.h"
#include "ultra64.h"

#define gGossipStoneTex_WIDTH 32
#define gGossipStoneTex_HEIGHT 64
extern u64 gGossipStoneTex[TEX_LEN(u64, gGossipStoneTex_WIDTH, gGossipStoneTex_HEIGHT, 8)];
extern Vtx gGossipStoneVtx[];
extern Gfx gGossipStoneMaterialDL[16];
extern Gfx gGossipStoneDL[18];
extern Gfx gGossipStoneSquishedDL[4];

#endif
