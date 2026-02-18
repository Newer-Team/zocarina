#ifndef OBJECT_GI_RABIT_MASK_H
#define OBJECT_GI_RABIT_MASK_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiBunnyHoodEyeTex_WIDTH 16
#define gGiBunnyHoodEyeTex_HEIGHT 16
extern u64 gGiBunnyHoodEyeTex[TEX_LEN(u64, gGiBunnyHoodEyeTex_WIDTH, gGiBunnyHoodEyeTex_HEIGHT, 8)];
extern Vtx gGiBunnyHoodVtx[];
extern Vtx gGiBunnyHoodEyesVtx[];
extern Gfx gGiBunnyHoodDL[83];
extern Gfx gGiBunnyHoodEyesDL[20];

#endif
