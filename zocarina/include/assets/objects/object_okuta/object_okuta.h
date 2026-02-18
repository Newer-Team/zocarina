#ifndef OBJECT_OKUTA_H
#define OBJECT_OKUTA_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gOctorokShootFrameData[];
extern JointIndex gOctorokShootJointIndices[];
extern AnimationHeader gOctorokShootAnim;
extern s16 gOctorokDieFrameData[];
extern JointIndex gOctorokDieJointIndices[];
extern AnimationHeader gOctorokDieAnim;
extern s16 gOctorokHideFrameData[];
extern JointIndex gOctorokHideJointIndices[];
extern AnimationHeader gOctorokHideAnim;
extern s16 gOctorokFloatFrameData[];
extern JointIndex gOctorokFloatJointIndices[];
extern AnimationHeader gOctorokFloatAnim;
extern Vtx object_okuta_Vtx_000DF0[];
extern Vtx object_okuta_Vtx_000EC0[];
extern Vtx object_okuta_Vtx_001300[];
extern Vtx object_okuta_Vtx_0013D0[];
extern Vtx object_okuta_Vtx_001400[];
extern Vtx object_okuta_Vtx_001450[];
extern Vtx object_okuta_Vtx_001490[];
extern Vtx object_okuta_Vtx_0014C0[];
extern Vtx object_okuta_Vtx_001510[];
extern Vtx object_okuta_Vtx_001550[];
extern Vtx object_okuta_Vtx_001580[];
extern Vtx object_okuta_Vtx_0015D0[];
extern Vtx object_okuta_Vtx_001610[];
extern Vtx object_okuta_Vtx_001640[];
extern Vtx object_okuta_Vtx_001690[];
extern Gfx object_okuta_0016D0_DL[30];
extern Gfx object_okuta_0017C0_DL[86];
extern Gfx object_okuta_001A70_DL[32];
extern Gfx object_okuta_001B70_DL[18];
extern Gfx object_okuta_001C00_DL[19];
extern Gfx object_okuta_001C98_DL[18];
extern Gfx object_okuta_001D28_DL[18];
extern Gfx object_okuta_001DB8_DL[19];
extern Gfx object_okuta_001E50_DL[18];
extern Gfx object_okuta_001EE0_DL[18];
extern Gfx object_okuta_001F70_DL[19];
extern Gfx object_okuta_002008_DL[18];
extern Gfx object_okuta_002098_DL[18];
extern Gfx object_okuta_002128_DL[19];
extern Gfx object_okuta_0021C0_DL[18];
#define gOctorokRoughSkinTex_WIDTH 16
#define gOctorokRoughSkinTex_HEIGHT 16
extern u64 gOctorokRoughSkinTex[TEX_LEN(u64, gOctorokRoughSkinTex_WIDTH, gOctorokRoughSkinTex_HEIGHT, 16)];
#define gOctorokStripesTex_WIDTH 8
#define gOctorokStripesTex_HEIGHT 16
extern u64 gOctorokStripesTex[TEX_LEN(u64, gOctorokStripesTex_WIDTH, gOctorokStripesTex_HEIGHT, 16)];
#define gOctorokScalesTex_WIDTH 16
#define gOctorokScalesTex_HEIGHT 16
extern u64 gOctorokScalesTex[TEX_LEN(u64, gOctorokScalesTex_WIDTH, gOctorokScalesTex_HEIGHT, 16)];
#define gOctorokSnoutConnectionTex_WIDTH 8
#define gOctorokSnoutConnectionTex_HEIGHT 8
extern u64 gOctorokSnoutConnectionTex[TEX_LEN(u64, gOctorokSnoutConnectionTex_WIDTH, gOctorokSnoutConnectionTex_HEIGHT, 16)];
#define gOctorokMouthTex_WIDTH 8
#define gOctorokMouthTex_HEIGHT 16
extern u64 gOctorokMouthTex[TEX_LEN(u64, gOctorokMouthTex_WIDTH, gOctorokMouthTex_HEIGHT, 16)];
#define gOctorokArmTex_WIDTH 16
#define gOctorokArmTex_HEIGHT 32
extern u64 gOctorokArmTex[TEX_LEN(u64, gOctorokArmTex_WIDTH, gOctorokArmTex_HEIGHT, 16)];
#define gOctorokFinTex_WIDTH 16
#define gOctorokFinTex_HEIGHT 16
extern u64 gOctorokFinTex[TEX_LEN(u64, gOctorokFinTex_WIDTH, gOctorokFinTex_HEIGHT, 16)];
#define gOctorokEyeTex_WIDTH 16
#define gOctorokEyeTex_HEIGHT 16
extern u64 gOctorokEyeTex[TEX_LEN(u64, gOctorokEyeTex_WIDTH, gOctorokEyeTex_HEIGHT, 16)];
#define gOctorokFadeToBlackTex_WIDTH 8
#define gOctorokFadeToBlackTex_HEIGHT 8
extern u64 gOctorokFadeToBlackTex[TEX_LEN(u64, gOctorokFadeToBlackTex_WIDTH, gOctorokFadeToBlackTex_HEIGHT, 16)];
#define gOctorokProjectileTex_WIDTH 16
#define gOctorokProjectileTex_HEIGHT 16
extern u64 gOctorokProjectileTex[TEX_LEN(u64, gOctorokProjectileTex_WIDTH, gOctorokProjectileTex_HEIGHT, 16)];
extern Vtx gOctorokProjectileVtx[];
extern Gfx gOctorokProjectileDL[18];
extern StandardLimb object_okuta_003410_Limb;
extern StandardLimb object_okuta_00341C_Limb;
extern StandardLimb object_okuta_003428_Limb;
extern StandardLimb object_okuta_003434_Limb;
extern StandardLimb object_okuta_003440_Limb;
extern StandardLimb object_okuta_00344C_Limb;
extern StandardLimb object_okuta_003458_Limb;
extern StandardLimb object_okuta_003464_Limb;
extern StandardLimb object_okuta_003470_Limb;
extern StandardLimb object_okuta_00347C_Limb;
extern StandardLimb object_okuta_003488_Limb;
extern StandardLimb object_okuta_003494_Limb;
extern StandardLimb object_okuta_0034A0_Limb;
extern StandardLimb object_okuta_0034AC_Limb;
extern StandardLimb object_okuta_0034B8_Limb;
extern StandardLimb object_okuta_0034C4_Limb;
extern StandardLimb object_okuta_0034D0_Limb;
extern StandardLimb object_okuta_0034DC_Limb;
extern StandardLimb object_okuta_0034E8_Limb;
extern StandardLimb object_okuta_0034F4_Limb;
extern StandardLimb object_okuta_003500_Limb;
extern StandardLimb object_okuta_00350C_Limb;
extern StandardLimb object_okuta_003518_Limb;
extern StandardLimb object_okuta_003524_Limb;
extern StandardLimb object_okuta_003530_Limb;
extern StandardLimb object_okuta_00353C_Limb;
extern StandardLimb object_okuta_003548_Limb;
extern StandardLimb object_okuta_003554_Limb;
extern StandardLimb object_okuta_003560_Limb;
extern StandardLimb object_okuta_00356C_Limb;
extern StandardLimb object_okuta_003578_Limb;
extern StandardLimb object_okuta_003584_Limb;
extern StandardLimb object_okuta_003590_Limb;
extern StandardLimb object_okuta_00359C_Limb;
extern StandardLimb object_okuta_0035A8_Limb;
extern StandardLimb object_okuta_0035B4_Limb;
extern StandardLimb object_okuta_0035C0_Limb;
extern void* gOctorokLimbs[];
typedef enum gOctorokSkelLimb {
    /*  0 */ LIMB_OBJECT_OKUTA_003660_NONE,
    /*  1 */ LIMB_OBJECT_OKUTA_003410,
    /*  2 */ LIMB_OBJECT_OKUTA_00341C,
    /*  3 */ LIMB_OBJECT_OKUTA_003428,
    /*  4 */ LIMB_OBJECT_OKUTA_003434,
    /*  5 */ LIMB_OBJECT_OKUTA_003440,
    /*  6 */ LIMB_OBJECT_OKUTA_00344C,
    /*  7 */ LIMB_OBJECT_OKUTA_003458,
    /*  8 */ LIMB_OBJECT_OKUTA_003464,
    /*  9 */ LIMB_OBJECT_OKUTA_003470,
    /* 10 */ LIMB_OBJECT_OKUTA_00347C,
    /* 11 */ LIMB_OBJECT_OKUTA_003488,
    /* 12 */ LIMB_OBJECT_OKUTA_003494,
    /* 13 */ LIMB_OBJECT_OKUTA_0034A0,
    /* 14 */ LIMB_OBJECT_OKUTA_0034AC,
    /* 15 */ LIMB_OBJECT_OKUTA_0034B8,
    /* 16 */ LIMB_OBJECT_OKUTA_0034C4,
    /* 17 */ LIMB_OBJECT_OKUTA_0034D0,
    /* 18 */ LIMB_OBJECT_OKUTA_0034DC,
    /* 19 */ LIMB_OBJECT_OKUTA_0034E8,
    /* 20 */ LIMB_OBJECT_OKUTA_0034F4,
    /* 21 */ LIMB_OBJECT_OKUTA_003500,
    /* 22 */ LIMB_OBJECT_OKUTA_00350C,
    /* 23 */ LIMB_OBJECT_OKUTA_003518,
    /* 24 */ LIMB_OBJECT_OKUTA_003524,
    /* 25 */ LIMB_OBJECT_OKUTA_003530,
    /* 26 */ LIMB_OBJECT_OKUTA_00353C,
    /* 27 */ LIMB_OBJECT_OKUTA_003548,
    /* 28 */ LIMB_OBJECT_OKUTA_003554,
    /* 29 */ LIMB_OBJECT_OKUTA_003560,
    /* 30 */ LIMB_OBJECT_OKUTA_00356C,
    /* 31 */ LIMB_OBJECT_OKUTA_003578,
    /* 32 */ LIMB_OBJECT_OKUTA_003584,
    /* 33 */ LIMB_OBJECT_OKUTA_003590,
    /* 34 */ LIMB_OBJECT_OKUTA_00359C,
    /* 35 */ LIMB_OBJECT_OKUTA_0035A8,
    /* 36 */ LIMB_OBJECT_OKUTA_0035B4,
    /* 37 */ LIMB_OBJECT_OKUTA_0035C0,
    /* 38 */ LIMB_OBJECT_OKUTA_003660_MAX
} gOctorokSkelLimb;
extern SkeletonHeader gOctorokSkel;
extern s16 gOctorokHitFrameData[];
extern JointIndex gOctorokHitJointIndices[];
extern AnimationHeader gOctorokHitAnim;
extern s16 gOctorokAppearFrameData[];
extern JointIndex gOctorokAppearJointIndices[];
extern AnimationHeader gOctorokAppearAnim;

#endif
