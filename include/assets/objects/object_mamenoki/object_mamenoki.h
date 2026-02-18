#ifndef OBJECT_MAMENOKI_H
#define OBJECT_MAMENOKI_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gMagicBeanSeedlingVtx[];
extern Gfx gMagicBeanSeedlingDL[19];
extern Vtx gMagicBeanStemVtx[];
extern Gfx gMagicBeanStemDL[19];
extern Vtx gMagicBeanPlatformVtx[];
extern Gfx gMagicBeanPlatformDL[41];
extern BgCamInfo gMagicBeanPlatformBgCamList[];
extern SurfaceType gMagicBeanPlatformSurfaceTypes[];
extern CollisionPoly gMagicBeanPlatformPolyList[];
extern Vec3s gMagicBeanPlatformVtxList[];
extern CollisionHeader gMagicBeanPlatformCol;
extern Vtx gMagicBeanSoftSoilVtx[];
extern Gfx gMagicBeanSoftSoilDL[18];
#define gMagicBeanSoftSoilTex_WIDTH 32
#define gMagicBeanSoftSoilTex_HEIGHT 32
extern u64 gMagicBeanSoftSoilTex[TEX_LEN(u64, gMagicBeanSoftSoilTex_WIDTH, gMagicBeanSoftSoilTex_HEIGHT, 16)];
#define gMagicBeanSeedlingTex_WIDTH 16
#define gMagicBeanSeedlingTex_HEIGHT 32
extern u64 gMagicBeanSeedlingTex[TEX_LEN(u64, gMagicBeanSeedlingTex_WIDTH, gMagicBeanSeedlingTex_HEIGHT, 16)];
#define gMagicBeanPlatformTex_WIDTH 32
#define gMagicBeanPlatformTex_HEIGHT 32
extern u64 gMagicBeanPlatformTex[TEX_LEN(u64, gMagicBeanPlatformTex_WIDTH, gMagicBeanPlatformTex_HEIGHT, 16)];
#define gMagicBeanPlatformStemTex_WIDTH 16
#define gMagicBeanPlatformStemTex_HEIGHT 32
extern u64 gMagicBeanPlatformStemTex[TEX_LEN(u64, gMagicBeanPlatformStemTex_WIDTH, gMagicBeanPlatformStemTex_HEIGHT, 16)];
#define gMagicBeanPlatformRootsTex_WIDTH 32
#define gMagicBeanPlatformRootsTex_HEIGHT 16
extern u64 gMagicBeanPlatformRootsTex[TEX_LEN(u64, gMagicBeanPlatformRootsTex_WIDTH, gMagicBeanPlatformRootsTex_HEIGHT, 16)];
#define gMagicBeanStemTex_WIDTH 16
#define gMagicBeanStemTex_HEIGHT 32
extern u64 gMagicBeanStemTex[TEX_LEN(u64, gMagicBeanStemTex_WIDTH, gMagicBeanStemTex_HEIGHT, 16)];

#endif
