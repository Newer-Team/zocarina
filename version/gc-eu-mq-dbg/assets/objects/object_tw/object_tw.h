#ifndef OBJECT_TW_H
#define OBJECT_TW_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gTwinrovaKotakeKoumeIdleLoopFrameData[];
extern JointIndex gTwinrovaKotakeKoumeIdleLoopJointIndices[];
extern AnimationHeader gTwinrovaKotakeKoumeIdleLoopAnim;
extern s16 gTwinrovaKotakeKoumeIdleEndFrameData[];
extern JointIndex gTwinrovaKotakeKoumeIdleEndJointIndices[];
extern AnimationHeader gTwinrovaKotakeKoumeIdleEndAnim;
extern s16 gTwinrovaKotakeKoumeBickerFrameData[];
extern JointIndex gTwinrovaKotakeKoumeBickerJointIndices[];
extern AnimationHeader gTwinrovaKotakeKoumeBickerAnim;
extern s16 gTwinrovaKotakeKoumeFloatLookUpFrameData[];
extern JointIndex gTwinrovaKotakeKoumeFloatLookUpJointIndices[];
extern AnimationHeader gTwinrovaKotakeKoumeFloatLookUpAnim;
extern s16 gTwinrovaKotakeKoumeFloatLookForwardFrameData[];
extern JointIndex gTwinrovaKotakeKoumeFloatLookForwardJointIndices[];
extern AnimationHeader gTwinrovaKotakeKoumeFloatLookForwardAnim;
extern s16 gTwinrovaKotakeKoumeShakeHandFrameData[];
extern JointIndex gTwinrovaKotakeKoumeShakeHandJointIndices[];
extern AnimationHeader gTwinrovaKotakeKoumeShakeHandAnim;
extern s16 gTwinrovaKotakeKoumeAttackStartFrameData[];
extern JointIndex gTwinrovaKotakeKoumeAttackStartJointIndices[];
extern AnimationHeader gTwinrovaKotakeKoumeAttackStartAnim;
extern s16 gTwinrovaKotakeKoumeAttackLoopFrameData[];
extern JointIndex gTwinrovaKotakeKoumeAttackLoopJointIndices[];
extern AnimationHeader gTwinrovaKotakeKoumeAttackLoopAnim;
extern s16 gTwinrovaKotakeKoumeAttackEndFrameData[];
extern JointIndex gTwinrovaKotakeKoumeAttackEndJointIndices[];
extern AnimationHeader gTwinrovaKotakeKoumeAttackEndAnim;
extern s16 gTwinrovaKotakeKoumeDamageStartFrameData[];
extern JointIndex gTwinrovaKotakeKoumeDamageStartJointIndices[];
extern AnimationHeader gTwinrovaKotakeKoumeDamageStartAnim;
extern s16 gTwinrovaKotakeKoumeDamageEndFrameData[];
extern JointIndex gTwinrovaKotakeKoumeDamageEndJointIndices[];
extern AnimationHeader gTwinrovaKotakeKoumeDamageEndAnim;
extern s16 gTwinrovaKotakeKoumeFlyFrameData[];
extern JointIndex gTwinrovaKotakeKoumeFlyJointIndices[];
extern AnimationHeader gTwinrovaKotakeKoumeFlyAnim;
extern StandardLimb gTwinrovaKotakePelvisLimb;
extern StandardLimb gTwinrovaKotakeLeftThighLimb;
extern StandardLimb gTwinrovaKotakeLeftShinLimb;
extern StandardLimb gTwinrovaKotakeLeftFootLimb;
extern StandardLimb gTwinrovaKotakeRightThighLimb;
extern StandardLimb gTwinrovaKotakeRightShinLimb;
extern StandardLimb gTwinrovaKotakeRightFootLimb;
extern StandardLimb gTwinrovaKotakeTorsoLimb;
extern StandardLimb gTwinrovaKotakeLeftSleeveStartLimb;
extern StandardLimb gTwinrovaKotakeLeftSleeveMidLimb;
extern StandardLimb gTwinrovaKotakeLeftSleeveEndLimb;
extern StandardLimb gTwinrovaKotakeLeftSleeveFrontLimb;
extern StandardLimb gTwinrovaKotakeLeftHandLimb;
extern StandardLimb gTwinrovaKotakeBroomLimb;
extern StandardLimb gTwinrovaKotakeRightSleeveStartLimb;
extern StandardLimb gTwinrovaKotakeRightSleeveMidLimb;
extern StandardLimb gTwinrovaKotakeRightSleeveEndLimb;
extern StandardLimb gTwinrovaKotakeRightSleeveFrontLimb;
extern StandardLimb gTwinrovaKotakeRightHandLimb;
extern StandardLimb gTwinrovaKotakeNeckLimb;
extern StandardLimb gTwinrovaKotakeHeadLimb;
extern StandardLimb gTwinrovaKotakeRightBraidStartLimb;
extern StandardLimb gTwinrovaKotakeRightBraidEndLimb;
extern StandardLimb gTwinrovaKotakeTeethLimb;
extern StandardLimb gTwinrovaKotakeLeftBraidStartLimb;
extern StandardLimb gTwinrovaKotakeLeftBraidEndLimb;
extern void* gTwinrovaKotakeLimbs[];
typedef enum gTwinrovaKotakeSkelLimb {
    /*  0 */ LIMB_OBJECT_TW_0070E0_NONE,
    /*  1 */ LIMB_OBJECT_TW_006F40,
    /*  2 */ LIMB_OBJECT_TW_006F4C,
    /*  3 */ LIMB_OBJECT_TW_006F58,
    /*  4 */ LIMB_OBJECT_TW_006F64,
    /*  5 */ LIMB_OBJECT_TW_006F70,
    /*  6 */ LIMB_OBJECT_TW_006F7C,
    /*  7 */ LIMB_OBJECT_TW_006F88,
    /*  8 */ LIMB_OBJECT_TW_006F94,
    /*  9 */ LIMB_OBJECT_TW_006FA0,
    /* 10 */ LIMB_OBJECT_TW_006FAC,
    /* 11 */ LIMB_OBJECT_TW_006FB8,
    /* 12 */ LIMB_OBJECT_TW_006FC4,
    /* 13 */ LIMB_OBJECT_TW_006FD0,
    /* 14 */ LIMB_OBJECT_TW_006FDC,
    /* 15 */ LIMB_OBJECT_TW_006FE8,
    /* 16 */ LIMB_OBJECT_TW_006FF4,
    /* 17 */ LIMB_OBJECT_TW_007000,
    /* 18 */ LIMB_OBJECT_TW_00700C,
    /* 19 */ LIMB_OBJECT_TW_007018,
    /* 20 */ LIMB_OBJECT_TW_007024,
    /* 21 */ LIMB_OBJECT_TW_007030,
    /* 22 */ LIMB_OBJECT_TW_00703C,
    /* 23 */ LIMB_OBJECT_TW_007048,
    /* 24 */ LIMB_OBJECT_TW_007054,
    /* 25 */ LIMB_OBJECT_TW_007060,
    /* 26 */ LIMB_OBJECT_TW_00706C,
    /* 27 */ LIMB_OBJECT_TW_0070E0_MAX
} gTwinrovaKotakeSkelLimb;
extern FlexSkeletonHeader gTwinrovaKotakeSkel;
extern s16 gTwinrovaKotakeKoumeChargeUpAttackStartFrameData[];
extern JointIndex gTwinrovaKotakeKoumeChargeUpAttackStartJointIndices[];
extern AnimationHeader gTwinrovaKotakeKoumeChargeUpAttackStartAnim;
extern s16 gTwinrovaKotakeKoumeSpinFrameData[];
extern JointIndex gTwinrovaKotakeKoumeSpinJointIndices[];
extern AnimationHeader gTwinrovaKotakeKoumeSpinAnim;
extern s16 gTwinrovaKotakeKoumeLaughFrameData[];
extern JointIndex gTwinrovaKotakeKoumeLaughJointIndices[];
extern AnimationHeader gTwinrovaKotakeKoumeLaughAnim;
extern s16 gTwinrovaKotakeKoumeChargeUpAttackLoopFrameData[];
extern JointIndex gTwinrovaKotakeKoumeChargeUpAttackLoopJointIndices[];
extern AnimationHeader gTwinrovaKotakeKoumeChargeUpAttackLoopAnim;
extern s16 gTwinrovaKotakeKoumeTPoseFrameData[];
extern JointIndex gTwinrovaKotakeKoumeTPoseJointIndices[];
extern AnimationHeader gTwinrovaKotakeKoumeTPoseAnim;
//#define gTwinrovaKoumeKotakeTLUT_TLUT_COUNT 212
extern u64 gTwinrovaKoumeKotakeTLUT[];
#define gTwinrovaKotakeGerudoFabricTex_WIDTH 32
#define gTwinrovaKotakeGerudoFabricTex_HEIGHT 32
extern u64 gTwinrovaKotakeGerudoFabricTex[TEX_LEN(u64, gTwinrovaKotakeGerudoFabricTex_WIDTH, gTwinrovaKotakeGerudoFabricTex_HEIGHT, 16)];
#define gTwinrovaKotakeRobeTex_WIDTH 16
#define gTwinrovaKotakeRobeTex_HEIGHT 16
extern u64 gTwinrovaKotakeRobeTex[TEX_LEN(u64, gTwinrovaKotakeRobeTex_WIDTH, gTwinrovaKotakeRobeTex_HEIGHT, 16)];
#define gTwinrovaRobePatternTex_WIDTH 16
#define gTwinrovaRobePatternTex_HEIGHT 16
extern u64 gTwinrovaRobePatternTex[TEX_LEN(u64, gTwinrovaRobePatternTex_WIDTH, gTwinrovaRobePatternTex_HEIGHT, 16)];
#define gTwinrovaRobeTrimTex_WIDTH 16
#define gTwinrovaRobeTrimTex_HEIGHT 16
extern u64 gTwinrovaRobeTrimTex[TEX_LEN(u64, gTwinrovaRobeTrimTex_WIDTH, gTwinrovaRobeTrimTex_HEIGHT, 16)];
#define gTwinrovaKotakeKoumeEyeOpenTex_WIDTH 32
#define gTwinrovaKotakeKoumeEyeOpenTex_HEIGHT 32
extern u64 gTwinrovaKotakeKoumeEyeOpenTex[TEX_LEN(u64, gTwinrovaKotakeKoumeEyeOpenTex_WIDTH, gTwinrovaKotakeKoumeEyeOpenTex_HEIGHT, 8)];
#define gTwinrovaKotakeKoumeSkinTex_WIDTH 16
#define gTwinrovaKotakeKoumeSkinTex_HEIGHT 8
extern u64 gTwinrovaKotakeKoumeSkinTex[TEX_LEN(u64, gTwinrovaKotakeKoumeSkinTex_WIDTH, gTwinrovaKotakeKoumeSkinTex_HEIGHT, 8)];
#define gTwinrovaKotakeKoumeMouthTex_WIDTH 8
#define gTwinrovaKotakeKoumeMouthTex_HEIGHT 8
extern u64 gTwinrovaKotakeKoumeMouthTex[TEX_LEN(u64, gTwinrovaKotakeKoumeMouthTex_WIDTH, gTwinrovaKotakeKoumeMouthTex_HEIGHT, 8)];
#define gTwinrovaHairTex_WIDTH 8
#define gTwinrovaHairTex_HEIGHT 32
extern u64 gTwinrovaHairTex[TEX_LEN(u64, gTwinrovaHairTex_WIDTH, gTwinrovaHairTex_HEIGHT, 16)];
#define gTwinrovaKotakeKoumeEarTex_WIDTH 8
#define gTwinrovaKotakeKoumeEarTex_HEIGHT 8
extern u64 gTwinrovaKotakeKoumeEarTex[TEX_LEN(u64, gTwinrovaKotakeKoumeEarTex_WIDTH, gTwinrovaKotakeKoumeEarTex_HEIGHT, 8)];
#define gTwinrovaKotakeKoumeFingerTex_WIDTH 8
#define gTwinrovaKotakeKoumeFingerTex_HEIGHT 16
extern u64 gTwinrovaKotakeKoumeFingerTex[TEX_LEN(u64, gTwinrovaKotakeKoumeFingerTex_WIDTH, gTwinrovaKotakeKoumeFingerTex_HEIGHT, 8)];
#define gTwinrovaBroomHandleTex_WIDTH 8
#define gTwinrovaBroomHandleTex_HEIGHT 8
extern u64 gTwinrovaBroomHandleTex[TEX_LEN(u64, gTwinrovaBroomHandleTex_WIDTH, gTwinrovaBroomHandleTex_HEIGHT, 16)];
#define gTwinrovaBroomHeadTex_WIDTH 16
#define gTwinrovaBroomHeadTex_HEIGHT 32
extern u64 gTwinrovaBroomHeadTex[TEX_LEN(u64, gTwinrovaBroomHeadTex_WIDTH, gTwinrovaBroomHeadTex_HEIGHT, 16)];
#define gTwinrovaKotakeKoumeJewelHolderTex_WIDTH 16
#define gTwinrovaKotakeKoumeJewelHolderTex_HEIGHT 8
extern u64 gTwinrovaKotakeKoumeJewelHolderTex[TEX_LEN(u64, gTwinrovaKotakeKoumeJewelHolderTex_WIDTH, gTwinrovaKotakeKoumeJewelHolderTex_HEIGHT, 16)];
#define gTwinrovaKotakeJewelTex_WIDTH 8
#define gTwinrovaKotakeJewelTex_HEIGHT 8
extern u64 gTwinrovaKotakeJewelTex[TEX_LEN(u64, gTwinrovaKotakeJewelTex_WIDTH, gTwinrovaKotakeJewelTex_HEIGHT, 16)];
#define gTwinrovaKotakeKoumeNeckTex_WIDTH 8
#define gTwinrovaKotakeKoumeNeckTex_HEIGHT 8
extern u64 gTwinrovaKotakeKoumeNeckTex[TEX_LEN(u64, gTwinrovaKotakeKoumeNeckTex_WIDTH, gTwinrovaKotakeKoumeNeckTex_HEIGHT, 8)];
#define gTwinrovaKotakeKoumeNostrilsTex_WIDTH 8
#define gTwinrovaKotakeKoumeNostrilsTex_HEIGHT 8
extern u64 gTwinrovaKotakeKoumeNostrilsTex[TEX_LEN(u64, gTwinrovaKotakeKoumeNostrilsTex_WIDTH, gTwinrovaKotakeKoumeNostrilsTex_HEIGHT, 8)];
#define gTwinrovaKotakeKoumeEyeHalfTex_WIDTH 32
#define gTwinrovaKotakeKoumeEyeHalfTex_HEIGHT 32
extern u64 gTwinrovaKotakeKoumeEyeHalfTex[TEX_LEN(u64, gTwinrovaKotakeKoumeEyeHalfTex_WIDTH, gTwinrovaKotakeKoumeEyeHalfTex_HEIGHT, 8)];
#define gTwinrovaKotakeKoumeEyeClosedTex_WIDTH 32
#define gTwinrovaKotakeKoumeEyeClosedTex_HEIGHT 32
extern u64 gTwinrovaKotakeKoumeEyeClosedTex[TEX_LEN(u64, gTwinrovaKotakeKoumeEyeClosedTex_WIDTH, gTwinrovaKotakeKoumeEyeClosedTex_HEIGHT, 8)];
#define gTwinrovaEffectTex_WIDTH 32
#define gTwinrovaEffectTex_HEIGHT 32
extern u64 gTwinrovaEffectTex[TEX_LEN(u64, gTwinrovaEffectTex_WIDTH, gTwinrovaEffectTex_HEIGHT, 8)];
#define gTwinrovaEffectMaskTex_WIDTH 32
#define gTwinrovaEffectMaskTex_HEIGHT 64
extern u64 gTwinrovaEffectMaskTex[TEX_LEN(u64, gTwinrovaEffectMaskTex_WIDTH, gTwinrovaEffectMaskTex_HEIGHT, 4)];
#define gTwinrovaKoumeGerudoFabricTex_WIDTH 32
#define gTwinrovaKoumeGerudoFabricTex_HEIGHT 32
extern u64 gTwinrovaKoumeGerudoFabricTex[TEX_LEN(u64, gTwinrovaKoumeGerudoFabricTex_WIDTH, gTwinrovaKoumeGerudoFabricTex_HEIGHT, 16)];
#define gTwinrovaKoumeJewelTex_WIDTH 8
#define gTwinrovaKoumeJewelTex_HEIGHT 8
extern u64 gTwinrovaKoumeJewelTex[TEX_LEN(u64, gTwinrovaKoumeJewelTex_WIDTH, gTwinrovaKoumeJewelTex_HEIGHT, 16)];
#define gTwinrovaKoumeRobeTex_WIDTH 16
#define gTwinrovaKoumeRobeTex_HEIGHT 16
extern u64 gTwinrovaKoumeRobeTex[TEX_LEN(u64, gTwinrovaKoumeRobeTex_WIDTH, gTwinrovaKoumeRobeTex_HEIGHT, 16)];
extern Vtx gTwinrovaKotakeHeadInvisibleHairVtx[];
extern Vtx gTwinrovaKoumeHeadInvisibleHairVtx[];
extern Vtx gTwinrovaKotakeBroomInvisibleHeadVtx[];
extern Vtx gTwinrovaKoumeBroomInvisibleHeadVtx[];
extern Vtx gTwinrovaKotakeTeethVtx[];
extern Vtx gTwinrovaKotakeRightShinVtx[];
extern Vtx gTwinrovaKotakeLeftShinVtx[];
extern Vtx gTwinrovaKotakeRightFootVtx[];
extern Vtx gTwinrovaKotakeLeftFootVtx[];
extern Vtx gTwinrovaKotakeRightHandVtx[];
extern Vtx gTwinrovaKotakeLeftHandVtx[];
extern Vtx gTwinrovaKoumeRightHandVtx[];
extern Vtx gTwinrovaKoumeLeftHandVtx[];
extern Vtx gTwinrovaKoumeLeftFootVtx[];
extern Vtx gTwinrovaKoumeRightFootVtx[];
extern Vtx gTwinrovaKoumeLeftShinVtx[];
extern Vtx gTwinrovaKoumeRightShinVtx[];
extern Vtx gTwinrovaKoumeTeethVtx[];
extern Vtx gTwinrovaKotakeBroomVtx[];
extern Vtx gTwinrovaKotakeHeadVtx[];
extern Vtx gTwinrovaKoumeBroomVtx[];
extern Vtx gTwinrovaKoumeHeadVtx[];
extern Vtx gTwinrovaKotakeIceHairVtx[];
extern Vtx gTwinrovaKoumeFireHairVtx[];
extern Vtx gTwinrovaKotakeIceBroomHeadOuterVtx[];
extern Vtx gTwinrovaKotakeIceBroomHeadVtx[];
extern Vtx gTwinrovaKotakeFireBroomHeadOuterVtx[];
extern Vtx gTwinrovaKotakeFireBroomHeadVtx[];
extern Gfx gTwinrovaKotakeHeadInvisibleHairDL[191];
extern Gfx gTwinrovaKoumeHeadInvisibleHairDL[191];
extern Gfx gTwinrovaKotakeBroomInvisibleHeadDL[50];
extern Gfx gTwinrovaKoumeBroomInvisibleHeadDL[50];
extern Gfx gTwinrovaKotakeTeethDL[12];
extern Gfx gTwinrovaKotakeRightShinDL[22];
extern Gfx gTwinrovaKotakeLeftShinDL[22];
extern Gfx gTwinrovaKotakeRightFootDL[19];
extern Gfx gTwinrovaKotakeLeftFootDL[19];
extern Gfx gTwinrovaKotakeRightHandDL[45];
extern Gfx gTwinrovaKotakeLeftHandDL[45];
extern Gfx gTwinrovaKoumeRightHandDL[45];
extern Gfx gTwinrovaKoumeLeftHandDL[45];
extern Gfx gTwinrovaKoumeLeftFootDL[19];
extern Gfx gTwinrovaKoumeRightFootDL[19];
extern Gfx gTwinrovaKoumeLeftShinDL[22];
extern Gfx gTwinrovaKoumeRightShinDL[22];
extern Gfx gTwinrovaKoumeTeethDL[12];
extern Gfx gTwinrovaKotakeBroomDL[53];
extern Gfx gTwinrovaKotakeHeadDL[198];
extern Gfx gTwinrovaKoumeBroomDL[53];
extern Gfx gTwinrovaKoumeHeadDL[198];
extern Gfx gTwinrovaKotakeIceHairDL[80];
extern Gfx gTwinrovaKoumeFireHairDL[38];
extern Gfx gTwinrovaKotakeIceBroomHeadDL[32];
extern Gfx gTwinrovaKotakeIceBroomHeadOuterDL[27];
extern Gfx gTwinrovaKotakeFireBroomHeadDL[29];
extern Gfx gTwinrovaKotakeFireBroomHeadOuterDL[29];
extern Vtx gTwinrovaKotakeLeftBraidEndVtx[];
extern Vtx gTwinrovaKotakeLeftBraidStartVtx[];
extern Vtx gTwinrovaKotakeRightBraidEndVtx[];
extern Vtx gTwinrovaKotakeRightBraidStartVtx[];
extern Vtx gTwinrovaKotakeNeckVtx[];
extern Vtx gTwinrovaKotakeLeftSleeveFrontVtx[];
extern Vtx gTwinrovaKotakeLeftSleeveEndVtx[];
extern Vtx gTwinrovaKotakeLeftSleeveMidVtx[];
extern Vtx gTwinrovaKotakeLeftSleeveStartVtx[];
extern Vtx gTwinrovaKotakeRightSleeveFrontVtx[];
extern Vtx gTwinrovaKotakeRightSleeveEndVtx[];
extern Vtx gTwinrovaKotakeRightSleeveMidVtx[];
extern Vtx gTwinrovaKotakeRightSleeveStartVtx[];
extern Vtx gTwinrovaKotakeTorsoVtx[];
extern u8 object_tw_Blob_015200[];
extern Vtx gTwinrovaKotakePelvisVtx[];
extern Gfx gTwinrovaKotakeLeftBraidEndDL[31];
extern Gfx gTwinrovaKotakeLeftBraidStartDL[34];
extern Gfx gTwinrovaKotakeRightBraidEndDL[31];
extern Gfx gTwinrovaKotakeRightBraidStartDL[34];
extern Gfx gTwinrovaKotakeNeckDL[40];
extern Gfx gTwinrovaKotakeRightSleeveFrontDL[48];
extern Gfx gTwinrovaKotakeRightSleeveEndDL[36];
extern Gfx gTwinrovaKotakeRightSleeveMidDL[37];
extern Gfx gTwinrovaKotakeRightSleeveStartDL[36];
extern Gfx gTwinrovaKotakeLeftSleeveFrontDL[48];
extern Gfx gTwinrovaKotakeLeftSleeveEndDL[36];
extern Gfx gTwinrovaKotakeLeftSleeveMidDL[37];
extern Gfx gTwinrovaKotakeLeftSleeveStartDL[36];
extern Gfx gTwinrovaKotakeTorsoDL[44];
extern Gfx gTwinrovaKotakeRightThighDL[1];
extern Gfx gTwinrovaKotakeLeftThighDL[1];
extern Gfx gTwinrovaKotakePelvisDL[48];
#define gTwinrovaBraidEndTex_WIDTH 8
#define gTwinrovaBraidEndTex_HEIGHT 8
extern u64 gTwinrovaBraidEndTex[TEX_LEN(u64, gTwinrovaBraidEndTex_WIDTH, gTwinrovaBraidEndTex_HEIGHT, 16)];
#define gTwinrovaLeftFootTex_WIDTH 4
#define gTwinrovaLeftFootTex_HEIGHT 8
extern u64 gTwinrovaLeftFootTex[TEX_LEN(u64, gTwinrovaLeftFootTex_WIDTH, gTwinrovaLeftFootTex_HEIGHT, 16)];
extern Vtx gTwinrovaKoumeLeftBraidEndVtx[];
extern Vtx gTwinrovaKoumeLeftBraidStartVtx[];
extern Vtx gTwinrovaKoumeRightBraidEndVtx[];
extern Vtx gTwinrovaKoumeRightBraidStartVtx[];
extern Vtx gTwinrovaKoumeNeckVtx[];
extern Vtx gTwinrovaKoumeLeftSleeveFrontVtx[];
extern Vtx gTwinrovaKoumeLeftSleeveEndVtx[];
extern Vtx gTwinrovaKoumeLeftSleeveMidVtx[];
extern Vtx gTwinrovaKoumeLeftSleeveStartVtx[];
extern Vtx gTwinrovaKoumeRightSleeveFrontVtx[];
extern Vtx gTwinrovaKoumeRightSleeveEndVtx[];
extern Vtx gTwinrovaKoumeRightSleeveMidVtx[];
extern Vtx gTwinrovaKoumeRightSleeveStartVtx[];
extern Vtx gTwinrovaKoumeTorsoVtx[];
extern u8 object_tw_Blob_0176D0[];
extern Vtx gTwinrovaKoumePelvisVtx[];
extern Gfx gTwinrovaKoumeLeftBraidEndDL[31];
extern Gfx gTwinrovaKoumeLeftBraidStartDL[34];
extern Gfx gTwinrovaKoumeRightBraidEndDL[31];
extern Gfx gTwinrovaKoumeRightBraidStartDL[34];
extern Gfx gTwinrovaKoumeNeckDL[40];
extern Gfx gTwinrovaKoumeRightSleeveFrontDL[48];
extern Gfx gTwinrovaKoumeRightSleeveEndDL[36];
extern Gfx gTwinrovaKoumeRightSleeveMidDL[37];
extern Gfx gTwinrovaKoumeRightSleeveStartDL[36];
extern Gfx gTwinrovaKoumeLeftSleeveFrontDL[48];
extern Gfx gTwinrovaKoumeLeftSleeveEndDL[36];
extern Gfx gTwinrovaKoumeLeftSleeveMidDL[37];
extern Gfx gTwinrovaKoumeLeftSleeveStartDL[36];
extern Gfx gTwinrovaKoumeTorsoDL[44];
extern Gfx gTwinrovaKoumeRightThighDL[1];
extern Gfx gTwinrovaKoumeLeftThighDL[1];
extern Gfx gTwinrovaKoumePelvisDL[48];
#define gTwinrovaRightFootTex_WIDTH 4
#define gTwinrovaRightFootTex_HEIGHT 8
extern u64 gTwinrovaRightFootTex[TEX_LEN(u64, gTwinrovaRightFootTex_WIDTH, gTwinrovaRightFootTex_HEIGHT, 16)];
#define gTwinrovaFireSmokeTex_WIDTH 32
#define gTwinrovaFireSmokeTex_HEIGHT 64
extern u64 gTwinrovaFireSmokeTex[TEX_LEN(u64, gTwinrovaFireSmokeTex_WIDTH, gTwinrovaFireSmokeTex_HEIGHT, 4)];
extern Vtx gTwinrovaFireSmokeVtx[];
extern Gfx gTwinrovaFireSmokeDL[23];
#define gTwinrovaBigFlameTex_WIDTH 32
#define gTwinrovaBigFlameTex_HEIGHT 32
extern u64 gTwinrovaBigFlameTex[TEX_LEN(u64, gTwinrovaBigFlameTex_WIDTH, gTwinrovaBigFlameTex_HEIGHT, 8)];
#define gTwinrovaBigFlameMaskTex_WIDTH 32
#define gTwinrovaBigFlameMaskTex_HEIGHT 64
extern u64 gTwinrovaBigFlameMaskTex[TEX_LEN(u64, gTwinrovaBigFlameMaskTex_WIDTH, gTwinrovaBigFlameMaskTex_HEIGHT, 4)];
extern Vtx gTwinrovaBigFlameVtx[];
extern Gfx gTwinrovaBigFlameDL[29];
#define gTwinrovaFirePoolAndShieldChargeCenterTex_WIDTH 32
#define gTwinrovaFirePoolAndShieldChargeCenterTex_HEIGHT 32
extern u64 gTwinrovaFirePoolAndShieldChargeCenterTex[TEX_LEN(u64, gTwinrovaFirePoolAndShieldChargeCenterTex_WIDTH, gTwinrovaFirePoolAndShieldChargeCenterTex_HEIGHT, 4)];
extern Vtx gTwinrovaFirePoolVtx[];
extern Gfx gTwinrovaFirePoolDL[24];
#define gTwinrovaFireTex_WIDTH 32
#define gTwinrovaFireTex_HEIGHT 64
extern u64 gTwinrovaFireTex[TEX_LEN(u64, gTwinrovaFireTex_WIDTH, gTwinrovaFireTex_HEIGHT, 4)];
#define gTwinrovaFireMaskTex_WIDTH 32
#define gTwinrovaFireMaskTex_HEIGHT 32
extern u64 gTwinrovaFireMaskTex[TEX_LEN(u64, gTwinrovaFireMaskTex_WIDTH, gTwinrovaFireMaskTex_HEIGHT, 4)];
extern Vtx gTwinrovaFireVtx[];
extern Gfx gTwinrovaFireDL[25];
extern Vtx gTwinrovaMagicParticleModelVtx[];
extern Gfx gTwinrovaMagicParticleMaterialDL[16];
extern Gfx gTwinrovaMagicParticleModelDL[3];
#define gTwinrovaMagicParticleTex_WIDTH 16
#define gTwinrovaMagicParticleTex_HEIGHT 16
extern u64 gTwinrovaMagicParticleTex[TEX_LEN(u64, gTwinrovaMagicParticleTex_WIDTH, gTwinrovaMagicParticleTex_HEIGHT, 8)];
extern Vtx gTwinrovaEffectHaloVtx[];
extern Gfx gTwinrovaEffectHaloDL[26];
extern Vtx gTwinrovaUnusedIceSteamCloudVtx[];
extern Gfx gTwinrovaUnusedIceSteamCloudDL[25];
extern Vtx gTwinrovaIceModelVtx[];
extern Gfx gTwinrovaIceMaterialDL[23];
extern Gfx gTwinrovaIceSurroundingPlayerMaterialDL[22];
extern Gfx gTwinrovaIceModelDL[4];
#define gTwinrovaIcePoolTex_WIDTH 64
#define gTwinrovaIcePoolTex_HEIGHT 64
extern u64 gTwinrovaIcePoolTex[TEX_LEN(u64, gTwinrovaIcePoolTex_WIDTH, gTwinrovaIcePoolTex_HEIGHT, 8)];
extern Vtx gTwinrovaUnusedVtx[];
extern Vtx gTwinrovaIcePoolVtx[];
extern Gfx gTwinrovaIcePoolDL[20];
#define gTwinrovaIcePoolShineTex_WIDTH 32
#define gTwinrovaIcePoolShineTex_HEIGHT 64
extern u64 gTwinrovaIcePoolShineTex[TEX_LEN(u64, gTwinrovaIcePoolShineTex_WIDTH, gTwinrovaIcePoolShineTex_HEIGHT, 4)];
#define gTwinrovaIcePoolShineMaskTex_WIDTH 16
#define gTwinrovaIcePoolShineMaskTex_HEIGHT 16
extern u64 gTwinrovaIcePoolShineMaskTex[TEX_LEN(u64, gTwinrovaIcePoolShineMaskTex_WIDTH, gTwinrovaIcePoolShineMaskTex_HEIGHT, 4)];
extern Vtx gTwinrovaIcePoolShineVtx[];
extern Gfx gTwinrovaIcePoolShineDL[28];
#define gTwinrovaKotakeMagicSigilMaskTex_WIDTH 32
#define gTwinrovaKotakeMagicSigilMaskTex_HEIGHT 64
extern u64 gTwinrovaKotakeMagicSigilMaskTex[TEX_LEN(u64, gTwinrovaKotakeMagicSigilMaskTex_WIDTH, gTwinrovaKotakeMagicSigilMaskTex_HEIGHT, 4)];
#define gTwinrovaKotakeMagicSigilTex_WIDTH 64
#define gTwinrovaKotakeMagicSigilTex_HEIGHT 64
extern u64 gTwinrovaKotakeMagicSigilTex[TEX_LEN(u64, gTwinrovaKotakeMagicSigilTex_WIDTH, gTwinrovaKotakeMagicSigilTex_HEIGHT, 4)];
extern Vtx gTwinrovaKotakeMagicSigilVtx[];
extern Gfx gTwinrovaKotakeMagicSigilDL[25];
#define gTwinrovaKoumeMagicSigilMaskTex_WIDTH 32
#define gTwinrovaKoumeMagicSigilMaskTex_HEIGHT 64
extern u64 gTwinrovaKoumeMagicSigilMaskTex[TEX_LEN(u64, gTwinrovaKoumeMagicSigilMaskTex_WIDTH, gTwinrovaKoumeMagicSigilMaskTex_HEIGHT, 4)];
#define gTwinrovaKoumeMagicSigilTex_WIDTH 64
#define gTwinrovaKoumeMagicSigilTex_HEIGHT 64
extern u64 gTwinrovaKoumeMagicSigilTex[TEX_LEN(u64, gTwinrovaKoumeMagicSigilTex_WIDTH, gTwinrovaKoumeMagicSigilTex_HEIGHT, 4)];
extern Vtx gTwinrovaKoumeMagicSigilVtx[];
extern Gfx gTwinrovaKoumeMagicSigilDL[25];
extern Vtx gTwinrovaBeamVtx[];
extern Gfx gTwinrovaBeamDL[28];
extern Vtx gTwinrovaMirrorShieldFireChargeCenterVtx[];
extern Vtx gTwinrovaMirrorShieldFireChargeSidesVtx[];
extern Gfx gTwinrovaMirrorShieldFireChargeCenterDL[24];
extern Gfx gTwinrovaMirrorShieldFireChargeSidesDL[18];
extern Vtx gTwinrovaMirrorShieldIceChargeCenterVtx[];
extern Vtx gTwinrovaMirrorShieldIceChargeSidesVtx[];
extern Gfx gTwinrovaMirrorShieldIceChargeCenterDL[28];
extern Gfx gTwinrovaMirrorShieldIceChargeSidesDL[18];
#define gTwinrovaCloudMaskTex_WIDTH 32
#define gTwinrovaCloudMaskTex_HEIGHT 32
extern u64 gTwinrovaCloudMaskTex[TEX_LEN(u64, gTwinrovaCloudMaskTex_WIDTH, gTwinrovaCloudMaskTex_HEIGHT, 4)];
extern Vtx gTwinrovaShieldAbsorbAndReflectEffectVtx[];
extern Gfx gTwinrovaShieldAbsorbAndReflectEffectDL[39];
#define gTwinrovaCircleTex_WIDTH 16
#define gTwinrovaCircleTex_HEIGHT 16
extern u64 gTwinrovaCircleTex[TEX_LEN(u64, gTwinrovaCircleTex_WIDTH, gTwinrovaCircleTex_HEIGHT, 8)];
extern Vtx gTwinrovaSpawnPortalShadowVtx[];
extern Gfx gTwinrovaSpawnPortalShadowDL[17];
#define gTwinrovaLightPillarAndHaloTex_WIDTH 16
#define gTwinrovaLightPillarAndHaloTex_HEIGHT 16
extern u64 gTwinrovaLightPillarAndHaloTex[TEX_LEN(u64, gTwinrovaLightPillarAndHaloTex_WIDTH, gTwinrovaLightPillarAndHaloTex_HEIGHT, 4)];
extern Vtx gTwinrovaLightPillarVtx[];
extern Gfx gTwinrovaLightPillarDL[33];
extern Vtx gTwinrovaLightRaysVtx[];
extern Gfx gTwinrovaLightRaysDL[35];
extern Vtx gTwinrovaLightCircleVtx[];
extern Gfx gTwinrovaLightCircleDL[19];
extern Vtx gTwinrovaHaloVtx[];
extern Gfx gTwinrovaHaloDL[28];
extern StandardLimb gTwinrovaKoumePelvisLimb;
extern StandardLimb gTwinrovaKoumeLeftThighLimb;
extern StandardLimb gTwinrovaKoumeLeftShinLimb;
extern StandardLimb gTwinrovaKoumeLeftFootLimb;
extern StandardLimb gTwinrovaKoumeRightThighLimb;
extern StandardLimb gTwinrovaKoumeRightShinLimb;
extern StandardLimb gTwinrovaKoumeRightFootLimb;
extern StandardLimb gTwinrovaKoumeTorsoLimb;
extern StandardLimb gTwinrovaKoumeLeftSleeveStartLimb;
extern StandardLimb gTwinrovaKoumeLeftSleeveMidLimb;
extern StandardLimb gTwinrovaKoumeLeftSleeveEndLimb;
extern StandardLimb gTwinrovaKoumeLeftSleeveFrontLimb;
extern StandardLimb gTwinrovaKoumeLeftHandLimb;
extern StandardLimb gTwinrovaKoumeBroomLimb;
extern StandardLimb gTwinrovaKoumeRightSleeveStartLimb;
extern StandardLimb gTwinrovaKoumeRightSleeveMidLimb;
extern StandardLimb gTwinrovaKoumeRightSleeveEndLimb;
extern StandardLimb gTwinrovaKoumeRightSleeveFrontLimb;
extern StandardLimb gTwinrovaKoumeRightHandLimb;
extern StandardLimb gTwinrovaKoumeNeckLimb;
extern StandardLimb gTwinrovaKoumeHeadLimb;
extern StandardLimb gTwinrovaKoumeRightBraidStartLimb;
extern StandardLimb gTwinrovaKoumeRightBraidEndLimb;
extern StandardLimb gTwinrovaKoumeTeethLimb;
extern StandardLimb gTwinrovaKoumeLeftBraidStartLimb;
extern StandardLimb gTwinrovaKoumeLeftBraidEndLimb;
extern void* gTwinrovaKoumeLimbs[];
typedef enum gTwinrovaKoumeSkelLimb {
    /*  0 */ LIMB_OBJECT_TW_01F888_NONE,
    /*  1 */ LIMB_OBJECT_TW_01F6E8,
    /*  2 */ LIMB_OBJECT_TW_01F6F4,
    /*  3 */ LIMB_OBJECT_TW_01F700,
    /*  4 */ LIMB_OBJECT_TW_01F70C,
    /*  5 */ LIMB_OBJECT_TW_01F718,
    /*  6 */ LIMB_OBJECT_TW_01F724,
    /*  7 */ LIMB_OBJECT_TW_01F730,
    /*  8 */ LIMB_OBJECT_TW_01F73C,
    /*  9 */ LIMB_OBJECT_TW_01F748,
    /* 10 */ LIMB_OBJECT_TW_01F754,
    /* 11 */ LIMB_OBJECT_TW_01F760,
    /* 12 */ LIMB_OBJECT_TW_01F76C,
    /* 13 */ LIMB_OBJECT_TW_01F778,
    /* 14 */ LIMB_OBJECT_TW_01F784,
    /* 15 */ LIMB_OBJECT_TW_01F790,
    /* 16 */ LIMB_OBJECT_TW_01F79C,
    /* 17 */ LIMB_OBJECT_TW_01F7A8,
    /* 18 */ LIMB_OBJECT_TW_01F7B4,
    /* 19 */ LIMB_OBJECT_TW_01F7C0,
    /* 20 */ LIMB_OBJECT_TW_01F7CC,
    /* 21 */ LIMB_OBJECT_TW_01F7D8,
    /* 22 */ LIMB_OBJECT_TW_01F7E4,
    /* 23 */ LIMB_OBJECT_TW_01F7F0,
    /* 24 */ LIMB_OBJECT_TW_01F7FC,
    /* 25 */ LIMB_OBJECT_TW_01F808,
    /* 26 */ LIMB_OBJECT_TW_01F814,
    /* 27 */ LIMB_OBJECT_TW_01F888_MAX
} gTwinrovaKoumeSkelLimb;
extern FlexSkeletonHeader gTwinrovaKoumeSkel;
extern s16 gTwinrovaDeathFrameData[];
extern JointIndex gTwinrovaDeathJointIndices[];
extern AnimationHeader gTwinrovaDeathAnim;
extern s16 gTwinrovaIceAttackFrameData[];
extern JointIndex gTwinrovaIceAttackJointIndices[];
extern AnimationHeader gTwinrovaIceAttackAnim;
extern s16 gTwinrovaFireAttackFrameData[];
extern JointIndex gTwinrovaFireAttackJointIndices[];
extern AnimationHeader gTwinrovaFireAttackAnim;
extern s16 gTwinrovaDamageFrameData[];
extern JointIndex gTwinrovaDamageJointIndices[];
extern AnimationHeader gTwinrovaDamageAnim;
extern s16 gTwinrovaTPoseFrameData[];
extern JointIndex gTwinrovaTPoseJointIndices[];
extern AnimationHeader gTwinrovaTPoseAnim;
#define gTwinrovaSkinAndBangleTex_WIDTH 4
#define gTwinrovaSkinAndBangleTex_HEIGHT 8
extern u64 gTwinrovaSkinAndBangleTex[TEX_LEN(u64, gTwinrovaSkinAndBangleTex_WIDTH, gTwinrovaSkinAndBangleTex_HEIGHT, 16)];
#define gTwinrovaEmblemTex_WIDTH 16
#define gTwinrovaEmblemTex_HEIGHT 16
extern u64 gTwinrovaEmblemTex[TEX_LEN(u64, gTwinrovaEmblemTex_WIDTH, gTwinrovaEmblemTex_HEIGHT, 16)];
#define gTwinrovaBreastTex_WIDTH 16
#define gTwinrovaBreastTex_HEIGHT 16
extern u64 gTwinrovaBreastTex[TEX_LEN(u64, gTwinrovaBreastTex_WIDTH, gTwinrovaBreastTex_HEIGHT, 16)];
#define gTwinrovaRightPantLegTex_WIDTH 16
#define gTwinrovaRightPantLegTex_HEIGHT 16
extern u64 gTwinrovaRightPantLegTex[TEX_LEN(u64, gTwinrovaRightPantLegTex_WIDTH, gTwinrovaRightPantLegTex_HEIGHT, 16)];
#define gTwinrovaLeftPantLegTex_WIDTH 16
#define gTwinrovaLeftPantLegTex_HEIGHT 16
extern u64 gTwinrovaLeftPantLegTex[TEX_LEN(u64, gTwinrovaLeftPantLegTex_WIDTH, gTwinrovaLeftPantLegTex_HEIGHT, 16)];
extern Vtx gTwinrovaLeftSleeveEndVtx[];
extern Vtx gTwinrovaLeftSleeveStartVtx[];
extern Vtx gTwinrovaLeftForearmVtx[];
extern Vtx gTwinrovaLeftUpperArmVtx[];
extern Vtx gTwinrovaLeftShoulderVtx[];
extern Vtx gTwinrovaRightSleeveEndVtx[];
extern Vtx gTwinrovaRightSleeveStartVtx[];
extern Vtx gTwinrovaRightForearmVtx[];
extern Vtx gTwinrovaRightUpperArmVtx[];
extern Vtx gTwinrovaRightShoulderVtx[];
extern Vtx gTwinrovaLeftBraidEndVtx[];
extern Vtx gTwinrovaLeftBraidStartVtx[];
extern Vtx gTwinrovaRightBraidEndVtx[];
extern Vtx gTwinrovaRightBraidStartVtx[];
extern Vtx gTwinrovaLeftBreastVtx[];
extern Vtx gTwinrovaRightBreastVtx[];
extern Vtx gTwinrovaTorsoVtx[];
extern Vtx gTwinrovaSash4Vtx[];
extern Vtx gTwinrovaSash3Vtx[];
extern Vtx gTwinrovaSash2Vtx[];
extern Vtx gTwinrovaSash1Vtx[];
extern Vtx gTwinrovaLeftFootVtx[];
extern Vtx gTwinrovaLeftShinVtx[];
extern Vtx gTwinrovaLeftThighVtx[];
extern Vtx gTwinrovaRightFootVtx[];
extern Vtx gTwinrovaRightShinVtx[];
extern Vtx gTwinrovaRightThighVtx[];
extern Vtx gTwinrovaPelvisVtx[];
extern Gfx gTwinrovaRightFootDL[32];
extern Gfx gTwinrovaRightShinDL[42];
extern Gfx gTwinrovaRightThighDL[30];
extern Gfx gTwinrovaRightSleeveEndDL[35];
extern Gfx gTwinrovaRightSleeveStartDL[36];
extern Gfx gTwinrovaRightForearmDL[42];
extern Gfx gTwinrovaRightUpperArmDL[31];
extern Gfx gTwinrovaRightShoulderDL[33];
extern Gfx gTwinrovaLeftSleeveEndDL[35];
extern Gfx gTwinrovaLeftSleeveStartDL[36];
extern Gfx gTwinrovaLeftForearmDL[42];
extern Gfx gTwinrovaLeftUpperArmDL[31];
extern Gfx gTwinrovaLeftShoulderDL[33];
extern Gfx gTwinrovaLeftBraidEndDL[31];
extern Gfx gTwinrovaLeftBraidStartDL[34];
extern Gfx gTwinrovaRightBraidEndDL[31];
extern Gfx gTwinrovaRightBraidStartDL[34];
extern Gfx gTwinrovaRightBreastDL[63];
extern Gfx gTwinrovaLeftBreastDL[63];
extern Gfx gTwinrovaTorsoDL[159];
extern Gfx gTwinrovaLeftFootDL[47];
extern Gfx gTwinrovaLeftShinDL[42];
extern Gfx gTwinrovaLeftThighDL[30];
extern Gfx gTwinrovaSash4DL[35];
extern Gfx gTwinrovaSash3DL[57];
extern Gfx gTwinrovaSash2DL[31];
extern Gfx gTwinrovaSash1DL[35];
extern Gfx gTwinrovaPelvisDL[104];
//#define gTwinrovaEyeAndMouthTLUT_TLUT_COUNT 232
extern u64 gTwinrovaEyeAndMouthTLUT[];
//#define gTwinrovaEarAndFingerTLUT_TLUT_COUNT 40
extern u64 gTwinrovaEarAndFingerTLUT[];
#define gTwinrovaEyeHalfTex_WIDTH 32
#define gTwinrovaEyeHalfTex_HEIGHT 32
extern u64 gTwinrovaEyeHalfTex[TEX_LEN(u64, gTwinrovaEyeHalfTex_WIDTH, gTwinrovaEyeHalfTex_HEIGHT, 8)];
#define gTwinrovaEyeClosedTex_WIDTH 32
#define gTwinrovaEyeClosedTex_HEIGHT 32
extern u64 gTwinrovaEyeClosedTex[TEX_LEN(u64, gTwinrovaEyeClosedTex_WIDTH, gTwinrovaEyeClosedTex_HEIGHT, 8)];
#define gTwinrovaGrimaceTex_WIDTH 16
#define gTwinrovaGrimaceTex_HEIGHT 16
extern u64 gTwinrovaGrimaceTex[TEX_LEN(u64, gTwinrovaGrimaceTex_WIDTH, gTwinrovaGrimaceTex_HEIGHT, 8)];
#define gTwinrovaEyebrowTex_WIDTH 8
#define gTwinrovaEyebrowTex_HEIGHT 4
extern u64 gTwinrovaEyebrowTex[TEX_LEN(u64, gTwinrovaEyebrowTex_WIDTH, gTwinrovaEyebrowTex_HEIGHT, 16)];
#define gTwinrovaEyeOpenTex_WIDTH 32
#define gTwinrovaEyeOpenTex_HEIGHT 32
extern u64 gTwinrovaEyeOpenTex[TEX_LEN(u64, gTwinrovaEyeOpenTex_WIDTH, gTwinrovaEyeOpenTex_HEIGHT, 8)];
#define gTwinrovaNoseTex_WIDTH 8
#define gTwinrovaNoseTex_HEIGHT 8
extern u64 gTwinrovaNoseTex[TEX_LEN(u64, gTwinrovaNoseTex_WIDTH, gTwinrovaNoseTex_HEIGHT, 8)];
#define gTwinrovaEarTex_WIDTH 8
#define gTwinrovaEarTex_HEIGHT 8
extern u64 gTwinrovaEarTex[TEX_LEN(u64, gTwinrovaEarTex_WIDTH, gTwinrovaEarTex_HEIGHT, 8)];
#define gTwinrovaSmileTex_WIDTH 16
#define gTwinrovaSmileTex_HEIGHT 16
extern u64 gTwinrovaSmileTex[TEX_LEN(u64, gTwinrovaSmileTex_WIDTH, gTwinrovaSmileTex_HEIGHT, 8)];
#define gTwinrovaFingerTex_WIDTH 8
#define gTwinrovaFingerTex_HEIGHT 16
extern u64 gTwinrovaFingerTex[TEX_LEN(u64, gTwinrovaFingerTex_WIDTH, gTwinrovaFingerTex_HEIGHT, 8)];
extern Vtx gTwinrovaInvisibleLeftHairBunVtx[];
extern Vtx gTwinrovaInvisibleRightHairBunVtx[];
extern Vtx gTwinrovaHeadVtx[];
extern Vtx gTwinrovaLeftHandVtx[];
extern Vtx gTwinrovaRightBroomVtx[];
extern Vtx gTwinrovaLeftBroomVtx[];
extern Vtx gTwinrovaRightHandVtx[];
extern Vtx gTwinrovaRightHairBunVtx[];
extern Vtx gTwinrovaLeftHairBunVtx[];
extern Vtx gTwinrovaHairIceJetVtx[];
extern Vtx gTwinrovaHairIceTrailVtx[];
extern Vtx gTwinrovaHairFireJetVtx[];
extern Vtx gTwinrovaHairFireTrailVtx[];
extern Vtx gTwinrovaBroomIceJetVtx[];
extern Vtx gTwinrovaBroomIceTrailVtx[];
extern Vtx gTwinrovaBroomFireJetVtx[];
extern Vtx gTwinrovaBroomFireTrailVtx[];
extern Gfx gTwinrovaInvisibleLeftHairBunDL[12];
extern Gfx gTwinrovaInvisibleRightHairBunDL[12];
extern Gfx gTwinrovaHeadDL[238];
extern Gfx gTwinrovaLeftHandDL[48];
extern Gfx gTwinrovaRightBroomDL[39];
extern Gfx gTwinrovaLeftBroomDL[39];
extern Gfx gTwinrovaRightHandDL[48];
extern Gfx gTwinrovaRightHairBunDL[22];
extern Gfx gTwinrovaLeftHairBunDL[22];
extern Gfx gTwinrovaHairIceJetDL[30];
extern Gfx gTwinrovaHairIceTrailDL[29];
extern Gfx gTwinrovaHairFireJetDL[30];
extern Gfx gTwinrovaHairFireTrailDL[36];
extern Gfx gTwinrovaBroomIceJetDL[27];
extern Gfx gTwinrovaBroomIceTrailDL[32];
extern Gfx gTwinrovaBroomFireJetDL[29];
extern Gfx gTwinrovaBroomFireTrailDL[27];
#define gTwinrovaTitleCardTex_WIDTH 128
#define gTwinrovaTitleCardTex_HEIGHT 120
extern u64 gTwinrovaTitleCardTex[TEX_LEN(u64, gTwinrovaTitleCardTex_WIDTH, gTwinrovaTitleCardTex_HEIGHT, 8)];
extern StandardLimb gTwinrovaPelvisLimb;
extern StandardLimb gTwinrovaSash1Limb;
extern StandardLimb gTwinrovaSash2Limb;
extern StandardLimb gTwinrovaSash3Limb;
extern StandardLimb gTwinrovaSash4Limb;
extern StandardLimb gTwinrovaLeftThighLimb;
extern StandardLimb gTwinrovaLeftShinLimb;
extern StandardLimb gTwinrovaLeftFootLimb;
extern StandardLimb gTwinrovaRightThighLimb;
extern StandardLimb gTwinrovaRightShinLimb;
extern StandardLimb gTwinrovaRightFootLimb;
extern StandardLimb gTwinrovaTorsoLimb;
extern StandardLimb gTwinrovaLeftBreastLimb;
extern StandardLimb gTwinrovaRightBreastLimb;
extern StandardLimb gTwinrovaHairIceTrailLimb;
extern StandardLimb gTwinrovaHairIceJetLimb;
extern StandardLimb gTwinrovaHairFireJetLimb;
extern StandardLimb gTwinrovaHairFireTrailLimb;
extern StandardLimb gTwinrovaLeftHairBunLimb;
extern StandardLimb gTwinrovaRightHairBunLimb;
extern StandardLimb gTwinrovaHeadLimb;
extern StandardLimb gTwinrovaRightBraidStartLimb;
extern StandardLimb gTwinrovaRightBraidEndLimb;
extern StandardLimb gTwinrovaLeftBraidStartLimb;
extern StandardLimb gTwinrovaLeftBraidEndLimb;
extern StandardLimb gTwinrovaLeftShoulderLimb;
extern StandardLimb gTwinrovaLeftUpperArmLimb;
extern StandardLimb gTwinrovaLeftForearmLimb;
extern StandardLimb gTwinrovaLeftSleeveStartLimb;
extern StandardLimb gTwinrovaLeftSleeveEndLimb;
extern StandardLimb gTwinrovaBroomIceTrailLimb;
extern StandardLimb gTwinrovaBroomIceJetLimb;
extern StandardLimb gTwinrovaLeftHandLimb;
extern StandardLimb gTwinrovaLeftBroomLimb;
extern StandardLimb gTwinrovaRightShoulderLimb;
extern StandardLimb gTwinrovaRightUpperArmLimb;
extern StandardLimb gTwinrovaRightForearmLimb;
extern StandardLimb gTwinrovaRightSleeveStartLimb;
extern StandardLimb gTwinrovaRightSleeveEndLimb;
extern StandardLimb gTwinrovaRightBroomLimb;
extern StandardLimb gTwinrovaBroomFireJetLimb;
extern StandardLimb gTwinrovaBroomFireTrailLimb;
extern StandardLimb gTwinrovaRightHandLimb;
extern void* gTwinrovaLimbs[];
typedef enum gTwinrovaSkelLimb {
    /*  0 */ LIMB_OBJECT_TW_032020_NONE,
    /*  1 */ LIMB_OBJECT_TW_031D70,
    /*  2 */ LIMB_OBJECT_TW_031D7C,
    /*  3 */ LIMB_OBJECT_TW_031D88,
    /*  4 */ LIMB_OBJECT_TW_031D94,
    /*  5 */ LIMB_OBJECT_TW_031DA0,
    /*  6 */ LIMB_OBJECT_TW_031DAC,
    /*  7 */ LIMB_OBJECT_TW_031DB8,
    /*  8 */ LIMB_OBJECT_TW_031DC4,
    /*  9 */ LIMB_OBJECT_TW_031DD0,
    /* 10 */ LIMB_OBJECT_TW_031DDC,
    /* 11 */ LIMB_OBJECT_TW_031DE8,
    /* 12 */ LIMB_OBJECT_TW_031DF4,
    /* 13 */ LIMB_OBJECT_TW_031E00,
    /* 14 */ LIMB_OBJECT_TW_031E0C,
    /* 15 */ LIMB_OBJECT_TW_031E18,
    /* 16 */ LIMB_OBJECT_TW_031E24,
    /* 17 */ LIMB_OBJECT_TW_031E30,
    /* 18 */ LIMB_OBJECT_TW_031E3C,
    /* 19 */ LIMB_OBJECT_TW_031E48,
    /* 20 */ LIMB_OBJECT_TW_031E54,
    /* 21 */ LIMB_OBJECT_TW_031E60,
    /* 22 */ LIMB_OBJECT_TW_031E6C,
    /* 23 */ LIMB_OBJECT_TW_031E78,
    /* 24 */ LIMB_OBJECT_TW_031E84,
    /* 25 */ LIMB_OBJECT_TW_031E90,
    /* 26 */ LIMB_OBJECT_TW_031E9C,
    /* 27 */ LIMB_OBJECT_TW_031EA8,
    /* 28 */ LIMB_OBJECT_TW_031EB4,
    /* 29 */ LIMB_OBJECT_TW_031EC0,
    /* 30 */ LIMB_OBJECT_TW_031ECC,
    /* 31 */ LIMB_OBJECT_TW_031ED8,
    /* 32 */ LIMB_OBJECT_TW_031EE4,
    /* 33 */ LIMB_OBJECT_TW_031EF0,
    /* 34 */ LIMB_OBJECT_TW_031EFC,
    /* 35 */ LIMB_OBJECT_TW_031F08,
    /* 36 */ LIMB_OBJECT_TW_031F14,
    /* 37 */ LIMB_OBJECT_TW_031F20,
    /* 38 */ LIMB_OBJECT_TW_031F2C,
    /* 39 */ LIMB_OBJECT_TW_031F38,
    /* 40 */ LIMB_OBJECT_TW_031F44,
    /* 41 */ LIMB_OBJECT_TW_031F50,
    /* 42 */ LIMB_OBJECT_TW_031F5C,
    /* 43 */ LIMB_OBJECT_TW_031F68,
    /* 44 */ LIMB_OBJECT_TW_032020_MAX
} gTwinrovaSkelLimb;
extern FlexSkeletonHeader gTwinrovaSkel;
extern s16 gTwinrovaHoverFrameData[];
extern JointIndex gTwinrovaHoverJointIndices[];
extern AnimationHeader gTwinrovaHoverAnim;
extern s16 gTwinrovaChargedAttackHitFrameData[];
extern JointIndex gTwinrovaChargedAttackHitJointIndices[];
extern AnimationHeader gTwinrovaChargedAttackHitAnim;
extern s16 gTwinrovaStunStartFrameData[];
extern JointIndex gTwinrovaStunStartJointIndices[];
extern AnimationHeader gTwinrovaStunStartAnim;
extern s16 gTwinrovaStunLoopFrameData[];
extern JointIndex gTwinrovaStunLoopJointIndices[];
extern AnimationHeader gTwinrovaStunLoopAnim;
extern s16 gTwinrovaStunEndFrameData[];
extern JointIndex gTwinrovaStunEndJointIndices[];
extern AnimationHeader gTwinrovaStunEndAnim;
extern s16 gTwinrovaWindUpFrameData[];
extern JointIndex gTwinrovaWindUpJointIndices[];
extern AnimationHeader gTwinrovaWindUpAnim;
extern s16 gTwinrovaIntroFrameData[];
extern JointIndex gTwinrovaIntroJointIndices[];
extern AnimationHeader gTwinrovaIntroAnim;
extern s16 gTwinrovaLaughFrameData[];
extern JointIndex gTwinrovaLaughJointIndices[];
extern AnimationHeader gTwinrovaLaughAnim;
extern Vtx gTwinrovaUnusedBoulderVtx[];
extern Gfx gTwinrovaUnusedBoulderDL[38];
#define gTwinrovaUnusedBoulderTex_WIDTH 32
#define gTwinrovaUnusedBoulderTex_HEIGHT 32
extern u64 gTwinrovaUnusedBoulderTex[TEX_LEN(u64, gTwinrovaUnusedBoulderTex_WIDTH, gTwinrovaUnusedBoulderTex_HEIGHT, 16)];

#endif
