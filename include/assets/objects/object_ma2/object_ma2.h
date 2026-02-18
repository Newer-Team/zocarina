#ifndef OBJECT_MA2_H
#define OBJECT_MA2_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gMalonAdultIdleFrameData[];
extern JointIndex gMalonAdultIdleJointIndices[];
extern AnimationHeader gMalonAdultIdleAnim;
//#define gMalonAdultClothesTLUT_TLUT_COUNT 256
extern u64 gMalonAdultClothesTLUT[];
#define gMalonAdultFingersTex_WIDTH 16
#define gMalonAdultFingersTex_HEIGHT 16
extern u64 gMalonAdultFingersTex[TEX_LEN(u64, gMalonAdultFingersTex_WIDTH, gMalonAdultFingersTex_HEIGHT, 16)];
#define gMalonAdultShirtTex_WIDTH 16
#define gMalonAdultShirtTex_HEIGHT 16
extern u64 gMalonAdultShirtTex[TEX_LEN(u64, gMalonAdultShirtTex_WIDTH, gMalonAdultShirtTex_HEIGHT, 8)];
#define gMalonAdultShirtCuffTex_WIDTH 8
#define gMalonAdultShirtCuffTex_HEIGHT 16
extern u64 gMalonAdultShirtCuffTex[TEX_LEN(u64, gMalonAdultShirtCuffTex_WIDTH, gMalonAdultShirtCuffTex_HEIGHT, 8)];
#define gMalonAdultScarfTex_WIDTH 8
#define gMalonAdultScarfTex_HEIGHT 8
extern u64 gMalonAdultScarfTex[TEX_LEN(u64, gMalonAdultScarfTex_WIDTH, gMalonAdultScarfTex_HEIGHT, 8)];
#define gMalonBowserTex_WIDTH 16
#define gMalonBowserTex_HEIGHT 32
extern u64 gMalonBowserTex[TEX_LEN(u64, gMalonBowserTex_WIDTH, gMalonBowserTex_HEIGHT, 16)];
#define gMalonAdultMiddleDressTex_WIDTH 16
#define gMalonAdultMiddleDressTex_HEIGHT 16
extern u64 gMalonAdultMiddleDressTex[TEX_LEN(u64, gMalonAdultMiddleDressTex_WIDTH, gMalonAdultMiddleDressTex_HEIGHT, 8)];
#define gMalonAdultFrontDressTex_WIDTH 16
#define gMalonAdultFrontDressTex_HEIGHT 32
extern u64 gMalonAdultFrontDressTex[TEX_LEN(u64, gMalonAdultFrontDressTex_WIDTH, gMalonAdultFrontDressTex_HEIGHT, 16)];
#define gMalonAdultDressPatternTex_WIDTH 16
#define gMalonAdultDressPatternTex_HEIGHT 32
extern u64 gMalonAdultDressPatternTex[TEX_LEN(u64, gMalonAdultDressPatternTex_WIDTH, gMalonAdultDressPatternTex_HEIGHT, 8)];
#define gMalonAdultBootTex_WIDTH 64
#define gMalonAdultBootTex_HEIGHT 16
extern u64 gMalonAdultBootTex[TEX_LEN(u64, gMalonAdultBootTex_WIDTH, gMalonAdultBootTex_HEIGHT, 8)];
#define gMalonAdultBeltTex_WIDTH 32
#define gMalonAdultBeltTex_HEIGHT 16
extern u64 gMalonAdultBeltTex[TEX_LEN(u64, gMalonAdultBeltTex_WIDTH, gMalonAdultBeltTex_HEIGHT, 8)];
//#define gMalonAdultHairTLUT_TLUT_COUNT 96
extern u64 gMalonAdultHairTLUT[];
//#define gMalonAdultFaceTLUT_TLUT_COUNT 256
extern u64 gMalonAdultFaceTLUT[];
#define gMalonAdultGradientTex_WIDTH 8
#define gMalonAdultGradientTex_HEIGHT 8
extern u64 gMalonAdultGradientTex[TEX_LEN(u64, gMalonAdultGradientTex_WIDTH, gMalonAdultGradientTex_HEIGHT, 16)];
#define gMalonAdultNoseTex_WIDTH 8
#define gMalonAdultNoseTex_HEIGHT 8
extern u64 gMalonAdultNoseTex[TEX_LEN(u64, gMalonAdultNoseTex_WIDTH, gMalonAdultNoseTex_HEIGHT, 16)];
#define gMalonAdultEarTex_WIDTH 16
#define gMalonAdultEarTex_HEIGHT 16
extern u64 gMalonAdultEarTex[TEX_LEN(u64, gMalonAdultEarTex_WIDTH, gMalonAdultEarTex_HEIGHT, 16)];
#define gMalonAdultHairTex_WIDTH 16
#define gMalonAdultHairTex_HEIGHT 16
extern u64 gMalonAdultHairTex[TEX_LEN(u64, gMalonAdultHairTex_WIDTH, gMalonAdultHairTex_HEIGHT, 8)];
#define gMalonAdultEyeOpenTex_WIDTH 32
#define gMalonAdultEyeOpenTex_HEIGHT 32
extern u64 gMalonAdultEyeOpenTex[TEX_LEN(u64, gMalonAdultEyeOpenTex_WIDTH, gMalonAdultEyeOpenTex_HEIGHT, 8)];
#define gMalonAdultMouthNeutralTex_WIDTH 32
#define gMalonAdultMouthNeutralTex_HEIGHT 16
extern u64 gMalonAdultMouthNeutralTex[TEX_LEN(u64, gMalonAdultMouthNeutralTex_WIDTH, gMalonAdultMouthNeutralTex_HEIGHT, 8)];
#define gMalonAdultBasketTex_WIDTH 8
#define gMalonAdultBasketTex_HEIGHT 16
extern u64 gMalonAdultBasketTex[TEX_LEN(u64, gMalonAdultBasketTex_WIDTH, gMalonAdultBasketTex_HEIGHT, 16)];
#define gMalonAdultEyeHalfTex_WIDTH 32
#define gMalonAdultEyeHalfTex_HEIGHT 32
extern u64 gMalonAdultEyeHalfTex[TEX_LEN(u64, gMalonAdultEyeHalfTex_WIDTH, gMalonAdultEyeHalfTex_HEIGHT, 8)];
#define gMalonAdultEyeClosedTex_WIDTH 32
#define gMalonAdultEyeClosedTex_HEIGHT 32
extern u64 gMalonAdultEyeClosedTex[TEX_LEN(u64, gMalonAdultEyeClosedTex_WIDTH, gMalonAdultEyeClosedTex_HEIGHT, 8)];
#define gMalonAdultBasketInsideTex_WIDTH 8
#define gMalonAdultBasketInsideTex_HEIGHT 16
extern u64 gMalonAdultBasketInsideTex[TEX_LEN(u64, gMalonAdultBasketInsideTex_WIDTH, gMalonAdultBasketInsideTex_HEIGHT, 16)];
#define gMalonAdultMouthSadTex_WIDTH 32
#define gMalonAdultMouthSadTex_HEIGHT 16
extern u64 gMalonAdultMouthSadTex[TEX_LEN(u64, gMalonAdultMouthSadTex_WIDTH, gMalonAdultMouthSadTex_HEIGHT, 8)];
#define gMalonAdultMouthHappyTex_WIDTH 32
#define gMalonAdultMouthHappyTex_HEIGHT 16
extern u64 gMalonAdultMouthHappyTex[TEX_LEN(u64, gMalonAdultMouthHappyTex_WIDTH, gMalonAdultMouthHappyTex_HEIGHT, 8)];
extern Vtx gMalonAdultHeadVtx[];
extern Vtx gMalonAdultBasketVtx[];
extern Gfx gMalonAdultHeadDL[264];
extern Gfx gMalonAdultBasketDL[59];
extern Vtx gMalonAdultLeftHandVtx[];
extern Vtx gMalonAdultLeftArmVtx[];
extern Vtx gMalonAdultLeftShoulderVtx[];
extern Vtx gMalonAdultRightHandVtx[];
extern Vtx gMalonAdultRightArmVtx[];
extern Vtx gMalonAdultRightShoulderVtx[];
extern Vtx gMalonAdultChestAndNeckVtx[];
extern Vtx gMalonAdultDressVtx[];
extern Vtx gMalonAdultLeftFootVtx[];
extern Vtx gMalonAdultLeftLegVtx[];
extern Vtx gMalonAdultLeftThighVtx[];
extern Vtx gMalonAdultRightFootVtx[];
extern Vtx gMalonAdultRightLegVtx[];
extern Vtx gMalonAdultRightThighVtx[];
extern Vtx gMalonAdultTorsoVtx[];
extern Gfx gMalonAdultChestAndNeckDL[131];
extern Gfx gMalonAdultRightShoulderDL[70];
extern Gfx gMalonAdultRightArmDL[31];
extern Gfx gMalonAdultRightHandDL[51];
extern Gfx gMalonAdultLeftShoulderDL[70];
extern Gfx gMalonAdultLeftArmDL[31];
extern Gfx gMalonAdultLeftHandDL[51];
extern Gfx gMalonAdultDressDL[70];
extern Gfx gMalonAdultTorsoDL[78];
extern Gfx gMalonAdultRightThighDL[11];
extern Gfx gMalonAdultRightLegDL[30];
extern Gfx gMalonAdultRightFootDL[36];
extern Gfx gMalonAdultLeftThighDL[11];
extern Gfx gMalonAdultLeftLegDL[30];
extern Gfx gMalonAdultLeftFootDL[36];
extern StandardLimb gMalonAdultRootLimb;
extern StandardLimb gMalonAdultLowerControlLimb;
extern StandardLimb gMalonAdultLeftThighLimb;
extern StandardLimb gMalonAdultLeftLegLimb;
extern StandardLimb gMalonAdultLeftFootLimb;
extern StandardLimb gMalonAdultRightThighLimb;
extern StandardLimb gMalonAdultRightLegLimb;
extern StandardLimb gMalonAdultRightFootLimb;
extern StandardLimb gMalonAdultTorsoLimb;
extern StandardLimb gMalonAdultDressLimb;
extern StandardLimb gMalonAdultChestAndNeckLimb;
extern StandardLimb gMalonAdultLeftShoulderLimb;
extern StandardLimb gMalonAdultLeftArmLimb;
extern StandardLimb gMalonAdultLeftHandLimb;
extern StandardLimb gMalonAdultRightShoulderLimb;
extern StandardLimb gMalonAdultRightArmLimb;
extern StandardLimb gMalonAdultRightHandLimb;
extern StandardLimb gMalonAdultHeadLimb;
extern void* gMalonAdultLimbs[];
typedef enum MalonAdultLimb {
    /*  0 */ MALON_ADULT_LIMB_NONE,
    /*  1 */ MALON_ADULT_LIMB_ROOT,
    /*  2 */ MALON_ADULT_LIMB_LOWER_CONTROL,
    /*  3 */ MALON_ADULT_LIMB_LEFT_THIGH,
    /*  4 */ MALON_ADULT_LIMB_LEFT_LEG,
    /*  5 */ MALON_ADULT_LIMB_LEFT_FOOT,
    /*  6 */ MALON_ADULT_LIMB_RIGHT_THIGH,
    /*  7 */ MALON_ADULT_LIMB_RIGHT_LEG,
    /*  8 */ MALON_ADULT_LIMB_RIGHT_FOOT,
    /*  9 */ MALON_ADULT_LIMB_TORSO,
    /* 10 */ MALON_ADULT_LIMB_DRESS,
    /* 11 */ MALON_ADULT_LIMB_CHEST_AND_NECK,
    /* 12 */ MALON_ADULT_LIMB_LEFT_SHOULDER,
    /* 13 */ MALON_ADULT_LIMB_LEFT_ARM,
    /* 14 */ MALON_ADULT_LIMB_LEFT_HAND,
    /* 15 */ MALON_ADULT_LIMB_RIGHT_SHOULDER,
    /* 16 */ MALON_ADULT_LIMB_RIGHT_ARM,
    /* 17 */ MALON_ADULT_LIMB_RIGHT_HAND,
    /* 18 */ MALON_ADULT_LIMB_HEAD,
    /* 19 */ MALON_ADULT_LIMB_MAX
} MalonAdultLimb;
extern FlexSkeletonHeader gMalonAdultSkel;
extern s16 gMalonAdultSingToIdleFrameData[];
extern JointIndex gMalonAdultSingToIdleJointIndices[];
extern AnimationHeader gMalonAdultSingToIdleAnim;
extern s16 gMalonAdultStandStillFrameData[];
extern JointIndex gMalonAdultStandStillJointIndices[];
extern AnimationHeader gMalonAdultStandStillAnim;
extern s16 gMalonAdultSingFrameData[];
extern JointIndex gMalonAdultSingJointIndices[];
extern AnimationHeader gMalonAdultSingAnim;

#endif
