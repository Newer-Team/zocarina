#ifndef OBJECT_MORI_OBJECTS_H
#define OBJECT_MORI_OBJECTS_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

//#define gMoriHashiraTLUT_TLUT_COUNT 112
extern u64 gMoriHashiraTLUT[];
#define gMoriHashiraTex_WIDTH 32
#define gMoriHashiraTex_HEIGHT 32
extern u64 gMoriHashiraTex[TEX_LEN(u64, gMoriHashiraTex_WIDTH, gMoriHashiraTex_HEIGHT, 8)];
extern Vtx gMoriHashiraPlatformsVtx[];
extern Gfx gMoriHashiraPlatformsDL[101];
extern BgCamInfo gMoriHashira1BgCamList[];
extern SurfaceType gMoriHashira1SurfaceTypes[];
extern CollisionPoly gMoriHashira1PolyList[];
extern Vec3s gMoriHashira1VtxList[];
extern CollisionHeader gMoriHashira1Col;
extern Vtx gMoriBigstVtx[];
extern Gfx gMoriBigstDL[42];
extern BgCamInfo gMoriBigstBgCamList[];
extern SurfaceType gMoriBigstSurfaceTypes[];
extern CollisionPoly gMoriBigstPolyList[];
extern Vec3s gMoriBigstVtxList[];
extern CollisionHeader gMoriBigstCol;
extern Vtx gMoriElevatorVtx[];
extern Gfx gMoriElevatorDL[88];
extern BgCamInfo gMoriElevatorBgCamList[];
extern SurfaceType gMoriElevatorSurfaceTypes[];
extern CollisionPoly gMoriElevatorPolyList[];
extern Vec3s gMoriElevatorVtxList[];
extern CollisionHeader gMoriElevatorCol;
extern Vtx gMoriHashigoLadderVtx[];
extern Gfx gMoriHashigoLadderDL[19];
extern BgCamInfo gMoriHashigoBgCamList[];
extern SurfaceType gMoriHashigoSurfaceTypes[];
extern CollisionPoly gMoriHashigoPolyList[];
extern Vec3s gMoriHashigoVtxList[];
extern CollisionHeader gMoriHashigoCol;
//#define gMoriHashigoClaspTLUT_TLUT_COUNT 112
extern u64 gMoriHashigoClaspTLUT[];
#define gMoriHashigoClaspTex_WIDTH 32
#define gMoriHashigoClaspTex_HEIGHT 32
extern u64 gMoriHashigoClaspTex[TEX_LEN(u64, gMoriHashigoClaspTex_WIDTH, gMoriHashigoClaspTex_HEIGHT, 8)];
extern Vtx gMoriHashigoClaspVtx[];
extern Gfx gMoriHashigoClaspDL[67];
extern Vtx gMoriIdomizuWaterVtx[];
extern Gfx gMoriIdomizuWaterDL[22];
extern Vtx gMoriKaitenkabeVtx[];
extern Gfx gMoriKaitenkabeDL[99];
extern BgCamInfo gMoriKaitenkabeBgCamList[];
extern SurfaceType gMoriKaitenkabeSurfaceTypes[];
extern CollisionPoly gMoriKaitenkabePolyList[];
extern Vec3s gMoriKaitenkabeVtxList[];
extern CollisionHeader gMoriKaitenkabeCol;
extern Vtx gMoriRakkatenjoVtx[];
extern Gfx gMoriRakkatenjoDL[145];
extern BgCamInfo gMoriRakkatenjoBgCamList[];
extern SurfaceType gMoriRakkatenjoSurfaceTypes[];
extern CollisionPoly gMoriRakkatenjoPolyList[];
extern Vec3s gMoriRakkatenjoVtxList[];
extern CollisionHeader gMoriRakkatenjoCol;
extern Vtx gMoriHashiraGateVtx[];
extern Gfx gMoriHashiraGateDL[19];
extern BgCamInfo gMoriHashira2BgCamList[];
extern SurfaceType gMoriHashira2SurfaceTypes[];
extern CollisionPoly gMoriHashira2PolyList[];
extern Vec3s gMoriHashira2VtxList[];
extern CollisionHeader gMoriHashira2Col;

#endif
