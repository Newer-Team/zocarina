#ifndef OBJECT_FIREFLY_H
#define OBJECT_FIREFLY_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gKeeseFlyFrameData[];
extern JointIndex gKeeseFlyJointIndices[];
extern AnimationHeader gKeeseFlyAnim;
#define gKeeseEyeTex_WIDTH 8
#define gKeeseEyeTex_HEIGHT 8
extern u64 gKeeseEyeTex[TEX_LEN(u64, gKeeseEyeTex_WIDTH, gKeeseEyeTex_HEIGHT, 16)];
#define gFireKeeseBodyTex_WIDTH 8
#define gFireKeeseBodyTex_HEIGHT 8
extern u64 gFireKeeseBodyTex[TEX_LEN(u64, gFireKeeseBodyTex_WIDTH, gFireKeeseBodyTex_HEIGHT, 16)];
#define gFireKeeseEyeTex_WIDTH 8
#define gFireKeeseEyeTex_HEIGHT 8
extern u64 gFireKeeseEyeTex[TEX_LEN(u64, gFireKeeseEyeTex_WIDTH, gFireKeeseEyeTex_HEIGHT, 16)];
#define gFireKeeseEarTex_WIDTH 16
#define gFireKeeseEarTex_HEIGHT 8
extern u64 gFireKeeseEarTex[TEX_LEN(u64, gFireKeeseEarTex_WIDTH, gFireKeeseEarTex_HEIGHT, 16)];
#define gFireKeeseTalonTex_WIDTH 8
#define gFireKeeseTalonTex_HEIGHT 16
extern u64 gFireKeeseTalonTex[TEX_LEN(u64, gFireKeeseTalonTex_WIDTH, gFireKeeseTalonTex_HEIGHT, 16)];
#define gFireKeeseWingTex_WIDTH 4
#define gFireKeeseWingTex_HEIGHT 16
extern u64 gFireKeeseWingTex[TEX_LEN(u64, gFireKeeseWingTex_WIDTH, gFireKeeseWingTex_HEIGHT, 16)];
#define gKeeseBodyTex_WIDTH 8
#define gKeeseBodyTex_HEIGHT 8
extern u64 gKeeseBodyTex[TEX_LEN(u64, gKeeseBodyTex_WIDTH, gKeeseBodyTex_HEIGHT, 16)];
#define gKeeseTalonTex_WIDTH 8
#define gKeeseTalonTex_HEIGHT 16
extern u64 gKeeseTalonTex[TEX_LEN(u64, gKeeseTalonTex_WIDTH, gKeeseTalonTex_HEIGHT, 16)];
#define gKeeseWingTex_WIDTH 4
#define gKeeseWingTex_HEIGHT 16
extern u64 gKeeseWingTex[TEX_LEN(u64, gKeeseWingTex_WIDTH, gKeeseWingTex_HEIGHT, 16)];
#define gKeeseEarTex_WIDTH 16
#define gKeeseEarTex_HEIGHT 8
extern u64 gKeeseEarTex[TEX_LEN(u64, gKeeseEarTex_WIDTH, gKeeseEarTex_HEIGHT, 16)];
extern Vtx object_firefly_Vtx_000890[];
extern Vtx object_firefly_Vtx_000A30[];
extern Vtx object_firefly_Vtx_000B40[];
extern Vtx object_firefly_Vtx_000B70[];
extern Vtx object_firefly_Vtx_000BB0[];
extern Vtx object_firefly_Vtx_000BE0[];
extern Vtx object_firefly_Vtx_000C10[];
extern Vtx object_firefly_Vtx_000C40[];
extern Vtx object_firefly_Vtx_000C70[];
extern Vtx object_firefly_Vtx_000CA0[];
extern Vtx gKeeseEyesVtx[];
extern Gfx object_firefly_000D30_DL[66];
extern Gfx object_firefly_000F40_DL[31];
extern Gfx object_firefly_001038_DL[25];
extern Gfx object_firefly_001100_DL[25];
extern Gfx object_firefly_0011C8_DL[25];
extern Gfx object_firefly_001290_DL[25];
extern Gfx object_firefly_001358_DL[25];
extern Gfx object_firefly_001420_DL[25];
extern Gfx object_firefly_0014E8_DL[25];
extern Gfx object_firefly_0015B0_DL[25];
extern Gfx gKeeseEyesDL[18];
extern StandardLimb object_firefly_001708_Limb;
extern StandardLimb object_firefly_001714_Limb;
extern StandardLimb object_firefly_001720_Limb;
extern StandardLimb object_firefly_00172C_Limb;
extern StandardLimb object_firefly_001738_Limb;
extern StandardLimb object_firefly_001744_Limb;
extern StandardLimb object_firefly_001750_Limb;
extern StandardLimb object_firefly_00175C_Limb;
extern StandardLimb object_firefly_001768_Limb;
extern StandardLimb object_firefly_001774_Limb;
extern StandardLimb object_firefly_001780_Limb;
extern StandardLimb object_firefly_00178C_Limb;
extern StandardLimb object_firefly_001798_Limb;
extern StandardLimb object_firefly_0017A4_Limb;
extern StandardLimb object_firefly_0017B0_Limb;
extern StandardLimb object_firefly_0017BC_Limb;
extern StandardLimb object_firefly_0017C8_Limb;
extern StandardLimb object_firefly_0017D4_Limb;
extern StandardLimb object_firefly_0017E0_Limb;
extern StandardLimb object_firefly_0017EC_Limb;
extern StandardLimb object_firefly_0017F8_Limb;
extern StandardLimb object_firefly_001804_Limb;
extern StandardLimb object_firefly_001810_Limb;
extern StandardLimb object_firefly_00181C_Limb;
extern StandardLimb object_firefly_001828_Limb;
extern StandardLimb object_firefly_001834_Limb;
extern StandardLimb object_firefly_001840_Limb;
extern void* gKeeseSkeleton_0600184C_Limbs[];
typedef enum gKeeseSkeletonLimb {
    /*  0 */ LIMB_OBJECT_FIREFLY_0018B8_NONE,
    /*  1 */ LIMB_OBJECT_FIREFLY_001708,
    /*  2 */ LIMB_OBJECT_FIREFLY_001714,
    /*  3 */ LIMB_OBJECT_FIREFLY_001720,
    /*  4 */ LIMB_OBJECT_FIREFLY_00172C,
    /*  5 */ LIMB_OBJECT_FIREFLY_001738,
    /*  6 */ LIMB_OBJECT_FIREFLY_001744,
    /*  7 */ LIMB_OBJECT_FIREFLY_001750,
    /*  8 */ LIMB_OBJECT_FIREFLY_00175C,
    /*  9 */ LIMB_OBJECT_FIREFLY_001768,
    /* 10 */ LIMB_OBJECT_FIREFLY_001774,
    /* 11 */ LIMB_OBJECT_FIREFLY_001780,
    /* 12 */ LIMB_OBJECT_FIREFLY_00178C,
    /* 13 */ LIMB_OBJECT_FIREFLY_001798,
    /* 14 */ LIMB_OBJECT_FIREFLY_0017A4,
    /* 15 */ LIMB_OBJECT_FIREFLY_0017B0,
    /* 16 */ LIMB_OBJECT_FIREFLY_0017BC,
    /* 17 */ LIMB_OBJECT_FIREFLY_0017C8,
    /* 18 */ LIMB_OBJECT_FIREFLY_0017D4,
    /* 19 */ LIMB_OBJECT_FIREFLY_0017E0,
    /* 20 */ LIMB_OBJECT_FIREFLY_0017EC,
    /* 21 */ LIMB_OBJECT_FIREFLY_0017F8,
    /* 22 */ LIMB_OBJECT_FIREFLY_001804,
    /* 23 */ LIMB_OBJECT_FIREFLY_001810,
    /* 24 */ LIMB_OBJECT_FIREFLY_00181C,
    /* 25 */ LIMB_OBJECT_FIREFLY_001828,
    /* 26 */ LIMB_OBJECT_FIREFLY_001834,
    /* 27 */ LIMB_OBJECT_FIREFLY_001840,
    /* 28 */ LIMB_OBJECT_FIREFLY_0018B8_MAX
} gKeeseSkeletonLimb;
extern SkeletonHeader gKeeseSkeleton;

#endif
