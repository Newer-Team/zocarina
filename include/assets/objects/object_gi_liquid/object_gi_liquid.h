#ifndef OBJECT_GI_LIQUID_H
#define OBJECT_GI_LIQUID_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiGreenPotionPatternTex_WIDTH 16
#define gGiGreenPotionPatternTex_HEIGHT 32
extern u64 gGiGreenPotionPatternTex[TEX_LEN(u64, gGiGreenPotionPatternTex_WIDTH, gGiGreenPotionPatternTex_HEIGHT, 8)];
#define gGiRedPotionPatternTex_WIDTH 16
#define gGiRedPotionPatternTex_HEIGHT 32
extern u64 gGiRedPotionPatternTex[TEX_LEN(u64, gGiRedPotionPatternTex_WIDTH, gGiRedPotionPatternTex_HEIGHT, 8)];
#define gGiBluePotionPatternTex_WIDTH 16
#define gGiBluePotionPatternTex_HEIGHT 32
extern u64 gGiBluePotionPatternTex[TEX_LEN(u64, gGiBluePotionPatternTex_WIDTH, gGiBluePotionPatternTex_HEIGHT, 8)];
extern Vtx gGiPotionPotVtx[];
extern Vtx gGiPotionLiquidVtx[];
extern Vtx gGiPotionPatternVtx[];
extern Gfx gGiGreenPotColorDL[4];
extern Gfx gGiRedPotColorDL[4];
extern Gfx gGiBluePotColorDL[4];
extern Gfx gGiGreenLiquidColorDL[4];
extern Gfx gGiRedLiquidColorDL[4];
extern Gfx gGiBlueLiquidColorDL[4];
extern Gfx gGiGreenPatternColorDL[11];
extern Gfx gGiRedPatternColorDL[11];
extern Gfx gGiBluePatternColorDL[11];
extern Gfx gGiPotionPotDL[107];
extern Gfx gGiPotionLiquidDL[23];
extern Gfx gGiPotionPatternDL[16];

#endif
