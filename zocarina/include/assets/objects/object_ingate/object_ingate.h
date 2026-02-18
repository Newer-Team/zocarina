#ifndef OBJECT_INGATE_H
#define OBJECT_INGATE_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

#define gIngoGateTex_WIDTH 64
#define gIngoGateTex_HEIGHT 64
extern u64 gIngoGateTex[TEX_LEN(u64, gIngoGateTex_WIDTH, gIngoGateTex_HEIGHT, 8)];
extern Vtx gIngoGateVtx[];
extern Gfx gIngoGateDL[18];
extern BgCamInfo gIngoGateBgCamList[];
extern SurfaceType gIngoGateSurfaceTypes[];
extern CollisionPoly gIngoGatePolyList[];
extern Vec3s gIngoGateVtxList[];
extern CollisionHeader gIngoGateCol;

#endif
