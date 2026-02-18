#ifndef OBJECT_D_LIFT_H
#define OBJECT_D_LIFT_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gCollapsingPlatformVtx[];
extern Gfx gCollapsingPlatformDL[50];
extern BgCamInfo gCollapsingPlatformBgCamList[];
extern SurfaceType gCollapsingPlatformSurfaceTypes[];
extern CollisionPoly gCollapsingPlatformPolyList[];
extern Vec3s gCollapsingPlatformVtxList[];
extern CollisionHeader gCollapsingPlatformCol;
#define gCollapsingPlatformSideTex_WIDTH 64
#define gCollapsingPlatformSideTex_HEIGHT 16
extern u64 gCollapsingPlatformSideTex[TEX_LEN(u64, gCollapsingPlatformSideTex_WIDTH, gCollapsingPlatformSideTex_HEIGHT, 8)];
#define gCollapsingPlatformTopTex_WIDTH 64
#define gCollapsingPlatformTopTex_HEIGHT 64
extern u64 gCollapsingPlatformTopTex[TEX_LEN(u64, gCollapsingPlatformTopTex_WIDTH, gCollapsingPlatformTopTex_HEIGHT, 8)];

#endif
