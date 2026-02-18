#ifndef OBJECT_LIGHT_RING_H
#define OBJECT_LIGHT_RING_H

#include "tex_len.h"
#include "ultra64.h"

extern Vtx gGoldenGoddessLightRingVtx[];
extern Gfx gGoldenGoddessLightRingDL[29];
#define gGoldenGoddessLightRingTex_WIDTH 32
#define gGoldenGoddessLightRingTex_HEIGHT 128
extern u64 gGoldenGoddessLightRingTex[TEX_LEN(u64, gGoldenGoddessLightRingTex_WIDTH, gGoldenGoddessLightRingTex_HEIGHT, 8)];

#endif
