#ifndef OBJECT_GI_GERUDOMASK_H
#define OBJECT_GI_GERUDOMASK_H

#include "tex_len.h"
#include "ultra64.h"

//#define gGiGerudoMaskTLUT_TLUT_COUNT 256
extern u64 gGiGerudoMaskTLUT[];
extern u8 object_gi_gerudomask_000200_Blob[];
#define gGiGerudoMaskSkinTex_WIDTH 8
#define gGiGerudoMaskSkinTex_HEIGHT 8
extern u64 gGiGerudoMaskSkinTex[TEX_LEN(u64, gGiGerudoMaskSkinTex_WIDTH, gGiGerudoMaskSkinTex_HEIGHT, 8)];
#define gGiGerudoMaskHairTex_WIDTH 16
#define gGiGerudoMaskHairTex_HEIGHT 16
extern u64 gGiGerudoMaskHairTex[TEX_LEN(u64, gGiGerudoMaskHairTex_WIDTH, gGiGerudoMaskHairTex_HEIGHT, 8)];
#define gGiGerudoMaskLipsTex_WIDTH 16
#define gGiGerudoMaskLipsTex_HEIGHT 16
extern u64 gGiGerudoMaskLipsTex[TEX_LEN(u64, gGiGerudoMaskLipsTex_WIDTH, gGiGerudoMaskLipsTex_HEIGHT, 8)];
#define gGiGerudoMaskEyeTex_WIDTH 32
#define gGiGerudoMaskEyeTex_HEIGHT 32
extern u64 gGiGerudoMaskEyeTex[TEX_LEN(u64, gGiGerudoMaskEyeTex_WIDTH, gGiGerudoMaskEyeTex_HEIGHT, 8)];
extern Vtx gGiGerudoMaskVtx[];
extern Gfx gGiGerudoMaskDL[98];

#endif
