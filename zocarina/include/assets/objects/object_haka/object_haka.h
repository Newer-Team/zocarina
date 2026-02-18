#ifndef OBJECT_HAKA_H
#define OBJECT_HAKA_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gGravestoneStoneVtx[];
extern Vtx gGravestoneEarthVtx[];
extern Gfx gGravestoneStoneDL[31];
extern Gfx gGravestoneEarthDL[18];
extern BgCamInfo gGravestoneBgCamList[];
extern SurfaceType gGravestoneSurfaceTypes[];
extern CollisionPoly gGravestonePolyList[];
extern Vec3s gGravestoneVtxList[];
extern CollisionHeader gGravestoneCol;
#define gGravestoneGrassTex_WIDTH 16
#define gGravestoneGrassTex_HEIGHT 32
extern u64 gGravestoneGrassTex[TEX_LEN(u64, gGravestoneGrassTex_WIDTH, gGravestoneGrassTex_HEIGHT, 16)];
#define gGravestoneEarthTex_WIDTH 32
#define gGravestoneEarthTex_HEIGHT 32
extern u64 gGravestoneEarthTex[TEX_LEN(u64, gGravestoneEarthTex_WIDTH, gGravestoneEarthTex_HEIGHT, 8)];
#define gGravestoneTombTex_WIDTH 32
#define gGravestoneTombTex_HEIGHT 32
extern u64 gGravestoneTombTex[TEX_LEN(u64, gGravestoneTombTex_WIDTH, gGravestoneTombTex_HEIGHT, 16)];

#endif
