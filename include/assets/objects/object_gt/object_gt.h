#ifndef OBJECT_GT_H
#define OBJECT_GT_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gTowerCollapseCsExteriorStructureVtx[];
extern Vtx gTowerCollapseCsFlameSmokeVtx[];
extern Gfx gTowerCollapseCsExteriorStructureDL[786];
extern Gfx gTowerCollapseCsFlameSmokeDL[28];
extern Vtx gTowerCollapseCsCollapsedStructureInnerVtx[];
extern Gfx gTowerCollapseCsCollapsedStructureInnerDL[137];
extern BgCamInfo gTowerCollapseCsCollapsedStructureInnerBgCamList[];
extern SurfaceType gTowerCollapseCsCollapsedStructureInnerSurfaceTypes[];
extern CollisionPoly gTowerCollapseCsCollapsedStructureInnerPolyList[];
extern Vec3s gTowerCollapseCsCollapsedStructureInnerVtxList[];
extern CollisionHeader gTowerCollapseCsCollapsedStructureInnerCol;
extern Vtx gTowerCollapseCsCollapsedStructureOuterVtx[];
extern Gfx gTowerCollapseCsCollapsedStructureOuterDL[336];
extern BgCamInfo gTowerCollapseCsCollapsedStructureOuterBgCamList[];
extern SurfaceType gTowerCollapseCsCollapsedStructureOuterSurfaceTypes[];
extern CollisionPoly gTowerCollapseCsCollapsedStructureOuterPolyList[];
extern Vec3s gTowerCollapseCsCollapsedStructureOuterVtxList[];
extern CollisionHeader gTowerCollapseCsCollapsedStructureOuterCol;
extern Vtx gTowerCollapseCsStandalonePillarVtx[];
extern Gfx gTowerCollapseCsStandalonePillarDL[84];
extern Vtx gTowerCollapseCsWalkwayVtx[];
extern Gfx gTowerCollapseCsWalkwayDL[42];
extern Vtx gTowerCollapseCsAlternativeWalkwayVtx[];
extern Gfx gTowerCollapseCsAlternativeWalkwayDL[30];
#define gTowerCollapseCsFlameSmokeTex_WIDTH 16
#define gTowerCollapseCsFlameSmokeTex_HEIGHT 256
extern u64 gTowerCollapseCsFlameSmokeTex[TEX_LEN(u64, gTowerCollapseCsFlameSmokeTex_WIDTH, gTowerCollapseCsFlameSmokeTex_HEIGHT, 8)];
#define gTowerCollapseCsGrayStoneTex_WIDTH 32
#define gTowerCollapseCsGrayStoneTex_HEIGHT 32
extern u64 gTowerCollapseCsGrayStoneTex[TEX_LEN(u64, gTowerCollapseCsGrayStoneTex_WIDTH, gTowerCollapseCsGrayStoneTex_HEIGHT, 8)];
#define gTowerCollapseCsExteriorBlackStoneTex_WIDTH 64
#define gTowerCollapseCsExteriorBlackStoneTex_HEIGHT 64
extern u64 gTowerCollapseCsExteriorBlackStoneTex[TEX_LEN(u64, gTowerCollapseCsExteriorBlackStoneTex_WIDTH, gTowerCollapseCsExteriorBlackStoneTex_HEIGHT, 4)];
#define gTowerCollapseCsTex_B870_WIDTH 32
#define gTowerCollapseCsTex_B870_HEIGHT 8
extern u64 gTowerCollapseCsTex_B870[TEX_LEN(u64, gTowerCollapseCsTex_B870_WIDTH, gTowerCollapseCsTex_B870_HEIGHT, 4)];
#define gTowerCollapseCsRaftersTex_WIDTH 32
#define gTowerCollapseCsRaftersTex_HEIGHT 32
extern u64 gTowerCollapseCsRaftersTex[TEX_LEN(u64, gTowerCollapseCsRaftersTex_WIDTH, gTowerCollapseCsRaftersTex_HEIGHT, 8)];
#define gTowerCollapseCsBrownPaneledFloor1Tex_WIDTH 32
#define gTowerCollapseCsBrownPaneledFloor1Tex_HEIGHT 64
extern u64 gTowerCollapseCsBrownPaneledFloor1Tex[TEX_LEN(u64, gTowerCollapseCsBrownPaneledFloor1Tex_WIDTH, gTowerCollapseCsBrownPaneledFloor1Tex_HEIGHT, 16)];
#define gTowerCollapseCsBrownPaneledFloor2Tex_WIDTH 32
#define gTowerCollapseCsBrownPaneledFloor2Tex_HEIGHT 64
extern u64 gTowerCollapseCsBrownPaneledFloor2Tex[TEX_LEN(u64, gTowerCollapseCsBrownPaneledFloor2Tex_WIDTH, gTowerCollapseCsBrownPaneledFloor2Tex_HEIGHT, 16)];
#define gTowerCollapseCsExteriorPillarStoneTex_WIDTH 64
#define gTowerCollapseCsExteriorPillarStoneTex_HEIGHT 128
extern u64 gTowerCollapseCsExteriorPillarStoneTex[TEX_LEN(u64, gTowerCollapseCsExteriorPillarStoneTex_WIDTH, gTowerCollapseCsExteriorPillarStoneTex_HEIGHT, 4)];
#define gTowerCollapseCsRailingTex_WIDTH 32
#define gTowerCollapseCsRailingTex_HEIGHT 16
extern u64 gTowerCollapseCsRailingTex[TEX_LEN(u64, gTowerCollapseCsRailingTex_WIDTH, gTowerCollapseCsRailingTex_HEIGHT, 8)];
#define gTowerCollapseCsTex_EEF0_WIDTH 32
#define gTowerCollapseCsTex_EEF0_HEIGHT 64
extern u64 gTowerCollapseCsTex_EEF0[TEX_LEN(u64, gTowerCollapseCsTex_EEF0_WIDTH, gTowerCollapseCsTex_EEF0_HEIGHT, 4)];
#define gTowerCollapseCsTex_F2F0_WIDTH 16
#define gTowerCollapseCsTex_F2F0_HEIGHT 32
extern u64 gTowerCollapseCsTex_F2F0[TEX_LEN(u64, gTowerCollapseCsTex_F2F0_WIDTH, gTowerCollapseCsTex_F2F0_HEIGHT, 8)];
#define gTowerCollapseCsGrayFloorTex_WIDTH 16
#define gTowerCollapseCsGrayFloorTex_HEIGHT 32
extern u64 gTowerCollapseCsGrayFloorTex[TEX_LEN(u64, gTowerCollapseCsGrayFloorTex_WIDTH, gTowerCollapseCsGrayFloorTex_HEIGHT, 8)];
#define gTowerCollapseCsTex_F6F0_WIDTH 64
#define gTowerCollapseCsTex_F6F0_HEIGHT 64
extern u64 gTowerCollapseCsTex_F6F0[TEX_LEN(u64, gTowerCollapseCsTex_F6F0_WIDTH, gTowerCollapseCsTex_F6F0_HEIGHT, 4)];
#define gTowerCollapseCsBoltedSidesTex_WIDTH 64
#define gTowerCollapseCsBoltedSidesTex_HEIGHT 64
extern u64 gTowerCollapseCsBoltedSidesTex[TEX_LEN(u64, gTowerCollapseCsBoltedSidesTex_WIDTH, gTowerCollapseCsBoltedSidesTex_HEIGHT, 8)];
#define gTowerCollapseCsSpikeTex_WIDTH 16
#define gTowerCollapseCsSpikeTex_HEIGHT 16
extern u64 gTowerCollapseCsSpikeTex[TEX_LEN(u64, gTowerCollapseCsSpikeTex_WIDTH, gTowerCollapseCsSpikeTex_HEIGHT, 8)];
#define gTowerCollapseCsCollapsedCastleEdgeTex_WIDTH 64
#define gTowerCollapseCsCollapsedCastleEdgeTex_HEIGHT 64
extern u64 gTowerCollapseCsCollapsedCastleEdgeTex[TEX_LEN(u64, gTowerCollapseCsCollapsedCastleEdgeTex_WIDTH, gTowerCollapseCsCollapsedCastleEdgeTex_HEIGHT, 8)];
#define gTowerCollapseCsTex_11FF0_WIDTH 32
#define gTowerCollapseCsTex_11FF0_HEIGHT 32
extern u64 gTowerCollapseCsTex_11FF0[TEX_LEN(u64, gTowerCollapseCsTex_11FF0_WIDTH, gTowerCollapseCsTex_11FF0_HEIGHT, 8)];
#define gTowerCollapseCsTex_123F0_WIDTH 16
#define gTowerCollapseCsTex_123F0_HEIGHT 16
extern u64 gTowerCollapseCsTex_123F0[TEX_LEN(u64, gTowerCollapseCsTex_123F0_WIDTH, gTowerCollapseCsTex_123F0_HEIGHT, 16)];
#define gTowerCollapseCsTex_125F0_WIDTH 64
#define gTowerCollapseCsTex_125F0_HEIGHT 64
extern u64 gTowerCollapseCsTex_125F0[TEX_LEN(u64, gTowerCollapseCsTex_125F0_WIDTH, gTowerCollapseCsTex_125F0_HEIGHT, 8)];

#endif
