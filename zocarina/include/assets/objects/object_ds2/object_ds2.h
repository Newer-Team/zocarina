#ifndef OBJECT_DS2_H
#define OBJECT_DS2_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 object_ds2_Anim_0002E4_06000000_FrameData[];
extern JointIndex object_ds2_Anim_0002E4_060002AC_JointIndices[];
extern AnimationHeader object_ds2_Anim_0002E4;
extern Vtx object_ds2_Vtx_000300[];
extern Vtx object_ds2_Vtx_0009E0[];
extern Vtx object_ds2_Vtx_000CA0[];
extern Vtx object_ds2_Vtx_000EA0[];
extern Vtx object_ds2_Vtx_001030[];
extern Vtx object_ds2_Vtx_0012F0[];
extern Vtx object_ds2_Vtx_0014F0[];
extern Vtx object_ds2_Vtx_001680[];
extern Gfx object_ds2_DL_001990[97];
extern Gfx object_ds2_DL_001C98[158];
extern Gfx object_ds2_DL_002188[37];
extern Gfx object_ds2_DL_0022B0[58];
extern Gfx object_ds2_DL_002480[50];
extern Gfx object_ds2_DL_002610[37];
extern Gfx object_ds2_DL_002738[58];
extern Gfx object_ds2_DL_002908[50];
//#define object_ds2_TLUT_002A98_TLUT_COUNT 256
extern u64 object_ds2_TLUT_002A98[];
#define object_ds2_Tex_002C98_WIDTH 16
#define object_ds2_Tex_002C98_HEIGHT 16
extern u64 object_ds2_Tex_002C98[TEX_LEN(u64, object_ds2_Tex_002C98_WIDTH, object_ds2_Tex_002C98_HEIGHT, 8)];
#define object_ds2_Tex_002D98_WIDTH 8
#define object_ds2_Tex_002D98_HEIGHT 8
extern u64 object_ds2_Tex_002D98[TEX_LEN(u64, object_ds2_Tex_002D98_WIDTH, object_ds2_Tex_002D98_HEIGHT, 8)];
#define object_ds2_Tex_002DD8_WIDTH 16
#define object_ds2_Tex_002DD8_HEIGHT 16
extern u64 object_ds2_Tex_002DD8[TEX_LEN(u64, object_ds2_Tex_002DD8_WIDTH, object_ds2_Tex_002DD8_HEIGHT, 8)];
#define object_ds2_Tex_002ED8_WIDTH 32
#define object_ds2_Tex_002ED8_HEIGHT 16
extern u64 object_ds2_Tex_002ED8[TEX_LEN(u64, object_ds2_Tex_002ED8_WIDTH, object_ds2_Tex_002ED8_HEIGHT, 8)];
#define gPotionShopkeeperEyeOpenTex_WIDTH 32
#define gPotionShopkeeperEyeOpenTex_HEIGHT 32
extern u64 gPotionShopkeeperEyeOpenTex[TEX_LEN(u64, gPotionShopkeeperEyeOpenTex_WIDTH, gPotionShopkeeperEyeOpenTex_HEIGHT, 8)];
#define gPotionShopkeeperEyeHalfTex_WIDTH 32
#define gPotionShopkeeperEyeHalfTex_HEIGHT 32
extern u64 gPotionShopkeeperEyeHalfTex[TEX_LEN(u64, gPotionShopkeeperEyeHalfTex_WIDTH, gPotionShopkeeperEyeHalfTex_HEIGHT, 8)];
#define gPotionShopkeeperEyeClosedTex_WIDTH 32
#define gPotionShopkeeperEyeClosedTex_HEIGHT 32
extern u64 gPotionShopkeeperEyeClosedTex[TEX_LEN(u64, gPotionShopkeeperEyeClosedTex_WIDTH, gPotionShopkeeperEyeClosedTex_HEIGHT, 8)];
#define object_ds2_Tex_003CD8_WIDTH 16
#define object_ds2_Tex_003CD8_HEIGHT 16
extern u64 object_ds2_Tex_003CD8[TEX_LEN(u64, object_ds2_Tex_003CD8_WIDTH, object_ds2_Tex_003CD8_HEIGHT, 8)];
#define object_ds2_Tex_003DD8_WIDTH 16
#define object_ds2_Tex_003DD8_HEIGHT 16
extern u64 object_ds2_Tex_003DD8[TEX_LEN(u64, object_ds2_Tex_003DD8_WIDTH, object_ds2_Tex_003DD8_HEIGHT, 8)];
#define object_ds2_Tex_003ED8_WIDTH 16
#define object_ds2_Tex_003ED8_HEIGHT 16
extern u64 object_ds2_Tex_003ED8[TEX_LEN(u64, object_ds2_Tex_003ED8_WIDTH, object_ds2_Tex_003ED8_HEIGHT, 8)];
#define object_ds2_Tex_003FD8_WIDTH 16
#define object_ds2_Tex_003FD8_HEIGHT 32
extern u64 object_ds2_Tex_003FD8[TEX_LEN(u64, object_ds2_Tex_003FD8_WIDTH, object_ds2_Tex_003FD8_HEIGHT, 8)];
extern StandardLimb object_ds2_Limb_0041D8;
extern StandardLimb object_ds2_Limb_0041E4;
extern StandardLimb object_ds2_Limb_0041F0;
extern StandardLimb object_ds2_Limb_0041FC;
extern StandardLimb object_ds2_Limb_004208;
extern StandardLimb object_ds2_Limb_004214;
extern StandardLimb object_ds2_Limb_004220;
extern StandardLimb object_ds2_Limb_00422C;
extern void* object_ds2_Skel_004258_06004238_Limbs[];
typedef enum object_ds2_Skel_004258Limb {
    /*  0 */ LIMB_OBJECT_DS2_004258_NONE,
    /*  1 */ LIMB_OBJECT_DS2_0041D8,
    /*  2 */ LIMB_OBJECT_DS2_0041E4,
    /*  3 */ LIMB_OBJECT_DS2_0041F0,
    /*  4 */ LIMB_OBJECT_DS2_0041FC,
    /*  5 */ LIMB_OBJECT_DS2_004208,
    /*  6 */ LIMB_OBJECT_DS2_004214,
    /*  7 */ LIMB_OBJECT_DS2_004220,
    /*  8 */ LIMB_OBJECT_DS2_00422C,
    /*  9 */ LIMB_OBJECT_DS2_004258_MAX
} object_ds2_Skel_004258Limb;
extern FlexSkeletonHeader object_ds2_Skel_004258;

#endif
