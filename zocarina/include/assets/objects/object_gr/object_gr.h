#ifndef OBJECT_GR_H
#define OBJECT_GR_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gNiwGirlRunFrameData[];
extern JointIndex gNiwGirlRunJointIndices[];
extern AnimationHeader gNiwGirlRunAnim;
extern Vtx object_gr_Vtx_000390[];
extern Vtx object_gr_Vtx_000B60[];
extern Vtx object_gr_Vtx_000C80[];
extern Vtx object_gr_Vtx_000DC0[];
extern Vtx object_gr_Vtx_000F70[];
extern Vtx object_gr_Vtx_0011F0[];
extern Vtx object_gr_Vtx_0013A0[];
extern Vtx object_gr_Vtx_001620[];
extern Vtx object_gr_Vtx_001940[];
extern Vtx object_gr_Vtx_001B20[];
extern Vtx object_gr_Vtx_001CF0[];
extern Vtx object_gr_Vtx_001E10[];
extern Vtx object_gr_Vtx_001E70[];
extern Vtx object_gr_Vtx_002040[];
extern Vtx object_gr_Vtx_002160[];
extern Gfx object_gr_0021C0_DL[36];
extern Gfx object_gr_0022E0_DL[36];
extern Gfx object_gr_002400_DL[259];
extern Gfx object_gr_002C18_DL[82];
extern Gfx object_gr_002EA8_DL[56];
extern Gfx object_gr_003068_DL[65];
extern Gfx object_gr_003270_DL[56];
extern Gfx object_gr_003430_DL[65];
extern Gfx object_gr_003638_DL[50];
extern Gfx object_gr_0037C8_DL[59];
extern Gfx object_gr_0039A0_DL[36];
extern Gfx object_gr_003AC0_DL[28];
extern Gfx object_gr_003BA0_DL[59];
extern Gfx object_gr_003D78_DL[36];
extern Gfx object_gr_003E98_DL[28];
//#define object_gr_003F78_TLUT_TLUT_COUNT 144
extern u64 object_gr_003F78_TLUT[];
extern u8 object_gr_004098_Blob[];
#define gNiwGirlEyeOpenTex_WIDTH 32
#define gNiwGirlEyeOpenTex_HEIGHT 32
extern u64 gNiwGirlEyeOpenTex[TEX_LEN(u64, gNiwGirlEyeOpenTex_WIDTH, gNiwGirlEyeOpenTex_HEIGHT, 16)];
#define gNiwGirlEyeHalfTex_WIDTH 32
#define gNiwGirlEyeHalfTex_HEIGHT 32
extern u64 gNiwGirlEyeHalfTex[TEX_LEN(u64, gNiwGirlEyeHalfTex_WIDTH, gNiwGirlEyeHalfTex_HEIGHT, 16)];
#define gNiwGirlEyeClosedTex_WIDTH 32
#define gNiwGirlEyeClosedTex_HEIGHT 32
extern u64 gNiwGirlEyeClosedTex[TEX_LEN(u64, gNiwGirlEyeClosedTex_WIDTH, gNiwGirlEyeClosedTex_HEIGHT, 16)];
#define gNiwGirlMouthTex_WIDTH 32
#define gNiwGirlMouthTex_HEIGHT 16
extern u64 gNiwGirlMouthTex[TEX_LEN(u64, gNiwGirlMouthTex_WIDTH, gNiwGirlMouthTex_HEIGHT, 16)];
#define object_gr_005D78_Tex_WIDTH 16
#define object_gr_005D78_Tex_HEIGHT 16
extern u64 object_gr_005D78_Tex[TEX_LEN(u64, object_gr_005D78_Tex_WIDTH, object_gr_005D78_Tex_HEIGHT, 8)];
#define object_gr_005E78_Tex_WIDTH 8
#define object_gr_005E78_Tex_HEIGHT 8
extern u64 object_gr_005E78_Tex[TEX_LEN(u64, object_gr_005E78_Tex_WIDTH, object_gr_005E78_Tex_HEIGHT, 8)];
#define object_gr_005EB8_Tex_WIDTH 8
#define object_gr_005EB8_Tex_HEIGHT 8
extern u64 object_gr_005EB8_Tex[TEX_LEN(u64, object_gr_005EB8_Tex_WIDTH, object_gr_005EB8_Tex_HEIGHT, 8)];
#define object_gr_005EF8_Tex_WIDTH 16
#define object_gr_005EF8_Tex_HEIGHT 16
extern u64 object_gr_005EF8_Tex[TEX_LEN(u64, object_gr_005EF8_Tex_WIDTH, object_gr_005EF8_Tex_HEIGHT, 8)];
#define gNiwGirlDress1Tex_WIDTH 32
#define gNiwGirlDress1Tex_HEIGHT 32
extern u64 gNiwGirlDress1Tex[TEX_LEN(u64, gNiwGirlDress1Tex_WIDTH, gNiwGirlDress1Tex_HEIGHT, 16)];
#define gNiwGirlDress4Tex_WIDTH 32
#define gNiwGirlDress4Tex_HEIGHT 32
extern u64 gNiwGirlDress4Tex[TEX_LEN(u64, gNiwGirlDress4Tex_WIDTH, gNiwGirlDress4Tex_HEIGHT, 16)];
#define gNiwGirlDress2Tex_WIDTH 32
#define gNiwGirlDress2Tex_HEIGHT 32
extern u64 gNiwGirlDress2Tex[TEX_LEN(u64, gNiwGirlDress2Tex_WIDTH, gNiwGirlDress2Tex_HEIGHT, 16)];
#define object_gr_0077F8_Tex_WIDTH 32
#define object_gr_0077F8_Tex_HEIGHT 32
extern u64 object_gr_0077F8_Tex[TEX_LEN(u64, object_gr_0077F8_Tex_WIDTH, object_gr_0077F8_Tex_HEIGHT, 8)];
#define object_gr_007BF8_Tex_WIDTH 32
#define object_gr_007BF8_Tex_HEIGHT 32
extern u64 object_gr_007BF8_Tex[TEX_LEN(u64, object_gr_007BF8_Tex_WIDTH, object_gr_007BF8_Tex_HEIGHT, 8)];
#define object_gr_007FF8_Tex_WIDTH 32
#define object_gr_007FF8_Tex_HEIGHT 32
extern u64 object_gr_007FF8_Tex[TEX_LEN(u64, object_gr_007FF8_Tex_WIDTH, object_gr_007FF8_Tex_HEIGHT, 8)];
#define object_gr_0083F8_Tex_WIDTH 32
#define object_gr_0083F8_Tex_HEIGHT 32
extern u64 object_gr_0083F8_Tex[TEX_LEN(u64, object_gr_0083F8_Tex_WIDTH, object_gr_0083F8_Tex_HEIGHT, 8)];
#define gNiwGirlDress5Tex_WIDTH 32
#define gNiwGirlDress5Tex_HEIGHT 32
extern u64 gNiwGirlDress5Tex[TEX_LEN(u64, gNiwGirlDress5Tex_WIDTH, gNiwGirlDress5Tex_HEIGHT, 16)];
#define gNiwGirlDress3Tex_WIDTH 32
#define gNiwGirlDress3Tex_HEIGHT 32
extern u64 gNiwGirlDress3Tex[TEX_LEN(u64, gNiwGirlDress3Tex_WIDTH, gNiwGirlDress3Tex_HEIGHT, 16)];
#define object_gr_0097F8_Tex_WIDTH 4
#define object_gr_0097F8_Tex_HEIGHT 4
extern u64 object_gr_0097F8_Tex[TEX_LEN(u64, object_gr_0097F8_Tex_WIDTH, object_gr_0097F8_Tex_HEIGHT, 8)];
#define object_gr_009808_Tex_WIDTH 8
#define object_gr_009808_Tex_HEIGHT 8
extern u64 object_gr_009808_Tex[TEX_LEN(u64, object_gr_009808_Tex_WIDTH, object_gr_009808_Tex_HEIGHT, 8)];
extern StandardLimb object_gr_009848_Limb;
extern StandardLimb object_gr_009854_Limb;
extern StandardLimb object_gr_009860_Limb;
extern StandardLimb object_gr_00986C_Limb;
extern StandardLimb object_gr_009878_Limb;
extern StandardLimb object_gr_009884_Limb;
extern StandardLimb object_gr_009890_Limb;
extern StandardLimb object_gr_00989C_Limb;
extern StandardLimb object_gr_0098A8_Limb;
extern StandardLimb object_gr_0098B4_Limb;
extern StandardLimb object_gr_0098C0_Limb;
extern StandardLimb object_gr_0098CC_Limb;
extern StandardLimb object_gr_0098D8_Limb;
extern StandardLimb object_gr_0098E4_Limb;
extern StandardLimb object_gr_0098F0_Limb;
extern StandardLimb object_gr_0098FC_Limb;
extern void* gNiwGirlLimbs[];
typedef enum gNiwGirlSkelLimb {
    /*  0 */ LIMB_OBJECT_GR_009948_NONE,
    /*  1 */ LIMB_OBJECT_GR_009848,
    /*  2 */ LIMB_OBJECT_GR_009854,
    /*  3 */ LIMB_OBJECT_GR_009860,
    /*  4 */ LIMB_OBJECT_GR_00986C,
    /*  5 */ LIMB_OBJECT_GR_009878,
    /*  6 */ LIMB_OBJECT_GR_009884,
    /*  7 */ LIMB_OBJECT_GR_009890,
    /*  8 */ LIMB_OBJECT_GR_00989C,
    /*  9 */ LIMB_OBJECT_GR_0098A8,
    /* 10 */ LIMB_OBJECT_GR_0098B4,
    /* 11 */ LIMB_OBJECT_GR_0098C0,
    /* 12 */ LIMB_OBJECT_GR_0098CC,
    /* 13 */ LIMB_OBJECT_GR_0098D8,
    /* 14 */ LIMB_OBJECT_GR_0098E4,
    /* 15 */ LIMB_OBJECT_GR_0098F0,
    /* 16 */ LIMB_OBJECT_GR_0098FC,
    /* 17 */ LIMB_OBJECT_GR_009948_MAX
} gNiwGirlSkelLimb;
extern FlexSkeletonHeader gNiwGirlSkel;
extern s16 gNiwGirlJumpFrameData[];
extern JointIndex gNiwGirlJumpJointIndices[];
extern AnimationHeader gNiwGirlJumpAnim;

#endif
