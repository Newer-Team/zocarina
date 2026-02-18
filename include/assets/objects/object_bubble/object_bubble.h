#ifndef OBJECT_BUBBLE_H
#define OBJECT_BUBBLE_H

#include "tex_len.h"
#include "ultra64.h"

#define gBubbleTex_WIDTH 64
#define gBubbleTex_HEIGHT 64
extern u64 gBubbleTex[TEX_LEN(u64, gBubbleTex_WIDTH, gBubbleTex_HEIGHT, 8)];
extern Gfx gBubbleDL[16];
extern Vtx gBubbleVtx[];

#endif
