#ifndef OBJECT_EFC_LGT_SHOWER_H
#define OBJECT_EFC_LGT_SHOWER_H

#include "tex_len.h"
#include "ultra64.h"

#define gEnliveningLightTex_WIDTH 64
#define gEnliveningLightTex_HEIGHT 64
extern u64 gEnliveningLightTex[TEX_LEN(u64, gEnliveningLightTex_WIDTH, gEnliveningLightTex_HEIGHT, 8)];
extern Vtx gEnliveningLightVtx[];
extern Gfx gEnliveningLightDL[32];

#endif
