#ifndef OBJECT_GNDD_H
#define OBJECT_GNDD_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gYoungGanondorfHorsebackRideFrameData[];
extern JointIndex gYoungGanondorfHorsebackRideJointIndices[];
extern AnimationHeader gYoungGanondorfHorsebackRideAnim;
extern s16 gYoungGanondorfHorsebackMagicChargeUpStartFrameData[];
extern JointIndex gYoungGanondorfHorsebackMagicChargeUpStartJointIndices[];
extern AnimationHeader gYoungGanondorfHorsebackMagicChargeUpStartAnim;
extern s16 gYoungGanondorfHorsebackMagicChargeUpLoopFrameData[];
extern JointIndex gYoungGanondorfHorsebackMagicChargeUpLoopJointIndices[];
extern AnimationHeader gYoungGanondorfHorsebackMagicChargeUpLoopAnim;
extern s16 gYoungGanondorfHorsebackLookSidewaysStartFrameData[];
extern JointIndex gYoungGanondorfHorsebackLookSidewaysStartJointIndices[];
extern AnimationHeader gYoungGanondorfHorsebackLookSidewaysStartAnim;
extern s16 gYoungGanondorfHorsebackLookSidewaysLoopFrameData[];
extern JointIndex gYoungGanondorfHorsebackLookSidewaysLoopJointIndices[];
extern AnimationHeader gYoungGanondorfHorsebackLookSidewaysLoopAnim;
extern s16 gYoungGanondorfHorsebackRearFrameData[];
extern JointIndex gYoungGanondorfHorsebackRearJointIndices[];
extern AnimationHeader gYoungGanondorfHorsebackRearAnim;
extern s16 gYoungGanondorfHorsebackIdleFrameData[];
extern JointIndex gYoungGanondorfHorsebackIdleJointIndices[];
extern AnimationHeader gYoungGanondorfHorsebackIdleAnim;
extern s16 gYoungGanondorfKneelStartFrameData[];
extern JointIndex gYoungGanondorfKneelStartJointIndices[];
extern AnimationHeader gYoungGanondorfKneelStartAnim;
extern s16 gYoungGanondorfKneelLookSidewaysFrameData[];
extern JointIndex gYoungGanondorfKneelLookSidewaysJointIndices[];
extern AnimationHeader gYoungGanondorfKneelLookSidewaysAnim;
extern s16 gYoungGanondorfKneelLoopFrameData[];
extern JointIndex gYoungGanondorfKneelLoopJointIndices[];
extern AnimationHeader gYoungGanondorfKneelLoopAnim;
extern s16 gYoungGanondorfArmsCrossedFrameData[];
extern JointIndex gYoungGanondorfArmsCrossedJointIndices[];
extern AnimationHeader gYoungGanondorfArmsCrossedAnim;
extern s16 gYoungGanondorfLaughStartFrameData[];
extern JointIndex gYoungGanondorfLaughStartJointIndices[];
extern AnimationHeader gYoungGanondorfLaughStartAnim;
extern s16 gYoungGanondorfLaughLoopFrameData[];
extern JointIndex gYoungGanondorfLaughLoopJointIndices[];
extern AnimationHeader gYoungGanondorfLaughLoopAnim;
extern s16 gYoungGanondorfWalkFrameData[];
extern JointIndex gYoungGanondorfWalkJointIndices[];
extern AnimationHeader gYoungGanondorfWalkAnim;
extern Vtx gYoungGanondorfChinVtx[];
extern Vtx gYoungGanondorfJawVtx[];
extern Vtx gYoungGanondorfHeadVtx[];
extern Vtx gYoungGanondorfRightUpperLipVtx[];
extern Vtx gYoungGanondorfLeftUpperLipVtx[];
extern Gfx gYoungGanondorfHeadDL[263];
extern Gfx gYoungGanondorfRightUpperLipDL[48];
extern Gfx gYoungGanondorfChinDL[67];
extern Gfx gYoungGanondorfJawDL[71];
extern Gfx gYoungGanondorfLeftUpperLipDL[38];
extern Vtx gYoungGanondorfPelvisVtx[];
extern Vtx gYoungGanondorfTorsoVtx[];
extern Vtx gYoungGanondorfJewelVtx[];
extern Vtx gYoungGanondorfKnifeVtx[];
extern Vtx gYoungGanondorfLeftUpperArmVtx[];
extern Vtx gYoungGanondorfRightUpperArmVtx[];
extern Vtx gYoungGanondorfLeftForearmVtx[];
extern Vtx gYoungGanondorfRightForearmVtx[];
extern Vtx gYoungGanondorfLeftHandVtx[];
extern Vtx gYoungGanondorfRightHandVtx[];
extern Vtx gYoungGanondorfLeftFootVtx[];
extern Vtx gYoungGanondorfRightFootVtx[];
extern Vtx gYoungGanondorfLeftThighVtx[];
extern Vtx gYoungGanondorfLeftShinVtx[];
extern Vtx gYoungGanondorfRightThighVtx[];
extern Vtx gYoungGanondorfRightShinVtx[];
extern Vtx gYoungGanondorfTeethVtx[];
extern Gfx gYoungGanondorfPelvisDL[141];
extern Gfx gYoungGanondorfTorsoDL[288];
extern Gfx gYoungGanondorfJewelDL[20];
extern Gfx gYoungGanondorfKnifeDL[141];
extern Gfx gYoungGanondorfLeftUpperArmDL[47];
extern Gfx gYoungGanondorfRightUpperArmDL[47];
extern Gfx gYoungGanondorfLeftForearmDL[83];
extern Gfx gYoungGanondorfRightForearmDL[83];
extern Gfx gYoungGanondorfLeftHandDL[131];
extern Gfx gYoungGanondorfRightHandDL[131];
extern Gfx gYoungGanondorfLeftFootDL[82];
extern Gfx gYoungGanondorfRightFootDL[82];
extern Gfx gYoungGanondorfLeftThighDL[63];
extern Gfx gYoungGanondorfLeftShinDL[63];
extern Gfx gYoungGanondorfRightThighDL[63];
extern Gfx gYoungGanondorfRightShinDL[63];
extern Gfx gYoungGanondorfTeethDL[20];
extern Vtx gYoungGanondorfOpenLeftHandVtx[];
extern Gfx gYoungGanondorfOpenLeftHandDL[354];
//#define gYoungGanondorfEyeTLUT_TLUT_COUNT 256
extern u64 gYoungGanondorfEyeTLUT[];
#define gYoungGanondorfInnerMouthTex_WIDTH 8
#define gYoungGanondorfInnerMouthTex_HEIGHT 8
extern u64 gYoungGanondorfInnerMouthTex[TEX_LEN(u64, gYoungGanondorfInnerMouthTex_WIDTH, gYoungGanondorfInnerMouthTex_HEIGHT, 16)];
#define gYoungGanondorfSideburnTex_WIDTH 16
#define gYoungGanondorfSideburnTex_HEIGHT 16
extern u64 gYoungGanondorfSideburnTex[TEX_LEN(u64, gYoungGanondorfSideburnTex_WIDTH, gYoungGanondorfSideburnTex_HEIGHT, 16)];
#define gYoungGanondorfOuterMouthTex_WIDTH 4
#define gYoungGanondorfOuterMouthTex_HEIGHT 8
extern u64 gYoungGanondorfOuterMouthTex[TEX_LEN(u64, gYoungGanondorfOuterMouthTex_WIDTH, gYoungGanondorfOuterMouthTex_HEIGHT, 16)];
#define gYoungGanondorfEyeOpenTex_WIDTH 32
#define gYoungGanondorfEyeOpenTex_HEIGHT 16
extern u64 gYoungGanondorfEyeOpenTex[TEX_LEN(u64, gYoungGanondorfEyeOpenTex_WIDTH, gYoungGanondorfEyeOpenTex_HEIGHT, 8)];
#define gYoungGanondorfEyeHalfTex_WIDTH 32
#define gYoungGanondorfEyeHalfTex_HEIGHT 16
extern u64 gYoungGanondorfEyeHalfTex[TEX_LEN(u64, gYoungGanondorfEyeHalfTex_WIDTH, gYoungGanondorfEyeHalfTex_HEIGHT, 8)];
#define gYoungGanondorfEyeClosedTex_WIDTH 32
#define gYoungGanondorfEyeClosedTex_HEIGHT 16
extern u64 gYoungGanondorfEyeClosedTex[TEX_LEN(u64, gYoungGanondorfEyeClosedTex_WIDTH, gYoungGanondorfEyeClosedTex_HEIGHT, 8)];
#define gYoungGanondorfEyeLookingDownTex_WIDTH 32
#define gYoungGanondorfEyeLookingDownTex_HEIGHT 16
extern u64 gYoungGanondorfEyeLookingDownTex[TEX_LEN(u64, gYoungGanondorfEyeLookingDownTex_WIDTH, gYoungGanondorfEyeLookingDownTex_HEIGHT, 8)];
#define gYoungGanondorfUpperLipTex_WIDTH 16
#define gYoungGanondorfUpperLipTex_HEIGHT 16
extern u64 gYoungGanondorfUpperLipTex[TEX_LEN(u64, gYoungGanondorfUpperLipTex_WIDTH, gYoungGanondorfUpperLipTex_HEIGHT, 16)];
#define gYoungGanondorfEarTex_WIDTH 8
#define gYoungGanondorfEarTex_HEIGHT 16
extern u64 gYoungGanondorfEarTex[TEX_LEN(u64, gYoungGanondorfEarTex_WIDTH, gYoungGanondorfEarTex_HEIGHT, 16)];
#define gYoungGanondorfNoseTex_WIDTH 8
#define gYoungGanondorfNoseTex_HEIGHT 8
extern u64 gYoungGanondorfNoseTex[TEX_LEN(u64, gYoungGanondorfNoseTex_WIDTH, gYoungGanondorfNoseTex_HEIGHT, 16)];
#define gYoungGanondorfNoseBridgeTex_WIDTH 4
#define gYoungGanondorfNoseBridgeTex_HEIGHT 16
extern u64 gYoungGanondorfNoseBridgeTex[TEX_LEN(u64, gYoungGanondorfNoseBridgeTex_WIDTH, gYoungGanondorfNoseBridgeTex_HEIGHT, 16)];
#define gYoungGanondorfEyebrowTex_WIDTH 16
#define gYoungGanondorfEyebrowTex_HEIGHT 8
extern u64 gYoungGanondorfEyebrowTex[TEX_LEN(u64, gYoungGanondorfEyebrowTex_WIDTH, gYoungGanondorfEyebrowTex_HEIGHT, 16)];
#define gYoungGanondorfJawTex_WIDTH 16
#define gYoungGanondorfJawTex_HEIGHT 16
extern u64 gYoungGanondorfJawTex[TEX_LEN(u64, gYoungGanondorfJawTex_WIDTH, gYoungGanondorfJawTex_HEIGHT, 16)];
#define gYoungGanondorfBlackLeatherTex_WIDTH 16
#define gYoungGanondorfBlackLeatherTex_HEIGHT 16
extern u64 gYoungGanondorfBlackLeatherTex[TEX_LEN(u64, gYoungGanondorfBlackLeatherTex_WIDTH, gYoungGanondorfBlackLeatherTex_HEIGHT, 16)];
#define gYoungGanondorfGerudoFabricWithSunTex_WIDTH 32
#define gYoungGanondorfGerudoFabricWithSunTex_HEIGHT 16
extern u64 gYoungGanondorfGerudoFabricWithSunTex[TEX_LEN(u64, gYoungGanondorfGerudoFabricWithSunTex_WIDTH, gYoungGanondorfGerudoFabricWithSunTex_HEIGHT, 16)];
#define gYoungGanondorfLeatherTex_WIDTH 16
#define gYoungGanondorfLeatherTex_HEIGHT 16
extern u64 gYoungGanondorfLeatherTex[TEX_LEN(u64, gYoungGanondorfLeatherTex_WIDTH, gYoungGanondorfLeatherTex_HEIGHT, 16)];
#define gYoungGanondorfBodysuitTex_WIDTH 8
#define gYoungGanondorfBodysuitTex_HEIGHT 8
extern u64 gYoungGanondorfBodysuitTex[TEX_LEN(u64, gYoungGanondorfBodysuitTex_WIDTH, gYoungGanondorfBodysuitTex_HEIGHT, 16)];
#define gYoungGanondorfNeckTex_WIDTH 8
#define gYoungGanondorfNeckTex_HEIGHT 8
extern u64 gYoungGanondorfNeckTex[TEX_LEN(u64, gYoungGanondorfNeckTex_WIDTH, gYoungGanondorfNeckTex_HEIGHT, 16)];
#define gYoungGanondorfChestAndKnifeJewelTex_WIDTH 16
#define gYoungGanondorfChestAndKnifeJewelTex_HEIGHT 16
extern u64 gYoungGanondorfChestAndKnifeJewelTex[TEX_LEN(u64, gYoungGanondorfChestAndKnifeJewelTex_WIDTH, gYoungGanondorfChestAndKnifeJewelTex_HEIGHT, 16)];
#define gYoungGanondorfGerudoFabricTex_WIDTH 16
#define gYoungGanondorfGerudoFabricTex_HEIGHT 16
extern u64 gYoungGanondorfGerudoFabricTex[TEX_LEN(u64, gYoungGanondorfGerudoFabricTex_WIDTH, gYoungGanondorfGerudoFabricTex_HEIGHT, 16)];
#define gYoungGanondorfHairFringeTex_WIDTH 16
#define gYoungGanondorfHairFringeTex_HEIGHT 16
extern u64 gYoungGanondorfHairFringeTex[TEX_LEN(u64, gYoungGanondorfHairFringeTex_WIDTH, gYoungGanondorfHairFringeTex_HEIGHT, 16)];
#define gYoungGanondorfJewelTex_WIDTH 16
#define gYoungGanondorfJewelTex_HEIGHT 32
extern u64 gYoungGanondorfJewelTex[TEX_LEN(u64, gYoungGanondorfJewelTex_WIDTH, gYoungGanondorfJewelTex_HEIGHT, 16)];
#define gYoungGanondorfPauldronTex_WIDTH 16
#define gYoungGanondorfPauldronTex_HEIGHT 16
extern u64 gYoungGanondorfPauldronTex[TEX_LEN(u64, gYoungGanondorfPauldronTex_WIDTH, gYoungGanondorfPauldronTex_HEIGHT, 16)];
#define gYoungGanondorfThumbTex_WIDTH 8
#define gYoungGanondorfThumbTex_HEIGHT 8
extern u64 gYoungGanondorfThumbTex[TEX_LEN(u64, gYoungGanondorfThumbTex_WIDTH, gYoungGanondorfThumbTex_HEIGHT, 16)];
#define gYoungGanondorfHandSideTex_WIDTH 8
#define gYoungGanondorfHandSideTex_HEIGHT 8
extern u64 gYoungGanondorfHandSideTex[TEX_LEN(u64, gYoungGanondorfHandSideTex_WIDTH, gYoungGanondorfHandSideTex_HEIGHT, 16)];
#define gYoungGanondorfFingerTex_WIDTH 8
#define gYoungGanondorfFingerTex_HEIGHT 8
extern u64 gYoungGanondorfFingerTex[TEX_LEN(u64, gYoungGanondorfFingerTex_WIDTH, gYoungGanondorfFingerTex_HEIGHT, 16)];
#define gYoungGanondorfTeethTex_WIDTH 4
#define gYoungGanondorfTeethTex_HEIGHT 4
extern u64 gYoungGanondorfTeethTex[TEX_LEN(u64, gYoungGanondorfTeethTex_WIDTH, gYoungGanondorfTeethTex_HEIGHT, 16)];
#define gYoungGanondorfPalmMaskTex_WIDTH 16
#define gYoungGanondorfPalmMaskTex_HEIGHT 16
extern u64 gYoungGanondorfPalmMaskTex[TEX_LEN(u64, gYoungGanondorfPalmMaskTex_WIDTH, gYoungGanondorfPalmMaskTex_HEIGHT, 8)];
#define gYoungGanondorfFingerUndersideTex_WIDTH 4
#define gYoungGanondorfFingerUndersideTex_HEIGHT 8
extern u64 gYoungGanondorfFingerUndersideTex[TEX_LEN(u64, gYoungGanondorfFingerUndersideTex_WIDTH, gYoungGanondorfFingerUndersideTex_HEIGHT, 16)];
#define gYoungGanondorfFingernailTex_WIDTH 4
#define gYoungGanondorfFingernailTex_HEIGHT 4
extern u64 gYoungGanondorfFingernailTex[TEX_LEN(u64, gYoungGanondorfFingernailTex_WIDTH, gYoungGanondorfFingernailTex_HEIGHT, 16)];
extern StandardLimb gYoungGanondorfRootLimb;
extern StandardLimb gYoungGanondorfTorsoLimb;
extern StandardLimb gYoungGanondorfLeftUpperArmLimb;
extern StandardLimb gYoungGanondorfLeftForearmLimb;
extern StandardLimb gYoungGanondorfLeftHandLimb;
extern StandardLimb gYoungGanondorfRightUpperArmLimb;
extern StandardLimb gYoungGanondorfRightForearmLimb;
extern StandardLimb gYoungGanondorfRightHandLimb;
extern StandardLimb gYoungGanondorfJewelLimb;
extern StandardLimb gYoungGanondorfLeftUpperLipLimb;
extern StandardLimb gYoungGanondorfJawLimb;
extern StandardLimb gYoungGanondorfChinLimb;
extern StandardLimb gYoungGanondorfRightUpperLipLimb;
extern StandardLimb gYoungGanondorfTeethLimb;
extern StandardLimb gYoungGanondorfHeadLimb;
extern StandardLimb gYoungGanondorfPelvisLimb;
extern StandardLimb gYoungGanondorfLeftThighLimb;
extern StandardLimb gYoungGanondorfLeftShinLimb;
extern StandardLimb gYoungGanondorfLeftFootLimb;
extern StandardLimb gYoungGanondorfKnifeLimb;
extern StandardLimb gYoungGanondorfRightThighLimb;
extern StandardLimb gYoungGanondorfRightShinLimb;
extern StandardLimb gYoungGanondorfRightFootLimb;
extern void* gYoungGanondorfLimbs[];
typedef enum YoungGanondorfLimb {
    /*  0 */ YOUNG_GANONDORF_LIMB_NONE,
    /*  1 */ YOUNG_GANONDORF_LIMB_ROOT,
    /*  2 */ YOUNG_GANONDORF_LIMB_TORSO,
    /*  3 */ YOUNG_GANONDORF_LIMB_LEFT_UPPER_ARM,
    /*  4 */ YOUNG_GANONDORF_LIMB_LEFT_FOREARM,
    /*  5 */ YOUNG_GANONDORF_LIMB_LEFT_HAND,
    /*  6 */ YOUNG_GANONDORF_LIMB_RIGHT_UPPER_ARM,
    /*  7 */ YOUNG_GANONDORF_LIMB_RIGHT_FOREARM,
    /*  8 */ YOUNG_GANONDORF_LIMB_RIGHT_HAND,
    /*  9 */ YOUNG_GANONDORF_LIMB_JEWEL,
    /* 10 */ YOUNG_GANONDORF_LIMB_LEFT_UPPER_LIP,
    /* 11 */ YOUNG_GANONDORF_LIMB_JAW,
    /* 12 */ YOUNG_GANONDORF_LIMB_CHIN,
    /* 13 */ YOUNG_GANONDORF_LIMB_RIGHT_UPPER_LIP,
    /* 14 */ YOUNG_GANONDORF_LIMB_TEETH,
    /* 15 */ YOUNG_GANONDORF_LIMB_HEAD,
    /* 16 */ YOUNG_GANONDORF_LIMB_PELVIS,
    /* 17 */ YOUNG_GANONDORF_LIMB_LEFT_THIGH,
    /* 18 */ YOUNG_GANONDORF_LIMB_LEFT_SHIN,
    /* 19 */ YOUNG_GANONDORF_LIMB_LEFT_FOOT,
    /* 20 */ YOUNG_GANONDORF_LIMB_KNIFE,
    /* 21 */ YOUNG_GANONDORF_LIMB_RIGHT_THIGH,
    /* 22 */ YOUNG_GANONDORF_LIMB_RIGHT_SHIN,
    /* 23 */ YOUNG_GANONDORF_LIMB_RIGHT_FOOT,
    /* 24 */ YOUNG_GANONDORF_LIMB_MAX
} YoungGanondorfLimb;
extern FlexSkeletonHeader gYoungGanondorfSkel;

#endif
