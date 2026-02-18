#ifndef OBJECT_BV_H
#define OBJECT_BV_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gBarinadeBariFrameData[];
extern JointIndex gBarinadeBariJointIndices[];
extern AnimationHeader gBarinadeBariAnim;
#define object_bv_000040_Tex_WIDTH 16
#define object_bv_000040_Tex_HEIGHT 64
extern u64 object_bv_000040_Tex[TEX_LEN(u64, object_bv_000040_Tex_WIDTH, object_bv_000040_Tex_HEIGHT, 16)];
#define object_bv_000840_Tex_WIDTH 16
#define object_bv_000840_Tex_HEIGHT 16
extern u64 object_bv_000840_Tex[TEX_LEN(u64, object_bv_000840_Tex_WIDTH, object_bv_000840_Tex_HEIGHT, 16)];
#define object_bv_000A40_Tex_WIDTH 16
#define object_bv_000A40_Tex_HEIGHT 32
extern u64 object_bv_000A40_Tex[TEX_LEN(u64, object_bv_000A40_Tex_WIDTH, object_bv_000A40_Tex_HEIGHT, 8)];
extern Vtx gBarinadeDL_000FA0_06000C40_Vtx_fused_[];
extern Gfx gBarinadeDL_000FA0[26];
extern Gfx object_bv_001070_DL[29];
extern Gfx object_bv_001158_DL[27];
#define gBarinadeTitleCardTex_WIDTH 128
#define gBarinadeTitleCardTex_HEIGHT 80
extern u64 gBarinadeTitleCardTex[TEX_LEN(u64, gBarinadeTitleCardTex_WIDTH, gBarinadeTitleCardTex_HEIGHT, 8)];
extern StandardLimb object_bv_003A30_Limb;
extern StandardLimb object_bv_003A3C_Limb;
extern StandardLimb object_bv_003A48_Limb;
extern StandardLimb object_bv_003A54_Limb;
extern void* gBarinadeBariLimbs[];
typedef enum gBarinadeBariSkelLimb {
    /*  0 */ LIMB_OBJECT_BV_003A70_NONE,
    /*  1 */ LIMB_OBJECT_BV_003A30,
    /*  2 */ LIMB_OBJECT_BV_003A3C,
    /*  3 */ LIMB_OBJECT_BV_003A48,
    /*  4 */ LIMB_OBJECT_BV_003A54,
    /*  5 */ LIMB_OBJECT_BV_003A70_MAX
} gBarinadeBariSkelLimb;
extern FlexSkeletonHeader gBarinadeBariSkel;
extern s16 gBarinadeBodyFrameData[];
extern JointIndex gBarinadeBodyJointIndices[];
extern AnimationHeader gBarinadeBodyAnim;
#define object_bv_003DA0_Tex_WIDTH 8
#define object_bv_003DA0_Tex_HEIGHT 16
extern u64 object_bv_003DA0_Tex[TEX_LEN(u64, object_bv_003DA0_Tex_WIDTH, object_bv_003DA0_Tex_HEIGHT, 16)];
#define object_bv_003EA0_Tex_WIDTH 8
#define object_bv_003EA0_Tex_HEIGHT 16
extern u64 object_bv_003EA0_Tex[TEX_LEN(u64, object_bv_003EA0_Tex_WIDTH, object_bv_003EA0_Tex_HEIGHT, 16)];
#define object_bv_003FA0_Tex_WIDTH 16
#define object_bv_003FA0_Tex_HEIGHT 16
extern u64 object_bv_003FA0_Tex[TEX_LEN(u64, object_bv_003FA0_Tex_WIDTH, object_bv_003FA0_Tex_HEIGHT, 16)];
#define object_bv_0041A0_Tex_WIDTH 16
#define object_bv_0041A0_Tex_HEIGHT 32
extern u64 object_bv_0041A0_Tex[TEX_LEN(u64, object_bv_0041A0_Tex_WIDTH, object_bv_0041A0_Tex_HEIGHT, 16)];
#define object_bv_0045A0_Tex_WIDTH 16
#define object_bv_0045A0_Tex_HEIGHT 32
extern u64 object_bv_0045A0_Tex[TEX_LEN(u64, object_bv_0045A0_Tex_WIDTH, object_bv_0045A0_Tex_HEIGHT, 16)];
#define object_bv_0049A0_Tex_WIDTH 16
#define object_bv_0049A0_Tex_HEIGHT 64
extern u64 object_bv_0049A0_Tex[TEX_LEN(u64, object_bv_0049A0_Tex_WIDTH, object_bv_0049A0_Tex_HEIGHT, 16)];
#define object_bv_0051A0_Tex_WIDTH 16
#define object_bv_0051A0_Tex_HEIGHT 32
extern u64 object_bv_0051A0_Tex[TEX_LEN(u64, object_bv_0051A0_Tex_WIDTH, object_bv_0051A0_Tex_HEIGHT, 8)];
extern Vtx object_bv_006B40_DL_060053A0_Vtx_fused_[];
extern Gfx object_bv_006B40_DL[19];
extern Gfx object_bv_006BD8_DL[27];
extern Gfx object_bv_006CB0_DL[63];
extern Gfx object_bv_006EA8_DL[28];
extern Gfx object_bv_006F88_DL[26];
extern Gfx object_bv_007058_DL[18];
extern Gfx object_bv_0070E8_DL[18];
extern Gfx object_bv_007178_DL[18];
extern Gfx object_bv_007208_DL[18];
extern Gfx object_bv_007298_DL[18];
extern Gfx object_bv_007328_DL[18];
extern Gfx object_bv_0073B8_DL[18];
extern Gfx object_bv_007448_DL[18];
extern Gfx object_bv_0074D8_DL[18];
extern Gfx object_bv_007568_DL[18];
extern Vtx gBarinadeDL_008BB8_060075F8_Vtx_fused_[];
extern Gfx gBarinadeDL_008BB8[31];
extern Vtx gBarinadeDL_008D70_060078B0_Vtx[];
extern Gfx gBarinadeDL_008D70[27];
extern Vtx gBarinadeDL_008EF0_06007A48_Vtx_fused_[];
extern Gfx gBarinadeDL_008E88[13];
extern Gfx gBarinadeDL_008EF0[3];
extern Gfx gBarinadeDL_008F08[13];
extern Gfx gBarinadeDL_008F70[3];
#define object_bv_007B88_Tex_WIDTH 32
#define object_bv_007B88_Tex_HEIGHT 32
extern u64 object_bv_007B88_Tex[TEX_LEN(u64, object_bv_007B88_Tex_WIDTH, object_bv_007B88_Tex_HEIGHT, 8)];
extern Gfx gBarinadeDL_009388[3];
extern Gfx gBarinadeDL_0093A0[10];
extern Vtx gBarinadeDL_0093A0_06007FF0_Vtx[];
extern Gfx gBarinadeDL_009430[7];
extern Gfx gBarinadeDL_009468[10];
extern Vtx gBarinadeDL_009468_060080B8_Vtx[];
extern Gfx gBarinadeDL_0094F8[23];
extern Gfx gBarinadeDL_0095B0[41];
#define gBarinadeSparkBall1Tex_WIDTH 64
#define gBarinadeSparkBall1Tex_HEIGHT 64
extern u64 gBarinadeSparkBall1Tex[TEX_LEN(u64, gBarinadeSparkBall1Tex_WIDTH, gBarinadeSparkBall1Tex_HEIGHT, 8)];
#define gBarinadeSparkBall2Tex_WIDTH 64
#define gBarinadeSparkBall2Tex_HEIGHT 64
extern u64 gBarinadeSparkBall2Tex[TEX_LEN(u64, gBarinadeSparkBall2Tex_WIDTH, gBarinadeSparkBall2Tex_HEIGHT, 8)];
#define gBarinadeSparkBall3Tex_WIDTH 64
#define gBarinadeSparkBall3Tex_HEIGHT 64
extern u64 gBarinadeSparkBall3Tex[TEX_LEN(u64, gBarinadeSparkBall3Tex_WIDTH, gBarinadeSparkBall3Tex_HEIGHT, 8)];
#define gBarinadeSparkBall4Tex_WIDTH 64
#define gBarinadeSparkBall4Tex_HEIGHT 64
extern u64 gBarinadeSparkBall4Tex[TEX_LEN(u64, gBarinadeSparkBall4Tex_WIDTH, gBarinadeSparkBall4Tex_HEIGHT, 8)];
#define gBarinadeSparkBall5Tex_WIDTH 64
#define gBarinadeSparkBall5Tex_HEIGHT 64
extern u64 gBarinadeSparkBall5Tex[TEX_LEN(u64, gBarinadeSparkBall5Tex_WIDTH, gBarinadeSparkBall5Tex_HEIGHT, 8)];
#define gBarinadeSparkBall6Tex_WIDTH 64
#define gBarinadeSparkBall6Tex_HEIGHT 64
extern u64 gBarinadeSparkBall6Tex[TEX_LEN(u64, gBarinadeSparkBall6Tex_WIDTH, gBarinadeSparkBall6Tex_HEIGHT, 8)];
#define gBarinadeSparkBall7Tex_WIDTH 64
#define gBarinadeSparkBall7Tex_HEIGHT 64
extern u64 gBarinadeSparkBall7Tex[TEX_LEN(u64, gBarinadeSparkBall7Tex_WIDTH, gBarinadeSparkBall7Tex_HEIGHT, 8)];
#define gBarinadeSparkBall8Tex_WIDTH 64
#define gBarinadeSparkBall8Tex_HEIGHT 64
extern u64 gBarinadeSparkBall8Tex[TEX_LEN(u64, gBarinadeSparkBall8Tex_WIDTH, gBarinadeSparkBall8Tex_HEIGHT, 8)];
extern Vtx gBarinadeDL_011768_060102F8_Vtx[];
extern Gfx gBarinadeDL_011738[6];
extern Gfx gBarinadeDL_011768[10];
#define object_bv_0103B8_Tex_WIDTH 16
#define object_bv_0103B8_Tex_HEIGHT 16
extern u64 object_bv_0103B8_Tex[TEX_LEN(u64, object_bv_0103B8_Tex_WIDTH, object_bv_0103B8_Tex_HEIGHT, 16)];
#define object_bv_0105B8_Tex_WIDTH 16
#define object_bv_0105B8_Tex_HEIGHT 16
extern u64 object_bv_0105B8_Tex[TEX_LEN(u64, object_bv_0105B8_Tex_WIDTH, object_bv_0105B8_Tex_HEIGHT, 16)];
#define object_bv_0107B8_Tex_WIDTH 16
#define object_bv_0107B8_Tex_HEIGHT 16
extern u64 object_bv_0107B8_Tex[TEX_LEN(u64, object_bv_0107B8_Tex_WIDTH, object_bv_0107B8_Tex_HEIGHT, 16)];
extern Vtx gBarinadeDL_012948_060109B8_Vtx_fused_[];
extern Gfx gBarinadeDL_0128B8[18];
extern Gfx gBarinadeDL_012948[39];
extern Vtx gBarinadeDL_012C50_06011680_Vtx[];
extern Gfx gBarinadeDL_012BA0[22];
extern Gfx gBarinadeDL_012C50[18];
#define object_bv_0118E0_Tex_WIDTH 64
#define object_bv_0118E0_Tex_HEIGHT 32
extern u64 object_bv_0118E0_Tex[TEX_LEN(u64, object_bv_0118E0_Tex_WIDTH, object_bv_0118E0_Tex_HEIGHT, 8)];
extern Vtx gBarinadeDL_013638_060120E0_Vtx[];
extern Gfx gBarinadeDL_0135B0[17];
extern Gfx gBarinadeDL_013638[5];
#define object_bv_012260_Tex_WIDTH 64
#define object_bv_012260_Tex_HEIGHT 64
extern u64 object_bv_012260_Tex[TEX_LEN(u64, object_bv_012260_Tex_WIDTH, object_bv_012260_Tex_HEIGHT, 16)];
extern Vtx gBarinadeDL_015710_06014260_Vtx[];
extern Gfx gBarinadeDL_0156A0[14];
extern Gfx gBarinadeDL_015710[3];
extern StandardLimb object_bv_014328_Limb;
extern StandardLimb object_bv_014334_Limb;
extern StandardLimb object_bv_014340_Limb;
extern StandardLimb object_bv_01434C_Limb;
extern StandardLimb object_bv_014358_Limb;
extern StandardLimb object_bv_014364_Limb;
extern StandardLimb object_bv_014370_Limb;
extern StandardLimb object_bv_01437C_Limb;
extern StandardLimb object_bv_014388_Limb;
extern StandardLimb object_bv_014394_Limb;
extern StandardLimb object_bv_0143A0_Limb;
extern StandardLimb object_bv_0143AC_Limb;
extern StandardLimb object_bv_0143B8_Limb;
extern StandardLimb object_bv_0143C4_Limb;
extern StandardLimb object_bv_0143D0_Limb;
extern StandardLimb object_bv_0143DC_Limb;
extern StandardLimb object_bv_0143E8_Limb;
extern StandardLimb object_bv_0143F4_Limb;
extern StandardLimb object_bv_014400_Limb;
extern StandardLimb object_bv_01440C_Limb;
extern StandardLimb object_bv_014418_Limb;
extern StandardLimb object_bv_014424_Limb;
extern StandardLimb object_bv_014430_Limb;
extern StandardLimb object_bv_01443C_Limb;
extern StandardLimb object_bv_014448_Limb;
extern StandardLimb object_bv_014454_Limb;
extern StandardLimb object_bv_014460_Limb;
extern StandardLimb object_bv_01446C_Limb;
extern StandardLimb object_bv_014478_Limb;
extern StandardLimb object_bv_014484_Limb;
extern StandardLimb object_bv_014490_Limb;
extern StandardLimb object_bv_01449C_Limb;
extern StandardLimb object_bv_0144A8_Limb;
extern StandardLimb object_bv_0144B4_Limb;
extern StandardLimb object_bv_0144C0_Limb;
extern StandardLimb object_bv_0144CC_Limb;
extern StandardLimb object_bv_0144D8_Limb;
extern StandardLimb object_bv_0144E4_Limb;
extern StandardLimb object_bv_0144F0_Limb;
extern StandardLimb object_bv_0144FC_Limb;
extern StandardLimb object_bv_014508_Limb;
extern StandardLimb object_bv_014514_Limb;
extern StandardLimb object_bv_014520_Limb;
extern StandardLimb object_bv_01452C_Limb;
extern StandardLimb object_bv_014538_Limb;
extern StandardLimb object_bv_014544_Limb;
extern StandardLimb object_bv_014550_Limb;
extern StandardLimb object_bv_01455C_Limb;
extern StandardLimb object_bv_014568_Limb;
extern StandardLimb object_bv_014574_Limb;
extern StandardLimb object_bv_014580_Limb;
extern StandardLimb object_bv_01458C_Limb;
extern StandardLimb object_bv_014598_Limb;
extern StandardLimb object_bv_0145A4_Limb;
extern StandardLimb object_bv_0145B0_Limb;
extern StandardLimb object_bv_0145BC_Limb;
extern StandardLimb object_bv_0145C8_Limb;
extern StandardLimb object_bv_0145D4_Limb;
extern StandardLimb object_bv_0145E0_Limb;
extern StandardLimb object_bv_0145EC_Limb;
extern StandardLimb object_bv_0145F8_Limb;
extern StandardLimb object_bv_014604_Limb;
extern StandardLimb object_bv_014610_Limb;
extern void* gBarinadeBodyLimbs[];
typedef enum gBarinadeBodySkelLimb {
    /*  0 */ LIMB_OBJECT_BV_014718_NONE,
    /*  1 */ LIMB_OBJECT_BV_014328,
    /*  2 */ LIMB_OBJECT_BV_014334,
    /*  3 */ LIMB_OBJECT_BV_014340,
    /*  4 */ LIMB_OBJECT_BV_01434C,
    /*  5 */ LIMB_OBJECT_BV_014358,
    /*  6 */ LIMB_OBJECT_BV_014364,
    /*  7 */ LIMB_OBJECT_BV_014370,
    /*  8 */ LIMB_OBJECT_BV_01437C,
    /*  9 */ LIMB_OBJECT_BV_014388,
    /* 10 */ LIMB_OBJECT_BV_014394,
    /* 11 */ LIMB_OBJECT_BV_0143A0,
    /* 12 */ LIMB_OBJECT_BV_0143AC,
    /* 13 */ LIMB_OBJECT_BV_0143B8,
    /* 14 */ LIMB_OBJECT_BV_0143C4,
    /* 15 */ LIMB_OBJECT_BV_0143D0,
    /* 16 */ LIMB_OBJECT_BV_0143DC,
    /* 17 */ LIMB_OBJECT_BV_0143E8,
    /* 18 */ LIMB_OBJECT_BV_0143F4,
    /* 19 */ LIMB_OBJECT_BV_014400,
    /* 20 */ LIMB_OBJECT_BV_01440C,
    /* 21 */ LIMB_OBJECT_BV_014418,
    /* 22 */ LIMB_OBJECT_BV_014424,
    /* 23 */ LIMB_OBJECT_BV_014430,
    /* 24 */ LIMB_OBJECT_BV_01443C,
    /* 25 */ LIMB_OBJECT_BV_014448,
    /* 26 */ LIMB_OBJECT_BV_014454,
    /* 27 */ LIMB_OBJECT_BV_014460,
    /* 28 */ LIMB_OBJECT_BV_01446C,
    /* 29 */ LIMB_OBJECT_BV_014478,
    /* 30 */ LIMB_OBJECT_BV_014484,
    /* 31 */ LIMB_OBJECT_BV_014490,
    /* 32 */ LIMB_OBJECT_BV_01449C,
    /* 33 */ LIMB_OBJECT_BV_0144A8,
    /* 34 */ LIMB_OBJECT_BV_0144B4,
    /* 35 */ LIMB_OBJECT_BV_0144C0,
    /* 36 */ LIMB_OBJECT_BV_0144CC,
    /* 37 */ LIMB_OBJECT_BV_0144D8,
    /* 38 */ LIMB_OBJECT_BV_0144E4,
    /* 39 */ LIMB_OBJECT_BV_0144F0,
    /* 40 */ LIMB_OBJECT_BV_0144FC,
    /* 41 */ LIMB_OBJECT_BV_014508,
    /* 42 */ LIMB_OBJECT_BV_014514,
    /* 43 */ LIMB_OBJECT_BV_014520,
    /* 44 */ LIMB_OBJECT_BV_01452C,
    /* 45 */ LIMB_OBJECT_BV_014538,
    /* 46 */ LIMB_OBJECT_BV_014544,
    /* 47 */ LIMB_OBJECT_BV_014550,
    /* 48 */ LIMB_OBJECT_BV_01455C,
    /* 49 */ LIMB_OBJECT_BV_014568,
    /* 50 */ LIMB_OBJECT_BV_014574,
    /* 51 */ LIMB_OBJECT_BV_014580,
    /* 52 */ LIMB_OBJECT_BV_01458C,
    /* 53 */ LIMB_OBJECT_BV_014598,
    /* 54 */ LIMB_OBJECT_BV_0145A4,
    /* 55 */ LIMB_OBJECT_BV_0145B0,
    /* 56 */ LIMB_OBJECT_BV_0145BC,
    /* 57 */ LIMB_OBJECT_BV_0145C8,
    /* 58 */ LIMB_OBJECT_BV_0145D4,
    /* 59 */ LIMB_OBJECT_BV_0145E0,
    /* 60 */ LIMB_OBJECT_BV_0145EC,
    /* 61 */ LIMB_OBJECT_BV_0145F8,
    /* 62 */ LIMB_OBJECT_BV_014604,
    /* 63 */ LIMB_OBJECT_BV_014610,
    /* 64 */ LIMB_OBJECT_BV_014718_MAX
} gBarinadeBodySkelLimb;
extern SkeletonHeader gBarinadeBodySkel;
extern s16 gBarinadeAnim_015D10_06014720_FrameData[];
extern JointIndex gBarinadeAnim_015D10_060148C0_JointIndices[];
extern AnimationHeader gBarinadeAnim_015D10;
extern s16 gBarinadeAnim_015F10_06014920_FrameData[];
extern JointIndex gBarinadeAnim_015F10_06014AC0_JointIndices[];
extern AnimationHeader gBarinadeAnim_015F10;
extern s16 gBarinadeSupportDamage1FrameData[];
extern JointIndex gBarinadeSupportDamage1JointIndices[];
extern AnimationHeader gBarinadeSupportDamage1Anim;
extern s16 gBarinadeSupportDamage2FrameData[];
extern JointIndex gBarinadeSupportDamage2JointIndices[];
extern AnimationHeader gBarinadeSupportDamage2Anim;
extern s16 gBarinadeSupportAttachedFrameData[];
extern JointIndex gBarinadeSupportAttachedJointIndices[];
extern AnimationHeader gBarinadeSupportAttachedAnim;
extern Vtx object_bv_015BC8_DL_060152C0_Vtx_fused_[];
extern Gfx object_bv_0157A0_DL[37];
extern Gfx object_bv_0158C8_DL[32];
extern Gfx object_bv_0159C8_DL[32];
extern Gfx object_bv_015AC8_DL[32];
extern Gfx object_bv_015BC8_DL[34];
#define object_bv_015CD8_Tex_WIDTH 16
#define object_bv_015CD8_Tex_HEIGHT 8
extern u64 object_bv_015CD8_Tex[TEX_LEN(u64, object_bv_015CD8_Tex_WIDTH, object_bv_015CD8_Tex_HEIGHT, 16)];
#define object_bv_015DD8_Tex_WIDTH 16
#define object_bv_015DD8_Tex_HEIGHT 16
extern u64 object_bv_015DD8_Tex[TEX_LEN(u64, object_bv_015DD8_Tex_WIDTH, object_bv_015DD8_Tex_HEIGHT, 16)];
extern StandardLimb object_bv_015FD8_Limb;
extern StandardLimb object_bv_015FE4_Limb;
extern StandardLimb object_bv_015FF0_Limb;
extern StandardLimb object_bv_015FFC_Limb;
extern StandardLimb object_bv_016008_Limb;
extern StandardLimb object_bv_016014_Limb;
extern StandardLimb object_bv_016020_Limb;
extern StandardLimb object_bv_01602C_Limb;
extern StandardLimb object_bv_016038_Limb;
extern StandardLimb object_bv_016044_Limb;
extern StandardLimb object_bv_016050_Limb;
extern StandardLimb object_bv_01605C_Limb;
extern void* gBarinadeSupportLimbs[];
typedef enum gBarinadeSupportSkelLimb {
    /*  0 */ LIMB_OBJECT_BV_016098_NONE,
    /*  1 */ LIMB_OBJECT_BV_015FD8,
    /*  2 */ LIMB_OBJECT_BV_015FE4,
    /*  3 */ LIMB_OBJECT_BV_015FF0,
    /*  4 */ LIMB_OBJECT_BV_015FFC,
    /*  5 */ LIMB_OBJECT_BV_016008,
    /*  6 */ LIMB_OBJECT_BV_016014,
    /*  7 */ LIMB_OBJECT_BV_016020,
    /*  8 */ LIMB_OBJECT_BV_01602C,
    /*  9 */ LIMB_OBJECT_BV_016038,
    /* 10 */ LIMB_OBJECT_BV_016044,
    /* 11 */ LIMB_OBJECT_BV_016050,
    /* 12 */ LIMB_OBJECT_BV_01605C,
    /* 13 */ LIMB_OBJECT_BV_016098_MAX
} gBarinadeSupportSkelLimb;
extern FlexSkeletonHeader gBarinadeSupportSkel;
extern s16 gBarinadeSupportCutFrameData[];
extern JointIndex gBarinadeSupportCutJointIndices[];
extern AnimationHeader gBarinadeSupportCutAnim;
extern s16 gBarinadeSupportDetachedFrameData[];
extern JointIndex gBarinadeSupportDetachedJointIndices[];
extern AnimationHeader gBarinadeSupportDetachedAnim;
extern Vtx object_bv_0169B8_DL_06016410_Vtx_fused_[];
extern Gfx object_bv_016790_DL[37];
extern Gfx object_bv_0168B8_DL[32];
extern Gfx object_bv_0169B8_DL[46];
extern StandardLimb object_bv_016B28_Limb;
extern StandardLimb object_bv_016B34_Limb;
extern StandardLimb object_bv_016B40_Limb;
extern StandardLimb object_bv_016B4C_Limb;
extern StandardLimb object_bv_016B58_Limb;
extern StandardLimb object_bv_016B64_Limb;
extern StandardLimb object_bv_016B70_Limb;
extern StandardLimb object_bv_016B7C_Limb;
extern StandardLimb object_bv_016B88_Limb;
extern StandardLimb object_bv_016B94_Limb;
extern void* gBarinadeCutSupportLimbs[];
typedef enum gBarinadeCutSupportSkelLimb {
    /*  0 */ LIMB_OBJECT_BV_016BC8_NONE,
    /*  1 */ LIMB_OBJECT_BV_016B28,
    /*  2 */ LIMB_OBJECT_BV_016B34,
    /*  3 */ LIMB_OBJECT_BV_016B40,
    /*  4 */ LIMB_OBJECT_BV_016B4C,
    /*  5 */ LIMB_OBJECT_BV_016B58,
    /*  6 */ LIMB_OBJECT_BV_016B64,
    /*  7 */ LIMB_OBJECT_BV_016B70,
    /*  8 */ LIMB_OBJECT_BV_016B7C,
    /*  9 */ LIMB_OBJECT_BV_016B88,
    /* 10 */ LIMB_OBJECT_BV_016B94,
    /* 11 */ LIMB_OBJECT_BV_016BC8_MAX
} gBarinadeCutSupportSkelLimb;
extern FlexSkeletonHeader gBarinadeCutSupportSkel;
extern s16 gBarinadeStumpFrameData[];
extern JointIndex gBarinadeStumpJointIndices[];
extern AnimationHeader gBarinadeStumpAnim;
extern Vtx object_bv_0171E8_DL_06016D60_Vtx_fused_[];
extern Gfx object_bv_017010_DL[24];
extern Gfx object_bv_0170D0_DL[35];
extern Gfx object_bv_0171E8_DL[49];
#define object_bv_017370_Tex_WIDTH 8
#define object_bv_017370_Tex_HEIGHT 8
extern u64 object_bv_017370_Tex[TEX_LEN(u64, object_bv_017370_Tex_WIDTH, object_bv_017370_Tex_HEIGHT, 16)];
extern StandardLimb object_bv_0173F0_Limb;
extern StandardLimb object_bv_0173FC_Limb;
extern StandardLimb object_bv_017408_Limb;
extern StandardLimb object_bv_017414_Limb;
extern StandardLimb object_bv_017420_Limb;
extern StandardLimb object_bv_01742C_Limb;
extern StandardLimb object_bv_017438_Limb;
extern StandardLimb object_bv_017444_Limb;
extern void* gBarinadeStumpLimbs[];
typedef enum gBarinadeStumpSkelLimb {
    /*  0 */ LIMB_OBJECT_BV_017470_NONE,
    /*  1 */ LIMB_OBJECT_BV_0173F0,
    /*  2 */ LIMB_OBJECT_BV_0173FC,
    /*  3 */ LIMB_OBJECT_BV_017408,
    /*  4 */ LIMB_OBJECT_BV_017414,
    /*  5 */ LIMB_OBJECT_BV_017420,
    /*  6 */ LIMB_OBJECT_BV_01742C,
    /*  7 */ LIMB_OBJECT_BV_017438,
    /*  8 */ LIMB_OBJECT_BV_017444,
    /*  9 */ LIMB_OBJECT_BV_017470_MAX
} gBarinadeStumpSkelLimb;
extern FlexSkeletonHeader gBarinadeStumpSkel;
extern s16 gBarinadeAnim_018A00_06017480_FrameData[];
extern JointIndex gBarinadeAnim_018A00_060175D0_JointIndices[];
extern AnimationHeader gBarinadeAnim_018A00;
extern s16 gBarinadeZapperDamage1FrameData[];
extern JointIndex gBarinadeZapperDamage1JointIndices[];
extern AnimationHeader gBarinadeZapperDamage1Anim;
extern s16 gBarinadeZapperDamage2FrameData[];
extern JointIndex gBarinadeZapperDamage2JointIndices[];
extern AnimationHeader gBarinadeZapperDamage2Anim;
extern s16 gBarinadeZapperIdleFrameData[];
extern JointIndex gBarinadeZapperIdleJointIndices[];
extern AnimationHeader gBarinadeZapperIdleAnim;
#define object_bv_017930_Tex_WIDTH 16
#define object_bv_017930_Tex_HEIGHT 8
extern u64 object_bv_017930_Tex[TEX_LEN(u64, object_bv_017930_Tex_WIDTH, object_bv_017930_Tex_HEIGHT, 16)];
#define object_bv_017A30_Tex_WIDTH 16
#define object_bv_017A30_Tex_HEIGHT 16
extern u64 object_bv_017A30_Tex[TEX_LEN(u64, object_bv_017A30_Tex_WIDTH, object_bv_017A30_Tex_HEIGHT, 16)];
extern Vtx object_bv_0183C8_DL_06017C30_Vtx_fused_[];
extern Gfx object_bv_0180A0_DL[37];
extern Gfx object_bv_0181C8_DL[32];
extern Gfx object_bv_0182C8_DL[32];
extern Gfx object_bv_0183C8_DL[45];
extern StandardLimb object_bv_018530_Limb;
extern StandardLimb object_bv_01853C_Limb;
extern StandardLimb object_bv_018548_Limb;
extern StandardLimb object_bv_018554_Limb;
extern StandardLimb object_bv_018560_Limb;
extern StandardLimb object_bv_01856C_Limb;
extern StandardLimb object_bv_018578_Limb;
extern void* gBarinadeZapperLimbs[];
typedef enum gBarinadeZapperSkelLimb {
    /*  0 */ LIMB_OBJECT_BV_0185A0_NONE,
    /*  1 */ LIMB_OBJECT_BV_018530,
    /*  2 */ LIMB_OBJECT_BV_01853C,
    /*  3 */ LIMB_OBJECT_BV_018548,
    /*  4 */ LIMB_OBJECT_BV_018554,
    /*  5 */ LIMB_OBJECT_BV_018560,
    /*  6 */ LIMB_OBJECT_BV_01856C,
    /*  7 */ LIMB_OBJECT_BV_018578,
    /*  8 */ LIMB_OBJECT_BV_0185A0_MAX
} gBarinadeZapperSkelLimb;
extern FlexSkeletonHeader gBarinadeZapperSkel;
//#define object_bv_0185B0_TLUT_TLUT_COUNT 256
extern u64 object_bv_0185B0_TLUT[];
extern u8 object_bv_0187B0_Blob[];
#define object_bv_0187B8_Tex_WIDTH 32
#define object_bv_0187B8_Tex_HEIGHT 64
extern u64 object_bv_0187B8_Tex[TEX_LEN(u64, object_bv_0187B8_Tex_WIDTH, object_bv_0187B8_Tex_HEIGHT, 8)];
extern Vtx gBarinadeDoorPiece1DL_06018FB8_Vtx[];
extern Gfx gBarinadeDoorPiece1DL[24];
//#define object_bv_0190B0_TLUT_TLUT_COUNT 256
extern u64 object_bv_0190B0_TLUT[];
extern u8 object_bv_0192B0_Blob[];
#define object_bv_0192B8_Tex_WIDTH 32
#define object_bv_0192B8_Tex_HEIGHT 64
extern u64 object_bv_0192B8_Tex[TEX_LEN(u64, object_bv_0192B8_Tex_WIDTH, object_bv_0192B8_Tex_HEIGHT, 8)];
extern Vtx gBarinadeDoorPiece2DL_06019AB8_Vtx[];
extern Gfx gBarinadeDoorPiece2DL[24];
//#define object_bv_019BB0_TLUT_TLUT_COUNT 256
extern u64 object_bv_019BB0_TLUT[];
extern u8 object_bv_019DB0_Blob[];
#define object_bv_019DB8_Tex_WIDTH 32
#define object_bv_019DB8_Tex_HEIGHT 64
extern u64 object_bv_019DB8_Tex[TEX_LEN(u64, object_bv_019DB8_Tex_WIDTH, object_bv_019DB8_Tex_HEIGHT, 8)];
extern Vtx gBarinadeDoorPiece3DL_0601A5B8_Vtx[];
extern Gfx gBarinadeDoorPiece3DL[24];
//#define object_bv_01A6B0_TLUT_TLUT_COUNT 256
extern u64 object_bv_01A6B0_TLUT[];
extern u8 object_bv_01A8B0_Blob[];
#define object_bv_01A8B8_Tex_WIDTH 32
#define object_bv_01A8B8_Tex_HEIGHT 64
extern u64 object_bv_01A8B8_Tex[TEX_LEN(u64, object_bv_01A8B8_Tex_WIDTH, object_bv_01A8B8_Tex_HEIGHT, 8)];
extern Vtx gBarinadeDoorPiece4DL_0601B0B8_Vtx[];
extern Gfx gBarinadeDoorPiece4DL[24];
//#define object_bv_01B1B0_TLUT_TLUT_COUNT 256
extern u64 object_bv_01B1B0_TLUT[];
extern u8 object_bv_01B3B0_Blob[];
#define object_bv_01B3B8_Tex_WIDTH 32
#define object_bv_01B3B8_Tex_HEIGHT 64
extern u64 object_bv_01B3B8_Tex[TEX_LEN(u64, object_bv_01B3B8_Tex_WIDTH, object_bv_01B3B8_Tex_HEIGHT, 8)];
extern Vtx gBarinadeDoorPiece5DL_0601BBB8_Vtx[];
extern Gfx gBarinadeDoorPiece5DL[24];
//#define object_bv_01BCB0_TLUT_TLUT_COUNT 256
extern u64 object_bv_01BCB0_TLUT[];
extern u8 object_bv_01BEB0_Blob[];
#define object_bv_01BEB8_Tex_WIDTH 32
#define object_bv_01BEB8_Tex_HEIGHT 64
extern u64 object_bv_01BEB8_Tex[TEX_LEN(u64, object_bv_01BEB8_Tex_WIDTH, object_bv_01BEB8_Tex_HEIGHT, 8)];
extern Vtx gBarinadeDoorPiece6DL_0601C6B8_Vtx[];
extern Gfx gBarinadeDoorPiece6DL[24];
//#define object_bv_01C7B0_TLUT_TLUT_COUNT 256
extern u64 object_bv_01C7B0_TLUT[];
extern u8 object_bv_01C9B0_Blob[];
#define object_bv_01C9B8_Tex_WIDTH 32
#define object_bv_01C9B8_Tex_HEIGHT 64
extern u64 object_bv_01C9B8_Tex[TEX_LEN(u64, object_bv_01C9B8_Tex_WIDTH, object_bv_01C9B8_Tex_HEIGHT, 8)];
extern Vtx gBarinadeDoorPiece7DL_0601D1B8_Vtx[];
extern Gfx gBarinadeDoorPiece7DL[24];
//#define object_bv_01D2B0_TLUT_TLUT_COUNT 256
extern u64 object_bv_01D2B0_TLUT[];
extern u8 object_bv_01D4B0_Blob[];
#define object_bv_01D4B8_Tex_WIDTH 32
#define object_bv_01D4B8_Tex_HEIGHT 64
extern u64 object_bv_01D4B8_Tex[TEX_LEN(u64, object_bv_01D4B8_Tex_WIDTH, object_bv_01D4B8_Tex_HEIGHT, 8)];
extern Vtx gBarinadeDoorPiece8DL_0601DCB8_Vtx[];
extern Gfx gBarinadeDoorPiece8DL[24];

#endif
