#ifndef OBJECT_GI_KI_TAN_MASK_H
#define OBJECT_GI_KI_TAN_MASK_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiKeatonMaskEyeTex_WIDTH 8
#define gGiKeatonMaskEyeTex_HEIGHT 32
extern u64 gGiKeatonMaskEyeTex[TEX_LEN(u64, gGiKeatonMaskEyeTex_WIDTH, gGiKeatonMaskEyeTex_HEIGHT, 8)];
extern Vtx gGiKeatonMaskVtx[];
extern Vtx gGiKeatonMaskEyesVtx[];
extern Gfx gGiKeatonMaskDL[82];
extern Gfx gGiKeatonMaskEyesDL[20];

#endif
