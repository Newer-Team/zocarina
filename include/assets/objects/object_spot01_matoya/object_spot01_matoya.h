#ifndef OBJECT_SPOT01_MATOYA_H
#define OBJECT_SPOT01_MATOYA_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

//#define gKakarikoShootingGalleryTLUT_TLUT_COUNT 256
extern u64 gKakarikoShootingGalleryTLUT[];
extern u8 object_spot01_matoya_000200_Blob[];
#define gKakarikoShootingGalleryRoofEdgeTex_WIDTH 32
#define gKakarikoShootingGalleryRoofEdgeTex_HEIGHT 32
extern u64 gKakarikoShootingGalleryRoofEdgeTex[TEX_LEN(u64, gKakarikoShootingGalleryRoofEdgeTex_WIDTH, gKakarikoShootingGalleryRoofEdgeTex_HEIGHT, 8)];
#define gKakarikoShootingGalleryRoofTex_WIDTH 16
#define gKakarikoShootingGalleryRoofTex_HEIGHT 32
extern u64 gKakarikoShootingGalleryRoofTex[TEX_LEN(u64, gKakarikoShootingGalleryRoofTex_WIDTH, gKakarikoShootingGalleryRoofTex_HEIGHT, 8)];
#define gKakarikoShootingGalleryDoorShadowTex_WIDTH 16
#define gKakarikoShootingGalleryDoorShadowTex_HEIGHT 32
extern u64 gKakarikoShootingGalleryDoorShadowTex[TEX_LEN(u64, gKakarikoShootingGalleryDoorShadowTex_WIDTH, gKakarikoShootingGalleryDoorShadowTex_HEIGHT, 8)];
#define gKakarikoShootingGalleryWallTex_WIDTH 32
#define gKakarikoShootingGalleryWallTex_HEIGHT 64
extern u64 gKakarikoShootingGalleryWallTex[TEX_LEN(u64, gKakarikoShootingGalleryWallTex_WIDTH, gKakarikoShootingGalleryWallTex_HEIGHT, 8)];
extern Vtx gKakarikoShootingGalleryVtx[];
extern Gfx gKakarikoShootingGalleryDL[78];
extern BgCamInfo gKakarikoShootingGalleryBgCamList[];
extern SurfaceType gKakarikoShootingGallerySurfaceTypes[];
extern CollisionPoly gKakarikoShootingGalleryPolyList[];
extern Vec3s gKakarikoShootingGalleryVtxList[];
extern CollisionHeader gKakarikoShootingGalleryCol;
#define gKakarikoPotionShopSignTex_WIDTH 32
#define gKakarikoPotionShopSignTex_HEIGHT 16
extern u64 gKakarikoPotionShopSignTex[TEX_LEN(u64, gKakarikoPotionShopSignTex_WIDTH, gKakarikoPotionShopSignTex_HEIGHT, 16)];
extern Vtx gKakarikoPotionShopSignVtx[];
extern Gfx gKakarikoPotionShopSignDL[18];
#define gKakarikoShootingGallerySignTex_WIDTH 32
#define gKakarikoShootingGallerySignTex_HEIGHT 32
extern u64 gKakarikoShootingGallerySignTex[TEX_LEN(u64, gKakarikoShootingGallerySignTex_WIDTH, gKakarikoShootingGallerySignTex_HEIGHT, 16)];
extern Vtx gKakarikoShootingGallerySignVtx[];
extern Gfx gKakarikoShootingGallerySignDL[18];
//#define gKakarikoBazaarSignTLUT_TLUT_COUNT 16
extern u64 gKakarikoBazaarSignTLUT[];
#define gKakarikoBazaarSignTex_WIDTH 64
#define gKakarikoBazaarSignTex_HEIGHT 64
extern u64 gKakarikoBazaarSignTex[TEX_LEN(u64, gKakarikoBazaarSignTex_WIDTH, gKakarikoBazaarSignTex_HEIGHT, 4)];
extern Vtx gKakarikoBazaarSignVtx[];
extern Gfx gKakarikoBazaarSignDL[24];
#define gKakarikoBOTWStoneTex_WIDTH 32
#define gKakarikoBOTWStoneTex_HEIGHT 32
extern u64 gKakarikoBOTWStoneTex[TEX_LEN(u64, gKakarikoBOTWStoneTex_WIDTH, gKakarikoBOTWStoneTex_HEIGHT, 16)];
extern Vtx gKakarikoBOTWStoneVtx[];
extern Gfx gKakarikoBOTWStoneDL[25];
extern BgCamInfo gKakarikoBOTWStoneBgCamList[];
extern SurfaceType gKakarikoBOTWStoneSurfaceTypes[];
extern CollisionPoly gKakarikoBOTWStonePolyList[];
extern Vec3s gKakarikoBOTWStoneVtxList[];
extern CollisionHeader gKakarikoBOTWStoneCol;

#endif
