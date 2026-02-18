#ifndef OBJECT_SPOT01_OBJECTS_H
#define OBJECT_SPOT01_OBJECTS_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gKakarikoWindmillSailsVtx[];
extern Gfx gKakarikoWindmillSailsDL[21];
extern Vtx gKakarikoWellArchVtx[];
extern Gfx gKakarikoWellArchDL[31];
extern BgCamInfo gKakarikoWellArchBgCamList[];
extern SurfaceType gKakarikoWellArchSurfaceTypes[];
extern CollisionPoly gKakarikoWellArchPolyList[];
extern Vec3s gKakarikoWellArchVtxList[];
extern CollisionHeader gKakarikoWellArchCol;
extern Vtx gKakarikoWellWaterVtx[];
extern Gfx gKakarikoWellWaterDL[23];
#define gKakarikoWellWaterTex_WIDTH 32
#define gKakarikoWellWaterTex_HEIGHT 32
extern u64 gKakarikoWellWaterTex[TEX_LEN(u64, gKakarikoWellWaterTex_WIDTH, gKakarikoWellWaterTex_HEIGHT, 16)];
#define gKakarikoWindmillSailsTex_WIDTH 32
#define gKakarikoWindmillSailsTex_HEIGHT 64
extern u64 gKakarikoWindmillSailsTex[TEX_LEN(u64, gKakarikoWindmillSailsTex_WIDTH, gKakarikoWindmillSailsTex_HEIGHT, 16)];
#define gKakarikoWellArchTex_WIDTH 32
#define gKakarikoWellArchTex_HEIGHT 16
extern u64 gKakarikoWellArchTex[TEX_LEN(u64, gKakarikoWellArchTex_WIDTH, gKakarikoWellArchTex_HEIGHT, 16)];

#endif
