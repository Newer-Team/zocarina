#ifndef OBJECT_GI_BUTTERFLY_H
#define OBJECT_GI_BUTTERFLY_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiButterflyTex_WIDTH 24
#define gGiButterflyTex_HEIGHT 48
extern u64 gGiButterflyTex[TEX_LEN(u64, gGiButterflyTex_WIDTH, gGiButterflyTex_HEIGHT, 4)];
extern Vtx gGiButterflyContainerVtx[];
extern Vtx gGiButterflyGlassVtx[];
extern Gfx gGiButterflyContainerDL[72];
extern Gfx gGiButterflyGlassDL[43];

#endif
