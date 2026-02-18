#ifndef OVL_DEMO_SHD_H
#define OVL_DEMO_SHD_H

#include "tex_len.h"
#include "ultra64.h"

#define ovl_Demo_Shd_00000000_Tex_WIDTH 16
#define ovl_Demo_Shd_00000000_Tex_HEIGHT 128
extern u64 ovl_Demo_Shd_00000000_Tex[TEX_LEN(u64, ovl_Demo_Shd_00000000_Tex_WIDTH, ovl_Demo_Shd_00000000_Tex_HEIGHT, 8)];
#define ovl_Demo_Shd_00000800_Tex_WIDTH 32
#define ovl_Demo_Shd_00000800_Tex_HEIGHT 64
extern u64 ovl_Demo_Shd_00000800_Tex[TEX_LEN(u64, ovl_Demo_Shd_00000800_Tex_WIDTH, ovl_Demo_Shd_00000800_Tex_HEIGHT, 8)];
static Vtx ovl_Demo_Shd_Vtx_001000[93];
static Vtx ovl_Demo_Shd_Vtx_0015D0[104];
static Gfx D_809932D0[24];
static Gfx D_80993390[37];
static Gfx D_809934B8[41];

#endif
