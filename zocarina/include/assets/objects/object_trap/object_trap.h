#ifndef OBJECT_TRAP_H
#define OBJECT_TRAP_H

#include "tex_len.h"
#include "ultra64.h"

#define gSlidingBladeTrapTex_0000_WIDTH 32
#define gSlidingBladeTrapTex_0000_HEIGHT 32
extern u64 gSlidingBladeTrapTex_0000[TEX_LEN(u64, gSlidingBladeTrapTex_0000_WIDTH, gSlidingBladeTrapTex_0000_HEIGHT, 8)];
#define gSlidingBladeTrapBoltsTex_WIDTH 32
#define gSlidingBladeTrapBoltsTex_HEIGHT 32
extern u64 gSlidingBladeTrapBoltsTex[TEX_LEN(u64, gSlidingBladeTrapBoltsTex_WIDTH, gSlidingBladeTrapBoltsTex_HEIGHT, 8)];
#define gSlidingBladeTrapGradientTex_WIDTH 32
#define gSlidingBladeTrapGradientTex_HEIGHT 32
extern u64 gSlidingBladeTrapGradientTex[TEX_LEN(u64, gSlidingBladeTrapGradientTex_WIDTH, gSlidingBladeTrapGradientTex_HEIGHT, 8)];
extern Vtx gSlidingBladeTrapVtx[];
extern Gfx gSlidingBladeTrapDL[70];
extern Gfx gLandmineBillboardDL[19];
extern Vtx gLandmineBillboardVtx[];
extern Gfx gUnusedSpikeDL[45];
extern Vtx gUnusedSpikeVtx[];
#define gLandmineBillboardTex_WIDTH 32
#define gLandmineBillboardTex_HEIGHT 32
extern u64 gLandmineBillboardTex[TEX_LEN(u64, gLandmineBillboardTex_WIDTH, gLandmineBillboardTex_HEIGHT, 16)];

#endif
