#ifndef OBJECT_RU2_H
#define OBJECT_RU2_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gAdultRutoCrossingArmsFrameData[];
extern JointIndex gAdultRutoCrossingArmsJointIndices[];
extern AnimationHeader gAdultRutoCrossingArmsAnim;
extern s16 gAdultRutoIdleFrameData[];
extern JointIndex gAdultRutoIdleJointIndices[];
extern AnimationHeader gAdultRutoIdleAnim;
//#define gAdultRutoTLUT1_TLUT_COUNT 144
extern u64 gAdultRutoTLUT1[];
#define gAdultRutoEyeOpenTex_WIDTH 32
#define gAdultRutoEyeOpenTex_HEIGHT 32
extern u64 gAdultRutoEyeOpenTex[TEX_LEN(u64, gAdultRutoEyeOpenTex_WIDTH, gAdultRutoEyeOpenTex_HEIGHT, 16)];
#define gAdultRutoSkinGradient_WIDTH 8
#define gAdultRutoSkinGradient_HEIGHT 8
extern u64 gAdultRutoSkinGradient[TEX_LEN(u64, gAdultRutoSkinGradient_WIDTH, gAdultRutoSkinGradient_HEIGHT, 8)];
#define gAdultRutoEar1Tex_WIDTH 16
#define gAdultRutoEar1Tex_HEIGHT 16
extern u64 gAdultRutoEar1Tex[TEX_LEN(u64, gAdultRutoEar1Tex_WIDTH, gAdultRutoEar1Tex_HEIGHT, 8)];
#define gAdultRutoHeadGradientTex_WIDTH 16
#define gAdultRutoHeadGradientTex_HEIGHT 16
extern u64 gAdultRutoHeadGradientTex[TEX_LEN(u64, gAdultRutoHeadGradientTex_WIDTH, gAdultRutoHeadGradientTex_HEIGHT, 8)];
#define gAdultRutoHeadHoleTex_WIDTH 8
#define gAdultRutoHeadHoleTex_HEIGHT 8
extern u64 gAdultRutoHeadHoleTex[TEX_LEN(u64, gAdultRutoHeadHoleTex_WIDTH, gAdultRutoHeadHoleTex_HEIGHT, 8)];
#define gAdultRutoMouthTex_WIDTH 32
#define gAdultRutoMouthTex_HEIGHT 32
extern u64 gAdultRutoMouthTex[TEX_LEN(u64, gAdultRutoMouthTex_WIDTH, gAdultRutoMouthTex_HEIGHT, 16)];
#define gAdultRutoTex_21A0_WIDTH 8
#define gAdultRutoTex_21A0_HEIGHT 8
extern u64 gAdultRutoTex_21A0[TEX_LEN(u64, gAdultRutoTex_21A0_WIDTH, gAdultRutoTex_21A0_HEIGHT, 8)];
#define gAdultRutoEar2Tex_WIDTH 16
#define gAdultRutoEar2Tex_HEIGHT 16
extern u64 gAdultRutoEar2Tex[TEX_LEN(u64, gAdultRutoEar2Tex_WIDTH, gAdultRutoEar2Tex_HEIGHT, 8)];
#define gAdultRutoEyeHalfTex_WIDTH 32
#define gAdultRutoEyeHalfTex_HEIGHT 32
extern u64 gAdultRutoEyeHalfTex[TEX_LEN(u64, gAdultRutoEyeHalfTex_WIDTH, gAdultRutoEyeHalfTex_HEIGHT, 16)];
#define gAdultRutoEyeClosedTex_WIDTH 32
#define gAdultRutoEyeClosedTex_HEIGHT 32
extern u64 gAdultRutoEyeClosedTex[TEX_LEN(u64, gAdultRutoEyeClosedTex_WIDTH, gAdultRutoEyeClosedTex_HEIGHT, 16)];
#define gAdultRutoEarringTex_WIDTH 8
#define gAdultRutoEarringTex_HEIGHT 16
extern u64 gAdultRutoEarringTex[TEX_LEN(u64, gAdultRutoEarringTex_WIDTH, gAdultRutoEarringTex_HEIGHT, 16)];
extern Vtx gAdultRutoHeadVtx[];
extern Gfx gAdultRutoHeadDL[162];
//#define gAdultRutoTLUT2_TLUT_COUNT 256
extern u64 gAdultRutoTLUT2[];
#define gAdultRutoTailGradientTex_WIDTH 8
#define gAdultRutoTailGradientTex_HEIGHT 8
extern u64 gAdultRutoTailGradientTex[TEX_LEN(u64, gAdultRutoTailGradientTex_WIDTH, gAdultRutoTailGradientTex_HEIGHT, 8)];
#define gAdultRutoTex_4600_WIDTH 8
#define gAdultRutoTex_4600_HEIGHT 8
extern u64 gAdultRutoTex_4600[TEX_LEN(u64, gAdultRutoTex_4600_WIDTH, gAdultRutoTex_4600_HEIGHT, 8)];
#define gAdultRutoBackOfHandTex_WIDTH 16
#define gAdultRutoBackOfHandTex_HEIGHT 16
extern u64 gAdultRutoBackOfHandTex[TEX_LEN(u64, gAdultRutoBackOfHandTex_WIDTH, gAdultRutoBackOfHandTex_HEIGHT, 8)];
#define gAdultRutoTex_4740_WIDTH 16
#define gAdultRutoTex_4740_HEIGHT 16
extern u64 gAdultRutoTex_4740[TEX_LEN(u64, gAdultRutoTex_4740_WIDTH, gAdultRutoTex_4740_HEIGHT, 8)];
#define gAdultRutoSkinPattern1Tex_WIDTH 32
#define gAdultRutoSkinPattern1Tex_HEIGHT 64
extern u64 gAdultRutoSkinPattern1Tex[TEX_LEN(u64, gAdultRutoSkinPattern1Tex_WIDTH, gAdultRutoSkinPattern1Tex_HEIGHT, 8)];
#define gAdultRutoSkinPattern2Tex_WIDTH 32
#define gAdultRutoSkinPattern2Tex_HEIGHT 32
extern u64 gAdultRutoSkinPattern2Tex[TEX_LEN(u64, gAdultRutoSkinPattern2Tex_WIDTH, gAdultRutoSkinPattern2Tex_HEIGHT, 8)];
#define gAdultRutoTex_5440_WIDTH 8
#define gAdultRutoTex_5440_HEIGHT 8
extern u64 gAdultRutoTex_5440[TEX_LEN(u64, gAdultRutoTex_5440_WIDTH, gAdultRutoTex_5440_HEIGHT, 8)];
#define gAdultRutoTex_5480_WIDTH 16
#define gAdultRutoTex_5480_HEIGHT 16
extern u64 gAdultRutoTex_5480[TEX_LEN(u64, gAdultRutoTex_5480_WIDTH, gAdultRutoTex_5480_HEIGHT, 8)];
#define gAdultRutoTex_5580_WIDTH 8
#define gAdultRutoTex_5580_HEIGHT 8
extern u64 gAdultRutoTex_5580[TEX_LEN(u64, gAdultRutoTex_5580_WIDTH, gAdultRutoTex_5580_HEIGHT, 8)];
#define object_ru2_0055C0_Tex_WIDTH 8
#define object_ru2_0055C0_Tex_HEIGHT 32
extern u64 object_ru2_0055C0_Tex[TEX_LEN(u64, object_ru2_0055C0_Tex_WIDTH, object_ru2_0055C0_Tex_HEIGHT, 8)];
#define object_ru2_0056C0_Tex_WIDTH 32
#define object_ru2_0056C0_Tex_HEIGHT 32
extern u64 object_ru2_0056C0_Tex[TEX_LEN(u64, object_ru2_0056C0_Tex_WIDTH, object_ru2_0056C0_Tex_HEIGHT, 16)];
extern Vtx gAdultRutoLeftHandVtx[];
extern Vtx gAdultRutoLeftForearmVtx[];
extern Vtx gAdultRutoLeftLowerWingVtx[];
extern Vtx gAdultRutoLeftUpperWingVtx[];
extern Vtx gAdultRutoLeftUpperArmVtx[];
extern Vtx gAdultRutoRightHandVtx[];
extern Vtx gAdultRutoRightForearmVtx[];
extern Vtx gAdultRutoRightLowerWingVtx[];
extern Vtx gAdultRutoRightUpperWingVtx[];
extern Vtx gAdultRutoRightUpperArmVtx[];
extern Vtx gAdultRutoTorsoVtx[];
extern Vtx gAdultRutoLeftFootVtx[];
extern Vtx gAdultRutoLeftLegVtx[];
extern Vtx gAdultRutoLeftTailVtx[];
extern Vtx gAdultRutoLeftThighVtx[];
extern Vtx gAdultRutoRightFootVtx[];
extern Vtx gAdultRutoRightLegVtx[];
extern Vtx gAdultRutoRightTailVtx[];
extern Vtx gAdultRutoRightThighVtx[];
extern Vtx gAdultRutoWaistVtx[];
extern Gfx gAdultRutoWaistDL[136];
extern Gfx gAdultRutoTorsoDL[298];
extern Gfx gAdultRutoRightUpperArmDL[99];
extern Gfx gAdultRutoRightForearmDL[61];
extern Gfx gAdultRutoRightHandDL[122];
extern Gfx gAdultRutoRightUpperWingDL[28];
extern Gfx gAdultRutoRightLowerWingDL[36];
extern Gfx gAdultRutoLeftUpperArmDL[99];
extern Gfx gAdultRutoLeftForearmDL[61];
extern Gfx gAdultRutoLeftHandDL[122];
extern Gfx gAdultRutoLeftUpperWingDL[28];
extern Gfx gAdultRutoLeftLowerWingDL[36];
extern Gfx gAdultRutoRightThighDL[133];
extern Gfx gAdultRutoRightTailDL[38];
extern Gfx gAdultRutoRightLegDL[126];
extern Gfx gAdultRutoRightFootDL[111];
extern Gfx gAdultRutoLeftThighDL[133];
extern Gfx gAdultRutoLeftTailDL[38];
extern Gfx gAdultRutoLeftLegDL[126];
extern Gfx gAdultRutoLeftFootDL[111];
extern StandardLimb gAdultRutoRootLimb;
extern StandardLimb gAdultRutoLeftThighLimb;
extern StandardLimb gAdultRutoLeftLegLimb;
extern StandardLimb gAdultRutoLeftFootLimb;
extern StandardLimb gAdultRutoLeftTailLimb;
extern StandardLimb gAdultRutoRightThighLimb;
extern StandardLimb gAdultRutoRightLegLimb;
extern StandardLimb gAdultRutoRightFootLimb;
extern StandardLimb gAdultRutoRightTailLimb;
extern StandardLimb gAdultRutoTorsoLimb;
extern StandardLimb gAdultRutoLeftUpperArmLimb;
extern StandardLimb gAdultRutoLeftUpperWingLimb;
extern StandardLimb gAdultRutoLeftLowerWingLimb;
extern StandardLimb gAdultRutoLeftForearmLimb;
extern StandardLimb gAdultRutoLeftHandLimb;
extern StandardLimb gAdultRutoRightUpperArmLimb;
extern StandardLimb gAdultRutoRightUpperWingLimb;
extern StandardLimb gAdultRutoRightLowerWingLimb;
extern StandardLimb gAdultRutoRightForearmLimb;
extern StandardLimb gAdultRutoRightHandLimb;
extern StandardLimb gAdultRutoHeadLimb;
extern StandardLimb gAdultRutoWaistLimb;
extern void* gAdultRutoLimbs[];
typedef enum gAdultRutoSkelLimb {
    /*  0 */ LIMB_OBJECT_RU2_00C700_NONE,
    /*  1 */ LIMB_OBJECT_RU2_00C5A0,
    /*  2 */ LIMB_OBJECT_RU2_00C5AC,
    /*  3 */ LIMB_OBJECT_RU2_00C5B8,
    /*  4 */ LIMB_OBJECT_RU2_00C5C4,
    /*  5 */ LIMB_OBJECT_RU2_00C5D0,
    /*  6 */ LIMB_OBJECT_RU2_00C5DC,
    /*  7 */ LIMB_OBJECT_RU2_00C5E8,
    /*  8 */ LIMB_OBJECT_RU2_00C5F4,
    /*  9 */ LIMB_OBJECT_RU2_00C600,
    /* 10 */ LIMB_OBJECT_RU2_00C60C,
    /* 11 */ LIMB_OBJECT_RU2_00C618,
    /* 12 */ LIMB_OBJECT_RU2_00C624,
    /* 13 */ LIMB_OBJECT_RU2_00C630,
    /* 14 */ LIMB_OBJECT_RU2_00C63C,
    /* 15 */ LIMB_OBJECT_RU2_00C648,
    /* 16 */ LIMB_OBJECT_RU2_00C654,
    /* 17 */ LIMB_OBJECT_RU2_00C660,
    /* 18 */ LIMB_OBJECT_RU2_00C66C,
    /* 19 */ LIMB_OBJECT_RU2_00C678,
    /* 20 */ LIMB_OBJECT_RU2_00C684,
    /* 21 */ LIMB_OBJECT_RU2_00C690,
    /* 22 */ LIMB_OBJECT_RU2_00C69C,
    /* 23 */ LIMB_OBJECT_RU2_00C700_MAX
} gAdultRutoSkelLimb;
extern FlexSkeletonHeader gAdultRutoSkel;
extern s16 gAdultRutoRaisingArmsUpFrameData[];
extern JointIndex gAdultRutoRaisingArmsUpJointIndices[];
extern AnimationHeader gAdultRutoRaisingArmsUpAnim;
extern s16 gAdultRutoHeadTurnDownLeftFrameData[];
extern JointIndex gAdultRutoHeadTurnDownLeftJointIndices[];
extern AnimationHeader gAdultRutoHeadTurnDownLeftAnim;
extern s16 gAdultRutoIdleHandsOnHipsFrameData[];
extern JointIndex gAdultRutoIdleHandsOnHipsJointIndices[];
extern AnimationHeader gAdultRutoIdleHandsOnHipsAnim;
extern s16 gAdultRutoLookingDownLeftFrameData[];
extern JointIndex gAdultRutoLookingDownLeftJointIndices[];
extern AnimationHeader gAdultRutoLookingDownLeftAnim;
extern s16 gAdultRutoSwimmingUpFrameData[];
extern JointIndex gAdultRutoSwimmingUpJointIndices[];
extern AnimationHeader gAdultRutoSwimmingUpAnim;

#endif
