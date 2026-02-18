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
#define gBarinadeTitleCardTex_HEIGHT 120
extern u64 gBarinadeTitleCardTex[TEX_LEN(u64, gBarinadeTitleCardTex_WIDTH, gBarinadeTitleCardTex_HEIGHT, 8)];
extern StandardLimb object_bv_004E30_Limb;
extern StandardLimb object_bv_004E3C_Limb;
extern StandardLimb object_bv_004E48_Limb;
extern StandardLimb object_bv_004E54_Limb;
extern void* gBarinadeBariLimbs[];
typedef enum gBarinadeBariSkelLimb {
    /*  0 */ LIMB_OBJECT_BV_004E70_NONE,
    /*  1 */ LIMB_OBJECT_BV_004E30,
    /*  2 */ LIMB_OBJECT_BV_004E3C,
    /*  3 */ LIMB_OBJECT_BV_004E48,
    /*  4 */ LIMB_OBJECT_BV_004E54,
    /*  5 */ LIMB_OBJECT_BV_004E70_MAX
} gBarinadeBariSkelLimb;
extern FlexSkeletonHeader gBarinadeBariSkel;
extern s16 gBarinadeBodyFrameData[];
extern JointIndex gBarinadeBodyJointIndices[];
extern AnimationHeader gBarinadeBodyAnim;
#define object_bv_0051A0_Tex_WIDTH 8
#define object_bv_0051A0_Tex_HEIGHT 16
extern u64 object_bv_0051A0_Tex[TEX_LEN(u64, object_bv_0051A0_Tex_WIDTH, object_bv_0051A0_Tex_HEIGHT, 16)];
#define object_bv_0052A0_Tex_WIDTH 8
#define object_bv_0052A0_Tex_HEIGHT 16
extern u64 object_bv_0052A0_Tex[TEX_LEN(u64, object_bv_0052A0_Tex_WIDTH, object_bv_0052A0_Tex_HEIGHT, 16)];
#define object_bv_0053A0_Tex_WIDTH 16
#define object_bv_0053A0_Tex_HEIGHT 16
extern u64 object_bv_0053A0_Tex[TEX_LEN(u64, object_bv_0053A0_Tex_WIDTH, object_bv_0053A0_Tex_HEIGHT, 16)];
#define object_bv_0055A0_Tex_WIDTH 16
#define object_bv_0055A0_Tex_HEIGHT 32
extern u64 object_bv_0055A0_Tex[TEX_LEN(u64, object_bv_0055A0_Tex_WIDTH, object_bv_0055A0_Tex_HEIGHT, 16)];
#define object_bv_0059A0_Tex_WIDTH 16
#define object_bv_0059A0_Tex_HEIGHT 32
extern u64 object_bv_0059A0_Tex[TEX_LEN(u64, object_bv_0059A0_Tex_WIDTH, object_bv_0059A0_Tex_HEIGHT, 16)];
#define object_bv_005DA0_Tex_WIDTH 16
#define object_bv_005DA0_Tex_HEIGHT 64
extern u64 object_bv_005DA0_Tex[TEX_LEN(u64, object_bv_005DA0_Tex_WIDTH, object_bv_005DA0_Tex_HEIGHT, 16)];
#define object_bv_0065A0_Tex_WIDTH 16
#define object_bv_0065A0_Tex_HEIGHT 32
extern u64 object_bv_0065A0_Tex[TEX_LEN(u64, object_bv_0065A0_Tex_WIDTH, object_bv_0065A0_Tex_HEIGHT, 8)];
extern Vtx object_bv_007F40_DL_060067A0_Vtx_fused_[];
extern Gfx object_bv_007F40_DL[19];
extern Gfx object_bv_007FD8_DL[27];
extern Gfx object_bv_0080B0_DL[63];
extern Gfx object_bv_0082A8_DL[28];
extern Gfx object_bv_008388_DL[26];
extern Gfx object_bv_008458_DL[18];
extern Gfx object_bv_0084E8_DL[18];
extern Gfx object_bv_008578_DL[18];
extern Gfx object_bv_008608_DL[18];
extern Gfx object_bv_008698_DL[18];
extern Gfx object_bv_008728_DL[18];
extern Gfx object_bv_0087B8_DL[18];
extern Gfx object_bv_008848_DL[18];
extern Gfx object_bv_0088D8_DL[18];
extern Gfx object_bv_008968_DL[18];
extern Vtx gBarinadeDL_008BB8_060089F8_Vtx_fused_[];
extern Gfx gBarinadeDL_008BB8[31];
extern Vtx gBarinadeDL_008D70_06008CB0_Vtx[];
extern Gfx gBarinadeDL_008D70[27];
extern Vtx gBarinadeDL_008EF0_06008E48_Vtx_fused_[];
extern Gfx gBarinadeDL_008E88[13];
extern Gfx gBarinadeDL_008EF0[3];
extern Gfx gBarinadeDL_008F08[13];
extern Gfx gBarinadeDL_008F70[3];
#define object_bv_008F88_Tex_WIDTH 32
#define object_bv_008F88_Tex_HEIGHT 32
extern u64 object_bv_008F88_Tex[TEX_LEN(u64, object_bv_008F88_Tex_WIDTH, object_bv_008F88_Tex_HEIGHT, 8)];
extern Gfx gBarinadeDL_009388[3];
extern Gfx gBarinadeDL_0093A0[10];
extern Vtx gBarinadeDL_0093A0_060093F0_Vtx[];
extern Gfx gBarinadeDL_009430[7];
extern Gfx gBarinadeDL_009468[10];
extern Vtx gBarinadeDL_009468_060094B8_Vtx[];
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
extern Vtx gBarinadeDL_011768_060116F8_Vtx[];
extern Gfx gBarinadeDL_011738[6];
extern Gfx gBarinadeDL_011768[10];
#define object_bv_0117B8_Tex_WIDTH 16
#define object_bv_0117B8_Tex_HEIGHT 16
extern u64 object_bv_0117B8_Tex[TEX_LEN(u64, object_bv_0117B8_Tex_WIDTH, object_bv_0117B8_Tex_HEIGHT, 16)];
#define object_bv_0119B8_Tex_WIDTH 16
#define object_bv_0119B8_Tex_HEIGHT 16
extern u64 object_bv_0119B8_Tex[TEX_LEN(u64, object_bv_0119B8_Tex_WIDTH, object_bv_0119B8_Tex_HEIGHT, 16)];
#define object_bv_011BB8_Tex_WIDTH 16
#define object_bv_011BB8_Tex_HEIGHT 16
extern u64 object_bv_011BB8_Tex[TEX_LEN(u64, object_bv_011BB8_Tex_WIDTH, object_bv_011BB8_Tex_HEIGHT, 16)];
extern Vtx gBarinadeDL_012948_06011DB8_Vtx_fused_[];
extern Gfx gBarinadeDL_0128B8[18];
extern Gfx gBarinadeDL_012948[39];
extern Vtx gBarinadeDL_012C50_06012A80_Vtx[];
extern Gfx gBarinadeDL_012BA0[22];
extern Gfx gBarinadeDL_012C50[18];
#define object_bv_012CE0_Tex_WIDTH 64
#define object_bv_012CE0_Tex_HEIGHT 32
extern u64 object_bv_012CE0_Tex[TEX_LEN(u64, object_bv_012CE0_Tex_WIDTH, object_bv_012CE0_Tex_HEIGHT, 8)];
extern Vtx gBarinadeDL_013638_060134E0_Vtx[];
extern Gfx gBarinadeDL_0135B0[17];
extern Gfx gBarinadeDL_013638[5];
#define object_bv_013660_Tex_WIDTH 64
#define object_bv_013660_Tex_HEIGHT 64
extern u64 object_bv_013660_Tex[TEX_LEN(u64, object_bv_013660_Tex_WIDTH, object_bv_013660_Tex_HEIGHT, 16)];
extern Vtx gBarinadeDL_015710_06015660_Vtx[];
extern Gfx gBarinadeDL_0156A0[14];
extern Gfx gBarinadeDL_015710[3];
extern StandardLimb object_bv_015728_Limb;
extern StandardLimb object_bv_015734_Limb;
extern StandardLimb object_bv_015740_Limb;
extern StandardLimb object_bv_01574C_Limb;
extern StandardLimb object_bv_015758_Limb;
extern StandardLimb object_bv_015764_Limb;
extern StandardLimb object_bv_015770_Limb;
extern StandardLimb object_bv_01577C_Limb;
extern StandardLimb object_bv_015788_Limb;
extern StandardLimb object_bv_015794_Limb;
extern StandardLimb object_bv_0157A0_Limb;
extern StandardLimb object_bv_0157AC_Limb;
extern StandardLimb object_bv_0157B8_Limb;
extern StandardLimb object_bv_0157C4_Limb;
extern StandardLimb object_bv_0157D0_Limb;
extern StandardLimb object_bv_0157DC_Limb;
extern StandardLimb object_bv_0157E8_Limb;
extern StandardLimb object_bv_0157F4_Limb;
extern StandardLimb object_bv_015800_Limb;
extern StandardLimb object_bv_01580C_Limb;
extern StandardLimb object_bv_015818_Limb;
extern StandardLimb object_bv_015824_Limb;
extern StandardLimb object_bv_015830_Limb;
extern StandardLimb object_bv_01583C_Limb;
extern StandardLimb object_bv_015848_Limb;
extern StandardLimb object_bv_015854_Limb;
extern StandardLimb object_bv_015860_Limb;
extern StandardLimb object_bv_01586C_Limb;
extern StandardLimb object_bv_015878_Limb;
extern StandardLimb object_bv_015884_Limb;
extern StandardLimb object_bv_015890_Limb;
extern StandardLimb object_bv_01589C_Limb;
extern StandardLimb object_bv_0158A8_Limb;
extern StandardLimb object_bv_0158B4_Limb;
extern StandardLimb object_bv_0158C0_Limb;
extern StandardLimb object_bv_0158CC_Limb;
extern StandardLimb object_bv_0158D8_Limb;
extern StandardLimb object_bv_0158E4_Limb;
extern StandardLimb object_bv_0158F0_Limb;
extern StandardLimb object_bv_0158FC_Limb;
extern StandardLimb object_bv_015908_Limb;
extern StandardLimb object_bv_015914_Limb;
extern StandardLimb object_bv_015920_Limb;
extern StandardLimb object_bv_01592C_Limb;
extern StandardLimb object_bv_015938_Limb;
extern StandardLimb object_bv_015944_Limb;
extern StandardLimb object_bv_015950_Limb;
extern StandardLimb object_bv_01595C_Limb;
extern StandardLimb object_bv_015968_Limb;
extern StandardLimb object_bv_015974_Limb;
extern StandardLimb object_bv_015980_Limb;
extern StandardLimb object_bv_01598C_Limb;
extern StandardLimb object_bv_015998_Limb;
extern StandardLimb object_bv_0159A4_Limb;
extern StandardLimb object_bv_0159B0_Limb;
extern StandardLimb object_bv_0159BC_Limb;
extern StandardLimb object_bv_0159C8_Limb;
extern StandardLimb object_bv_0159D4_Limb;
extern StandardLimb object_bv_0159E0_Limb;
extern StandardLimb object_bv_0159EC_Limb;
extern StandardLimb object_bv_0159F8_Limb;
extern StandardLimb object_bv_015A04_Limb;
extern StandardLimb object_bv_015A10_Limb;
extern void* gBarinadeBodyLimbs[];
typedef enum gBarinadeBodySkelLimb {
    /*  0 */ LIMB_OBJECT_BV_015B18_NONE,
    /*  1 */ LIMB_OBJECT_BV_015728,
    /*  2 */ LIMB_OBJECT_BV_015734,
    /*  3 */ LIMB_OBJECT_BV_015740,
    /*  4 */ LIMB_OBJECT_BV_01574C,
    /*  5 */ LIMB_OBJECT_BV_015758,
    /*  6 */ LIMB_OBJECT_BV_015764,
    /*  7 */ LIMB_OBJECT_BV_015770,
    /*  8 */ LIMB_OBJECT_BV_01577C,
    /*  9 */ LIMB_OBJECT_BV_015788,
    /* 10 */ LIMB_OBJECT_BV_015794,
    /* 11 */ LIMB_OBJECT_BV_0157A0,
    /* 12 */ LIMB_OBJECT_BV_0157AC,
    /* 13 */ LIMB_OBJECT_BV_0157B8,
    /* 14 */ LIMB_OBJECT_BV_0157C4,
    /* 15 */ LIMB_OBJECT_BV_0157D0,
    /* 16 */ LIMB_OBJECT_BV_0157DC,
    /* 17 */ LIMB_OBJECT_BV_0157E8,
    /* 18 */ LIMB_OBJECT_BV_0157F4,
    /* 19 */ LIMB_OBJECT_BV_015800,
    /* 20 */ LIMB_OBJECT_BV_01580C,
    /* 21 */ LIMB_OBJECT_BV_015818,
    /* 22 */ LIMB_OBJECT_BV_015824,
    /* 23 */ LIMB_OBJECT_BV_015830,
    /* 24 */ LIMB_OBJECT_BV_01583C,
    /* 25 */ LIMB_OBJECT_BV_015848,
    /* 26 */ LIMB_OBJECT_BV_015854,
    /* 27 */ LIMB_OBJECT_BV_015860,
    /* 28 */ LIMB_OBJECT_BV_01586C,
    /* 29 */ LIMB_OBJECT_BV_015878,
    /* 30 */ LIMB_OBJECT_BV_015884,
    /* 31 */ LIMB_OBJECT_BV_015890,
    /* 32 */ LIMB_OBJECT_BV_01589C,
    /* 33 */ LIMB_OBJECT_BV_0158A8,
    /* 34 */ LIMB_OBJECT_BV_0158B4,
    /* 35 */ LIMB_OBJECT_BV_0158C0,
    /* 36 */ LIMB_OBJECT_BV_0158CC,
    /* 37 */ LIMB_OBJECT_BV_0158D8,
    /* 38 */ LIMB_OBJECT_BV_0158E4,
    /* 39 */ LIMB_OBJECT_BV_0158F0,
    /* 40 */ LIMB_OBJECT_BV_0158FC,
    /* 41 */ LIMB_OBJECT_BV_015908,
    /* 42 */ LIMB_OBJECT_BV_015914,
    /* 43 */ LIMB_OBJECT_BV_015920,
    /* 44 */ LIMB_OBJECT_BV_01592C,
    /* 45 */ LIMB_OBJECT_BV_015938,
    /* 46 */ LIMB_OBJECT_BV_015944,
    /* 47 */ LIMB_OBJECT_BV_015950,
    /* 48 */ LIMB_OBJECT_BV_01595C,
    /* 49 */ LIMB_OBJECT_BV_015968,
    /* 50 */ LIMB_OBJECT_BV_015974,
    /* 51 */ LIMB_OBJECT_BV_015980,
    /* 52 */ LIMB_OBJECT_BV_01598C,
    /* 53 */ LIMB_OBJECT_BV_015998,
    /* 54 */ LIMB_OBJECT_BV_0159A4,
    /* 55 */ LIMB_OBJECT_BV_0159B0,
    /* 56 */ LIMB_OBJECT_BV_0159BC,
    /* 57 */ LIMB_OBJECT_BV_0159C8,
    /* 58 */ LIMB_OBJECT_BV_0159D4,
    /* 59 */ LIMB_OBJECT_BV_0159E0,
    /* 60 */ LIMB_OBJECT_BV_0159EC,
    /* 61 */ LIMB_OBJECT_BV_0159F8,
    /* 62 */ LIMB_OBJECT_BV_015A04,
    /* 63 */ LIMB_OBJECT_BV_015A10,
    /* 64 */ LIMB_OBJECT_BV_015B18_MAX
} gBarinadeBodySkelLimb;
extern SkeletonHeader gBarinadeBodySkel;
extern s16 gBarinadeAnim_015D10_06015B20_FrameData[];
extern JointIndex gBarinadeAnim_015D10_06015CC0_JointIndices[];
extern AnimationHeader gBarinadeAnim_015D10;
extern s16 gBarinadeAnim_015F10_06015D20_FrameData[];
extern JointIndex gBarinadeAnim_015F10_06015EC0_JointIndices[];
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
extern Vtx object_bv_016FC8_DL_060166C0_Vtx_fused_[];
extern Gfx object_bv_016BA0_DL[37];
extern Gfx object_bv_016CC8_DL[32];
extern Gfx object_bv_016DC8_DL[32];
extern Gfx object_bv_016EC8_DL[32];
extern Gfx object_bv_016FC8_DL[34];
#define object_bv_0170D8_Tex_WIDTH 16
#define object_bv_0170D8_Tex_HEIGHT 8
extern u64 object_bv_0170D8_Tex[TEX_LEN(u64, object_bv_0170D8_Tex_WIDTH, object_bv_0170D8_Tex_HEIGHT, 16)];
#define object_bv_0171D8_Tex_WIDTH 16
#define object_bv_0171D8_Tex_HEIGHT 16
extern u64 object_bv_0171D8_Tex[TEX_LEN(u64, object_bv_0171D8_Tex_WIDTH, object_bv_0171D8_Tex_HEIGHT, 16)];
extern StandardLimb object_bv_0173D8_Limb;
extern StandardLimb object_bv_0173E4_Limb;
extern StandardLimb object_bv_0173F0_Limb;
extern StandardLimb object_bv_0173FC_Limb;
extern StandardLimb object_bv_017408_Limb;
extern StandardLimb object_bv_017414_Limb;
extern StandardLimb object_bv_017420_Limb;
extern StandardLimb object_bv_01742C_Limb;
extern StandardLimb object_bv_017438_Limb;
extern StandardLimb object_bv_017444_Limb;
extern StandardLimb object_bv_017450_Limb;
extern StandardLimb object_bv_01745C_Limb;
extern void* gBarinadeSupportLimbs[];
typedef enum gBarinadeSupportSkelLimb {
    /*  0 */ LIMB_OBJECT_BV_017498_NONE,
    /*  1 */ LIMB_OBJECT_BV_0173D8,
    /*  2 */ LIMB_OBJECT_BV_0173E4,
    /*  3 */ LIMB_OBJECT_BV_0173F0,
    /*  4 */ LIMB_OBJECT_BV_0173FC,
    /*  5 */ LIMB_OBJECT_BV_017408,
    /*  6 */ LIMB_OBJECT_BV_017414,
    /*  7 */ LIMB_OBJECT_BV_017420,
    /*  8 */ LIMB_OBJECT_BV_01742C,
    /*  9 */ LIMB_OBJECT_BV_017438,
    /* 10 */ LIMB_OBJECT_BV_017444,
    /* 11 */ LIMB_OBJECT_BV_017450,
    /* 12 */ LIMB_OBJECT_BV_01745C,
    /* 13 */ LIMB_OBJECT_BV_017498_MAX
} gBarinadeSupportSkelLimb;
extern FlexSkeletonHeader gBarinadeSupportSkel;
extern s16 gBarinadeSupportCutFrameData[];
extern JointIndex gBarinadeSupportCutJointIndices[];
extern AnimationHeader gBarinadeSupportCutAnim;
extern s16 gBarinadeSupportDetachedFrameData[];
extern JointIndex gBarinadeSupportDetachedJointIndices[];
extern AnimationHeader gBarinadeSupportDetachedAnim;
extern Vtx object_bv_017DB8_DL_06017810_Vtx_fused_[];
extern Gfx object_bv_017B90_DL[37];
extern Gfx object_bv_017CB8_DL[32];
extern Gfx object_bv_017DB8_DL[46];
extern StandardLimb object_bv_017F28_Limb;
extern StandardLimb object_bv_017F34_Limb;
extern StandardLimb object_bv_017F40_Limb;
extern StandardLimb object_bv_017F4C_Limb;
extern StandardLimb object_bv_017F58_Limb;
extern StandardLimb object_bv_017F64_Limb;
extern StandardLimb object_bv_017F70_Limb;
extern StandardLimb object_bv_017F7C_Limb;
extern StandardLimb object_bv_017F88_Limb;
extern StandardLimb object_bv_017F94_Limb;
extern void* gBarinadeCutSupportLimbs[];
typedef enum gBarinadeCutSupportSkelLimb {
    /*  0 */ LIMB_OBJECT_BV_017FC8_NONE,
    /*  1 */ LIMB_OBJECT_BV_017F28,
    /*  2 */ LIMB_OBJECT_BV_017F34,
    /*  3 */ LIMB_OBJECT_BV_017F40,
    /*  4 */ LIMB_OBJECT_BV_017F4C,
    /*  5 */ LIMB_OBJECT_BV_017F58,
    /*  6 */ LIMB_OBJECT_BV_017F64,
    /*  7 */ LIMB_OBJECT_BV_017F70,
    /*  8 */ LIMB_OBJECT_BV_017F7C,
    /*  9 */ LIMB_OBJECT_BV_017F88,
    /* 10 */ LIMB_OBJECT_BV_017F94,
    /* 11 */ LIMB_OBJECT_BV_017FC8_MAX
} gBarinadeCutSupportSkelLimb;
extern FlexSkeletonHeader gBarinadeCutSupportSkel;
extern s16 gBarinadeStumpFrameData[];
extern JointIndex gBarinadeStumpJointIndices[];
extern AnimationHeader gBarinadeStumpAnim;
extern Vtx object_bv_0185E8_DL_06018160_Vtx_fused_[];
extern Gfx object_bv_018410_DL[24];
extern Gfx object_bv_0184D0_DL[35];
extern Gfx object_bv_0185E8_DL[49];
#define object_bv_018770_Tex_WIDTH 8
#define object_bv_018770_Tex_HEIGHT 8
extern u64 object_bv_018770_Tex[TEX_LEN(u64, object_bv_018770_Tex_WIDTH, object_bv_018770_Tex_HEIGHT, 16)];
extern StandardLimb object_bv_0187F0_Limb;
extern StandardLimb object_bv_0187FC_Limb;
extern StandardLimb object_bv_018808_Limb;
extern StandardLimb object_bv_018814_Limb;
extern StandardLimb object_bv_018820_Limb;
extern StandardLimb object_bv_01882C_Limb;
extern StandardLimb object_bv_018838_Limb;
extern StandardLimb object_bv_018844_Limb;
extern void* gBarinadeStumpLimbs[];
typedef enum gBarinadeStumpSkelLimb {
    /*  0 */ LIMB_OBJECT_BV_018870_NONE,
    /*  1 */ LIMB_OBJECT_BV_0187F0,
    /*  2 */ LIMB_OBJECT_BV_0187FC,
    /*  3 */ LIMB_OBJECT_BV_018808,
    /*  4 */ LIMB_OBJECT_BV_018814,
    /*  5 */ LIMB_OBJECT_BV_018820,
    /*  6 */ LIMB_OBJECT_BV_01882C,
    /*  7 */ LIMB_OBJECT_BV_018838,
    /*  8 */ LIMB_OBJECT_BV_018844,
    /*  9 */ LIMB_OBJECT_BV_018870_MAX
} gBarinadeStumpSkelLimb;
extern FlexSkeletonHeader gBarinadeStumpSkel;
extern s16 gBarinadeAnim_018A00_06018880_FrameData[];
extern JointIndex gBarinadeAnim_018A00_060189D0_JointIndices[];
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
#define object_bv_018D30_Tex_WIDTH 16
#define object_bv_018D30_Tex_HEIGHT 8
extern u64 object_bv_018D30_Tex[TEX_LEN(u64, object_bv_018D30_Tex_WIDTH, object_bv_018D30_Tex_HEIGHT, 16)];
#define object_bv_018E30_Tex_WIDTH 16
#define object_bv_018E30_Tex_HEIGHT 16
extern u64 object_bv_018E30_Tex[TEX_LEN(u64, object_bv_018E30_Tex_WIDTH, object_bv_018E30_Tex_HEIGHT, 16)];
extern Vtx object_bv_0197C8_DL_06019030_Vtx_fused_[];
extern Gfx object_bv_0194A0_DL[37];
extern Gfx object_bv_0195C8_DL[32];
extern Gfx object_bv_0196C8_DL[32];
extern Gfx object_bv_0197C8_DL[45];
extern StandardLimb object_bv_019930_Limb;
extern StandardLimb object_bv_01993C_Limb;
extern StandardLimb object_bv_019948_Limb;
extern StandardLimb object_bv_019954_Limb;
extern StandardLimb object_bv_019960_Limb;
extern StandardLimb object_bv_01996C_Limb;
extern StandardLimb object_bv_019978_Limb;
extern void* gBarinadeZapperLimbs[];
typedef enum gBarinadeZapperSkelLimb {
    /*  0 */ LIMB_OBJECT_BV_0199A0_NONE,
    /*  1 */ LIMB_OBJECT_BV_019930,
    /*  2 */ LIMB_OBJECT_BV_01993C,
    /*  3 */ LIMB_OBJECT_BV_019948,
    /*  4 */ LIMB_OBJECT_BV_019954,
    /*  5 */ LIMB_OBJECT_BV_019960,
    /*  6 */ LIMB_OBJECT_BV_01996C,
    /*  7 */ LIMB_OBJECT_BV_019978,
    /*  8 */ LIMB_OBJECT_BV_0199A0_MAX
} gBarinadeZapperSkelLimb;
extern FlexSkeletonHeader gBarinadeZapperSkel;
//#define object_bv_0199B0_TLUT_TLUT_COUNT 256
extern u64 object_bv_0199B0_TLUT[];
extern u8 object_bv_019BB0_Blob[];
#define object_bv_019BB8_Tex_WIDTH 32
#define object_bv_019BB8_Tex_HEIGHT 64
extern u64 object_bv_019BB8_Tex[TEX_LEN(u64, object_bv_019BB8_Tex_WIDTH, object_bv_019BB8_Tex_HEIGHT, 8)];
extern Vtx gBarinadeDoorPiece1DL_0601A3B8_Vtx[];
extern Gfx gBarinadeDoorPiece1DL[24];
//#define object_bv_01A4B0_TLUT_TLUT_COUNT 256
extern u64 object_bv_01A4B0_TLUT[];
extern u8 object_bv_01A6B0_Blob[];
#define object_bv_01A6B8_Tex_WIDTH 32
#define object_bv_01A6B8_Tex_HEIGHT 64
extern u64 object_bv_01A6B8_Tex[TEX_LEN(u64, object_bv_01A6B8_Tex_WIDTH, object_bv_01A6B8_Tex_HEIGHT, 8)];
extern Vtx gBarinadeDoorPiece2DL_0601AEB8_Vtx[];
extern Gfx gBarinadeDoorPiece2DL[24];
//#define object_bv_01AFB0_TLUT_TLUT_COUNT 256
extern u64 object_bv_01AFB0_TLUT[];
extern u8 object_bv_01B1B0_Blob[];
#define object_bv_01B1B8_Tex_WIDTH 32
#define object_bv_01B1B8_Tex_HEIGHT 64
extern u64 object_bv_01B1B8_Tex[TEX_LEN(u64, object_bv_01B1B8_Tex_WIDTH, object_bv_01B1B8_Tex_HEIGHT, 8)];
extern Vtx gBarinadeDoorPiece3DL_0601B9B8_Vtx[];
extern Gfx gBarinadeDoorPiece3DL[24];
//#define object_bv_01BAB0_TLUT_TLUT_COUNT 256
extern u64 object_bv_01BAB0_TLUT[];
extern u8 object_bv_01BCB0_Blob[];
#define object_bv_01BCB8_Tex_WIDTH 32
#define object_bv_01BCB8_Tex_HEIGHT 64
extern u64 object_bv_01BCB8_Tex[TEX_LEN(u64, object_bv_01BCB8_Tex_WIDTH, object_bv_01BCB8_Tex_HEIGHT, 8)];
extern Vtx gBarinadeDoorPiece4DL_0601C4B8_Vtx[];
extern Gfx gBarinadeDoorPiece4DL[24];
//#define object_bv_01C5B0_TLUT_TLUT_COUNT 256
extern u64 object_bv_01C5B0_TLUT[];
extern u8 object_bv_01C7B0_Blob[];
#define object_bv_01C7B8_Tex_WIDTH 32
#define object_bv_01C7B8_Tex_HEIGHT 64
extern u64 object_bv_01C7B8_Tex[TEX_LEN(u64, object_bv_01C7B8_Tex_WIDTH, object_bv_01C7B8_Tex_HEIGHT, 8)];
extern Vtx gBarinadeDoorPiece5DL_0601CFB8_Vtx[];
extern Gfx gBarinadeDoorPiece5DL[24];
//#define object_bv_01D0B0_TLUT_TLUT_COUNT 256
extern u64 object_bv_01D0B0_TLUT[];
extern u8 object_bv_01D2B0_Blob[];
#define object_bv_01D2B8_Tex_WIDTH 32
#define object_bv_01D2B8_Tex_HEIGHT 64
extern u64 object_bv_01D2B8_Tex[TEX_LEN(u64, object_bv_01D2B8_Tex_WIDTH, object_bv_01D2B8_Tex_HEIGHT, 8)];
extern Vtx gBarinadeDoorPiece6DL_0601DAB8_Vtx[];
extern Gfx gBarinadeDoorPiece6DL[24];
//#define object_bv_01DBB0_TLUT_TLUT_COUNT 256
extern u64 object_bv_01DBB0_TLUT[];
extern u8 object_bv_01DDB0_Blob[];
#define object_bv_01DDB8_Tex_WIDTH 32
#define object_bv_01DDB8_Tex_HEIGHT 64
extern u64 object_bv_01DDB8_Tex[TEX_LEN(u64, object_bv_01DDB8_Tex_WIDTH, object_bv_01DDB8_Tex_HEIGHT, 8)];
extern Vtx gBarinadeDoorPiece7DL_0601E5B8_Vtx[];
extern Gfx gBarinadeDoorPiece7DL[24];
//#define object_bv_01E6B0_TLUT_TLUT_COUNT 256
extern u64 object_bv_01E6B0_TLUT[];
extern u8 object_bv_01E8B0_Blob[];
#define object_bv_01E8B8_Tex_WIDTH 32
#define object_bv_01E8B8_Tex_HEIGHT 64
extern u64 object_bv_01E8B8_Tex[TEX_LEN(u64, object_bv_01E8B8_Tex_WIDTH, object_bv_01E8B8_Tex_HEIGHT, 8)];
extern Vtx gBarinadeDoorPiece8DL_0601F0B8_Vtx[];
extern Gfx gBarinadeDoorPiece8DL[24];

#endif
