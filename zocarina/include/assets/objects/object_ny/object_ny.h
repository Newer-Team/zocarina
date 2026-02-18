#ifndef OBJECT_NY_H
#define OBJECT_NY_H

#include "tex_len.h"
#include "ultra64.h"

#define gEnNyRockBodyTex_WIDTH 16
#define gEnNyRockBodyTex_HEIGHT 16
extern u64 gEnNyRockBodyTex[TEX_LEN(u64, gEnNyRockBodyTex_WIDTH, gEnNyRockBodyTex_HEIGHT, 16)];
#define gEnNySpikeTex_WIDTH 32
#define gEnNySpikeTex_HEIGHT 32
extern u64 gEnNySpikeTex[TEX_LEN(u64, gEnNySpikeTex_WIDTH, gEnNySpikeTex_HEIGHT, 16)];
#define gEnNyMetalBodyTex_WIDTH 32
#define gEnNyMetalBodyTex_HEIGHT 32
extern u64 gEnNyMetalBodyTex[TEX_LEN(u64, gEnNyMetalBodyTex_WIDTH, gEnNyMetalBodyTex_HEIGHT, 16)];
extern Vtx gEnNyRockBodyVtx[];
extern Vtx gEnNyMetalBodyVtx[];
extern Vtx gEnNySpikeVtx[];
extern Gfx gEnNyRockBodyDL[27];
extern Gfx gEnNyMetalBodyDL[36];
extern Gfx gEnNySpikeDL[52];

#endif
