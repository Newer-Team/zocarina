#ifndef OBJECT_GJYO_OBJECTS_H
#define OBJECT_GJYO_OBJECTS_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gRainbowBridgeVtx[];
extern Gfx gRainbowBridgeDL[72];
extern BgCamInfo gRainbowBridgeBgCamList[];
extern SurfaceType gRainbowBridgeSurfaceTypes[];
extern CollisionPoly gRainbowBridgePolyList[];
extern Vec3s gRainbowBridgeVtxList[];
extern CollisionHeader gRainbowBridgeCol;
#define gRainbowBridgeTex_WIDTH 32
#define gRainbowBridgeTex_HEIGHT 32
extern u64 gRainbowBridgeTex[TEX_LEN(u64, gRainbowBridgeTex_WIDTH, gRainbowBridgeTex_HEIGHT, 16)];

#endif
