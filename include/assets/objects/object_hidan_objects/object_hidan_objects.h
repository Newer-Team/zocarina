#ifndef OBJECT_HIDAN_OBJECTS_H
#define OBJECT_HIDAN_OBJECTS_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

//#define object_hidan_objects_000000_TLUT_TLUT_COUNT 16
extern u64 object_hidan_objects_000000_TLUT[];
//#define object_hidan_objects_000020_TLUT_TLUT_COUNT 16
extern u64 object_hidan_objects_000020_TLUT[];
#define object_hidan_objects_000040_Tex_WIDTH 32
#define object_hidan_objects_000040_Tex_HEIGHT 32
extern u64 object_hidan_objects_000040_Tex[TEX_LEN(u64, object_hidan_objects_000040_Tex_WIDTH, object_hidan_objects_000040_Tex_HEIGHT, 4)];
#define object_hidan_objects_000240_Tex_WIDTH 32
#define object_hidan_objects_000240_Tex_HEIGHT 32
extern u64 object_hidan_objects_000240_Tex[TEX_LEN(u64, object_hidan_objects_000240_Tex_WIDTH, object_hidan_objects_000240_Tex_HEIGHT, 16)];
#define object_hidan_objects_000A40_Tex_WIDTH 32
#define object_hidan_objects_000A40_Tex_HEIGHT 64
extern u64 object_hidan_objects_000A40_Tex[TEX_LEN(u64, object_hidan_objects_000A40_Tex_WIDTH, object_hidan_objects_000A40_Tex_HEIGHT, 16)];
#define object_hidan_objects_001A40_Tex_WIDTH 32
#define object_hidan_objects_001A40_Tex_HEIGHT 64
extern u64 object_hidan_objects_001A40_Tex[TEX_LEN(u64, object_hidan_objects_001A40_Tex_WIDTH, object_hidan_objects_001A40_Tex_HEIGHT, 16)];
#define object_hidan_objects_002A40_Tex_WIDTH 32
#define object_hidan_objects_002A40_Tex_HEIGHT 64
extern u64 object_hidan_objects_002A40_Tex[TEX_LEN(u64, object_hidan_objects_002A40_Tex_WIDTH, object_hidan_objects_002A40_Tex_HEIGHT, 16)];
#define object_hidan_objects_003A40_Tex_WIDTH 32
#define object_hidan_objects_003A40_Tex_HEIGHT 32
extern u64 object_hidan_objects_003A40_Tex[TEX_LEN(u64, object_hidan_objects_003A40_Tex_WIDTH, object_hidan_objects_003A40_Tex_HEIGHT, 16)];
#define object_hidan_objects_004240_Tex_WIDTH 16
#define object_hidan_objects_004240_Tex_HEIGHT 64
extern u64 object_hidan_objects_004240_Tex[TEX_LEN(u64, object_hidan_objects_004240_Tex_WIDTH, object_hidan_objects_004240_Tex_HEIGHT, 16)];
#define object_hidan_objects_004A40_Tex_WIDTH 32
#define object_hidan_objects_004A40_Tex_HEIGHT 32
extern u64 object_hidan_objects_004A40_Tex[TEX_LEN(u64, object_hidan_objects_004A40_Tex_WIDTH, object_hidan_objects_004A40_Tex_HEIGHT, 16)];
#define object_hidan_objects_005240_Tex_WIDTH 32
#define object_hidan_objects_005240_Tex_HEIGHT 64
extern u64 object_hidan_objects_005240_Tex[TEX_LEN(u64, object_hidan_objects_005240_Tex_WIDTH, object_hidan_objects_005240_Tex_HEIGHT, 4)];
#define object_hidan_objects_005640_Tex_WIDTH 32
#define object_hidan_objects_005640_Tex_HEIGHT 64
extern u64 object_hidan_objects_005640_Tex[TEX_LEN(u64, object_hidan_objects_005640_Tex_WIDTH, object_hidan_objects_005640_Tex_HEIGHT, 4)];
#define object_hidan_objects_005A40_Tex_WIDTH 64
#define object_hidan_objects_005A40_Tex_HEIGHT 32
extern u64 object_hidan_objects_005A40_Tex[TEX_LEN(u64, object_hidan_objects_005A40_Tex_WIDTH, object_hidan_objects_005A40_Tex_HEIGHT, 4)];
#define object_hidan_objects_005E40_Tex_WIDTH 32
#define object_hidan_objects_005E40_Tex_HEIGHT 32
extern u64 object_hidan_objects_005E40_Tex[TEX_LEN(u64, object_hidan_objects_005E40_Tex_WIDTH, object_hidan_objects_005E40_Tex_HEIGHT, 16)];
#define object_hidan_objects_006640_Tex_WIDTH 32
#define object_hidan_objects_006640_Tex_HEIGHT 64
extern u64 object_hidan_objects_006640_Tex[TEX_LEN(u64, object_hidan_objects_006640_Tex_WIDTH, object_hidan_objects_006640_Tex_HEIGHT, 4)];
#define object_hidan_objects_006A40_Tex_WIDTH 32
#define object_hidan_objects_006A40_Tex_HEIGHT 32
extern u64 object_hidan_objects_006A40_Tex[TEX_LEN(u64, object_hidan_objects_006A40_Tex_WIDTH, object_hidan_objects_006A40_Tex_HEIGHT, 4)];
#define object_hidan_objects_006C40_Tex_WIDTH 32
#define object_hidan_objects_006C40_Tex_HEIGHT 32
extern u64 object_hidan_objects_006C40_Tex[TEX_LEN(u64, object_hidan_objects_006C40_Tex_WIDTH, object_hidan_objects_006C40_Tex_HEIGHT, 4)];
#define object_hidan_objects_006E40_Tex_WIDTH 32
#define object_hidan_objects_006E40_Tex_HEIGHT 32
extern u64 object_hidan_objects_006E40_Tex[TEX_LEN(u64, object_hidan_objects_006E40_Tex_WIDTH, object_hidan_objects_006E40_Tex_HEIGHT, 16)];
extern Vtx gFireTempleTallestPillarAboveRoomBeforeBossVtx[];
extern Vtx gFireTempleStoneStep2Vtx[];
extern Vtx gFireTempleStoneStep1Vtx[];
extern Vtx gFireTempleFlareDancerPlatformVtx[];
extern Vtx gFireTempleStationaryFlamethrowerTallVtx[];
extern Vtx gFireTempleSpinningFlamethrowerVtx[];
extern Vtx gFireTempleStationaryFlamethrowerShortVtx[];
extern Vtx gFireTempleHookshotElevatorVtx[];
extern Vtx gFireTempleLargeBombableWallVtx[];
extern Vtx gFireTempleCrackedStoneFloorVtx[];
extern Vtx gFireTempleMetalFence2Vtx[];
extern Vtx gFireTempleHammerableTotemBodyVtx[];
extern Vtx gFireTempleHammerableTotemHeadVtx[];
extern Vtx gFireTempleMetalFenceVtx[];
extern Vtx gFireTempleBombableWallVtx[];
extern Vtx gFireTempleStoneBlock1Vtx[];
extern Vtx gFireTempleStoneBlock2Vtx[];
extern Vtx gFireTempleStonePlatform1Vtx[];
extern Vtx gFireTempleStonePlatform2Vtx[];
extern Vtx gFireTempleMetalFenceWithSlantVtx[];
extern Vtx gFireTemplePillarInsertedInGroundVtx[];
extern Gfx gFireTempleTallestPillarAboveRoomBeforeBossDL[97];
extern Gfx gFireTempleStoneStep2DL[36];
extern Gfx gFireTempleStoneStep1DL[47];
extern Gfx gFireTempleFlareDancerPlatformDL[125];
extern Gfx gFireTempleStationaryFlamethrowerTallDL[39];
extern Gfx gFireTempleSpinningFlamethrowerDL[127];
extern Gfx gFireTempleStationaryFlamethrowerShortDL[167];
extern Gfx gFireTempleHookshotElevatorDL[90];
extern Gfx gFireTempleLargeBombableWallDL[24];
extern Gfx gFireTempleCrackedStoneFloorDL[51];
extern Gfx gFireTempleMetalFence2DL[19];
extern Gfx gFireTempleHammerableTotemBodyDL[64];
extern Gfx gFireTempleHammerableTotemHeadDL[55];
extern Gfx gFireTempleMetalFenceDL[18];
extern Gfx gFireTempleBombableWallDL[25];
extern Gfx gFireTempleStoneBlock1DL[30];
extern Gfx gFireTempleStoneBlock2DL[41];
extern Gfx gFireTempleStonePlatform1DL[39];
extern Gfx gFireTempleStonePlatform2DL[101];
extern Gfx gFireTempleMetalFenceWithSlantDL[20];
extern Gfx gFireTemplePillarInsertedInGroundDL[51];
extern Vtx gFireTempleBigVerticalFlameVtx[];
extern Gfx gFireTempleBigVerticalFlameDL[12];
extern BgCamInfo gFireTempleStoneBlock1BgCamList[];
extern SurfaceType gFireTempleStoneBlock1SurfaceTypes[];
extern CollisionPoly gFireTempleStoneBlock1PolyList[];
extern Vec3s gFireTempleStoneBlock1VtxList[];
extern CollisionHeader gFireTempleStoneBlock1Col;
extern BgCamInfo gFireTempleStationaryFlamethrowerShortBgCamList[];
extern SurfaceType gFireTempleStationaryFlamethrowerShortSurfaceTypes[];
extern CollisionPoly gFireTempleStationaryFlamethrowerShortPolyList[];
extern Vec3s gFireTempleStationaryFlamethrowerShortVtxList[];
extern CollisionHeader gFireTempleStationaryFlamethrowerShortCol;
extern BgCamInfo gFireTempleStationaryFlamethrowerTallBgCamList[];
extern SurfaceType gFireTempleStationaryFlamethrowerTallSurfaceTypes[];
extern CollisionPoly gFireTempleStationaryFlamethrowerTallPolyList[];
extern Vec3s gFireTempleStationaryFlamethrowerTallVtxList[];
extern CollisionHeader gFireTempleStationaryFlamethrowerTallCol;
extern BgCamInfo gFireTempleTallestPillarAboveRoomBeforeBossBgCamList[];
extern SurfaceType gFireTempleTallestPillarAboveRoomBeforeBossSurfaceTypes[];
extern CollisionPoly gFireTempleTallestPillarAboveRoomBeforeBossPolyList[];
extern Vec3s gFireTempleTallestPillarAboveRoomBeforeBossVtxList[];
extern CollisionHeader gFireTempleTallestPillarAboveRoomBeforeBossCol;
extern BgCamInfo gFireTemplePillarInsertedInGroundBgCamList[];
extern SurfaceType gFireTemplePillarInsertedInGroundSurfaceTypes[];
extern CollisionPoly gFireTemplePillarInsertedInGroundPolyList[];
extern Vec3s gFireTemplePillarInsertedInGroundVtxList[];
extern CollisionHeader gFireTemplePillarInsertedInGroundCol;
extern BgCamInfo gFireTempleSpinningFlamethrowerBgCamList[];
extern SurfaceType gFireTempleSpinningFlamethrowerSurfaceTypes[];
extern CollisionPoly gFireTempleSpinningFlamethrowerPolyList[];
extern Vec3s gFireTempleSpinningFlamethrowerVtxList[];
extern CollisionHeader gFireTempleSpinningFlamethrowerCol;
extern BgCamInfo gFireTempleCrackedStoneFloorBgCamList[];
extern SurfaceType gFireTempleCrackedStoneFloorSurfaceTypes[];
extern CollisionPoly gFireTempleCrackedStoneFloorPolyList[];
extern Vec3s gFireTempleCrackedStoneFloorVtxList[];
extern CollisionHeader gFireTempleCrackedStoneFloorCol;
extern BgCamInfo gFireTempleBombableWallBgCamList[];
extern SurfaceType gFireTempleBombableWallSurfaceTypes[];
extern CollisionPoly gFireTempleBombableWallPolyList[];
extern Vec3s gFireTempleBombableWallVtxList[];
extern CollisionHeader gFireTempleBombableWallCol;
extern BgCamInfo gFireTempleLargeBombableWallBgCamList[];
extern SurfaceType gFireTempleLargeBombableWallSurfaceTypes[];
extern CollisionPoly gFireTempleLargeBombableWallPolyList[];
extern Vec3s gFireTempleLargeBombableWallVtxList[];
extern CollisionHeader gFireTempleLargeBombableWallCol;
extern BgCamInfo gFireTempleHammerableTotemBgCamList[];
extern SurfaceType gFireTempleHammerableTotemSurfaceTypes[];
extern CollisionPoly gFireTempleHammerableTotemPolyList[];
extern Vec3s gFireTempleHammerableTotemVtxList[];
extern CollisionHeader gFireTempleHammerableTotemCol;
extern Vtx gFireTempleFireballUpperHalfVtx[];
extern Gfx gFireTempleFireballUpperHalfDL[12];
extern Vtx gFireTempleBigFireWallVtx[];
extern Gfx gFireTempleBigFireWallDL[25];
extern Vtx gFireTempleFireballVtx[];
extern Gfx gFireTempleFireballDL[14];
extern BgCamInfo gFireTempleStoneStep2BgCamList[];
extern SurfaceType gFireTempleStoneStep2SurfaceTypes[];
extern CollisionPoly gFireTempleStoneStep2PolyList[];
extern Vec3s gFireTempleStoneStep2VtxList[];
extern CollisionHeader gFireTempleStoneStep2Col;
extern BgCamInfo gFireTempleStoneStep1BgCamList[];
extern SurfaceType gFireTempleStoneStep1SurfaceTypes[];
extern CollisionPoly gFireTempleStoneStep1PolyList[];
extern Vec3s gFireTempleStoneStep1VtxList[];
extern CollisionHeader gFireTempleStoneStep1Col;
extern BgCamInfo gFireTempleStoneBlock2BgCamList[];
extern SurfaceType gFireTempleStoneBlock2SurfaceTypes[];
extern CollisionPoly gFireTempleStoneBlock2PolyList[];
extern Vec3s gFireTempleStoneBlock2VtxList[];
extern CollisionHeader gFireTempleStoneBlock2Col;
extern BgCamInfo gFireTempleHookshotElevatorBgCamList[];
extern SurfaceType gFireTempleHookshotElevatorSurfaceTypes[];
extern CollisionPoly gFireTempleHookshotElevatorPolyList[];
extern Vec3s gFireTempleHookshotElevatorVtxList[];
extern CollisionHeader gFireTempleHookshotElevatorCol;
extern BgCamInfo gFireTempleMetalFenceWithSlantBgCamList[];
extern SurfaceType gFireTempleMetalFenceWithSlantSurfaceTypes[];
extern CollisionPoly gFireTempleMetalFenceWithSlantPolyList[];
extern Vec3s gFireTempleMetalFenceWithSlantVtxList[];
extern CollisionHeader gFireTempleMetalFenceWithSlantCol;
extern BgCamInfo gFireTempleMetalFenceBgCamList[];
extern SurfaceType gFireTempleMetalFenceSurfaceTypes[];
extern CollisionPoly gFireTempleMetalFencePolyList[];
extern Vec3s gFireTempleMetalFenceVtxList[];
extern CollisionHeader gFireTempleMetalFenceCol;
extern BgCamInfo gFireTempleMetalFence2BgCamList[];
extern SurfaceType gFireTempleMetalFence2SurfaceTypes[];
extern CollisionPoly gFireTempleMetalFence2PolyList[];
extern Vec3s gFireTempleMetalFence2VtxList[];
extern CollisionHeader gFireTempleMetalFence2Col;
extern BgCamInfo gFireTempleFlareDancerPlatformBgCamList[];
extern SurfaceType gFireTempleFlareDancerPlatformSurfaceTypes[];
extern CollisionPoly gFireTempleFlareDancerPlatformPolyList[];
extern Vec3s gFireTempleFlareDancerPlatformVtxList[];
extern CollisionHeader gFireTempleFlareDancerPlatformCol;
#define gFireTempleDoorKillerTex_WIDTH 32
#define gFireTempleDoorKillerTex_HEIGHT 64
extern u64 gFireTempleDoorKillerTex[TEX_LEN(u64, gFireTempleDoorKillerTex_WIDTH, gFireTempleDoorKillerTex_HEIGHT, 16)];
extern Vtx gFireTempleDoorWithHandleRightVtx[];
extern Vtx gFireTempleDoorWithHandleLeftVtx[];
extern Vtx gFireTempleBombableDoorFrameVtx[];
extern Gfx gFireTempleBombableDoorFrameDL[21];
extern Gfx gFireTempleDoorWithHandleRightDL[12];
extern Gfx gFireTempleDoorWithHandleLeftDL[12];
extern BgCamInfo gFireTempleStonePlatform2BgCamList[];
extern SurfaceType gFireTempleStonePlatform2SurfaceTypes[];
extern CollisionPoly gFireTempleStonePlatform2PolyList[];
extern Vec3s gFireTempleStonePlatform2VtxList[];
extern CollisionHeader gFireTempleStonePlatform2Col;
#define object_hidan_objects_00FB20_Tex_WIDTH 32
#define object_hidan_objects_00FB20_Tex_HEIGHT 64
extern u64 object_hidan_objects_00FB20_Tex[TEX_LEN(u64, object_hidan_objects_00FB20_Tex_WIDTH, object_hidan_objects_00FB20_Tex_HEIGHT, 16)];
extern Vtx gFireTempleDoorFrontVtx[];
extern Gfx gFireTempleDoorFrontDL[27];
#define object_hidan_objects_010D90_Tex_WIDTH 32
#define object_hidan_objects_010D90_Tex_HEIGHT 64
extern u64 object_hidan_objects_010D90_Tex[TEX_LEN(u64, object_hidan_objects_010D90_Tex_WIDTH, object_hidan_objects_010D90_Tex_HEIGHT, 16)];
extern Vtx gFireTempleDoorBackVtx[];
extern Gfx gFireTempleDoorBackDL[27];
extern BgCamInfo gFireTempleStonePlatform1BgCamList[];
extern SurfaceType gFireTempleStonePlatform1SurfaceTypes[];
extern CollisionPoly gFireTempleStonePlatform1PolyList[];
extern Vec3s gFireTempleStonePlatform1VtxList[];
extern CollisionHeader gFireTempleStonePlatform1Col;
#define gFireTempleBigVerticalFlame0Tex_WIDTH 8
#define gFireTempleBigVerticalFlame0Tex_HEIGHT 240
extern u64 gFireTempleBigVerticalFlame0Tex[TEX_LEN(u64, gFireTempleBigVerticalFlame0Tex_WIDTH, gFireTempleBigVerticalFlame0Tex_HEIGHT, 8)];
#define gFireTempleBigVerticalFlame1Tex_WIDTH 8
#define gFireTempleBigVerticalFlame1Tex_HEIGHT 240
extern u64 gFireTempleBigVerticalFlame1Tex[TEX_LEN(u64, gFireTempleBigVerticalFlame1Tex_WIDTH, gFireTempleBigVerticalFlame1Tex_HEIGHT, 8)];
#define gFireTempleBigVerticalFlame2Tex_WIDTH 8
#define gFireTempleBigVerticalFlame2Tex_HEIGHT 240
extern u64 gFireTempleBigVerticalFlame2Tex[TEX_LEN(u64, gFireTempleBigVerticalFlame2Tex_WIDTH, gFireTempleBigVerticalFlame2Tex_HEIGHT, 8)];
#define gFireTempleBigVerticalFlame3Tex_WIDTH 8
#define gFireTempleBigVerticalFlame3Tex_HEIGHT 240
extern u64 gFireTempleBigVerticalFlame3Tex[TEX_LEN(u64, gFireTempleBigVerticalFlame3Tex_WIDTH, gFireTempleBigVerticalFlame3Tex_HEIGHT, 8)];
#define gFireTempleBigVerticalFlame4Tex_WIDTH 8
#define gFireTempleBigVerticalFlame4Tex_HEIGHT 240
extern u64 gFireTempleBigVerticalFlame4Tex[TEX_LEN(u64, gFireTempleBigVerticalFlame4Tex_WIDTH, gFireTempleBigVerticalFlame4Tex_HEIGHT, 8)];
#define gFireTempleBigVerticalFlame5Tex_WIDTH 8
#define gFireTempleBigVerticalFlame5Tex_HEIGHT 240
extern u64 gFireTempleBigVerticalFlame5Tex[TEX_LEN(u64, gFireTempleBigVerticalFlame5Tex_WIDTH, gFireTempleBigVerticalFlame5Tex_HEIGHT, 8)];
#define gFireTempleBigVerticalFlame6Tex_WIDTH 8
#define gFireTempleBigVerticalFlame6Tex_HEIGHT 240
extern u64 gFireTempleBigVerticalFlame6Tex[TEX_LEN(u64, gFireTempleBigVerticalFlame6Tex_WIDTH, gFireTempleBigVerticalFlame6Tex_HEIGHT, 8)];
#define gFireTempleBigVerticalFlame7Tex_WIDTH 8
#define gFireTempleBigVerticalFlame7Tex_HEIGHT 240
extern u64 gFireTempleBigVerticalFlame7Tex[TEX_LEN(u64, gFireTempleBigVerticalFlame7Tex_WIDTH, gFireTempleBigVerticalFlame7Tex_HEIGHT, 8)];
#define gFireTempleFireball0Tex_WIDTH 32
#define gFireTempleFireball0Tex_HEIGHT 32
extern u64 gFireTempleFireball0Tex[TEX_LEN(u64, gFireTempleFireball0Tex_WIDTH, gFireTempleFireball0Tex_HEIGHT, 8)];
#define gFireTempleFireball1Tex_WIDTH 32
#define gFireTempleFireball1Tex_HEIGHT 32
extern u64 gFireTempleFireball1Tex[TEX_LEN(u64, gFireTempleFireball1Tex_WIDTH, gFireTempleFireball1Tex_HEIGHT, 8)];
#define gFireTempleFireball2Tex_WIDTH 32
#define gFireTempleFireball2Tex_HEIGHT 32
extern u64 gFireTempleFireball2Tex[TEX_LEN(u64, gFireTempleFireball2Tex_WIDTH, gFireTempleFireball2Tex_HEIGHT, 8)];
#define gFireTempleFireball3Tex_WIDTH 32
#define gFireTempleFireball3Tex_HEIGHT 32
extern u64 gFireTempleFireball3Tex[TEX_LEN(u64, gFireTempleFireball3Tex_WIDTH, gFireTempleFireball3Tex_HEIGHT, 8)];
#define gFireTempleFireball4Tex_WIDTH 32
#define gFireTempleFireball4Tex_HEIGHT 32
extern u64 gFireTempleFireball4Tex[TEX_LEN(u64, gFireTempleFireball4Tex_WIDTH, gFireTempleFireball4Tex_HEIGHT, 8)];
#define gFireTempleFireball5Tex_WIDTH 32
#define gFireTempleFireball5Tex_HEIGHT 32
extern u64 gFireTempleFireball5Tex[TEX_LEN(u64, gFireTempleFireball5Tex_WIDTH, gFireTempleFireball5Tex_HEIGHT, 8)];
#define gFireTempleFireball6Tex_WIDTH 32
#define gFireTempleFireball6Tex_HEIGHT 32
extern u64 gFireTempleFireball6Tex[TEX_LEN(u64, gFireTempleFireball6Tex_WIDTH, gFireTempleFireball6Tex_HEIGHT, 8)];
#define gFireTempleFireball7Tex_WIDTH 32
#define gFireTempleFireball7Tex_HEIGHT 32
extern u64 gFireTempleFireball7Tex[TEX_LEN(u64, gFireTempleFireball7Tex_WIDTH, gFireTempleFireball7Tex_HEIGHT, 8)];

#endif
