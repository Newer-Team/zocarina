#ifndef OBJECT_GI_SHIELD_3_H
#define OBJECT_GI_SHIELD_3_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiMirrorShieldSymbol1Tex_WIDTH 64
#define gGiMirrorShieldSymbol1Tex_HEIGHT 32
extern u64 gGiMirrorShieldSymbol1Tex[TEX_LEN(u64, gGiMirrorShieldSymbol1Tex_WIDTH, gGiMirrorShieldSymbol1Tex_HEIGHT, 4)];
#define gGiMirrorShieldSymbol2Tex_WIDTH 64
#define gGiMirrorShieldSymbol2Tex_HEIGHT 64
extern u64 gGiMirrorShieldSymbol2Tex[TEX_LEN(u64, gGiMirrorShieldSymbol2Tex_WIDTH, gGiMirrorShieldSymbol2Tex_HEIGHT, 4)];
extern Vtx gGiMirrorShieldVtx[];
extern Vtx gGiMirrorShieldSymbolVtx[];
extern Gfx gGiMirrorShieldDL[67];
extern Gfx gGiMirrorShieldSymbolDL[30];

#endif
