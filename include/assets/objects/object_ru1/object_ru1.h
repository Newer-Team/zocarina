#ifndef OBJECT_RU1_H
#define OBJECT_RU1_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gRutoChildWaitHandsBehindBackFrameData[];
extern JointIndex gRutoChildWaitHandsBehindBackJointIndices[];
extern AnimationHeader gRutoChildWaitHandsBehindBackAnim;
extern s16 gRutoChildWaitHandsOnHipsFrameData[];
extern JointIndex gRutoChildWaitHandsOnHipsJointIndices[];
extern AnimationHeader gRutoChildWaitHandsOnHipsAnim;
extern s16 gRutoChildTransitionHandsOnHipToCrossArmsAndLegsFrameData[];
extern JointIndex gRutoChildTransitionHandsOnHipToCrossArmsAndLegsJointIndices[];
extern AnimationHeader gRutoChildTransitionHandsOnHipToCrossArmsAndLegsAnim;
extern s16 gRutoChildWaitSittingFrameData[];
extern JointIndex gRutoChildWaitSittingJointIndices[];
extern AnimationHeader gRutoChildWaitSittingAnim;
extern s16 gRutoChildWaitInBlueWarpFrameData[];
extern JointIndex gRutoChildWaitInBlueWarpJointIndices[];
extern AnimationHeader gRutoChildWaitInBlueWarpAnim;
extern s16 gRutoChildBringHandsDownFrameData[];
extern JointIndex gRutoChildBringHandsDownJointIndices[];
extern AnimationHeader gRutoChildBringHandsDownAnim;
extern s16 gRutoChildHoldArmsUpFrameData[];
extern JointIndex gRutoChildHoldArmsUpJointIndices[];
extern AnimationHeader gRutoChildHoldArmsUpAnim;
extern s16 gRutoChildBringArmsUpFrameData[];
extern JointIndex gRutoChildBringArmsUpJointIndices[];
extern AnimationHeader gRutoChildBringArmsUpAnim;
extern s16 gRutoChildTurnAroundFrameData[];
extern JointIndex gRutoChildTurnAroundJointIndices[];
extern AnimationHeader gRutoChildTurnAroundAnim;
extern s16 gRutoChildSquirmFrameData[];
extern JointIndex gRutoChildSquirmJointIndices[];
extern AnimationHeader gRutoChildSquirmAnim;
extern s16 gRutoChildSeesSapphireFrameData[];
extern JointIndex gRutoChildSeesSapphireJointIndices[];
extern AnimationHeader gRutoChildSeesSapphireAnim;
extern s16 gRutoChildShutterFrameData[];
extern JointIndex gRutoChildShutterJointIndices[];
extern AnimationHeader gRutoChildShutterAnim;
extern s16 gRutoChildWalkToAndHoldUpSapphireFrameData[];
extern JointIndex gRutoChildWalkToAndHoldUpSapphireJointIndices[];
extern AnimationHeader gRutoChildWalkToAndHoldUpSapphireAnim;
extern s16 gRutoChildSittingFrameData[];
extern JointIndex gRutoChildSittingJointIndices[];
extern AnimationHeader gRutoChildSittingAnim;
extern s16 gRutoChildSitFrameData[];
extern JointIndex gRutoChildSitJointIndices[];
extern AnimationHeader gRutoChildSitAnim;
extern s16 gRutoChildWalkFrameData[];
extern JointIndex gRutoChildWalkJointIndices[];
extern AnimationHeader gRutoChildWalkAnim;
extern s16 gRutoChildTransitionFromSwimOnBackFrameData[];
extern JointIndex gRutoChildTransitionFromSwimOnBackJointIndices[];
extern AnimationHeader gRutoChildTransitionFromSwimOnBackAnim;
extern s16 gRutoChildTransitionToSwimOnBackFrameData[];
extern JointIndex gRutoChildTransitionToSwimOnBackJointIndices[];
extern AnimationHeader gRutoChildTransitionToSwimOnBackAnim;
extern s16 gRutoChildResurfaceFrameData[];
extern JointIndex gRutoChildResurfaceJointIndices[];
extern AnimationHeader gRutoChildResurfaceAnim;
extern s16 gRutoChildWait2FrameData[];
extern JointIndex gRutoChildWait2JointIndices[];
extern AnimationHeader gRutoChildWait2Anim;
extern Vtx gRutoChildLeftFootVtx[];
extern Vtx gRutoChildLeftShinVtx[];
extern Vtx gRutoChildLeftThighVtx[];
extern Vtx gRutoChildRightFootVtx[];
extern Vtx gRutoChildRightShinVtx[];
extern Vtx gRutoChildRightThighVtx[];
extern Vtx gRutoChildChestVtx[];
extern Vtx gRutoChildRightHandVtx[];
extern Vtx gRutoChildRightFinVtx[];
extern Vtx gRutoChildRightUpperArmVtx[];
extern Vtx gRutoChildLeftHandVtx[];
extern Vtx gRutoChildLeftFinVtx[];
extern Vtx gRutoChildLeftUpperArmVtx[];
extern Vtx gRutoChildTorsoVtx[];
extern Gfx gRutoChildTorsoDL[29];
extern Gfx gRutoChildLeftThighDL[74];
extern Gfx gRutoChildLeftShinDL[75];
extern Gfx gRutoChildLeftFootDL[52];
extern Gfx gRutoChildRightThighDL[74];
extern Gfx gRutoChildRightShinDL[75];
extern Gfx gRutoChildRightFootDL[52];
extern Gfx gRutoChildChestDL[84];
extern Gfx gRutoChildRightUpperArmDL[74];
extern Gfx gRutoChildRightFinDL[91];
extern Gfx gRutoChildRightHandDL[82];
extern Gfx gRutoChildLeftUpperArmDL[74];
extern Gfx gRutoChildLeftFinDL[93];
extern Gfx gRutoChildLeftHandDL[82];
//#define gRutoChildEyeTLUT_TLUT_COUNT 256
extern u64 gRutoChildEyeTLUT[];
//#define gRutoChildMouthTLUT_TLUT_COUNT 192
extern u64 gRutoChildMouthTLUT[];
#define gRutoChildEyeOpenTex_WIDTH 32
#define gRutoChildEyeOpenTex_HEIGHT 32
extern u64 gRutoChildEyeOpenTex[TEX_LEN(u64, gRutoChildEyeOpenTex_WIDTH, gRutoChildEyeOpenTex_HEIGHT, 8)];
#define gRutoChildBlueSkinGradientTex_WIDTH 8
#define gRutoChildBlueSkinGradientTex_HEIGHT 8
extern u64 gRutoChildBlueSkinGradientTex[TEX_LEN(u64, gRutoChildBlueSkinGradientTex_WIDTH, gRutoChildBlueSkinGradientTex_HEIGHT, 16)];
#define gRutoChildMouthClosedTex_WIDTH 32
#define gRutoChildMouthClosedTex_HEIGHT 32
extern u64 gRutoChildMouthClosedTex[TEX_LEN(u64, gRutoChildMouthClosedTex_WIDTH, gRutoChildMouthClosedTex_HEIGHT, 8)];
#define gRutoChildEarTex_WIDTH 16
#define gRutoChildEarTex_HEIGHT 16
extern u64 gRutoChildEarTex[TEX_LEN(u64, gRutoChildEarTex_WIDTH, gRutoChildEarTex_HEIGHT, 16)];
#define gRutoChildBlueSkinPatchesTex_WIDTH 16
#define gRutoChildBlueSkinPatchesTex_HEIGHT 16
extern u64 gRutoChildBlueSkinPatchesTex[TEX_LEN(u64, gRutoChildBlueSkinPatchesTex_WIDTH, gRutoChildBlueSkinPatchesTex_HEIGHT, 16)];
#define gRutoChildUnkHeadCircleTex_WIDTH 16
#define gRutoChildUnkHeadCircleTex_HEIGHT 16
extern u64 gRutoChildUnkHeadCircleTex[TEX_LEN(u64, gRutoChildUnkHeadCircleTex_WIDTH, gRutoChildUnkHeadCircleTex_HEIGHT, 16)];
#define gRutoChildEyeHalfTex_WIDTH 32
#define gRutoChildEyeHalfTex_HEIGHT 32
extern u64 gRutoChildEyeHalfTex[TEX_LEN(u64, gRutoChildEyeHalfTex_WIDTH, gRutoChildEyeHalfTex_HEIGHT, 8)];
#define gRutoChildEyeClosedTex_WIDTH 32
#define gRutoChildEyeClosedTex_HEIGHT 32
extern u64 gRutoChildEyeClosedTex[TEX_LEN(u64, gRutoChildEyeClosedTex_WIDTH, gRutoChildEyeClosedTex_HEIGHT, 8)];
#define gRutoChildMouthFrownTex_WIDTH 32
#define gRutoChildMouthFrownTex_HEIGHT 32
extern u64 gRutoChildMouthFrownTex[TEX_LEN(u64, gRutoChildMouthFrownTex_WIDTH, gRutoChildMouthFrownTex_HEIGHT, 8)];
#define gRutoChildEyeRollLeftTex_WIDTH 32
#define gRutoChildEyeRollLeftTex_HEIGHT 32
extern u64 gRutoChildEyeRollLeftTex[TEX_LEN(u64, gRutoChildEyeRollLeftTex_WIDTH, gRutoChildEyeRollLeftTex_HEIGHT, 8)];
#define gRutoChildEyeHalf2Tex_WIDTH 32
#define gRutoChildEyeHalf2Tex_HEIGHT 32
extern u64 gRutoChildEyeHalf2Tex[TEX_LEN(u64, gRutoChildEyeHalf2Tex_WIDTH, gRutoChildEyeHalf2Tex_HEIGHT, 8)];
#define gRutoChildMouthOpenTex_WIDTH 32
#define gRutoChildMouthOpenTex_HEIGHT 32
extern u64 gRutoChildMouthOpenTex[TEX_LEN(u64, gRutoChildMouthOpenTex_WIDTH, gRutoChildMouthOpenTex_HEIGHT, 8)];
#define gRutoChildEyeHalfWithBlushTex_WIDTH 32
#define gRutoChildEyeHalfWithBlushTex_HEIGHT 32
extern u64 gRutoChildEyeHalfWithBlushTex[TEX_LEN(u64, gRutoChildEyeHalfWithBlushTex_WIDTH, gRutoChildEyeHalfWithBlushTex_HEIGHT, 8)];
extern Vtx gRutoChildHeadVtx[];
extern Gfx gRutoChildHeadDL[257];
#define gRutoChildFingersTex_WIDTH 16
#define gRutoChildFingersTex_HEIGHT 16
extern u64 gRutoChildFingersTex[TEX_LEN(u64, gRutoChildFingersTex_WIDTH, gRutoChildFingersTex_HEIGHT, 16)];
#define gRutoChildCircleGradientTex_WIDTH 16
#define gRutoChildCircleGradientTex_HEIGHT 16
extern u64 gRutoChildCircleGradientTex[TEX_LEN(u64, gRutoChildCircleGradientTex_WIDTH, gRutoChildCircleGradientTex_HEIGHT, 16)];
extern StandardLimb gRutoChildRootLimb;
extern StandardLimb gRutoChildLeftThighLimb;
extern StandardLimb gRutoChildLeftShinLimb;
extern StandardLimb gRutoChildLeftFootLimb;
extern StandardLimb gRutoChildRightThighLimb;
extern StandardLimb gRutoChildRightShinLimb;
extern StandardLimb gRutoChildRightFootLimb;
extern StandardLimb gRutoChildChestLimb;
extern StandardLimb gRutoChildLeftUpperArmLimb;
extern StandardLimb gRutoChildLeftFinLimb;
extern StandardLimb gRutoChildLeftHandLimb;
extern StandardLimb gRutoChildRightUpperArmLimb;
extern StandardLimb gRutoChildRightFinLimb;
extern StandardLimb gRutoChildRightHandLimb;
extern StandardLimb gRutoChildHeadLimb;
extern StandardLimb gRutoChildTorsoLimb;
extern void* gRutoChildLimbs[];
typedef enum gRutoChildSkelLimb {
    /*  0 */ LIMB_OBJECT_RU1_012700_NONE,
    /*  1 */ LIMB_OBJECT_RU1_012600,
    /*  2 */ LIMB_OBJECT_RU1_01260C,
    /*  3 */ LIMB_OBJECT_RU1_012618,
    /*  4 */ LIMB_OBJECT_RU1_012624,
    /*  5 */ LIMB_OBJECT_RU1_012630,
    /*  6 */ LIMB_OBJECT_RU1_01263C,
    /*  7 */ LIMB_OBJECT_RU1_012648,
    /*  8 */ LIMB_OBJECT_RU1_012654,
    /*  9 */ LIMB_OBJECT_RU1_012660,
    /* 10 */ LIMB_OBJECT_RU1_01266C,
    /* 11 */ LIMB_OBJECT_RU1_012678,
    /* 12 */ LIMB_OBJECT_RU1_012684,
    /* 13 */ LIMB_OBJECT_RU1_012690,
    /* 14 */ LIMB_OBJECT_RU1_01269C,
    /* 15 */ LIMB_OBJECT_RU1_0126A8,
    /* 16 */ LIMB_OBJECT_RU1_0126B4,
    /* 17 */ LIMB_OBJECT_RU1_012700_MAX
} gRutoChildSkelLimb;
extern FlexSkeletonHeader gRutoChildSkel;
extern s16 gRutoChildSwimOnBackFrameData[];
extern JointIndex gRutoChildSwimOnBackJointIndices[];
extern AnimationHeader gRutoChildSwimOnBackAnim;
extern s16 gRutoChildTreadWaterFrameData[];
extern JointIndex gRutoChildTreadWaterJointIndices[];
extern AnimationHeader gRutoChildTreadWaterAnim;

#endif
