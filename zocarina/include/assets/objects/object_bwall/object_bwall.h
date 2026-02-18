#ifndef OBJECT_BWALL_H
#define OBJECT_BWALL_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx object_bwall_Vtx_000000[];
extern Gfx object_bwall_DL_000040[18];
extern BgCamInfo object_bwall_Col_000118_060000D0_BgCamList[];
extern SurfaceType object_bwall_Col_000118_060000D8_SurfaceTypes[];
extern CollisionPoly object_bwall_Col_000118_060000E0_PolyList[];
extern Vec3s object_bwall_Col_000118_06000100_VtxList[];
extern CollisionHeader object_bwall_Col_000118;
#define object_bwall_Tex_000150_WIDTH 32
#define object_bwall_Tex_000150_HEIGHT 64
extern u64 object_bwall_Tex_000150[TEX_LEN(u64, object_bwall_Tex_000150_WIDTH, object_bwall_Tex_000150_HEIGHT, 16)];

#endif
