#ifndef OBJECT_GI_FROG_H
#define OBJECT_GI_FROG_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiFrogEyeTex_WIDTH 32
#define gGiFrogEyeTex_HEIGHT 32
extern u64 gGiFrogEyeTex[TEX_LEN(u64, gGiFrogEyeTex_WIDTH, gGiFrogEyeTex_HEIGHT, 8)];
extern Vtx gGiFrogVtx[];
extern Vtx gGiFrogEyesVtx[];
extern Gfx gGiFrogDL[96];
extern Gfx gGiFrogEyesDL[22];

#endif
