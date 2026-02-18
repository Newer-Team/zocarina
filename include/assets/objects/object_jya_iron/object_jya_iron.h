#ifndef OBJECT_JYA_IRON_H
#define OBJECT_JYA_IRON_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gPillarVtx[];
extern Gfx gPillarDL[36];
extern Vtx object_jya_iron_Vtx_000360[];
extern Gfx gObjectJyaIronDL_000600[31];
extern Vtx object_jya_iron_Vtx_000700[];
extern Gfx gObjectJyaIronDL_000880[24];
extern Vtx object_jya_iron_Vtx_000940[];
extern Gfx gObjectJyaIronDL_000AE0[26];
extern BgCamInfo gPillarBgCamList[];
extern SurfaceType gPillarSurfaceTypes[];
extern CollisionPoly gPillarPolyList[];
extern Vec3s gPillarVtxList[];
extern CollisionHeader gPillarCol;
extern Vtx gThroneVtx[];
extern Gfx gThroneDL[36];
extern BgCamInfo gThroneBgCamList[];
extern SurfaceType gThroneSurfaceTypes[];
extern CollisionPoly gThronePolyList[];
extern Vec3s gThroneVtxList[];
extern CollisionHeader gThroneCol;
#define gPillarSideTex_WIDTH 16
#define gPillarSideTex_HEIGHT 128
extern u64 gPillarSideTex[TEX_LEN(u64, gPillarSideTex_WIDTH, gPillarSideTex_HEIGHT, 16)];
#define gPillarTopTex_WIDTH 16
#define gPillarTopTex_HEIGHT 16
extern u64 gPillarTopTex[TEX_LEN(u64, gPillarTopTex_WIDTH, gPillarTopTex_HEIGHT, 16)];

#endif
