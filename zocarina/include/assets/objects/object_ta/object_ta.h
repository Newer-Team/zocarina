#ifndef OBJECT_TA_H
#define OBJECT_TA_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gTalonSitSleepingFrameData[];
extern JointIndex gTalonSitSleepingJointIndices[];
extern AnimationHeader gTalonSitSleepingAnim;
extern s16 gTalonStandFrameData[];
extern JointIndex gTalonStandJointIndices[];
extern AnimationHeader gTalonStandAnim;
extern Vtx gTalonLeftHandVtx[];
extern Vtx gTalonLeftArmVtx[];
extern Vtx gTalonLeftShoulderVtx[];
extern Vtx gTalonRightHandVtx[];
extern Vtx gTalonRightArmVtx[];
extern Vtx gTalonRightShoulderVtx[];
extern Vtx gTalonChestVtx[];
extern Vtx gTalonLeftLegVtx[];
extern Vtx gTalonLeftThighVtx[];
extern Vtx gTalonRightLegVtx[];
extern Vtx gTalonRightThighVtx[];
extern Vtx gTalonTorsoVtx[];
extern Gfx gTalonTorsoDL[99];
extern Gfx gTalonChestDL[210];
extern Gfx gTalonRightShoulderDL[69];
extern Gfx gTalonRightArmDL[86];
extern Gfx gTalonRightHandDL[149];
extern Gfx gTalonLeftShoulderDL[69];
extern Gfx gTalonLeftArmDL[86];
extern Gfx gTalonLeftHandDL[133];
extern Gfx gTalonRightThighDL[136];
extern Gfx gTalonRightLegDL[107];
extern Gfx gTalonLeftThighDL[136];
extern Gfx gTalonLeftLegDL[106];
//#define gTalon2TLUT_TLUT_COUNT 132
extern u64 gTalon2TLUT[];
//#define gTalonEyeTLUT_TLUT_COUNT 252
extern u64 gTalonEyeTLUT[];
#define gTalonHeadSkinTex_WIDTH 8
#define gTalonHeadSkinTex_HEIGHT 8
extern u64 gTalonHeadSkinTex[TEX_LEN(u64, gTalonHeadSkinTex_WIDTH, gTalonHeadSkinTex_HEIGHT, 8)];
#define gTalonEarTex_WIDTH 8
#define gTalonEarTex_HEIGHT 8
extern u64 gTalonEarTex[TEX_LEN(u64, gTalonEarTex_WIDTH, gTalonEarTex_HEIGHT, 8)];
#define gTalonFaceHairTex_WIDTH 8
#define gTalonFaceHairTex_HEIGHT 16
extern u64 gTalonFaceHairTex[TEX_LEN(u64, gTalonFaceHairTex_WIDTH, gTalonFaceHairTex_HEIGHT, 8)];
#define gTalonEyeHalfTex_WIDTH 32
#define gTalonEyeHalfTex_HEIGHT 32
extern u64 gTalonEyeHalfTex[TEX_LEN(u64, gTalonEyeHalfTex_WIDTH, gTalonEyeHalfTex_HEIGHT, 8)];
#define gTalonEyeClosedTex_WIDTH 32
#define gTalonEyeClosedTex_HEIGHT 32
extern u64 gTalonEyeClosedTex[TEX_LEN(u64, gTalonEyeClosedTex_WIDTH, gTalonEyeClosedTex_HEIGHT, 8)];
#define gTalonEyeClosed2Tex_WIDTH 32
#define gTalonEyeClosed2Tex_HEIGHT 32
extern u64 gTalonEyeClosed2Tex[TEX_LEN(u64, gTalonEyeClosed2Tex_WIDTH, gTalonEyeClosed2Tex_HEIGHT, 8)];
#define gTalonRedTex_WIDTH 8
#define gTalonRedTex_HEIGHT 8
extern u64 gTalonRedTex[TEX_LEN(u64, gTalonRedTex_WIDTH, gTalonRedTex_HEIGHT, 8)];
#define gTalonHeadHairTex_WIDTH 16
#define gTalonHeadHairTex_HEIGHT 32
extern u64 gTalonHeadHairTex[TEX_LEN(u64, gTalonHeadHairTex_WIDTH, gTalonHeadHairTex_HEIGHT, 8)];
#define gTalonBootSideTex_WIDTH 16
#define gTalonBootSideTex_HEIGHT 16
extern u64 gTalonBootSideTex[TEX_LEN(u64, gTalonBootSideTex_WIDTH, gTalonBootSideTex_HEIGHT, 8)];
#define gTalonBootTopTex_WIDTH 16
#define gTalonBootTopTex_HEIGHT 16
extern u64 gTalonBootTopTex[TEX_LEN(u64, gTalonBootTopTex_WIDTH, gTalonBootTopTex_HEIGHT, 8)];
#define gTalonHeadHairTopTex_WIDTH 8
#define gTalonHeadHairTopTex_HEIGHT 16
extern u64 gTalonHeadHairTopTex[TEX_LEN(u64, gTalonHeadHairTopTex_WIDTH, gTalonHeadHairTopTex_HEIGHT, 8)];
#define gTalonEyeOpenTex_WIDTH 32
#define gTalonEyeOpenTex_HEIGHT 32
extern u64 gTalonEyeOpenTex[TEX_LEN(u64, gTalonEyeOpenTex_WIDTH, gTalonEyeOpenTex_HEIGHT, 8)];
extern Vtx gTalonHeadVtx[];
extern Vtx gTalonRightFootVtx[];
extern Vtx gTalonLeftFootVtx[];
extern Gfx gTalonHeadDL[389];
extern Gfx gTalonRightFootDL[52];
extern Gfx gTalonLeftFootDL[52];
//#define gTalonSkinAndClothesTLUT_TLUT_COUNT 256
extern u64 gTalonSkinAndClothesTLUT[];
#define gTalonGradient2Tex_WIDTH 8
#define gTalonGradient2Tex_HEIGHT 8
extern u64 gTalonGradient2Tex[TEX_LEN(u64, gTalonGradient2Tex_WIDTH, gTalonGradient2Tex_HEIGHT, 16)];
#define gTalonSkinTex_WIDTH 8
#define gTalonSkinTex_HEIGHT 8
extern u64 gTalonSkinTex[TEX_LEN(u64, gTalonSkinTex_WIDTH, gTalonSkinTex_HEIGHT, 8)];
#define gTalonFingersTex_WIDTH 16
#define gTalonFingersTex_HEIGHT 16
extern u64 gTalonFingersTex[TEX_LEN(u64, gTalonFingersTex_WIDTH, gTalonFingersTex_HEIGHT, 8)];
#define gTalonArmHairTex_WIDTH 16
#define gTalonArmHairTex_HEIGHT 32
extern u64 gTalonArmHairTex[TEX_LEN(u64, gTalonArmHairTex_WIDTH, gTalonArmHairTex_HEIGHT, 8)];
#define gTalonSleeveTex_WIDTH 8
#define gTalonSleeveTex_HEIGHT 8
extern u64 gTalonSleeveTex[TEX_LEN(u64, gTalonSleeveTex_WIDTH, gTalonSleeveTex_HEIGHT, 8)];
#define gTalonBlueTex_WIDTH 8
#define gTalonBlueTex_HEIGHT 8
extern u64 gTalonBlueTex[TEX_LEN(u64, gTalonBlueTex_WIDTH, gTalonBlueTex_HEIGHT, 8)];
#define gTalonBluePatternTex_WIDTH 8
#define gTalonBluePatternTex_HEIGHT 8
extern u64 gTalonBluePatternTex[TEX_LEN(u64, gTalonBluePatternTex_WIDTH, gTalonBluePatternTex_HEIGHT, 8)];
#define gTalonBrownBlueOutlineTex_WIDTH 16
#define gTalonBrownBlueOutlineTex_HEIGHT 16
extern u64 gTalonBrownBlueOutlineTex[TEX_LEN(u64, gTalonBrownBlueOutlineTex_WIDTH, gTalonBrownBlueOutlineTex_HEIGHT, 8)];
#define gTalonNecklaceStringUpperTex_WIDTH 16
#define gTalonNecklaceStringUpperTex_HEIGHT 32
extern u64 gTalonNecklaceStringUpperTex[TEX_LEN(u64, gTalonNecklaceStringUpperTex_WIDTH, gTalonNecklaceStringUpperTex_HEIGHT, 8)];
#define gTalonBowserTex_WIDTH 16
#define gTalonBowserTex_HEIGHT 32
extern u64 gTalonBowserTex[TEX_LEN(u64, gTalonBowserTex_WIDTH, gTalonBowserTex_HEIGHT, 16)];
#define gTalonNecklaceLowerStringsTex_WIDTH 8
#define gTalonNecklaceLowerStringsTex_HEIGHT 16
extern u64 gTalonNecklaceLowerStringsTex[TEX_LEN(u64, gTalonNecklaceLowerStringsTex_WIDTH, gTalonNecklaceLowerStringsTex_HEIGHT, 16)];
#define gTalonUnusedTex_WIDTH 16
#define gTalonUnusedTex_HEIGHT 16
extern u64 gTalonUnusedTex[TEX_LEN(u64, gTalonUnusedTex_WIDTH, gTalonUnusedTex_HEIGHT, 16)];
extern StandardLimb gTalonRootLimb;
extern StandardLimb gTalonLeftThighLimb;
extern StandardLimb gTalonLeftLegLimb;
extern StandardLimb gTalonLeftFootLimb;
extern StandardLimb gTalonRightThighLimb;
extern StandardLimb gTalonRightLegLimb;
extern StandardLimb gTalonRightFootLimb;
extern StandardLimb gTalonChestLimb;
extern StandardLimb gTalonLeftShoulderLimb;
extern StandardLimb gTalonLeftArmLimb;
extern StandardLimb gTalonLeftHandLimb;
extern StandardLimb gTalonRightShoulderLimb;
extern StandardLimb gTalonRightArmLimb;
extern StandardLimb gTalonRightHandLimb;
extern StandardLimb gTalonHeadLimb;
extern StandardLimb gTalonTorsoLimb;
extern void* gTalonLimbs[];
typedef enum TalonLimb {
    /*  0 */ TALON_LIMB_NONE,
    /*  1 */ TALON_LIMB_ROOT,
    /*  2 */ TALON_LIMB_LEFT_THIGH,
    /*  3 */ TALON_LIMB_LEFT_LEG,
    /*  4 */ TALON_LIMB_LEFT_FOOT,
    /*  5 */ TALON_LIMB_RIGHT_THIGH,
    /*  6 */ TALON_LIMB_RIGHT_LEG,
    /*  7 */ TALON_LIMB_RIGHT_FOOT,
    /*  8 */ TALON_LIMB_CHEST,
    /*  9 */ TALON_LIMB_LEFT_SHOULDER,
    /* 10 */ TALON_LIMB_LEFT_ARM,
    /* 11 */ TALON_LIMB_LEFT_HAND,
    /* 12 */ TALON_LIMB_RIGHT_SHOULDER,
    /* 13 */ TALON_LIMB_RIGHT_ARM,
    /* 14 */ TALON_LIMB_RIGHT_HAND,
    /* 15 */ TALON_LIMB_HEAD,
    /* 16 */ TALON_LIMB_TORSO,
    /* 17 */ TALON_LIMB_MAX
} TalonLimb;
extern FlexSkeletonHeader gTalonSkel;
extern s16 gTalonSitHandsUpFrameData[];
extern JointIndex gTalonSitHandsUpJointIndices[];
extern AnimationHeader gTalonSitHandsUpAnim;
extern s16 gTalonSitWakeUpFrameData[];
extern JointIndex gTalonSitWakeUpJointIndices[];
extern AnimationHeader gTalonSitWakeUpAnim;
extern s16 gTalonRunFrameData[];
extern JointIndex gTalonRunJointIndices[];
extern AnimationHeader gTalonRunAnim;
extern s16 gTalonSleepFrameData[];
extern JointIndex gTalonSleepJointIndices[];
extern AnimationHeader gTalonSleepAnim;
extern s16 gTalonRunTransitionFrameData[];
extern JointIndex gTalonRunTransitionJointIndices[];
extern AnimationHeader gTalonRunTransitionAnim;
extern s16 gTalonWakeUpFrameData[];
extern JointIndex gTalonWakeUpJointIndices[];
extern AnimationHeader gTalonWakeUpAnim;

#endif
