#ifndef OBJECT_SIOFUKI_H
#define OBJECT_SIOFUKI_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

#define object_siofuki_Tex_000000_WIDTH 64
#define object_siofuki_Tex_000000_HEIGHT 64
extern u64 object_siofuki_Tex_000000[TEX_LEN(u64, object_siofuki_Tex_000000_WIDTH, object_siofuki_Tex_000000_HEIGHT, 4)];
extern Vtx object_siofuki_Vtx_000800[];
extern Gfx object_siofuki_DL_000B70[56];
extern BgCamInfo object_siofuki_Col_000D78_06000D30_BgCamList[];
extern SurfaceType object_siofuki_Col_000D78_06000D38_SurfaceTypes[];
extern CollisionPoly object_siofuki_Col_000D78_06000D40_PolyList[];
extern Vec3s object_siofuki_Col_000D78_06000D60_VtxList[];
extern CollisionHeader object_siofuki_Col_000D78;

#endif
