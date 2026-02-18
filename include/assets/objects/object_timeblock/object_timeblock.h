#ifndef OBJECT_TIMEBLOCK_H
#define OBJECT_TIMEBLOCK_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

#define gSongOfTimeBlockTex_WIDTH 64
#define gSongOfTimeBlockTex_HEIGHT 64
extern u64 gSongOfTimeBlockTex[TEX_LEN(u64, gSongOfTimeBlockTex_WIDTH, gSongOfTimeBlockTex_HEIGHT, 4)];
extern Vtx gSongOfTimeBlockVtx[];
extern Gfx gSongOfTimeBlockDL[22];
extern BgCamInfo gSongOfTimeBlockBgCamList[];
extern SurfaceType gSongOfTimeBlockSurfaceTypes[];
extern CollisionPoly gSongOfTimeBlockPolyList[];
extern Vec3s gSongOfTimeBlockVtxList[];
extern CollisionHeader gSongOfTimeBlockCol;

#endif
