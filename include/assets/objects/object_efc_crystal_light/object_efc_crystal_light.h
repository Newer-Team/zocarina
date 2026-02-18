#ifndef OBJECT_EFC_CRYSTAL_LIGHT_H
#define OBJECT_EFC_CRYSTAL_LIGHT_H

#include "tex_len.h"
#include "ultra64.h"

#define gCrystalLightTex_WIDTH 64
#define gCrystalLightTex_HEIGHT 64
extern u64 gCrystalLightTex[TEX_LEN(u64, gCrystalLightTex_WIDTH, gCrystalLightTex_HEIGHT, 4)];
extern Vtx gCrystalLightVtx[];
extern Gfx gCrystalLightDL[36];

#endif
