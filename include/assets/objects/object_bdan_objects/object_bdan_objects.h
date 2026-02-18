#ifndef OBJECT_BDAN_OBJECTS_H
#define OBJECT_BDAN_OBJECTS_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

//#define gJabuObjects1TLUT_TLUT_COUNT 160
extern u64 gJabuObjects1TLUT[];
#define gJabuObjectsTex_00140_WIDTH 32
#define gJabuObjectsTex_00140_HEIGHT 32
extern u64 gJabuObjectsTex_00140[TEX_LEN(u64, gJabuObjectsTex_00140_WIDTH, gJabuObjectsTex_00140_HEIGHT, 8)];
extern Vtx gJabuDoorSection1Vtx[];
extern Gfx gJabuDoorSection1DL[25];
//#define gJabuObjects2TLUT_TLUT_COUNT 160
extern u64 gJabuObjects2TLUT[];
#define gJabuObjectsTex_007A0_WIDTH 32
#define gJabuObjectsTex_007A0_HEIGHT 32
extern u64 gJabuObjectsTex_007A0[TEX_LEN(u64, gJabuObjectsTex_007A0_WIDTH, gJabuObjectsTex_007A0_HEIGHT, 8)];
extern Vtx gJabuDoorSection2Vtx[];
extern Gfx gJabuDoorSection2DL[25];
//#define gJabuObjects3TLUT_TLUT_COUNT 160
extern u64 gJabuObjects3TLUT[];
#define gJabuObjectsTex_00E00_WIDTH 32
#define gJabuObjectsTex_00E00_HEIGHT 32
extern u64 gJabuObjectsTex_00E00[TEX_LEN(u64, gJabuObjectsTex_00E00_WIDTH, gJabuObjectsTex_00E00_HEIGHT, 8)];
extern Vtx gJabuDoorSection3Vtx[];
extern Gfx gJabuDoorSection3DL[25];
//#define gJabuObjects4TLUT_TLUT_COUNT 160
extern u64 gJabuObjects4TLUT[];
#define gJabuObjectsTex_01460_WIDTH 32
#define gJabuObjectsTex_01460_HEIGHT 32
extern u64 gJabuObjectsTex_01460[TEX_LEN(u64, gJabuObjectsTex_01460_WIDTH, gJabuObjectsTex_01460_HEIGHT, 8)];
extern Vtx gJabuDoorSection4Vtx[];
extern Gfx gJabuDoorSection4DL[25];
//#define gJabuObjects5TLUT_TLUT_COUNT 160
extern u64 gJabuObjects5TLUT[];
#define gJabuObjectsTex_01AC0_WIDTH 32
#define gJabuObjectsTex_01AC0_HEIGHT 32
extern u64 gJabuObjectsTex_01AC0[TEX_LEN(u64, gJabuObjectsTex_01AC0_WIDTH, gJabuObjectsTex_01AC0_HEIGHT, 8)];
extern Vtx gJabuDoorSection5Vtx[];
extern Gfx gJabuDoorSection5DL[25];
//#define gJabuObjects6TLUT_TLUT_COUNT 160
extern u64 gJabuObjects6TLUT[];
#define gJabuObjectsTex_02120_WIDTH 32
#define gJabuObjectsTex_02120_HEIGHT 32
extern u64 gJabuObjectsTex_02120[TEX_LEN(u64, gJabuObjectsTex_02120_WIDTH, gJabuObjectsTex_02120_HEIGHT, 8)];
extern Vtx gJabuDoorSection6Vtx[];
extern Gfx gJabuDoorSection6DL[25];
//#define gJabuObjects7TLUT_TLUT_COUNT 160
extern u64 gJabuObjects7TLUT[];
#define gJabuObjectsTex_02780_WIDTH 32
#define gJabuObjectsTex_02780_HEIGHT 32
extern u64 gJabuObjectsTex_02780[TEX_LEN(u64, gJabuObjectsTex_02780_WIDTH, gJabuObjectsTex_02780_HEIGHT, 8)];
extern Vtx gJabuDoorSection7Vtx[];
extern Gfx gJabuDoorSection7DL[25];
//#define gJabuObjects8TLUT_TLUT_COUNT 160
extern u64 gJabuObjects8TLUT[];
#define gJabuObjectsTex_02DE0_WIDTH 32
#define gJabuObjectsTex_02DE0_HEIGHT 32
extern u64 gJabuObjectsTex_02DE0[TEX_LEN(u64, gJabuObjectsTex_02DE0_WIDTH, gJabuObjectsTex_02DE0_HEIGHT, 8)];
extern Vtx gJabuDoorSection8Vtx[];
extern Gfx gJabuDoorSection8DL[25];
//#define gJabuObjects9TLUT_TLUT_COUNT 204
extern u64 gJabuObjects9TLUT[];
#define gJabuObjectsTex_03498_WIDTH 32
#define gJabuObjectsTex_03498_HEIGHT 32
extern u64 gJabuObjectsTex_03498[TEX_LEN(u64, gJabuObjectsTex_03498_WIDTH, gJabuObjectsTex_03498_HEIGHT, 8)];
extern Vtx gJabuWaterVtx[];
extern Gfx gJabuWaterDL[25];
//#define gJabuObjects10TLUT_TLUT_COUNT 256
extern u64 gJabuObjects10TLUT[];
extern u8 object_bdan_objects_003BB0_Blob[];
#define gJabuObjectsTex_03BB8_WIDTH 32
#define gJabuObjectsTex_03BB8_HEIGHT 64
extern u64 gJabuObjectsTex_03BB8[TEX_LEN(u64, gJabuObjectsTex_03BB8_WIDTH, gJabuObjectsTex_03BB8_HEIGHT, 8)];
#define gJabuObjectsTex_043B8_WIDTH 32
#define gJabuObjectsTex_043B8_HEIGHT 32
extern u64 gJabuObjectsTex_043B8[TEX_LEN(u64, gJabuObjectsTex_043B8_WIDTH, gJabuObjectsTex_043B8_HEIGHT, 8)];
extern Vtx gJabuElevatorPlatformVtx[];
extern Gfx gJabuElevatorPlatformDL[65];
extern BgCamInfo gJabuElevatorBgCamList[];
extern SurfaceType gJabuElevatorSurfaceTypes[];
extern CollisionPoly gJabuElevatorPolyList[];
extern Vec3s gJabuElevatorVtxList[];
extern CollisionHeader gJabuElevatorCol;
extern Vtx gJabuFallingPlatformVtx[];
extern Gfx gJabuFallingPlatformDL[41];
extern BgCamInfo gJabuLoweringPlatformBgCamList[];
extern SurfaceType gJabuLoweringPlatformSurfaceTypes[];
extern CollisionPoly gJabuLoweringPlatformPolyList[];
extern Vec3s gJabuLoweringPlatformVtxList[];
extern CollisionHeader gJabuLoweringPlatformCol;
extern Vtx gJabuBlueFloorSwitchVtx[];
extern Gfx gJabuBlueFloorSwitchDL[55];
extern BgCamInfo gJabuFloorSwitchBgCamList[];
extern SurfaceType gJabuFloorSwitchSurfaceTypes[];
extern CollisionPoly gJabuFloorSwitchPolyList[];
extern Vec3s gJabuFloorSwitchVtxList[];
extern CollisionHeader gJabuFloorSwitchCol;
extern Vtx gJabuYellowFloorSwitchVtx[];
extern Gfx gJabuYellowFloorSwitchDL[55];
extern Vtx gJabuWebDoorVtx[];
extern Gfx gJabuWebDoorDL[28];
//#define gJabuObjects11TLUT_TLUT_COUNT 256
extern u64 gJabuObjects11TLUT[];
extern u8 object_bdan_objects_006740_Blob[];
#define gJabuObjectsTex_06748_WIDTH 32
#define gJabuObjectsTex_06748_HEIGHT 32
extern u64 gJabuObjectsTex_06748[TEX_LEN(u64, gJabuObjectsTex_06748_WIDTH, gJabuObjectsTex_06748_HEIGHT, 8)];
#define gJabuObjectsTex_06B48_WIDTH 32
#define gJabuObjectsTex_06B48_HEIGHT 64
extern u64 gJabuObjectsTex_06B48[TEX_LEN(u64, gJabuObjectsTex_06B48_WIDTH, gJabuObjectsTex_06B48_HEIGHT, 8)];
#define gJabuObjectsTex_07348_WIDTH 32
#define gJabuObjectsTex_07348_HEIGHT 64
extern u64 gJabuObjectsTex_07348[TEX_LEN(u64, gJabuObjectsTex_07348_WIDTH, gJabuObjectsTex_07348_HEIGHT, 8)];
extern Vtx gJabuObjectsLargeRotatingSpikePlatformVtx[];
extern Gfx gJabuObjectsLargeRotatingSpikePlatformDL[121];
extern BgCamInfo gJabuBigOctoPlatformBgCamList[];
extern SurfaceType gJabuBigOctoPlatformSurfaceTypes[];
extern CollisionPoly gJabuBigOctoPlatformPolyList[];
extern Vec3s gJabuBigOctoPlatformVtxList[];
extern CollisionHeader gJabuBigOctoPlatformCol;
#define gJabuObjectsTex_08D10_WIDTH 32
#define gJabuObjectsTex_08D10_HEIGHT 64
extern u64 gJabuObjectsTex_08D10[TEX_LEN(u64, gJabuObjectsTex_08D10_WIDTH, gJabuObjectsTex_08D10_HEIGHT, 16)];
#define gJabuObjectsTex_09D10_WIDTH 32
#define gJabuObjectsTex_09D10_HEIGHT 32
extern u64 gJabuObjectsTex_09D10[TEX_LEN(u64, gJabuObjectsTex_09D10_WIDTH, gJabuObjectsTex_09D10_HEIGHT, 16)];
#define gJabuObjectsTex_0A510_WIDTH 32
#define gJabuObjectsTex_0A510_HEIGHT 64
extern u64 gJabuObjectsTex_0A510[TEX_LEN(u64, gJabuObjectsTex_0A510_WIDTH, gJabuObjectsTex_0A510_HEIGHT, 16)];
#define gJabuObjectsTex_0B510_WIDTH 32
#define gJabuObjectsTex_0B510_HEIGHT 32
extern u64 gJabuObjectsTex_0B510[TEX_LEN(u64, gJabuObjectsTex_0B510_WIDTH, gJabuObjectsTex_0B510_HEIGHT, 16)];
#define gJabuObjectsTex_0BD10_WIDTH 32
#define gJabuObjectsTex_0BD10_HEIGHT 32
extern u64 gJabuObjectsTex_0BD10[TEX_LEN(u64, gJabuObjectsTex_0BD10_WIDTH, gJabuObjectsTex_0BD10_HEIGHT, 16)];
#define gJabuObjectsTex_0C510_WIDTH 32
#define gJabuObjectsTex_0C510_HEIGHT 32
extern u64 gJabuObjectsTex_0C510[TEX_LEN(u64, gJabuObjectsTex_0C510_WIDTH, gJabuObjectsTex_0C510_HEIGHT, 16)];

#endif
