#ifndef OBJECT_SPOT12_OBJ_H
#define OBJECT_SPOT12_OBJ_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

#define gGerudoFortressWastelandGateTex_WIDTH 16
#define gGerudoFortressWastelandGateTex_HEIGHT 128
extern u64 gGerudoFortressWastelandGateTex[TEX_LEN(u64, gGerudoFortressWastelandGateTex_WIDTH, gGerudoFortressWastelandGateTex_HEIGHT, 16)];
extern Vtx gGerudoFortressWastelandGateVtx[];
extern Gfx gGerudoFortressWastelandGateDL[19];
extern BgCamInfo gGerudoFortressWastelandGateBgCamList[];
extern SurfaceType gGerudoFortressWastelandGateSurfaceTypes[];
extern CollisionPoly gGerudoFortressWastelandGatePolyList[];
extern Vec3s gGerudoFortressWastelandGateVtxList[];
extern CollisionHeader gGerudoFortressWastelandGateCol;
#define gGerudoFortressGTGShutterTex_WIDTH 32
#define gGerudoFortressGTGShutterTex_HEIGHT 64
extern u64 gGerudoFortressGTGShutterTex[TEX_LEN(u64, gGerudoFortressGTGShutterTex_WIDTH, gGerudoFortressGTGShutterTex_HEIGHT, 16)];
extern Vtx gGerudoFortressGTGShutterVtx[];
extern Gfx gGerudoFortressGTGShutterDL[18];
extern BgCamInfo gGerudoFortressGTGShutterBgCamList[];
extern SurfaceType gGerudoFortressGTGShutterSurfaceTypes[];
extern CollisionPoly gGerudoFortressGTGShutterPolyList[];
extern Vec3s gGerudoFortressGTGShutterVtxList[];
extern CollisionHeader gGerudoFortressGTGShutterCol;

#endif
