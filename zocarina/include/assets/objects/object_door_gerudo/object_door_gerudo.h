#ifndef OBJECT_DOOR_GERUDO_H
#define OBJECT_DOOR_GERUDO_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gGerudoCellDoorVtx[];
extern Gfx gGerudoCellDoorDL[18];
extern BgCamInfo gGerudoCellDoorBgCamList[];
extern SurfaceType gGerudoCellDoorSurfaceTypes[];
extern CollisionPoly gGerudoCellDoorPolyList[];
extern Vec3s gGerudoCellDoorVtxList[];
extern CollisionHeader gGerudoCellDoorCol;
#define gGerudoCellDoorTex_WIDTH 16
#define gGerudoCellDoorTex_HEIGHT 64
extern u64 gGerudoCellDoorTex[TEX_LEN(u64, gGerudoCellDoorTex_WIDTH, gGerudoCellDoorTex_HEIGHT, 16)];

#endif
