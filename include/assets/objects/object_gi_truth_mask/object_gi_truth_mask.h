#ifndef OBJECT_GI_TRUTH_MASK_H
#define OBJECT_GI_TRUTH_MASK_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiMaskOfTruthAccent1Tex_WIDTH 32
#define gGiMaskOfTruthAccent1Tex_HEIGHT 32
extern u64 gGiMaskOfTruthAccent1Tex[TEX_LEN(u64, gGiMaskOfTruthAccent1Tex_WIDTH, gGiMaskOfTruthAccent1Tex_HEIGHT, 8)];
#define gGiMaskOfTruthAccent2Tex_WIDTH 32
#define gGiMaskOfTruthAccent2Tex_HEIGHT 32
extern u64 gGiMaskOfTruthAccent2Tex[TEX_LEN(u64, gGiMaskOfTruthAccent2Tex_WIDTH, gGiMaskOfTruthAccent2Tex_HEIGHT, 8)];
extern Vtx gGiMaskOfTruthVtx[];
extern Vtx gGiMaskOfTruthAccentsVtx[];
extern Gfx gGiMaskOfTruthDL[92];
extern Gfx gGiMaskOfTruthAccentsDL[54];

#endif
