#ifndef OBJECT_D_HSBLOCK_H
#define OBJECT_D_HSBLOCK_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gHookshotPostVtx[];
extern Gfx gHookshotPostDL[35];
extern Vtx gHookshotTargetVtx[];
extern Gfx gHookshotTargetDL[23];
extern BgCamInfo gHookshotTargetBgCamList[];
extern SurfaceType gHookshotTargetSurfaceTypes[];
extern CollisionPoly gHookshotTargetPolyList[];
extern Vec3s gHookshotTargetVtxList[];
extern CollisionHeader gHookshotTargetCol;
extern BgCamInfo gHookshotPostBgCamList[];
extern SurfaceType gHookshotPostSurfaceTypes[];
extern CollisionPoly gHookshotPostPolyList[];
extern Vec3s gHookshotPostVtxList[];
extern CollisionHeader gHookshotPostCol;
#define gHookshotTargetTex_WIDTH 64
#define gHookshotTargetTex_HEIGHT 64
extern u64 gHookshotTargetTex[TEX_LEN(u64, gHookshotTargetTex_WIDTH, gHookshotTargetTex_HEIGHT, 4)];
#define gHookshotPostTex_WIDTH 32
#define gHookshotPostTex_HEIGHT 64
extern u64 gHookshotPostTex[TEX_LEN(u64, gHookshotPostTex_WIDTH, gHookshotPostTex_HEIGHT, 8)];

#endif
