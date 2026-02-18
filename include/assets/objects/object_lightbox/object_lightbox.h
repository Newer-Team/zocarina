#ifndef OBJECT_LIGHTBOX_H
#define OBJECT_LIGHTBOX_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Gfx object_lightbox_DL_000000[36];
extern Vtx object_lightbox_Vtx_000120[];
extern BgCamInfo object_lightbox_Col_0003A0_060002A0_BgCamList[];
extern SurfaceType object_lightbox_Col_0003A0_060002A8_SurfaceTypes[];
extern CollisionPoly object_lightbox_Col_0003A0_060002B0_PolyList[];
extern Vec3s object_lightbox_Col_0003A0_06000370_VtxList[];
extern CollisionHeader object_lightbox_Col_0003A0;
extern Gfx object_lightbox_DL_0003D0[36];
extern Vtx object_lightbox_Vtx_0004F0[];
extern BgCamInfo object_lightbox_Col_000770_06000670_BgCamList[];
extern SurfaceType object_lightbox_Col_000770_06000678_SurfaceTypes[];
extern CollisionPoly object_lightbox_Col_000770_06000680_PolyList[];
extern Vec3s object_lightbox_Col_000770_06000740_VtxList[];
extern CollisionHeader object_lightbox_Col_000770;
extern Gfx object_lightbox_DL_0007A0[36];
extern Vtx object_lightbox_Vtx_0008C0[];
extern BgCamInfo object_lightbox_Col_000B40_06000A40_BgCamList[];
extern SurfaceType object_lightbox_Col_000B40_06000A48_SurfaceTypes[];
extern CollisionPoly object_lightbox_Col_000B40_06000A50_PolyList[];
extern Vec3s object_lightbox_Col_000B40_06000B10_VtxList[];
extern CollisionHeader object_lightbox_Col_000B40;
extern Gfx object_lightbox_DL_000B70[36];
extern Vtx object_lightbox_Vtx_000C90[];
#define object_lightbox_Tex_000E10_WIDTH 32
#define object_lightbox_Tex_000E10_HEIGHT 32
extern u64 object_lightbox_Tex_000E10[TEX_LEN(u64, object_lightbox_Tex_000E10_WIDTH, object_lightbox_Tex_000E10_HEIGHT, 16)];
#define object_lightbox_Tex_001610_WIDTH 32
#define object_lightbox_Tex_001610_HEIGHT 32
extern u64 object_lightbox_Tex_001610[TEX_LEN(u64, object_lightbox_Tex_001610_WIDTH, object_lightbox_Tex_001610_HEIGHT, 16)];
extern BgCamInfo object_lightbox_Col_001F10_06001E10_BgCamList[];
extern SurfaceType object_lightbox_Col_001F10_06001E18_SurfaceTypes[];
extern CollisionPoly object_lightbox_Col_001F10_06001E20_PolyList[];
extern Vec3s object_lightbox_Col_001F10_06001EE0_VtxList[];
extern CollisionHeader object_lightbox_Col_001F10;

#endif
