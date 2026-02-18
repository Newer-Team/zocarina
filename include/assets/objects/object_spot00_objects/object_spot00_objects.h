#ifndef OBJECT_SPOT00_OBJECTS_H
#define OBJECT_SPOT00_OBJECTS_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gHyruleFieldCastleDrawbridgeChainsVtx[];
extern Gfx gHyruleFieldCastleDrawbridgeChainsDL[28];
extern BgCamInfo gHyruleFieldCastleDrawbridgeChainsBgCamList[];
extern SurfaceType gHyruleFieldCastleDrawbridgeChainsSurfaceTypes[];
extern CollisionPoly gHyruleFieldCastleDrawbridgeChainsPolyList[];
extern Vec3s gHyruleFieldCastleDrawbridgeChainsVtxList[];
extern CollisionHeader gHyruleFieldCastleDrawbridgeChainsCol;
extern Vtx gHyruleFieldCastleDrawbridgeVtx[];
extern Gfx gHyruleFieldCastleDrawbridgeDL[22];
extern BgCamInfo gHyruleFieldCastleDrawbridgeBgCamList[];
extern SurfaceType gHyruleFieldCastleDrawbridgeSurfaceTypes[];
extern CollisionPoly gHyruleFieldCastleDrawbridgePolyList[];
extern Vec3s gHyruleFieldCastleDrawbridgeVtxList[];
extern CollisionHeader gHyruleFieldCastleDrawbridgeCol;
#define gHyruleFieldCastleDrawbridgeWoodTex_WIDTH 32
#define gHyruleFieldCastleDrawbridgeWoodTex_HEIGHT 64
extern u64 gHyruleFieldCastleDrawbridgeWoodTex[TEX_LEN(u64, gHyruleFieldCastleDrawbridgeWoodTex_WIDTH, gHyruleFieldCastleDrawbridgeWoodTex_HEIGHT, 16)];
#define gHyruleFieldCastleDrawbridgeChainsTex_WIDTH 16
#define gHyruleFieldCastleDrawbridgeChainsTex_HEIGHT 32
extern u64 gHyruleFieldCastleDrawbridgeChainsTex[TEX_LEN(u64, gHyruleFieldCastleDrawbridgeChainsTex_WIDTH, gHyruleFieldCastleDrawbridgeChainsTex_HEIGHT, 16)];
#define gHyruleFieldCastleDrawbridgeBoltDL_WIDTH 16
#define gHyruleFieldCastleDrawbridgeBoltDL_HEIGHT 16
extern u64 gHyruleFieldCastleDrawbridgeBoltDL[TEX_LEN(u64, gHyruleFieldCastleDrawbridgeBoltDL_WIDTH, gHyruleFieldCastleDrawbridgeBoltDL_HEIGHT, 16)];

#endif
