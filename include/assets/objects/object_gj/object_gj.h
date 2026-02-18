#ifndef OBJECT_GJ_H
#define OBJECT_GJ_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gGanonsCastleRubbleAroundArenaVtx[];
extern Gfx gGanonsCastleRubbleAroundArenaDL[148];
extern BgCamInfo gGanonsCastleRubbleAroundArenaBgCamList[];
extern SurfaceType gGanonsCastleRubbleAroundArenaSurfaceTypes[];
extern CollisionPoly gGanonsCastleRubbleAroundArenaPolyList[];
extern Vec3s gGanonsCastleRubbleAroundArenaVtxList[];
extern CollisionHeader gGanonsCastleRubbleAroundArenaCol;
extern Vtx gGanonsCastleRubble2Vtx[];
extern Gfx gGanonsCastleRubble2DL[41];
extern BgCamInfo gGanonsCastleRubble2BgCamList[];
extern SurfaceType gGanonsCastleRubble2SurfaceTypes[];
extern CollisionPoly gGanonsCastleRubble2PolyList[];
extern Vec3s gGanonsCastleRubble2VtxList[];
extern CollisionHeader gGanonsCastleRubble2Col;
extern Vtx gGanonsCastleRubble3Vtx[];
extern Gfx gGanonsCastleRubble3DL[53];
extern BgCamInfo gGanonsCastleRubble3BgCamList[];
extern SurfaceType gGanonsCastleRubble3SurfaceTypes[];
extern CollisionPoly gGanonsCastleRubble3PolyList[];
extern Vec3s gGanonsCastleRubble3VtxList[];
extern CollisionHeader gGanonsCastleRubble3Col;
extern Vtx gGanonsCastleRubble4Vtx[];
extern Gfx gGanonsCastleRubble4DL[41];
extern BgCamInfo gGanonsCastleRubble4BgCamList[];
extern SurfaceType gGanonsCastleRubble4SurfaceTypes[];
extern CollisionPoly gGanonsCastleRubble4PolyList[];
extern Vec3s gGanonsCastleRubble4VtxList[];
extern CollisionHeader gGanonsCastleRubble4Col;
extern Vtx gGanonsCastleRubble5Vtx[];
extern Gfx gGanonsCastleRubble5DL[53];
extern BgCamInfo gGanonsCastleRubble5BgCamList[];
extern SurfaceType gGanonsCastleRubble5SurfaceTypes[];
extern CollisionPoly gGanonsCastleRubble5PolyList[];
extern Vec3s gGanonsCastleRubble5VtxList[];
extern CollisionHeader gGanonsCastleRubble5Col;
extern Vtx gGanonsCastleRubble6Vtx[];
extern Gfx gGanonsCastleRubble6DL[21];
extern BgCamInfo gGanonsCastleRubble6BgCamList[];
extern SurfaceType gGanonsCastleRubble6SurfaceTypes[];
extern CollisionPoly gGanonsCastleRubble6PolyList[];
extern Vec3s gGanonsCastleRubble6VtxList[];
extern CollisionHeader gGanonsCastleRubble6Col;
extern Vtx gGanonsCastleRubble7Vtx[];
extern Gfx gGanonsCastleRubble7DL[41];
extern BgCamInfo gGanonsCastleRubble7BgCamList[];
extern SurfaceType gGanonsCastleRubble7SurfaceTypes[];
extern CollisionPoly gGanonsCastleRubble7PolyList[];
extern Vec3s gGanonsCastleRubble7VtxList[];
extern CollisionHeader gGanonsCastleRubble7Col;
extern Vtx gGanonsCastleRubbleTallVtx[];
extern Gfx gGanonsCastleRubbleTallDL[57];
extern BgCamInfo gGanonsCastleRubbleTallBgCamList[];
extern SurfaceType gGanonsCastleRubbleTallSurfaceTypes[];
extern CollisionPoly gGanonsCastleRubbleTallPolyList[];
extern Vec3s gGanonsCastleRubbleTallVtxList[];
extern CollisionHeader gGanonsCastleRubbleTallCol;
#define object_gj_003B20_Tex_WIDTH 16
#define object_gj_003B20_Tex_HEIGHT 16
extern u64 object_gj_003B20_Tex[TEX_LEN(u64, object_gj_003B20_Tex_WIDTH, object_gj_003B20_Tex_HEIGHT, 8)];
#define object_gj_003C20_Tex_WIDTH 16
#define object_gj_003C20_Tex_HEIGHT 32
extern u64 object_gj_003C20_Tex[TEX_LEN(u64, object_gj_003C20_Tex_WIDTH, object_gj_003C20_Tex_HEIGHT, 4)];
#define object_gj_003D20_Tex_WIDTH 16
#define object_gj_003D20_Tex_HEIGHT 16
extern u64 object_gj_003D20_Tex[TEX_LEN(u64, object_gj_003D20_Tex_WIDTH, object_gj_003D20_Tex_HEIGHT, 16)];
#define object_gj_003F20_Tex_WIDTH 64
#define object_gj_003F20_Tex_HEIGHT 64
extern u64 object_gj_003F20_Tex[TEX_LEN(u64, object_gj_003F20_Tex_WIDTH, object_gj_003F20_Tex_HEIGHT, 8)];
#define object_gj_004F20_Tex_WIDTH 64
#define object_gj_004F20_Tex_HEIGHT 64
extern u64 object_gj_004F20_Tex[TEX_LEN(u64, object_gj_004F20_Tex_WIDTH, object_gj_004F20_Tex_HEIGHT, 8)];
#define object_gj_005F20_Tex_WIDTH 64
#define object_gj_005F20_Tex_HEIGHT 64
extern u64 object_gj_005F20_Tex[TEX_LEN(u64, object_gj_005F20_Tex_WIDTH, object_gj_005F20_Tex_HEIGHT, 8)];
#define object_gj_006F20_Tex_WIDTH 32
#define object_gj_006F20_Tex_HEIGHT 64
extern u64 object_gj_006F20_Tex[TEX_LEN(u64, object_gj_006F20_Tex_WIDTH, object_gj_006F20_Tex_HEIGHT, 4)];
#define object_gj_007320_Tex_WIDTH 64
#define object_gj_007320_Tex_HEIGHT 16
extern u64 object_gj_007320_Tex[TEX_LEN(u64, object_gj_007320_Tex_WIDTH, object_gj_007320_Tex_HEIGHT, 8)];
#define object_gj_007720_Tex_WIDTH 32
#define object_gj_007720_Tex_HEIGHT 32
extern u64 object_gj_007720_Tex[TEX_LEN(u64, object_gj_007720_Tex_WIDTH, object_gj_007720_Tex_HEIGHT, 8)];
#define object_gj_007B20_Tex_WIDTH 128
#define object_gj_007B20_Tex_HEIGHT 32
extern u64 object_gj_007B20_Tex[TEX_LEN(u64, object_gj_007B20_Tex_WIDTH, object_gj_007B20_Tex_HEIGHT, 8)];
#define gGanonsCastleUnusedSpikeVariantTex_WIDTH 64
#define gGanonsCastleUnusedSpikeVariantTex_HEIGHT 32
extern u64 gGanonsCastleUnusedSpikeVariantTex[TEX_LEN(u64, gGanonsCastleUnusedSpikeVariantTex_WIDTH, gGanonsCastleUnusedSpikeVariantTex_HEIGHT, 16)];
#define gGanonsCastleUnusedWallTex_WIDTH 32
#define gGanonsCastleUnusedWallTex_HEIGHT 32
extern u64 gGanonsCastleUnusedWallTex[TEX_LEN(u64, gGanonsCastleUnusedWallTex_WIDTH, gGanonsCastleUnusedWallTex_HEIGHT, 16)];
#define gGanonsCastleUnusedTex_00A320_WIDTH 16
#define gGanonsCastleUnusedTex_00A320_HEIGHT 32
extern u64 gGanonsCastleUnusedTex_00A320[TEX_LEN(u64, gGanonsCastleUnusedTex_00A320_WIDTH, gGanonsCastleUnusedTex_00A320_HEIGHT, 16)];

#endif
