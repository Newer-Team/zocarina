#ifndef OBJECT_GEFF_H
#define OBJECT_GEFF_H

#include "tex_len.h"
#include "ultra64.h"

#define gGanonRubbleInsideTex_WIDTH 32
#define gGanonRubbleInsideTex_HEIGHT 32
extern u64 gGanonRubbleInsideTex[TEX_LEN(u64, gGanonRubbleInsideTex_WIDTH, gGanonRubbleInsideTex_HEIGHT, 16)];
#define gGanonRubbleOutsideTex_WIDTH 32
#define gGanonRubbleOutsideTex_HEIGHT 32
extern u64 gGanonRubbleOutsideTex[TEX_LEN(u64, gGanonRubbleOutsideTex_WIDTH, gGanonRubbleOutsideTex_HEIGHT, 8)];
extern Vtx gGanonRubbleVtx[];
extern Gfx gGanonRubbleDL[34];

#endif
