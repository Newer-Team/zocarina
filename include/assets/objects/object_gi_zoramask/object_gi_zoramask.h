#ifndef OBJECT_GI_ZORAMASK_H
#define OBJECT_GI_ZORAMASK_H

#include "tex_len.h"
#include "ultra64.h"

//#define gGiZoraMaskTLUT_TLUT_COUNT 256
extern u64 gGiZoraMaskTLUT[];
extern u8 object_gi_zoramask_000200_Blob[];
#define object_gi_zoramask_000208_Tex_WIDTH 8
#define object_gi_zoramask_000208_Tex_HEIGHT 8
extern u64 object_gi_zoramask_000208_Tex[TEX_LEN(u64, object_gi_zoramask_000208_Tex_WIDTH, object_gi_zoramask_000208_Tex_HEIGHT, 8)];
#define object_gi_zoramask_000248_Tex_WIDTH 32
#define object_gi_zoramask_000248_Tex_HEIGHT 32
extern u64 object_gi_zoramask_000248_Tex[TEX_LEN(u64, object_gi_zoramask_000248_Tex_WIDTH, object_gi_zoramask_000248_Tex_HEIGHT, 8)];
#define gGiZoraMaskEyeTex_WIDTH 32
#define gGiZoraMaskEyeTex_HEIGHT 32
extern u64 gGiZoraMaskEyeTex[TEX_LEN(u64, gGiZoraMaskEyeTex_WIDTH, gGiZoraMaskEyeTex_HEIGHT, 8)];
#define gGiZoraMaskMouthTex_WIDTH 32
#define gGiZoraMaskMouthTex_HEIGHT 32
extern u64 gGiZoraMaskMouthTex[TEX_LEN(u64, gGiZoraMaskMouthTex_WIDTH, gGiZoraMaskMouthTex_HEIGHT, 8)];
extern Vtx gGiZoraMaskVtx[];
extern Gfx gGiZoraMaskDL[83];

#endif
