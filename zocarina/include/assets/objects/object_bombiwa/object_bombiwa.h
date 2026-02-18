#ifndef OBJECT_BOMBIWA_H
#define OBJECT_BOMBIWA_H

#include "tex_len.h"
#include "ultra64.h"

//#define object_bombiwa_TLUT_000000_TLUT_COUNT 16
extern u64 object_bombiwa_TLUT_000000[];
#define object_bombiwa_Tex_000020_WIDTH 64
#define object_bombiwa_Tex_000020_HEIGHT 64
extern u64 object_bombiwa_Tex_000020[TEX_LEN(u64, object_bombiwa_Tex_000020_WIDTH, object_bombiwa_Tex_000020_HEIGHT, 4)];
extern Vtx object_bombiwa_Vtx_000820[];
extern Gfx object_bombiwa_DL_0009E0[35];

#endif
