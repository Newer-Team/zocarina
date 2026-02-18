#ifndef OBJECT_SPOT01_MATOYAB_H
#define OBJECT_SPOT01_MATOYAB_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

//#define gKakarikoConstructionSiteTLUT_TLUT_COUNT 256
extern u64 gKakarikoConstructionSiteTLUT[];
extern u8 object_spot01_matoyab_000200_Blob[];
#define gKakarikoConstructionSiteBrickWithGrassTex_WIDTH 16
#define gKakarikoConstructionSiteBrickWithGrassTex_HEIGHT 32
extern u64 gKakarikoConstructionSiteBrickWithGrassTex[TEX_LEN(u64, gKakarikoConstructionSiteBrickWithGrassTex_WIDTH, gKakarikoConstructionSiteBrickWithGrassTex_HEIGHT, 8)];
#define gKakarikoConstructionSiteBrickTex_WIDTH 16
#define gKakarikoConstructionSiteBrickTex_HEIGHT 32
extern u64 gKakarikoConstructionSiteBrickTex[TEX_LEN(u64, gKakarikoConstructionSiteBrickTex_WIDTH, gKakarikoConstructionSiteBrickTex_HEIGHT, 8)];
#define gKakarikoConstructionSitRailingTex_WIDTH 16
#define gKakarikoConstructionSitRailingTex_HEIGHT 8
extern u64 gKakarikoConstructionSitRailingTex[TEX_LEN(u64, gKakarikoConstructionSitRailingTex_WIDTH, gKakarikoConstructionSitRailingTex_HEIGHT, 8)];
#define gKakarikoConstructionSiteWoodTex_WIDTH 16
#define gKakarikoConstructionSiteWoodTex_HEIGHT 32
extern u64 gKakarikoConstructionSiteWoodTex[TEX_LEN(u64, gKakarikoConstructionSiteWoodTex_WIDTH, gKakarikoConstructionSiteWoodTex_HEIGHT, 8)];
extern Vtx gKakarikoConstructionSiteVtx[];
extern Gfx gKakarikoConstructionSiteDL[120];
extern BgCamInfo object_spot01_matoyab_col_060015F0_BgCamList[];
extern SurfaceType object_spot01_matoyab_col_060015F8_SurfaceTypes[];
extern CollisionPoly object_spot01_matoyab_col_06001608_PolyList[];
extern Vec3s object_spot01_matoyab_col_06001AE8_VtxList[];
extern CollisionHeader object_spot01_matoyab_col;
extern Vtx gKakarikoGuardGateVtx[];
extern Gfx gKakarikoGuardGateDL[18];
extern BgCamInfo gKakarikoGuardGateBgCamList[];
extern SurfaceType gKakarikoGuardGateSurfaceTypes[];
extern CollisionPoly gKakarikoGuardGatePolyList[];
extern Vec3s gKakarikoGuardGateVtxList[];
extern CollisionHeader gKakarikoGuardGateCol;
#define gKakarikoGuardGateMetalSidebarDL_WIDTH 8
#define gKakarikoGuardGateMetalSidebarDL_HEIGHT 64
extern u64 gKakarikoGuardGateMetalSidebarDL[TEX_LEN(u64, gKakarikoGuardGateMetalSidebarDL_WIDTH, gKakarikoGuardGateMetalSidebarDL_HEIGHT, 16)];

#endif
