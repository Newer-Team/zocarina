#ifndef OBJECT_HAKACH_OBJECTS_H
#define OBJECT_HAKACH_OBJECTS_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gBotwHoleTrap1Vtx[];
extern Gfx gBotwHoleTrap1DL[34];
extern Vtx gBotwHoleTrap2Vtx[];
extern Gfx gBotwHoleTrap2DL[41];
extern Vtx gBotwCoffinLidVtx[];
extern Gfx gBotwCoffinLidDL[23];
extern BgCamInfo gBotwCoffinLidBgCamList[];
extern SurfaceType gBotwCoffinLidSurfaceTypes[];
extern CollisionPoly gBotwCoffinLidPolyList[];
extern Vec3s gBotwCoffinLidVtxList[];
extern CollisionHeader gBotwCoffinLidCol;
extern Vtx gBotwBombSpotVtx[];
extern Gfx gBotwBombSpotDL[46];
extern BgCamInfo gBotwBombSpotBgCamList[];
extern SurfaceType gBotwBombSpotSurfaceTypes[];
extern CollisionPoly gBotwBombSpotPolyList[];
extern Vec3s gBotwBombSpotVtxList[];
extern CollisionHeader gBotwBombSpotCol;
extern Vtx gBotwFakeWallsAndFloorsVtx[];
extern Vtx gBotwBloodSplatterVtx[];
extern Gfx gBotwFakeWallsAndFloorsDL[62];
extern Gfx gBotwBloodSplatterDL[18];
extern BgCamInfo gBotw1BgCamList[];
extern SurfaceType gBotw1SurfaceTypes[];
extern CollisionPoly gBotw1PolyList[];
extern Vec3s gBotw1VtxList[];
extern CollisionHeader gBotw1Col;
extern Vtx gBotwThreeFakeFloorsVtx[];
extern Gfx gBotwThreeFakeFloorsDL[28];
extern BgCamInfo gBotw2BgCamList[];
extern SurfaceType gBotw2SurfaceTypes[];
extern CollisionPoly gBotw2PolyList[];
extern Vec3s gBotw2VtxList[];
extern CollisionHeader gBotw2Col;
extern Vtx gBotwWaterRingVtx[];
extern Gfx gBotwWaterRingDL[43];
extern Vtx gBotwWaterFallVtx[];
extern Gfx gBotwWaterFallDL[27];
#define gBotwWater2Tex_WIDTH 32
#define gBotwWater2Tex_HEIGHT 32
extern u64 gBotwWater2Tex[TEX_LEN(u64, gBotwWater2Tex_WIDTH, gBotwWater2Tex_HEIGHT, 16)];
#define gBotwWater1Tex_WIDTH 32
#define gBotwWater1Tex_HEIGHT 32
extern u64 gBotwWater1Tex[TEX_LEN(u64, gBotwWater1Tex_WIDTH, gBotwWater1Tex_HEIGHT, 16)];
#define gBotwTex_0030F0_WIDTH 32
#define gBotwTex_0030F0_HEIGHT 32
extern u64 gBotwTex_0030F0[TEX_LEN(u64, gBotwTex_0030F0_WIDTH, gBotwTex_0030F0_HEIGHT, 16)];
#define gBotwBloodSplatterTex_WIDTH 32
#define gBotwBloodSplatterTex_HEIGHT 32
extern u64 gBotwBloodSplatterTex[TEX_LEN(u64, gBotwBloodSplatterTex_WIDTH, gBotwBloodSplatterTex_HEIGHT, 16)];
#define gBotwTex_0040F0_WIDTH 32
#define gBotwTex_0040F0_HEIGHT 32
extern u64 gBotwTex_0040F0[TEX_LEN(u64, gBotwTex_0040F0_WIDTH, gBotwTex_0040F0_HEIGHT, 16)];
#define gBotwTex_0048F0_WIDTH 32
#define gBotwTex_0048F0_HEIGHT 32
extern u64 gBotwTex_0048F0[TEX_LEN(u64, gBotwTex_0048F0_WIDTH, gBotwTex_0048F0_HEIGHT, 16)];
#define gBotwTex_0050F0_WIDTH 32
#define gBotwTex_0050F0_HEIGHT 32
extern u64 gBotwTex_0050F0[TEX_LEN(u64, gBotwTex_0050F0_WIDTH, gBotwTex_0050F0_HEIGHT, 16)];
#define gBotwTex_0058F0_WIDTH 32
#define gBotwTex_0058F0_HEIGHT 32
extern u64 gBotwTex_0058F0[TEX_LEN(u64, gBotwTex_0058F0_WIDTH, gBotwTex_0058F0_HEIGHT, 16)];
#define gBotwTex_0060F0_WIDTH 32
#define gBotwTex_0060F0_HEIGHT 32
extern u64 gBotwTex_0060F0[TEX_LEN(u64, gBotwTex_0060F0_WIDTH, gBotwTex_0060F0_HEIGHT, 4)];
#define object_hakach_objects_0062F0_Tex_WIDTH 32
#define object_hakach_objects_0062F0_Tex_HEIGHT 32
extern u64 object_hakach_objects_0062F0_Tex[TEX_LEN(u64, object_hakach_objects_0062F0_Tex_WIDTH, object_hakach_objects_0062F0_Tex_HEIGHT, 16)];

#endif
