#ifndef OBJECT_GI_GLOVES_H
#define OBJECT_GI_GLOVES_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiGauntletsPlateTex_WIDTH 64
#define gGiGauntletsPlateTex_HEIGHT 32
extern u64 gGiGauntletsPlateTex[TEX_LEN(u64, gGiGauntletsPlateTex_WIDTH, gGiGauntletsPlateTex_HEIGHT, 8)];
extern Vtx gGiGauntletsVtx[];
extern Vtx gGiGauntletsPlateVtx[];
extern Gfx gGiSilverGauntletsColorDL[4];
extern Gfx gGiGoldenGauntletsColorDL[4];
extern Gfx gGiSilverGauntletsPlateColorDL[4];
extern Gfx gGiGoldenGauntletsPlateColorDL[4];
extern Gfx gGiGauntletsDL[100];
extern Gfx gGiGauntletsPlateDL[32];

#endif
