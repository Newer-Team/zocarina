#ifndef OBJECT_HEAVY_OBJECT_H
#define OBJECT_HEAVY_OBJECT_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

#define gHeavyBlockTex_WIDTH 64
#define gHeavyBlockTex_HEIGHT 128
extern u64 gHeavyBlockTex[TEX_LEN(u64, gHeavyBlockTex_WIDTH, gHeavyBlockTex_HEIGHT, 4)];
extern Vtx gHeavyBlockEntirePillarVtx[];
extern Gfx gHeavyBlockEntirePillarDL[30];
extern BgCamInfo gHeavyBlockBgCamList[];
extern SurfaceType gHeavyBlockSurfaceTypes[];
extern CollisionPoly gHeavyBlockPolyList[];
extern Vec3s gHeavyBlockVtxList[];
extern CollisionHeader gHeavyBlockCol;
extern Vtx gHeavyBlockBigPieceVtx[];
extern Gfx gHeavyBlockBigPieceDL[28];
extern Vtx gHeavyBlockSmallPieceVtx[];
extern Gfx gHeavyBlockSmallPieceDL[22];

#endif
