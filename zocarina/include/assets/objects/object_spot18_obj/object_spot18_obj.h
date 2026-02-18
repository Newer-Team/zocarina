#ifndef OBJECT_SPOT18_OBJ_H
#define OBJECT_SPOT18_OBJ_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gGoronCityVaseLidVtx[];
extern Gfx gGoronCityVaseLidDL[33];
extern BgCamInfo gGoronCityVaseLidBgCamList[];
extern SurfaceType gGoronCityVaseLidSurfaceTypes[];
extern CollisionPoly gGoronCityVaseLidPolyList[];
extern Vec3s gGoronCityVaseLidVtxList[];
extern CollisionHeader gGoronCityVaseLidCol;
extern Vtx gGoronCityDoorVtx[];
extern Gfx gGoronCityDoorDL[19];
extern BgCamInfo gGoronCityDoorBgCamList[];
extern SurfaceType gGoronCityDoorSurfaceTypes[];
extern CollisionPoly gGoronCityDoorPolyList[];
extern Vec3s gGoronCityDoorVtxList[];
extern CollisionHeader gGoronCityDoorCol;
//#define gGoronCityVaseTLUT_TLUT_COUNT 16
extern u64 gGoronCityVaseTLUT[];
#define gGoronCityVaseTex_580_WIDTH 64
#define gGoronCityVaseTex_580_HEIGHT 64
extern u64 gGoronCityVaseTex_580[TEX_LEN(u64, gGoronCityVaseTex_580_WIDTH, gGoronCityVaseTex_580_HEIGHT, 4)];
#define gGoronCityVaseTex_D80_WIDTH 32
#define gGoronCityVaseTex_D80_HEIGHT 32
extern u64 gGoronCityVaseTex_D80[TEX_LEN(u64, gGoronCityVaseTex_D80_WIDTH, gGoronCityVaseTex_D80_HEIGHT, 4)];
extern Vtx gGoronCityVaseVtx[];
extern Gfx gGoronCityVaseDL[126];
extern BgCamInfo gGoronCityVaseBgCamList[];
extern SurfaceType gGoronCityVaseSurfaceTypes[];
extern CollisionPoly gGoronCityVasePolyList[];
extern Vec3s gGoronCityVaseVtxList[];
extern CollisionHeader gGoronCityVaseCol;
extern Vtx gGoronCityStatueSpearVtx[];
extern Gfx gGoronCityStatueSpearDL[47];
extern BgCamInfo gGoronCityStatueSpearBgCamList[];
extern SurfaceType gGoronCityStatueSpearSurfaceTypes[];
extern CollisionPoly gGoronCityStatueSpearPolyList[];
extern Vec3s gGoronCityStatueSpearVtxList[];
extern CollisionHeader gGoronCityStatueSpearCol;
extern Vtx gGoronCityStatueVtx[];
extern Gfx gGoronCityStatueDL[72];
extern BgCamInfo gGoronCityStatueBgCamList[];
extern SurfaceType gGoronCityStatueSurfaceTypes[];
extern CollisionPoly gGoronCityStatuePolyList[];
extern Vec3s gGoronCityStatueVtxList[];
extern CollisionHeader gGoronCityStatueCol;
#define gGoronCitySpearLeafTex_WIDTH 32
#define gGoronCitySpearLeafTex_HEIGHT 64
extern u64 gGoronCitySpearLeafTex[TEX_LEN(u64, gGoronCitySpearLeafTex_WIDTH, gGoronCitySpearLeafTex_HEIGHT, 16)];
#define gGoronCitySpearTipTex_WIDTH 32
#define gGoronCitySpearTipTex_HEIGHT 32
extern u64 gGoronCitySpearTipTex[TEX_LEN(u64, gGoronCitySpearTipTex_WIDTH, gGoronCitySpearTipTex_HEIGHT, 16)];
#define gGoronCitySpearHandleTex_WIDTH 32
#define gGoronCitySpearHandleTex_HEIGHT 32
extern u64 gGoronCitySpearHandleTex[TEX_LEN(u64, gGoronCitySpearHandleTex_WIDTH, gGoronCitySpearHandleTex_HEIGHT, 16)];
#define gGoronCityStatuePattern1Tex_WIDTH 32
#define gGoronCityStatuePattern1Tex_HEIGHT 64
extern u64 gGoronCityStatuePattern1Tex[TEX_LEN(u64, gGoronCityStatuePattern1Tex_WIDTH, gGoronCityStatuePattern1Tex_HEIGHT, 16)];
#define gGoronCityStatuePattern2Tex_WIDTH 32
#define gGoronCityStatuePattern2Tex_HEIGHT 64
extern u64 gGoronCityStatuePattern2Tex[TEX_LEN(u64, gGoronCityStatuePattern2Tex_WIDTH, gGoronCityStatuePattern2Tex_HEIGHT, 16)];
#define gGoronCityStatueTex_7010_WIDTH 64
#define gGoronCityStatueTex_7010_HEIGHT 32
extern u64 gGoronCityStatueTex_7010[TEX_LEN(u64, gGoronCityStatueTex_7010_WIDTH, gGoronCityStatueTex_7010_HEIGHT, 16)];
#define gGoronCityStatueAngryFaceTex_WIDTH 32
#define gGoronCityStatueAngryFaceTex_HEIGHT 64
extern u64 gGoronCityStatueAngryFaceTex[TEX_LEN(u64, gGoronCityStatueAngryFaceTex_WIDTH, gGoronCityStatueAngryFaceTex_HEIGHT, 16)];
#define gGoronCityStatueNeutralFaceTex_WIDTH 32
#define gGoronCityStatueNeutralFaceTex_HEIGHT 64
extern u64 gGoronCityStatueNeutralFaceTex[TEX_LEN(u64, gGoronCityStatueNeutralFaceTex_WIDTH, gGoronCityStatueNeutralFaceTex_HEIGHT, 16)];
#define gGoronCityStatueHappyFaceTex_WIDTH 32
#define gGoronCityStatueHappyFaceTex_HEIGHT 64
extern u64 gGoronCityStatueHappyFaceTex[TEX_LEN(u64, gGoronCityStatueHappyFaceTex_WIDTH, gGoronCityStatueHappyFaceTex_HEIGHT, 16)];
#define gGoronCityVaseLidTex_WIDTH 32
#define gGoronCityVaseLidTex_HEIGHT 32
extern u64 gGoronCityVaseLidTex[TEX_LEN(u64, gGoronCityVaseLidTex_WIDTH, gGoronCityVaseLidTex_HEIGHT, 16)];
#define gGoronCityVaseLidHandleTex_WIDTH 16
#define gGoronCityVaseLidHandleTex_HEIGHT 16
extern u64 gGoronCityVaseLidHandleTex[TEX_LEN(u64, gGoronCityVaseLidHandleTex_WIDTH, gGoronCityVaseLidHandleTex_HEIGHT, 16)];
#define gGoronCityDoorTex_WIDTH 32
#define gGoronCityDoorTex_HEIGHT 64
extern u64 gGoronCityDoorTex[TEX_LEN(u64, gGoronCityDoorTex_WIDTH, gGoronCityDoorTex_HEIGHT, 16)];

#endif
