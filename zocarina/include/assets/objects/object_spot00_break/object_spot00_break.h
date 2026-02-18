#ifndef OBJECT_SPOT00_BREAK_H
#define OBJECT_SPOT00_BREAK_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gBrokenDrawbridgeVtx[];
extern Gfx gBrokenDrawbridgeDL[61];
extern BgCamInfo gBrokenDrawbridgeBgCamList[];
extern SurfaceType gBrokenDrawbridgeSurfaceTypes[];
extern CollisionPoly gBrokenDrawbridgePolyList[];
extern Vec3s gBrokenDrawbridgeVtxList[];
extern CollisionHeader gBrokenDrawbridgeCol;
extern Vtx gBarbedWireFenceVtx[];
extern Gfx gBarbedWireFenceDL[18];
extern BgCamInfo gBarbedWireFenceBgCamList[];
extern SurfaceType gBarbedWireFenceSurfaceTypes[];
extern CollisionPoly gBarbedWireFencePolyList[];
extern Vec3s gBarbedWireFenceVtxList[];
extern CollisionHeader gBarbedWireFenceCol;
#define gBrokenDrawbridgeBoltTex_WIDTH 32
#define gBrokenDrawbridgeBoltTex_HEIGHT 32
extern u64 gBrokenDrawbridgeBoltTex[TEX_LEN(u64, gBrokenDrawbridgeBoltTex_WIDTH, gBrokenDrawbridgeBoltTex_HEIGHT, 16)];
#define gBrokenDrawbridgeDirtTex_WIDTH 16
#define gBrokenDrawbridgeDirtTex_HEIGHT 16
extern u64 gBrokenDrawbridgeDirtTex[TEX_LEN(u64, gBrokenDrawbridgeDirtTex_WIDTH, gBrokenDrawbridgeDirtTex_HEIGHT, 16)];
#define gBrokenDrawbridgeChainTex_WIDTH 8
#define gBrokenDrawbridgeChainTex_HEIGHT 16
extern u64 gBrokenDrawbridgeChainTex[TEX_LEN(u64, gBrokenDrawbridgeChainTex_WIDTH, gBrokenDrawbridgeChainTex_HEIGHT, 16)];
#define gBarbedWireFenceTex_WIDTH 32
#define gBarbedWireFenceTex_HEIGHT 32
extern u64 gBarbedWireFenceTex[TEX_LEN(u64, gBarbedWireFenceTex_WIDTH, gBarbedWireFenceTex_HEIGHT, 16)];

#endif
