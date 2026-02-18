#ifndef OBJECT_SPOT05_OBJECTS_H
#define OBJECT_SPOT05_OBJECTS_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

#define object_spot05_objects_Tex_000000_WIDTH 32
#define object_spot05_objects_Tex_000000_HEIGHT 32
extern u64 object_spot05_objects_Tex_000000[TEX_LEN(u64, object_spot05_objects_Tex_000000_WIDTH, object_spot05_objects_Tex_000000_HEIGHT, 16)];
extern Vtx object_spot05_objects_Vtx_000800[];
extern Gfx object_spot05_objects_DL_000840[18];
extern BgCamInfo object_spot05_objects_Col_000918_060008D0_BgCamList[];
extern SurfaceType object_spot05_objects_Col_000918_060008D8_SurfaceTypes[];
extern CollisionPoly object_spot05_objects_Col_000918_060008E0_PolyList[];
extern Vec3s object_spot05_objects_Col_000918_06000900_VtxList[];
extern CollisionHeader object_spot05_objects_Col_000918;
#define object_spot05_objects_Tex_000950_WIDTH 16
#define object_spot05_objects_Tex_000950_HEIGHT 64
extern u64 object_spot05_objects_Tex_000950[TEX_LEN(u64, object_spot05_objects_Tex_000950_WIDTH, object_spot05_objects_Tex_000950_HEIGHT, 16)];
extern Vtx object_spot05_objects_Vtx_001150[];
extern Gfx object_spot05_objects_DL_001190[18];
extern BgCamInfo object_spot05_objects_Col_0012C0_06001220_BgCamList[];
extern SurfaceType object_spot05_objects_Col_0012C0_06001228_SurfaceTypes[];
extern CollisionPoly object_spot05_objects_Col_0012C0_06001230_PolyList[];
extern Vec3s object_spot05_objects_Col_0012C0_06001290_VtxList[];
extern CollisionHeader object_spot05_objects_Col_0012C0;

#endif
