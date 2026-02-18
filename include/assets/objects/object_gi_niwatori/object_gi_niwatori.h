#ifndef OBJECT_GI_NIWATORI_H
#define OBJECT_GI_NIWATORI_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiChickenFeathersTex_WIDTH 32
#define gGiChickenFeathersTex_HEIGHT 64
extern u64 gGiChickenFeathersTex[TEX_LEN(u64, gGiChickenFeathersTex_WIDTH, gGiChickenFeathersTex_HEIGHT, 8)];
#define gGiChickenEyeTex_WIDTH 32
#define gGiChickenEyeTex_HEIGHT 32
extern u64 gGiChickenEyeTex[TEX_LEN(u64, gGiChickenEyeTex_WIDTH, gGiChickenEyeTex_HEIGHT, 8)];
extern Vtx gGiChickenVtx[];
extern Vtx gGiChickenEyesVtx[];
extern Gfx gGiChickenColorDL[4];
extern Gfx gGiCojiroColorDL[4];
extern Gfx gGiChickenDL[99];
extern Gfx gGiChickenEyesDL[20];

#endif
