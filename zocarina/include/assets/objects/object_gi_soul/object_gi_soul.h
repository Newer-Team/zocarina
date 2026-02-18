#ifndef OBJECT_GI_SOUL_H
#define OBJECT_GI_SOUL_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiFairyTex_WIDTH 32
#define gGiFairyTex_HEIGHT 32
extern u64 gGiFairyTex[TEX_LEN(u64, gGiFairyTex_WIDTH, gGiFairyTex_HEIGHT, 8)];
extern Vtx gGiFairyContainerBaseCapVtx[];
extern Vtx gGiFairyContainerGlassVtx[];
extern Vtx gGiFairyContainerContentsVtx[];
extern Gfx gGiFairyContainerBaseCapDL[61];
extern Gfx gGiFairyContainerGlassDL[39];
extern Gfx gGiFairyContainerContentsDL[24];

#endif
