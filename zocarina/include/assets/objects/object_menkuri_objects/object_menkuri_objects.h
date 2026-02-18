#ifndef OBJECT_MENKURI_OBJECTS_H
#define OBJECT_MENKURI_OBJECTS_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

#define gGTGDoorTex_WIDTH 64
#define gGTGDoorTex_HEIGHT 128
extern u64 gGTGDoorTex[TEX_LEN(u64, gGTGDoorTex_WIDTH, gGTGDoorTex_HEIGHT, 4)];
extern Vtx gGTGDoorVtx[];
extern Gfx gGTGDoorDL[22];
#define gGTGFakeWallTex_WIDTH 64
#define gGTGFakeWallTex_HEIGHT 32
extern u64 gGTGFakeWallTex[TEX_LEN(u64, gGTGFakeWallTex_WIDTH, gGTGFakeWallTex_HEIGHT, 16)];
extern Vtx gGTGFakeWallVtx[];
extern Gfx gGTGFakeWallDL[23];
#define gGTGFakeCeilingTex_WIDTH 32
#define gGTGFakeCeilingTex_HEIGHT 32
extern u64 gGTGFakeCeilingTex[TEX_LEN(u64, gGTGFakeCeilingTex_WIDTH, gGTGFakeCeilingTex_HEIGHT, 16)];
extern Vtx gGTGFakeCeilingVtx[];
extern Gfx gGTGFakeCeilingDL[19];
extern Vtx gGTGEyeStatueEyeVtx[];
extern Gfx gGTGEyeStatueEyeDL[22];
extern Vtx gGTGRotatingRingPlatformVtx[];
extern Gfx gGTGRotatingRingPlatformDL[78];
extern BgCamInfo gGTGRotatingRingPlatformBgCamList[];
extern SurfaceType gGTGRotatingRingPlatformSurfaceTypes[];
extern CollisionPoly gGTGRotatingRingPlatformPolyList[];
extern Vec3s gGTGRotatingRingPlatformVtxList[];
extern CollisionHeader gGTGRotatingRingPlatformCol;
#define gGTGRotatingRingPlatformInnerCircleTex_WIDTH 64
#define gGTGRotatingRingPlatformInnerCircleTex_HEIGHT 128
extern u64 gGTGRotatingRingPlatformInnerCircleTex[TEX_LEN(u64, gGTGRotatingRingPlatformInnerCircleTex_WIDTH, gGTGRotatingRingPlatformInnerCircleTex_HEIGHT, 4)];
#define gGTGStatueTex_WIDTH 64
#define gGTGStatueTex_HEIGHT 128
extern u64 gGTGStatueTex[TEX_LEN(u64, gGTGStatueTex_WIDTH, gGTGStatueTex_HEIGHT, 4)];
#define gGTGTex_6310_WIDTH 32
#define gGTGTex_6310_HEIGHT 32
extern u64 gGTGTex_6310[TEX_LEN(u64, gGTGTex_6310_WIDTH, gGTGTex_6310_HEIGHT, 16)];
#define gGTGStatueEyeTex_WIDTH 64
#define gGTGStatueEyeTex_HEIGHT 128
extern u64 gGTGStatueEyeTex[TEX_LEN(u64, gGTGStatueEyeTex_WIDTH, gGTGStatueEyeTex_HEIGHT, 4)];
#define gGTGRotatingRingPlatformOuterCircleTex_WIDTH 128
#define gGTGRotatingRingPlatformOuterCircleTex_HEIGHT 64
extern u64 gGTGRotatingRingPlatformOuterCircleTex[TEX_LEN(u64, gGTGRotatingRingPlatformOuterCircleTex_WIDTH, gGTGRotatingRingPlatformOuterCircleTex_HEIGHT, 4)];

#endif
