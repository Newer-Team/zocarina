#ifndef OBJECT_SPOT04_OBJECTS_H
#define OBJECT_SPOT04_OBJECTS_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

#define gDekuTreeMouthTex_0000_WIDTH 32
#define gDekuTreeMouthTex_0000_HEIGHT 16
extern u64 gDekuTreeMouthTex_0000[TEX_LEN(u64, gDekuTreeMouthTex_0000_WIDTH, gDekuTreeMouthTex_0000_HEIGHT, 16)];
#define gDekuTreeMouthTex_0400_WIDTH 32
#define gDekuTreeMouthTex_0400_HEIGHT 16
extern u64 gDekuTreeMouthTex_0400[TEX_LEN(u64, gDekuTreeMouthTex_0400_WIDTH, gDekuTreeMouthTex_0400_HEIGHT, 16)];
extern Vtx gDekuTreeMouthVtx[];
extern Gfx gDekuTreeMouthDL[45];
extern BgCamInfo gDekuTreeMouthBgCamList[];
extern SurfaceType gDekuTreeMouthSurfaceTypes[];
extern CollisionPoly gDekuTreeMouthPolyList[];
extern Vec3s gDekuTreeMouthVtxList[];
extern CollisionHeader gDekuTreeMouthCol;
#define gDekuTreeUnusedMouthTex_0EC0_WIDTH 32
#define gDekuTreeUnusedMouthTex_0EC0_HEIGHT 16
extern u64 gDekuTreeUnusedMouthTex_0EC0[TEX_LEN(u64, gDekuTreeUnusedMouthTex_0EC0_WIDTH, gDekuTreeUnusedMouthTex_0EC0_HEIGHT, 16)];
#define gDekuTreeUnusedMouthTex_12C0_WIDTH 32
#define gDekuTreeUnusedMouthTex_12C0_HEIGHT 16
extern u64 gDekuTreeUnusedMouthTex_12C0[TEX_LEN(u64, gDekuTreeUnusedMouthTex_12C0_WIDTH, gDekuTreeUnusedMouthTex_12C0_HEIGHT, 16)];

#endif
