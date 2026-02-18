#ifndef OBJECT_D_ELEVATOR_H
#define OBJECT_D_ELEVATOR_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx object_d_elevator_Vtx_000000[];
extern Gfx object_d_elevator_DL_000180[28];
extern BgCamInfo object_d_elevator_Col_000360_06000260_BgCamList[];
extern SurfaceType object_d_elevator_Col_000360_06000268_SurfaceTypes[];
extern CollisionPoly object_d_elevator_Col_000360_06000270_PolyList[];
extern Vec3s object_d_elevator_Col_000360_06000330_VtxList[];
extern CollisionHeader object_d_elevator_Col_000360;
#define object_d_elevator_Tex_000390_WIDTH 64
#define object_d_elevator_Tex_000390_HEIGHT 64
extern u64 object_d_elevator_Tex_000390[TEX_LEN(u64, object_d_elevator_Tex_000390_WIDTH, object_d_elevator_Tex_000390_HEIGHT, 8)];

#endif
