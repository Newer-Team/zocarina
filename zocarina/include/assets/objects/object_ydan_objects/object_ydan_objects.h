#ifndef OBJECT_YDAN_OBJECTS_H
#define OBJECT_YDAN_OBJECTS_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

#define gYdanHasiFloatingBlockSideTex_WIDTH 32
#define gYdanHasiFloatingBlockSideTex_HEIGHT 32
extern u64 gYdanHasiFloatingBlockSideTex[TEX_LEN(u64, gYdanHasiFloatingBlockSideTex_WIDTH, gYdanHasiFloatingBlockSideTex_HEIGHT, 16)];
#define gYdanHasiFloatingBlockBottomTex_WIDTH 32
#define gYdanHasiFloatingBlockBottomTex_HEIGHT 32
extern u64 gYdanHasiFloatingBlockBottomTex[TEX_LEN(u64, gYdanHasiFloatingBlockBottomTex_WIDTH, gYdanHasiFloatingBlockBottomTex_HEIGHT, 16)];
#define gYdanWebTex_WIDTH 32
#define gYdanWebTex_HEIGHT 64
extern u64 gYdanWebTex[TEX_LEN(u64, gYdanWebTex_WIDTH, gYdanWebTex_HEIGHT, 16)];
#define gYdanMarutaUnused1Tex_WIDTH 32
#define gYdanMarutaUnused1Tex_HEIGHT 32
extern u64 gYdanMarutaUnused1Tex[TEX_LEN(u64, gYdanMarutaUnused1Tex_WIDTH, gYdanMarutaUnused1Tex_HEIGHT, 16)];
#define gYdanDoor1Tex_WIDTH 32
#define gYdanDoor1Tex_HEIGHT 64
extern u64 gYdanDoor1Tex[TEX_LEN(u64, gYdanDoor1Tex_WIDTH, gYdanDoor1Tex_HEIGHT, 16)];
extern Vtx gDTUnknownWebVtx[];
extern Gfx gDTUnknownWebDL[19];
//#define gYdanTLUT_38F0_TLUT_COUNT 256
extern u64 gYdanTLUT_38F0[];
extern u8 object_ydan_objects_003AF0_Blob[];
#define gYdanHasi3BlocksTopTex_WIDTH 32
#define gYdanHasi3BlocksTopTex_HEIGHT 64
extern u64 gYdanHasi3BlocksTopTex[TEX_LEN(u64, gYdanHasi3BlocksTopTex_WIDTH, gYdanHasi3BlocksTopTex_HEIGHT, 8)];
#define gYdanHasi3BlocksSideTex_WIDTH 32
#define gYdanHasi3BlocksSideTex_HEIGHT 64
extern u64 gYdanHasi3BlocksSideTex[TEX_LEN(u64, gYdanHasi3BlocksSideTex_WIDTH, gYdanHasi3BlocksSideTex_HEIGHT, 8)];
extern Vtx gDTRisingPlatformsVtx[];
extern Gfx gDTRisingPlatformsDL[66];
extern BgCamInfo gDTRisingPlatformsBgCamList[];
extern SurfaceType gDTRisingPlatformsSurfaceTypes[];
extern CollisionPoly gDTRisingPlatformsPolyList[];
extern Vec3s gDTRisingPlatformsVtxList[];
extern CollisionHeader gDTRisingPlatformsCol;
//#define gYdanHasiWaterTLUT_TLUT_COUNT 208
extern u64 gYdanHasiWaterTLUT[];
#define gYdanHasiWaterTex_WIDTH 32
#define gYdanHasiWaterTex_HEIGHT 32
extern u64 gYdanHasiWaterTex[TEX_LEN(u64, gYdanHasiWaterTex_WIDTH, gYdanHasiWaterTex_HEIGHT, 8)];
extern Vtx gDTWaterPlaneVtx[];
extern Gfx gDTWaterPlaneDL[32];
extern Vtx gDTWebWallVtx[];
extern Gfx gDTWebWallDL[19];
extern BgCamInfo gDTWebWallBgCamList[];
extern SurfaceType gDTWebWallSurfaceTypes[];
extern CollisionPoly gDTWebWallPolyList[];
extern Vec3s gDTWebWallVtxList[];
extern CollisionHeader gDTWebWallCol;
extern Vtx gDTWebFloorVtx[];
extern Gfx gDTWebFloorDL[28];
extern BgCamInfo gDTWebFloorBgCamList[];
extern SurfaceType gDTWebFloorSurfaceTypes[];
extern CollisionPoly gDTWebFloorPolyList[];
extern Vec3s gDTWebFloorVtxList[];
extern CollisionHeader gDTWebFloorCol;
extern Vtx gDTFallingLadderVtx[];
extern Gfx gDTFallingLadderDL[21];
extern BgCamInfo gDTFallingLadderBgCamList[];
extern SurfaceType gDTFallingLadderSurfaceTypes[];
extern CollisionPoly gDTFallingLadderPolyList[];
extern Vec3s gDTFallingLadderVtxList[];
extern CollisionHeader gDTFallingLadderCol;
extern Vtx gDTDungeonDoor1Vtx[];
extern Gfx gDTDungeonDoor1DL[22];
extern Vtx gDTDungeonDoor2Vtx[];
extern Gfx gDTDungeonDoor2DL[22];
//#define gYdanHasi2TLUT_TLUT_COUNT 256
extern u64 gYdanHasi2TLUT[];
extern u8 object_ydan_objects_006BC0_Blob[];
#define gYdanUnused1Tex_WIDTH 32
#define gYdanUnused1Tex_HEIGHT 64
extern u64 gYdanUnused1Tex[TEX_LEN(u64, gYdanUnused1Tex_WIDTH, gYdanUnused1Tex_HEIGHT, 8)];
extern Vtx gDTSlidingPlatformVtx[];
extern Gfx gDTSlidingPlatformDL[48];
extern BgCamInfo gDTSlidingPlatformBgCamList[];
extern SurfaceType gDTSlidingPlatformSurfaceTypes[];
extern CollisionPoly gDTSlidingPlatformPolyList[];
extern Vec3s gDTSlidingPlatformVtxList[];
extern CollisionHeader gDTSlidingPlatformCol;
//#define gYdanMaruta1TLUT_TLUT_COUNT 256
extern u64 gYdanMaruta1TLUT[];
extern u8 object_ydan_objects_0079D0_Blob[];
#define gYdanMarutaUnused2Tex_WIDTH 32
#define gYdanMarutaUnused2Tex_HEIGHT 64
extern u64 gYdanMarutaUnused2Tex[TEX_LEN(u64, gYdanMarutaUnused2Tex_WIDTH, gYdanMarutaUnused2Tex_HEIGHT, 8)];
extern Vtx gDTRollingSpikeTrapVtx[];
extern Gfx gDTRollingSpikeTrapDL[94];

#endif
