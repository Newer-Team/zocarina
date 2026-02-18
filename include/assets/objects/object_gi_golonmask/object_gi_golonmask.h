#ifndef OBJECT_GI_GOLONMASK_H
#define OBJECT_GI_GOLONMASK_H

#include "tex_len.h"
#include "ultra64.h"

//#define gGiGoronMaskTLUT_TLUT_COUNT 256
extern u64 gGiGoronMaskTLUT[];
extern u8 object_gi_golonmask_000200_Blob[];
#define gGiGoronMaskSkinTex_WIDTH 8
#define gGiGoronMaskSkinTex_HEIGHT 8
extern u64 gGiGoronMaskSkinTex[TEX_LEN(u64, gGiGoronMaskSkinTex_WIDTH, gGiGoronMaskSkinTex_HEIGHT, 8)];
#define gGiGoronMaskHairTex_WIDTH 16
#define gGiGoronMaskHairTex_HEIGHT 16
extern u64 gGiGoronMaskHairTex[TEX_LEN(u64, gGiGoronMaskHairTex_WIDTH, gGiGoronMaskHairTex_HEIGHT, 8)];
#define gGiGoronMaskEyeTex_WIDTH 32
#define gGiGoronMaskEyeTex_HEIGHT 32
extern u64 gGiGoronMaskEyeTex[TEX_LEN(u64, gGiGoronMaskEyeTex_WIDTH, gGiGoronMaskEyeTex_HEIGHT, 8)];
#define gGiGoronMaskMouthTex_WIDTH 64
#define gGiGoronMaskMouthTex_HEIGHT 32
extern u64 gGiGoronMaskMouthTex[TEX_LEN(u64, gGiGoronMaskMouthTex_WIDTH, gGiGoronMaskMouthTex_HEIGHT, 8)];
extern Vtx gGiGoronMaskVtx[];
extern Gfx gGiGoronMaskDL[87];

#endif
