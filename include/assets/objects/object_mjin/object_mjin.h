#ifndef OBJECT_MJIN_H
#define OBJECT_MJIN_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gWarpPadBaseVtx[];
extern Gfx gWarpPadBaseDL[57];
extern BgCamInfo gWarpPadBgCamList[];
extern SurfaceType gWarpPadSurfaceTypes[];
extern CollisionPoly gWarpPadPolyList[];
extern Vec3s gWarpPadVtxList[];
extern CollisionHeader gWarpPadCol;
#define gWarpPadSideTex_WIDTH 64
#define gWarpPadSideTex_HEIGHT 16
extern u64 gWarpPadSideTex[TEX_LEN(u64, gWarpPadSideTex_WIDTH, gWarpPadSideTex_HEIGHT, 16)];
#define gWarpPadTopTex_WIDTH 32
#define gWarpPadTopTex_HEIGHT 32
extern u64 gWarpPadTopTex[TEX_LEN(u64, gWarpPadTopTex_WIDTH, gWarpPadTopTex_HEIGHT, 8)];

#endif
