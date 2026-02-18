#ifndef OBJECT_DEMO_KEKKAI_H
#define OBJECT_DEMO_KEKKAI_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

#define object_demo_kekkai_000000_Tex_WIDTH 32
#define object_demo_kekkai_000000_Tex_HEIGHT 64
extern u64 object_demo_kekkai_000000_Tex[TEX_LEN(u64, object_demo_kekkai_000000_Tex_WIDTH, object_demo_kekkai_000000_Tex_HEIGHT, 8)];
#define object_demo_kekkai_000800_Tex_WIDTH 32
#define object_demo_kekkai_000800_Tex_HEIGHT 64
extern u64 object_demo_kekkai_000800_Tex[TEX_LEN(u64, object_demo_kekkai_000800_Tex_WIDTH, object_demo_kekkai_000800_Tex_HEIGHT, 8)];
#define object_demo_kekkai_001000_Tex_WIDTH 32
#define object_demo_kekkai_001000_Tex_HEIGHT 64
extern u64 object_demo_kekkai_001000_Tex[TEX_LEN(u64, object_demo_kekkai_001000_Tex_WIDTH, object_demo_kekkai_001000_Tex_HEIGHT, 16)];
extern Vtx gGanonsCastleDoorVtx[];
extern Gfx gGanonsCastleDoorDL[22];
extern Vtx gSpiritTrialLightSourceVtx[];
extern Gfx gSpiritTrialLightSourceDL[37];
#define object_demo_kekkai_002450_Tex_WIDTH 32
#define object_demo_kekkai_002450_Tex_HEIGHT 64
extern u64 object_demo_kekkai_002450_Tex[TEX_LEN(u64, object_demo_kekkai_002450_Tex_WIDTH, object_demo_kekkai_002450_Tex_HEIGHT, 16)];
extern Vtx gSpiritTrialLightFloorVtx[];
extern Gfx gSpiritTrialLightFloorDL[31];
#define object_demo_kekkai_0036A0_Tex_WIDTH 32
#define object_demo_kekkai_0036A0_Tex_HEIGHT 32
extern u64 object_demo_kekkai_0036A0_Tex[TEX_LEN(u64, object_demo_kekkai_0036A0_Tex_WIDTH, object_demo_kekkai_0036A0_Tex_HEIGHT, 16)];
#define object_demo_kekkai_003EA0_Tex_WIDTH 32
#define object_demo_kekkai_003EA0_Tex_HEIGHT 32
extern u64 object_demo_kekkai_003EA0_Tex[TEX_LEN(u64, object_demo_kekkai_003EA0_Tex_WIDTH, object_demo_kekkai_003EA0_Tex_HEIGHT, 8)];
extern Vtx gWaterTrialIceBlockVtx[];
extern Gfx gWaterTrialIceBlockDL[30];
extern BgCamInfo gWaterTrialIceBlockBgCamList[];
extern SurfaceType gWaterTrialIceBlockSurfaceTypes[];
extern CollisionPoly gWaterTrialIceBlockPolyList[];
extern Vec3s gWaterTrialIceBlockVtxList[];
extern CollisionHeader gWaterTrialIceBlockCol;
extern Vtx gTowerBarrierVtx[];
extern Gfx gTowerBarrierDL[49];
#define object_demo_kekkai_004AC0_Tex_WIDTH 32
#define object_demo_kekkai_004AC0_Tex_HEIGHT 32
extern u64 object_demo_kekkai_004AC0_Tex[TEX_LEN(u64, object_demo_kekkai_004AC0_Tex_WIDTH, object_demo_kekkai_004AC0_Tex_HEIGHT, 8)];
extern Vtx gTrialBarrierFloorVtx[];
extern Gfx gTrialBarrierFloorDL[26];
extern Vtx gTrialBarrierEnergyVtx[];
extern Vtx gTrialBarrierOrbVtx[];
extern Gfx gTrialBarrierEnergyDL[80];
extern Gfx gTrialBarrierOrbDL[47];
extern Vtx gDemoKekkaiVtx_005E30[];
extern Gfx gDemoKekkaiDL_005FF0[41];
#define object_demo_kekkai_006140_Tex_WIDTH 8
#define object_demo_kekkai_006140_Tex_HEIGHT 128
extern u64 object_demo_kekkai_006140_Tex[TEX_LEN(u64, object_demo_kekkai_006140_Tex_WIDTH, object_demo_kekkai_006140_Tex_HEIGHT, 16)];
#define object_demo_kekkai_006940_Tex_WIDTH 64
#define object_demo_kekkai_006940_Tex_HEIGHT 64
extern u64 object_demo_kekkai_006940_Tex[TEX_LEN(u64, object_demo_kekkai_006940_Tex_WIDTH, object_demo_kekkai_006940_Tex_HEIGHT, 8)];
extern Vtx gSpiritTrialWebVtx[];
extern Gfx gSpiritTrialWebDL[54];
#define object_demo_kekkai_007DB0_Tex_WIDTH 32
#define object_demo_kekkai_007DB0_Tex_HEIGHT 32
extern u64 object_demo_kekkai_007DB0_Tex[TEX_LEN(u64, object_demo_kekkai_007DB0_Tex_WIDTH, object_demo_kekkai_007DB0_Tex_HEIGHT, 16)];
extern Vtx gShadowTrialPathVtx[];
extern Gfx gShadowTrialPathDL[36];
#define object_demo_kekkai_0089D0_Tex_WIDTH 32
#define object_demo_kekkai_0089D0_Tex_HEIGHT 32
extern u64 object_demo_kekkai_0089D0_Tex[TEX_LEN(u64, object_demo_kekkai_0089D0_Tex_WIDTH, object_demo_kekkai_0089D0_Tex_HEIGHT, 16)];
extern Vtx gLightTrialFakeWallVtx[];
extern Gfx gLightTrialFakeWallDL[19];
#define object_demo_kekkai_0092D0_Tex_WIDTH 32
#define object_demo_kekkai_0092D0_Tex_HEIGHT 64
extern u64 object_demo_kekkai_0092D0_Tex[TEX_LEN(u64, object_demo_kekkai_0092D0_Tex_WIDTH, object_demo_kekkai_0092D0_Tex_HEIGHT, 16)];
extern Vtx gGanonsCastleUnusedFakeWallVtx[];
extern Gfx gGanonsCastleUnusedFakeWallDL[21];
#define object_demo_kekkai_00A440_Tex_WIDTH 64
#define object_demo_kekkai_00A440_Tex_HEIGHT 32
extern u64 object_demo_kekkai_00A440_Tex[TEX_LEN(u64, object_demo_kekkai_00A440_Tex_WIDTH, object_demo_kekkai_00A440_Tex_HEIGHT, 16)];
extern Vtx gGanonsCastleScrubsFakeWallVtx[];
extern Gfx gGanonsCastleScrubsFakeWallDL[19];
#define object_demo_kekkai_00B540_Tex_WIDTH 32
#define object_demo_kekkai_00B540_Tex_HEIGHT 32
extern u64 object_demo_kekkai_00B540_Tex[TEX_LEN(u64, object_demo_kekkai_00B540_Tex_WIDTH, object_demo_kekkai_00B540_Tex_HEIGHT, 16)];
extern Vtx gClearBlockVtx[];
extern Gfx gClearBlockDL[23];
extern BgCamInfo gClearBlockBgCamList[];
extern SurfaceType gClearBlockSurfaceTypes[];
extern CollisionPoly gClearBlockPolyList[];
extern Vec3s gClearBlockVtxList[];
extern CollisionHeader gClearBlockCol;
#define object_demo_kekkai_00C0B0_Tex_WIDTH 32
#define object_demo_kekkai_00C0B0_Tex_HEIGHT 32
extern u64 object_demo_kekkai_00C0B0_Tex[TEX_LEN(u64, object_demo_kekkai_00C0B0_Tex_WIDTH, object_demo_kekkai_00C0B0_Tex_HEIGHT, 16)];
#define object_demo_kekkai_00C8B0_Tex_WIDTH 32
#define object_demo_kekkai_00C8B0_Tex_HEIGHT 64
extern u64 object_demo_kekkai_00C8B0_Tex[TEX_LEN(u64, object_demo_kekkai_00C8B0_Tex_WIDTH, object_demo_kekkai_00C8B0_Tex_HEIGHT, 16)];
extern Vtx gFireTrialPlatformVtx[];
extern Gfx gFireTrialPlatformDL[131];
extern BgCamInfo gFireTrialPlatformBgCamList[];
extern SurfaceType gFireTrialPlatformSurfaceTypes[];
extern CollisionPoly gFireTrialPlatformPolyList[];
extern Vec3s gFireTrialPlatformVtxList[];
extern CollisionHeader gFireTrialPlatformCol;

#endif
