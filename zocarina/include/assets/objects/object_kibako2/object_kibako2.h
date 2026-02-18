#ifndef OBJECT_KIBAKO2_H
#define OBJECT_KIBAKO2_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

//#define gLargeCrate1TLUT_TLUT_COUNT 16
extern u64 gLargeCrate1TLUT[];
#define gLargeCrateTex_WIDTH 32
#define gLargeCrateTex_HEIGHT 64
extern u64 gLargeCrateTex[TEX_LEN(u64, gLargeCrateTex_WIDTH, gLargeCrateTex_HEIGHT, 4)];
#define gLargeCrateFragment1Tex_WIDTH 32
#define gLargeCrateFragment1Tex_HEIGHT 64
extern u64 gLargeCrateFragment1Tex[TEX_LEN(u64, gLargeCrateFragment1Tex_WIDTH, gLargeCrateFragment1Tex_HEIGHT, 4)];
extern Vtx gLargeCrateVtx[];
extern Gfx gLargeCrateDL[37];
extern BgCamInfo gLargeCrateBgCamList[];
extern SurfaceType gLargeCrateSurfaceTypes[];
extern CollisionPoly gLargeCratePolyList[];
extern Vec3s gLargeCrateVtxList[];
extern CollisionHeader gLargeCrateCol;
//#define gLargeCrate2TLUT_TLUT_COUNT 16
extern u64 gLargeCrate2TLUT[];
#define gLargeCrateFragment2Tex_WIDTH 32
#define gLargeCrateFragment2Tex_HEIGHT 64
extern u64 gLargeCrateFragment2Tex[TEX_LEN(u64, gLargeCrateFragment2Tex_WIDTH, gLargeCrateFragment2Tex_HEIGHT, 4)];
extern Vtx gLargeCrateFragmentVtx[];
extern Gfx gLargeCrateFragmentDL[24];

#endif
