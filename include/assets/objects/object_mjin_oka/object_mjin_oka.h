#ifndef OBJECT_MJIN_OKA_H
#define OBJECT_MJIN_OKA_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gOcarinaWarpPadVtx[];
extern Gfx gOcarinaWarpPadDL[33];
extern BgCamInfo gOcarinaWarpPadBgCamList[];
extern SurfaceType gOcarinaWarpPadSurfaceTypes[];
extern CollisionPoly gOcarinaWarpPadPolyList[];
extern Vec3s gOcarinaWarpPadVtxList[];
extern CollisionHeader gOcarinaWarpPadCol;
#define gOcarinaWarpPadSideTex_WIDTH 64
#define gOcarinaWarpPadSideTex_HEIGHT 16
extern u64 gOcarinaWarpPadSideTex[TEX_LEN(u64, gOcarinaWarpPadSideTex_WIDTH, gOcarinaWarpPadSideTex_HEIGHT, 16)];
#define gOcarinaWarpPadOcarinaTex_WIDTH 64
#define gOcarinaWarpPadOcarinaTex_HEIGHT 64
extern u64 gOcarinaWarpPadOcarinaTex[TEX_LEN(u64, gOcarinaWarpPadOcarinaTex_WIDTH, gOcarinaWarpPadOcarinaTex_HEIGHT, 8)];

#endif
