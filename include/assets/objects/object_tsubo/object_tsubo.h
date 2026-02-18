#ifndef OBJECT_TSUBO_H
#define OBJECT_TSUBO_H

#include "tex_len.h"
#include "ultra64.h"

#define object_tsubo_Tex_000000_WIDTH 32
#define object_tsubo_Tex_000000_HEIGHT 64
extern u64 object_tsubo_Tex_000000[TEX_LEN(u64, object_tsubo_Tex_000000_WIDTH, object_tsubo_Tex_000000_HEIGHT, 16)];
#define object_tsubo_Tex_001000_WIDTH 16
#define object_tsubo_Tex_001000_HEIGHT 16
extern u64 object_tsubo_Tex_001000[TEX_LEN(u64, object_tsubo_Tex_001000_WIDTH, object_tsubo_Tex_001000_HEIGHT, 16)];
#define object_tsubo_Tex_001200_WIDTH 16
#define object_tsubo_Tex_001200_HEIGHT 16
extern u64 object_tsubo_Tex_001200[TEX_LEN(u64, object_tsubo_Tex_001200_WIDTH, object_tsubo_Tex_001200_HEIGHT, 16)];
extern Vtx object_tsubo_Vtx_001400[];
extern Gfx object_tsubo_DL_0017C0[45];
extern Vtx object_tsubo_Vtx_001930[];
extern Gfx object_tsubo_DL_001960[18];

#endif
