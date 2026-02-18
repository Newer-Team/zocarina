#ifndef OBJECT_DDAN_OBJECTS_H
#define OBJECT_DDAN_OBJECTS_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gDodongoDoorVtx[];
extern Gfx gDodongoDoorDL[22];
extern Vtx gDodongoBarsVtx[];
extern Gfx gDodongoBarsDL[28];
//#define gDodongo1TLUT_TLUT_COUNT 160
extern u64 gDodongo1TLUT[];
#define gDodongoTex_0410_WIDTH 32
#define gDodongoTex_0410_HEIGHT 64
extern u64 gDodongoTex_0410[TEX_LEN(u64, gDodongoTex_0410_WIDTH, gDodongoTex_0410_HEIGHT, 8)];
extern Vtx gDodongoLowerJawVtx[];
extern Gfx gDodongoLowerJawDL[131];
extern BgCamInfo gDodongoLowerJawBgCamList[];
extern SurfaceType gDodongoLowerJawSurfaceTypes[];
extern CollisionPoly gDodongoLowerJawPolyList[];
extern Vec3s gDodongoLowerJawVtxList[];
extern CollisionHeader gDodongoLowerJawCol;
//#define gDodongo2TLUT_TLUT_COUNT 256
extern u64 gDodongo2TLUT[];
extern u8 object_ddan_objects_002010_Blob[];
#define gDodongoRisingPlatformSide1Tex_WIDTH 32
#define gDodongoRisingPlatformSide1Tex_HEIGHT 64
extern u64 gDodongoRisingPlatformSide1Tex[TEX_LEN(u64, gDodongoRisingPlatformSide1Tex_WIDTH, gDodongoRisingPlatformSide1Tex_HEIGHT, 8)];
#define gDodongoRisingPlatformTopTex_WIDTH 32
#define gDodongoRisingPlatformTopTex_HEIGHT 32
extern u64 gDodongoRisingPlatformTopTex[TEX_LEN(u64, gDodongoRisingPlatformTopTex_WIDTH, gDodongoRisingPlatformTopTex_HEIGHT, 8)];
#define gDodongoRisingPlatformSide2Tex_WIDTH 32
#define gDodongoRisingPlatformSide2Tex_HEIGHT 64
extern u64 gDodongoRisingPlatformSide2Tex[TEX_LEN(u64, gDodongoRisingPlatformSide2Tex_WIDTH, gDodongoRisingPlatformSide2Tex_HEIGHT, 8)];
extern Vtx gDodongoRisingPlatformVtx[];
extern Gfx gDodongoRisingPlatformDL[69];
extern BgCamInfo gDodongoRisingPlatformBgCamList[];
extern SurfaceType gDodongoRisingPlatformSurfaceTypes[];
extern CollisionPoly gDodongoRisingPlatformPolyList[];
extern Vec3s gDodongoRisingPlatformVtxList[];
extern CollisionHeader gDodongoRisingPlatformCol;
//#define gDodongo3TLUT_TLUT_COUNT 256
extern u64 gDodongo3TLUT[];
extern u8 object_ddan_objects_003F10_Blob[];
#define gDodongoFallingStairsTex_WIDTH 32
#define gDodongoFallingStairsTex_HEIGHT 32
extern u64 gDodongoFallingStairsTex[TEX_LEN(u64, gDodongoFallingStairsTex_WIDTH, gDodongoFallingStairsTex_HEIGHT, 8)];
extern Vtx gDodongoFallingStairsVtx[];
extern Gfx gDodongoFallingStairsDL[79];
extern BgCamInfo gDodongoFallingStairsBgCamList[];
extern SurfaceType gDodongoFallingStairsSurfaceTypes[];
extern CollisionPoly gDodongoFallingStairsPolyList[];
extern Vec3s gDodongoFallingStairsVtxList[];
extern CollisionHeader gDodongoFallingStairsCol;
#define gDodongoDoorLeftSideTex_WIDTH 32
#define gDodongoDoorLeftSideTex_HEIGHT 64
extern u64 gDodongoDoorLeftSideTex[TEX_LEN(u64, gDodongoDoorLeftSideTex_WIDTH, gDodongoDoorLeftSideTex_HEIGHT, 16)];
#define gDodongoBarsTex_WIDTH 32
#define gDodongoBarsTex_HEIGHT 32
extern u64 gDodongoBarsTex[TEX_LEN(u64, gDodongoBarsTex_WIDTH, gDodongoBarsTex_HEIGHT, 16)];
#define gDodongoBarsBottomTex_WIDTH 32
#define gDodongoBarsBottomTex_HEIGHT 32
extern u64 gDodongoBarsBottomTex[TEX_LEN(u64, gDodongoBarsBottomTex_WIDTH, gDodongoBarsBottomTex_HEIGHT, 16)];
#define gDodongoTex_6F60_WIDTH 32
#define gDodongoTex_6F60_HEIGHT 32
extern u64 gDodongoTex_6F60[TEX_LEN(u64, gDodongoTex_6F60_WIDTH, gDodongoTex_6F60_HEIGHT, 16)];
#define gDodongoFallingStairsVinesTex_WIDTH 32
#define gDodongoFallingStairsVinesTex_HEIGHT 64
extern u64 gDodongoFallingStairsVinesTex[TEX_LEN(u64, gDodongoFallingStairsVinesTex_WIDTH, gDodongoFallingStairsVinesTex_HEIGHT, 16)];

#endif
