#ifndef OBJECT_BOWL_H
#define OBJECT_BOWL_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gBowlingRound1WallVtx[];
extern Gfx gBowlingRound1WallDL[73];
extern BgCamInfo gBowlingFirstAndFinalRoundBgCamList[];
extern SurfaceType gBowlingFirstAndFinalRoundSurfaceTypes[];
extern CollisionPoly gBowlingFirstAndFinalRoundPolyList[];
extern Vec3s gBowlingFirstAndFinalRoundVtxList[];
extern CollisionHeader gBowlingFirstAndFinalRoundCol;
extern Vtx gBowlingRound2WallVtx[];
extern Gfx gBowlingRound2WallDL[84];
extern BgCamInfo gBowlingSecondRoundBgCamList[];
extern SurfaceType gBowlingSecondRoundSurfaceTypes[];
extern CollisionPoly gBowlingSecondRoundPolyList[];
extern Vec3s gBowlingSecondRoundVtxList[];
extern CollisionHeader gBowlingSecondRoundCol;
extern Vtx object_bowl_Vtx_001B30[];
extern Gfx gBowlingDL_1B80[12];
extern BgCamInfo gBowlingDefaultBgCamList[];
extern SurfaceType gBowlingDefaultSurfaceTypes[];
extern CollisionPoly gBowlingDefaultPolyList[];
extern Vec3s gBowlingDefaultVtxList[];
extern CollisionHeader gBowlingDefaultCol;
#define gBowlingWoodPanelTex_WIDTH 64
#define gBowlingWoodPanelTex_HEIGHT 32
extern u64 gBowlingWoodPanelTex[TEX_LEN(u64, gBowlingWoodPanelTex_WIDTH, gBowlingWoodPanelTex_HEIGHT, 16)];
#define gBowlingStoneWallTex_WIDTH 32
#define gBowlingStoneWallTex_HEIGHT 32
extern u64 gBowlingStoneWallTex[TEX_LEN(u64, gBowlingStoneWallTex_WIDTH, gBowlingStoneWallTex_HEIGHT, 16)];
#define gBowlingStripesTex_WIDTH 16
#define gBowlingStripesTex_HEIGHT 16
extern u64 gBowlingStripesTex[TEX_LEN(u64, gBowlingStripesTex_WIDTH, gBowlingStripesTex_HEIGHT, 4)];

#endif
