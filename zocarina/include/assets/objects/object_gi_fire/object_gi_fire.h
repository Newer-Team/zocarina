#ifndef OBJECT_GI_FIRE_H
#define OBJECT_GI_FIRE_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiBlueFireFlameTex_WIDTH 16
#define gGiBlueFireFlameTex_HEIGHT 32
extern u64 gGiBlueFireFlameTex[TEX_LEN(u64, gGiBlueFireFlameTex_WIDTH, gGiBlueFireFlameTex_HEIGHT, 8)];
#define gGiBlueFireFireEffectTex_WIDTH 16
#define gGiBlueFireFireEffectTex_HEIGHT 32
extern u64 gGiBlueFireFireEffectTex[TEX_LEN(u64, gGiBlueFireFireEffectTex_WIDTH, gGiBlueFireFireEffectTex_HEIGHT, 8)];
extern Vtx gGiBlueFireChamberstickVtx[];
extern Vtx gGiBlueFireFlameVtx[];
extern Gfx gGiBlueFireChamberstickDL[85];
extern Gfx gGiBlueFireFlameDL[27];

#endif
