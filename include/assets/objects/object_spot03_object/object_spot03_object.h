#ifndef OBJECT_SPOT03_OBJECT_H
#define OBJECT_SPOT03_OBJECT_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

#define object_spot03_object_Tex_000000_WIDTH 64
#define object_spot03_object_Tex_000000_HEIGHT 64
extern u64 object_spot03_object_Tex_000000[TEX_LEN(u64, object_spot03_object_Tex_000000_WIDTH, object_spot03_object_Tex_000000_HEIGHT, 4)];
extern Vtx object_spot03_object_Vtx_000800[];
extern Vtx object_spot03_object_Vtx_000990[];
extern Gfx object_spot03_object_DL_000B20[20];
extern Gfx object_spot03_object_DL_000BC0[17];
extern BgCamInfo object_spot03_object_Col_000C98_06000C50_BgCamList[];
extern SurfaceType object_spot03_object_Col_000C98_06000C58_SurfaceTypes[];
extern CollisionPoly object_spot03_object_Col_000C98_06000C60_PolyList[];
extern Vec3s object_spot03_object_Col_000C98_06000C80_VtxList[];
extern CollisionHeader object_spot03_object_Col_000C98;
#define object_spot03_object_Tex_000CD0_WIDTH 64
#define object_spot03_object_Tex_000CD0_HEIGHT 64
extern u64 object_spot03_object_Tex_000CD0[TEX_LEN(u64, object_spot03_object_Tex_000CD0_WIDTH, object_spot03_object_Tex_000CD0_HEIGHT, 4)];
extern Vtx object_spot03_object_Vtx_0014D0[];
extern Gfx object_spot03_object_DL_001580[28];

#endif
