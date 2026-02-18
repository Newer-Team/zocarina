#ifndef OBJECT_VALI_H
#define OBJECT_VALI_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gBariWaitingFrameData[];
extern JointIndex gBariWaitingJointIndices[];
extern AnimationHeader gBariWaitingAnim;
extern s16 gBariRetaliatingFrameData[];
extern JointIndex gBariRetaliatingJointIndices[];
extern AnimationHeader gBariRetaliatingAnim;
extern s16 gBariMovingArmsDownFrameData[];
extern JointIndex gBariMovingArmsDownJointIndices[];
extern AnimationHeader gBariMovingArmsDownAnim;
extern s16 gBariUnusedAnim_000D9C_06000B50_FrameData[];
extern JointIndex gBariUnusedAnim_000D9C_06000CEC_JointIndices[];
extern AnimationHeader gBariUnusedAnim_000D9C;
extern s16 gBariLurkingFrameData[];
extern JointIndex gBariLurkingJointIndices[];
extern AnimationHeader gBariLurkingAnim;
extern Vtx gBariInnerHoodVtx[];
extern Vtx gBariNucleusVtx[];
extern Vtx gBariOuterHoodVtx[];
extern Vtx gBariRightMandibleVtx[];
extern Vtx gBariLeftMandibleVtx[];
extern Vtx gBariRightClawTipVtx[];
extern Vtx gBariRightClawBodyVtx[];
extern Vtx gBariRightForearmVtx[];
extern Vtx gBariRightUpperArmVtx[];
extern Vtx gBariLeftClawTipVtx[];
extern Vtx gBariLeftClawBodyVtx[];
extern Vtx gBariLeftForearmVtx[];
extern Vtx gBariLeftUpperArmVtx[];
extern Gfx gBariInnerHoodDL[38];
extern Gfx gBariNucleusDL[19];
extern Gfx gBariOuterHoodDL[50];
extern Gfx gBariRightMandibleDL[24];
extern Gfx gBariLeftMandibleDL[24];
extern Gfx gBariRightClawTipDL[19];
extern Gfx gBariRightClawBodyDL[20];
extern Gfx gBariRightForearmDL[38];
extern Gfx gBariRightUpperArmDL[21];
extern Gfx gBariLeftClawTipDL[19];
extern Gfx gBariLeftClawBodyDL[20];
extern Gfx gBariLeftForearmDL[38];
extern Gfx gBariLeftUpperArmDL[21];
#define gBariNucleusTex_WIDTH 32
#define gBariNucleusTex_HEIGHT 32
extern u64 gBariNucleusTex[TEX_LEN(u64, gBariNucleusTex_WIDTH, gBariNucleusTex_HEIGHT, 16)];
#define gBariMandibleClawTex_WIDTH 8
#define gBariMandibleClawTex_HEIGHT 8
extern u64 gBariMandibleClawTex[TEX_LEN(u64, gBariMandibleClawTex_WIDTH, gBariMandibleClawTex_HEIGHT, 16)];
#define gBariOuterHoodForearmTex_WIDTH 16
#define gBariOuterHoodForearmTex_HEIGHT 32
extern u64 gBariOuterHoodForearmTex[TEX_LEN(u64, gBariOuterHoodForearmTex_WIDTH, gBariOuterHoodForearmTex_HEIGHT, 16)];
#define gBariOuterHoodBottomTex_WIDTH 8
#define gBariOuterHoodBottomTex_HEIGHT 16
extern u64 gBariOuterHoodBottomTex[TEX_LEN(u64, gBariOuterHoodBottomTex_WIDTH, gBariOuterHoodBottomTex_HEIGHT, 16)];
#define gBariInnerHoodTex_WIDTH 32
#define gBariInnerHoodTex_HEIGHT 32
extern u64 gBariInnerHoodTex[TEX_LEN(u64, gBariInnerHoodTex_WIDTH, gBariInnerHoodTex_HEIGHT, 16)];
extern StandardLimb gBariNucleusBaseLimb;
extern StandardLimb gBariNucleusLimb;
extern StandardLimb gBariRightMandibleBaseBaseLimb;
extern StandardLimb gBariRightMandibleBaseLimb;
extern StandardLimb gBariRightMandibleLimb;
extern StandardLimb gBariLeftMandibleBaseBaseLimb;
extern StandardLimb gBariLeftMandibleBaseLimb;
extern StandardLimb gBariLeftMandibleLimb;
extern StandardLimb gBariLeftArmBaseLimb;
extern StandardLimb gBariLeftUpperArmBaseLimb;
extern StandardLimb gBariLeftForearmBaseLimb;
extern StandardLimb gBariLeftClawBodyBaseLimb;
extern StandardLimb gBariLeftClawTipBaseLimb;
extern StandardLimb gBariLeftClawTipLimb;
extern StandardLimb gBariLeftClawBodyLimb;
extern StandardLimb gBariLeftForearmLimb;
extern StandardLimb gBariLeftUpperArmLimb;
extern StandardLimb gBariRightArmBaseLimb;
extern StandardLimb gBariRightUpperArmBaseLimb;
extern StandardLimb gBariRightForearmBaseLimb;
extern StandardLimb gBariRightClawBodyBaseLimb;
extern StandardLimb gBariRightClawTipBaseLimb;
extern StandardLimb gBariRightClawTipLimb;
extern StandardLimb gBariRightClawBodyLimb;
extern StandardLimb gBariRightForearmLimb;
extern StandardLimb gBariRightUpperArmLimb;
extern StandardLimb gBariInnerHoodLimb;
extern StandardLimb gBariOuterHoodLimb;
extern void* gBariLimbs[];
typedef enum ValiLimb {
    /*  0 */ VALI_LIMB_NONE,
    /*  1 */ VALI_LIMB_NUCLEUS_BASE,
    /*  2 */ VALI_LIMB_NUCLEUS,
    /*  3 */ VALI_LIMB_RIGHT_MANDIBLE_BASE_BASE,
    /*  4 */ VALI_LIMB_RIGHT_MANDIBLE_BASE,
    /*  5 */ VALI_LIMB_RIGHT_MANDIBLE,
    /*  6 */ VALI_LIMB_LEFT_MANDIBLE_BASE_BASE,
    /*  7 */ VALI_LIMB_LEFT_MANDIBLE_BASE,
    /*  8 */ VALI_LIMB_LEFT_MANDIBLE,
    /*  9 */ VALI_LIMB_LEFT_ARM_BASE,
    /* 10 */ VALI_LIMB_LEFT_UPPER_ARM_BASE,
    /* 11 */ VALI_LIMB_LEFT_FOREARM_BASE,
    /* 12 */ VALI_LIMB_LEFT_CLAW_BODY_BASE,
    /* 13 */ VALI_LIMB_LEFT_CLAW_TIP_BASE,
    /* 14 */ VALI_LIMB_LEFT_CLAW_TIP,
    /* 15 */ VALI_LIMB_LEFT_CLAW_BODY,
    /* 16 */ VALI_LIMB_LEFT_FOREARM,
    /* 17 */ VALI_LIMB_LEFT_UPPER_ARM,
    /* 18 */ VALI_LIMB_RIGHT_ARM_BASE,
    /* 19 */ VALI_LIMB_RIGHT_UPPER_ARM_BASE,
    /* 20 */ VALI_LIMB_RIGHT_FOREARM_BASE,
    /* 21 */ VALI_LIMB_RIGHT_CLAW_BODY_BASE,
    /* 22 */ VALI_LIMB_RIGHT_CLAW_TIP_BASE,
    /* 23 */ VALI_LIMB_RIGHT_CLAW_TIP,
    /* 24 */ VALI_LIMB_RIGHT_CLAW_BODY,
    /* 25 */ VALI_LIMB_RIGHT_FOREARM,
    /* 26 */ VALI_LIMB_RIGHT_UPPER_ARM,
    /* 27 */ VALI_LIMB_INNER_HOOD,
    /* 28 */ VALI_LIMB_OUTER_HOOD,
    /* 29 */ VALI_LIMB_MAX
} ValiLimb;
extern SkeletonHeader gBariSkel;

#endif
