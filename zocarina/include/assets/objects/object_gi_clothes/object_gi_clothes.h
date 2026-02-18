#ifndef OBJECT_GI_CLOTHES_H
#define OBJECT_GI_CLOTHES_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiTunicCollarTex_WIDTH 64
#define gGiTunicCollarTex_HEIGHT 64
extern u64 gGiTunicCollarTex[TEX_LEN(u64, gGiTunicCollarTex_WIDTH, gGiTunicCollarTex_HEIGHT, 4)];
extern Vtx gGiTunicCollarVtx[];
extern Vtx gGiTunicVtx[];
extern Gfx gGiGoronCollarColorDL[4];
extern Gfx gGiZoraCollarColorDL[4];
extern Gfx gGiGoronTunicColorDL[4];
extern Gfx gGiZoraTunicColorDL[4];
extern Gfx gGiTunicCollarDL[21];
extern Gfx gGiTunicDL[74];

#endif
