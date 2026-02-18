#ifndef OBJECT_NWC_H
#define OBJECT_NWC_H

#include "tex_len.h"
#include "ultra64.h"

#define gCuccoChickBodyTex_WIDTH 32
#define gCuccoChickBodyTex_HEIGHT 32
extern u64 gCuccoChickBodyTex[TEX_LEN(u64, gCuccoChickBodyTex_WIDTH, gCuccoChickBodyTex_HEIGHT, 16)];
extern Vtx gCuccoChickBodyVtx[];
extern Gfx gCuccoChickSetupBodyDL[14];
extern Gfx gCuccoChickBodyDL[5];
#define gCuccoChickEyeTex_WIDTH 16
#define gCuccoChickEyeTex_HEIGHT 16
extern u64 gCuccoChickEyeTex[TEX_LEN(u64, gCuccoChickEyeTex_WIDTH, gCuccoChickEyeTex_HEIGHT, 16)];
#define gCuccoChickBeakTex_WIDTH 4
#define gCuccoChickBeakTex_HEIGHT 4
extern u64 gCuccoChickBeakTex[TEX_LEN(u64, gCuccoChickBeakTex_WIDTH, gCuccoChickBeakTex_HEIGHT, 16)];
extern Vtx gCuccoChickBeakVtx[];
extern Vtx gCuccoChickEyesVtx[];
extern Gfx gCuccoChickSetupEyeDL[15];
extern Gfx gCuccoChickEyesDL[4];
extern Gfx gCuccoChickSetupBeakDL[11];
extern Gfx gCuccoChickBeakDL[5];
extern Gfx gCuccoChickSetupShadowDL[8];
extern Gfx gCuccoChickShadowDL[3];
extern Vtx gCuccoChickShadowVtx[];

#endif
