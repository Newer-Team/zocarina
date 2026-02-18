#ifndef OVL_BOSS_SST_H
#define OVL_BOSS_SST_H

#include "tex_len.h"
#include "ultra64.h"

static Gfx sBodyStaticDL[3];
static Gfx sHandTrailDL[4];
static Vtx sIntroVanishVtx[4];
#define ovl_Boss_Sst_00000078_Tex_WIDTH 16
#define ovl_Boss_Sst_00000078_Tex_HEIGHT 64
extern u64 ovl_Boss_Sst_00000078_Tex[TEX_LEN(u64, ovl_Boss_Sst_00000078_Tex_WIDTH, ovl_Boss_Sst_00000078_Tex_HEIGHT, 8)];
static Gfx sIntroVanishDL[17];
static Vtx sShadowVtx[3];
#define ovl_Boss_Sst_00000530_Tex_WIDTH 32
#define ovl_Boss_Sst_00000530_Tex_HEIGHT 32
extern u64 ovl_Boss_Sst_00000530_Tex[TEX_LEN(u64, ovl_Boss_Sst_00000530_Tex_WIDTH, ovl_Boss_Sst_00000530_Tex_HEIGHT, 8)];
static Gfx sShadowDL[16];

#endif
