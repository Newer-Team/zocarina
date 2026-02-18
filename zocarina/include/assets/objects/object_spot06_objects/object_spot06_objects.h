#ifndef OBJECT_SPOT06_OBJECTS_H
#define OBJECT_SPOT06_OBJECTS_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gLakeHyliaLowWaterVtx[];
extern Gfx gLakeHyliaLowWaterDL[34];
extern Vtx gLakeHyliaHighWaterVtx[];
extern Gfx gLakeHyliaHighWaterDL[44];
#define gLakeHyliaWaterTempleGateTex_WIDTH 16
#define gLakeHyliaWaterTempleGateTex_HEIGHT 64
extern u64 gLakeHyliaWaterTempleGateTex[TEX_LEN(u64, gLakeHyliaWaterTempleGateTex_WIDTH, gLakeHyliaWaterTempleGateTex_HEIGHT, 16)];
extern Vtx gLakeHyliaWaterTempleGateVtx[];
extern Gfx gLakeHyliaWaterTempleGateDL[18];
extern BgCamInfo gLakeHyliaWaterTempleGateBgCamList[];
extern SurfaceType gLakeHyliaWaterTempleGateSurfaceTypes[];
extern CollisionPoly gLakeHyliaWaterTempleGatePolyList[];
extern Vec3s gLakeHyliaWaterTempleGateVtxList[];
extern CollisionHeader gLakeHyliaWaterTempleGateCol;
#define gLakeHyliaZoraShortcutIceblockTex_WIDTH 16
#define gLakeHyliaZoraShortcutIceblockTex_HEIGHT 16
extern u64 gLakeHyliaZoraShortcutIceblockTex[TEX_LEN(u64, gLakeHyliaZoraShortcutIceblockTex_WIDTH, gLakeHyliaZoraShortcutIceblockTex_HEIGHT, 16)];
extern Vtx gLakeHyliaZoraShortcutIceblockVtx[];
extern Gfx gLakeHyliaZoraShortcutIceblockDL[18];
extern BgCamInfo gLakeHyliaZoraShortcutIceblockBgCamList[];
extern SurfaceType gLakeHyliaZoraShortcutIceblockSurfaceTypes[];
extern CollisionPoly gLakeHyliaZoraShortcutIceblockPolyList[];
extern Vec3s gLakeHyliaZoraShortcutIceblockVtxList[];
extern CollisionHeader gLakeHyliaZoraShortcutIceblockCol;
#define gLakeHyliaWaterTempleKeyTex_WIDTH 32
#define gLakeHyliaWaterTempleKeyTex_HEIGHT 64
extern u64 gLakeHyliaWaterTempleKeyTex[TEX_LEN(u64, gLakeHyliaWaterTempleKeyTex_WIDTH, gLakeHyliaWaterTempleKeyTex_HEIGHT, 16)];
extern Vtx gLakeHyliaWaterTempleKeyVtx[];
extern Gfx gLakeHyliaWaterTempleKeyDL[34];
#define gLakeHyliaWaterTex_WIDTH 32
#define gLakeHyliaWaterTex_HEIGHT 32
extern u64 gLakeHyliaWaterTex[TEX_LEN(u64, gLakeHyliaWaterTex_WIDTH, gLakeHyliaWaterTex_HEIGHT, 16)];

#endif
