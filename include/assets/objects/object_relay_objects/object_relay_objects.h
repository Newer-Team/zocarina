#ifndef OBJECT_RELAY_OBJECTS_H
#define OBJECT_RELAY_OBJECTS_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gDampeRaceDoorVtx[];
extern Gfx gDampeRaceDoorDL[25];
extern BgCamInfo gDampeRaceDoorBgCamList[];
extern SurfaceType gDampeRaceDoorSurfaceTypes[];
extern CollisionPoly gDampeRaceDoorPolyList[];
extern Vec3s gDampeRaceDoorVtxList[];
extern CollisionHeader gDampeRaceDoorCol;
//#define gWindmillRotatingPlatformTLUT_TLUT_COUNT 16
extern u64 gWindmillRotatingPlatformTLUT[];
#define gWindmillRotatingPlatform1Tex_WIDTH 64
#define gWindmillRotatingPlatform1Tex_HEIGHT 64
extern u64 gWindmillRotatingPlatform1Tex[TEX_LEN(u64, gWindmillRotatingPlatform1Tex_WIDTH, gWindmillRotatingPlatform1Tex_HEIGHT, 4)];
#define gWindmillRotatingPlatform2Tex_WIDTH 32
#define gWindmillRotatingPlatform2Tex_HEIGHT 16
extern u64 gWindmillRotatingPlatform2Tex[TEX_LEN(u64, gWindmillRotatingPlatform2Tex_WIDTH, gWindmillRotatingPlatform2Tex_HEIGHT, 16)];
extern Vtx gWindmillRotatingPlatformVtx[];
extern Gfx gWindmillRotatingPlatformDL[91];
extern BgCamInfo gWindmillRotatingPlatformBgCamList[];
extern SurfaceType gWindmillRotatingPlatformSurfaceTypes[];
extern CollisionPoly gWindmillRotatingPlatformPolyList[];
extern Vec3s gWindmillRotatingPlatformVtxList[];
extern CollisionHeader gWindmillRotatingPlatformCol;
#define gDampeRaceDoorTex_WIDTH 64
#define gDampeRaceDoorTex_HEIGHT 128
extern u64 gDampeRaceDoorTex[TEX_LEN(u64, gDampeRaceDoorTex_WIDTH, gDampeRaceDoorTex_HEIGHT, 4)];

#endif
