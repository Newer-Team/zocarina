#ifndef OBJECT_SPOT08_OBJ_H
#define OBJECT_SPOT08_OBJ_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

//#define gZorasFountainIceRampTLUT_TLUT_COUNT 16
extern u64 gZorasFountainIceRampTLUT[];
#define gZorasFountainIceRampLowerSideTex_WIDTH 64
#define gZorasFountainIceRampLowerSideTex_HEIGHT 64
extern u64 gZorasFountainIceRampLowerSideTex[TEX_LEN(u64, gZorasFountainIceRampLowerSideTex_WIDTH, gZorasFountainIceRampLowerSideTex_HEIGHT, 4)];
extern Vtx gZorasFountainIceRampVtx[];
extern Gfx gZorasFountainIceRampDL[238];
extern BgCamInfo gZorasFountainIceRampBgCamList[];
extern SurfaceType gZorasFountainIceRampSurfaceTypes[];
extern CollisionPoly gZorasFountainIceRampPolyList[];
extern Vec3s gZorasFountainIceRampVtxList[];
extern CollisionHeader gZorasFountainIceRampCol;
//#define gZorasFountainIceberg1TLUT_TLUT_COUNT 16
extern u64 gZorasFountainIceberg1TLUT[];
//#define gZorasFountainIceberg2TLUT_TLUT_COUNT 16
extern u64 gZorasFountainIceberg2TLUT[];
#define gZorasFountainIcebergSideTex_WIDTH 64
#define gZorasFountainIcebergSideTex_HEIGHT 64
extern u64 gZorasFountainIcebergSideTex[TEX_LEN(u64, gZorasFountainIcebergSideTex_WIDTH, gZorasFountainIcebergSideTex_HEIGHT, 4)];
#define gZorasFountainIcebergTopTex_WIDTH 64
#define gZorasFountainIcebergTopTex_HEIGHT 64
extern u64 gZorasFountainIcebergTopTex[TEX_LEN(u64, gZorasFountainIcebergTopTex_WIDTH, gZorasFountainIcebergTopTex_HEIGHT, 4)];
extern Vtx gZorasFountainIcebergVtx[];
extern Gfx gZorasFountainIcebergDL[71];
extern BgCamInfo gZorasFountainIcebergBgCamList[];
extern SurfaceType gZorasFountainIcebergSurfaceTypes[];
extern CollisionPoly gZorasFountainIcebergPolyList[];
extern Vec3s gZorasFountainIcebergVtxList[];
extern CollisionHeader gZorasFountainIcebergCol;
//#define gZorasFountainBombableWallTLUT_TLUT_COUNT 16
extern u64 gZorasFountainBombableWallTLUT[];
#define gZorasFountainBombableWallTex_WIDTH 128
#define gZorasFountainBombableWallTex_HEIGHT 32
extern u64 gZorasFountainBombableWallTex[TEX_LEN(u64, gZorasFountainBombableWallTex_WIDTH, gZorasFountainBombableWallTex_HEIGHT, 4)];
extern Vtx gZorasFountainBombableWallVtx[];
extern Gfx gZorasFountainBombableWallDL[25];
extern BgCamInfo gZorasFountainBombableWallBgCamList[];
extern SurfaceType gZorasFountainBombableWallSurfaceTypes[];
extern CollisionPoly gZorasFountainBombableWallPolyList[];
extern Vec3s gZorasFountainBombableWallVtxList[];
extern CollisionHeader gZorasFountainBombableWallCol;
#define gZorasFountainIcebergUndersideTex_WIDTH 64
#define gZorasFountainIcebergUndersideTex_HEIGHT 8
extern u64 gZorasFountainIcebergUndersideTex[TEX_LEN(u64, gZorasFountainIcebergUndersideTex_WIDTH, gZorasFountainIcebergUndersideTex_HEIGHT, 16)];
#define gZorasFountainIceRampSurfaceTex_WIDTH 32
#define gZorasFountainIceRampSurfaceTex_HEIGHT 32
extern u64 gZorasFountainIceRampSurfaceTex[TEX_LEN(u64, gZorasFountainIceRampSurfaceTex_WIDTH, gZorasFountainIceRampSurfaceTex_HEIGHT, 16)];
#define gZorasFountainIceRampUpperSideTex_WIDTH 32
#define gZorasFountainIceRampUpperSideTex_HEIGHT 32
extern u64 gZorasFountainIceRampUpperSideTex[TEX_LEN(u64, gZorasFountainIceRampUpperSideTex_WIDTH, gZorasFountainIceRampUpperSideTex_HEIGHT, 16)];
#define gZorasFountainIceRampMiddleSlopeTex_WIDTH 32
#define gZorasFountainIceRampMiddleSlopeTex_HEIGHT 32
extern u64 gZorasFountainIceRampMiddleSlopeTex[TEX_LEN(u64, gZorasFountainIceRampMiddleSlopeTex_WIDTH, gZorasFountainIceRampMiddleSlopeTex_HEIGHT, 16)];

#endif
