#ifndef OBJECT_PU_BOX_H
#define OBJECT_PU_BOX_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Gfx gBlockSmallDL[25];
extern Vtx gBlockSmallVtx[];
extern BgCamInfo gBlockSmallBgCamList[];
extern SurfaceType gBlockSmallSurfaceTypes[];
extern CollisionPoly gBlockSmallPolyList[];
extern Vec3s gBlockSmallVtxList[];
extern CollisionHeader gBlockSmallCol;
extern Gfx gBlockMediumDL[25];
extern Vtx gBlockMediumVtx[];
extern BgCamInfo gBlockMediumBgCamList[];
extern SurfaceType gBlockMediumSurfaceTypes[];
extern CollisionPoly gBlockMediumPolyList[];
extern Vec3s gBlockMediumVtxList[];
extern CollisionHeader gBlockMediumCol;
extern Gfx gBlockTallDL[25];
extern Vtx gBlockTallVtx[];
extern BgCamInfo gBlockTallBgCamList[];
extern SurfaceType gBlockTallSurfaceTypes[];
extern CollisionPoly gBlockTallPolyList[];
extern Vec3s gBlockTallVtxList[];
extern CollisionHeader gBlockTallCol;
extern Gfx gBlockTallestDL[25];
extern Vtx gBlockTallestVtx[];
#define gBlockTex_WIDTH 32
#define gBlockTex_HEIGHT 32
extern u64 gBlockTex[TEX_LEN(u64, gBlockTex_WIDTH, gBlockTex_HEIGHT, 16)];
extern BgCamInfo gBlockTallestBgCamList[];
extern SurfaceType gBlockTallestSurfaceTypes[];
extern CollisionPoly gBlockTallestPolyList[];
extern Vec3s gBlockTallestVtxList[];
extern CollisionHeader gBlockTallestCol;

#endif
