#ifndef OBJECT_GI_GERUDO_H
#define OBJECT_GI_GERUDO_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiGerudoCardTex_WIDTH 32
#define gGiGerudoCardTex_HEIGHT 32
extern u64 gGiGerudoCardTex[TEX_LEN(u64, gGiGerudoCardTex_WIDTH, gGiGerudoCardTex_HEIGHT, 8)];
extern Vtx gGiGerudoCardVtx[];
extern Gfx gGiGerudoCardDL[123];

#endif
