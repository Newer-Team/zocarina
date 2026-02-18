#ifndef OBJECT_GI_HOVERBOOTS_H
#define OBJECT_GI_HOVERBOOTS_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiHoverBootsWingTex_WIDTH 48
#define gGiHoverBootsWingTex_HEIGHT 32
extern u64 gGiHoverBootsWingTex[TEX_LEN(u64, gGiHoverBootsWingTex_WIDTH, gGiHoverBootsWingTex_HEIGHT, 4)];
#define object_gi_hoverboots_000300_Tex_WIDTH 16
#define object_gi_hoverboots_000300_Tex_HEIGHT 32
extern u64 object_gi_hoverboots_000300_Tex[TEX_LEN(u64, object_gi_hoverboots_000300_Tex_WIDTH, object_gi_hoverboots_000300_Tex_HEIGHT, 4)];
extern Vtx gGiHoverBootsVtx[];
extern Gfx gGiHoverBootsDL[196];

#endif
