#ifndef OBJECT_EI_H
#define OBJECT_EI_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gStingerPopOutFrameData[];
extern JointIndex gStingerPopOutJointIndices[];
extern AnimationHeader gStingerPopOutAnim;
extern s16 gStingerDiveFrameData[];
extern JointIndex gStingerDiveJointIndices[];
extern AnimationHeader gStingerDiveAnim;
extern s16 gStingerBackflipFrameData[];
extern JointIndex gStingerBackflipJointIndices[];
extern AnimationHeader gStingerBackflipAnim;
extern s16 gStingerHitFrameData[];
extern JointIndex gStingerHitJointIndices[];
extern AnimationHeader gStingerHitAnim;
extern s16 gStingerIdleFrameData[];
extern JointIndex gStingerIdleJointIndices[];
extern AnimationHeader gStingerIdleAnim;
#define gStingerWingTex_WIDTH 16
#define gStingerWingTex_HEIGHT 8
extern u64 gStingerWingTex[TEX_LEN(u64, gStingerWingTex_WIDTH, gStingerWingTex_HEIGHT, 16)];
#define gStingerBodyGradientTex_WIDTH 8
#define gStingerBodyGradientTex_HEIGHT 8
extern u64 gStingerBodyGradientTex[TEX_LEN(u64, gStingerBodyGradientTex_WIDTH, gStingerBodyGradientTex_HEIGHT, 16)];
#define gStingerWingEndTex_WIDTH 8
#define gStingerWingEndTex_HEIGHT 8
extern u64 gStingerWingEndTex[TEX_LEN(u64, gStingerWingEndTex_WIDTH, gStingerWingEndTex_HEIGHT, 16)];
#define gStingerEyeTex_WIDTH 8
#define gStingerEyeTex_HEIGHT 16
extern u64 gStingerEyeTex[TEX_LEN(u64, gStingerEyeTex_WIDTH, gStingerEyeTex_HEIGHT, 16)];
#define gStingerUndersideTex_WIDTH 8
#define gStingerUndersideTex_HEIGHT 8
extern u64 gStingerUndersideTex[TEX_LEN(u64, gStingerUndersideTex_WIDTH, gStingerUndersideTex_HEIGHT, 16)];
#define gStingerFinTex_WIDTH 8
#define gStingerFinTex_HEIGHT 8
extern u64 gStingerFinTex[TEX_LEN(u64, gStingerFinTex_WIDTH, gStingerFinTex_HEIGHT, 16)];
#define gStingerTailGradientTex_WIDTH 4
#define gStingerTailGradientTex_HEIGHT 4
extern u64 gStingerTailGradientTex[TEX_LEN(u64, gStingerTailGradientTex_WIDTH, gStingerTailGradientTex_HEIGHT, 16)];
#define gStingerTailConnectionGradientTex_WIDTH 4
#define gStingerTailConnectionGradientTex_HEIGHT 4
extern u64 gStingerTailConnectionGradientTex[TEX_LEN(u64, gStingerTailConnectionGradientTex_WIDTH, gStingerTailConnectionGradientTex_HEIGHT, 16)];
extern Vtx gStingerLeftWingBaseVtx[];
extern Vtx gStingerLeftWingEndVtx[];
extern Vtx gStingerRightWingBaseVtx[];
extern Vtx gStingerRightWingEndVtx[];
extern Vtx gStingerBodyVtx[];
extern Vtx gStingerTailRootVtx[];
extern Vtx gStingerTailUpperVtx[];
extern Vtx gStingerTailLowerVtx[];
extern Vtx gStingerHeadVtx[];
extern Vtx gStingerFinUpperVtx[];
extern Vtx gStingerFinLowerVtx[];
extern Gfx gStingerLeftWingBaseDL[59];
extern Gfx gStingerLeftWingEndDL[59];
extern Gfx gStingerRightWingBaseDL[59];
extern Gfx gStingerRightWingEndDL[59];
extern Gfx gStingerBodyDL[38];
extern Gfx gStingerTailRootDL[54];
extern Gfx gStingerTailUpperDL[24];
extern Gfx gStingerTailLowerDL[21];
extern Gfx gStingerHeadDL[44];
extern Gfx gStingerFinUpperDL[24];
extern Gfx gStingerFinLowerDL[23];
extern StandardLimb gStingerRootLimb;
extern StandardLimb gStingerBodyRootLimb;
extern StandardLimb gStingerBodyLimb;
extern StandardLimb gStingerTailRootLimb;
extern StandardLimb gStingerTailUpperLimb;
extern StandardLimb gStingerTailLowerLimb;
extern StandardLimb gStingerLimb_3338;
extern StandardLimb gStingerFinRootLimb;
extern StandardLimb gStingerFinUpperLimb;
extern StandardLimb gStingerFinLowerLimb;
extern StandardLimb gStingerHeadRootLimb;
extern StandardLimb gStingerHeadLimb;
extern StandardLimb gStingerLeftWingRootLimb;
extern StandardLimb gStingerLeftWingBaseLimb;
extern StandardLimb gStingerLeftWingEndLimb;
extern StandardLimb gStingerRightWingRootLimb;
extern StandardLimb gStingerRightWingBaseLimb;
extern StandardLimb gStingerRightWingEndLimb;
extern void* gStingerLimbs[];
typedef enum gStingerSkelLimb {
    /*  0 */ LIMB_OBJECT_EI_003410_NONE,
    /*  1 */ LIMB_OBJECT_EI_0032F0,
    /*  2 */ LIMB_OBJECT_EI_0032FC,
    /*  3 */ LIMB_OBJECT_EI_003308,
    /*  4 */ LIMB_OBJECT_EI_003314,
    /*  5 */ LIMB_OBJECT_EI_003320,
    /*  6 */ LIMB_OBJECT_EI_00332C,
    /*  7 */ LIMB_OBJECT_EI_003338,
    /*  8 */ LIMB_OBJECT_EI_003344,
    /*  9 */ LIMB_OBJECT_EI_003350,
    /* 10 */ LIMB_OBJECT_EI_00335C,
    /* 11 */ LIMB_OBJECT_EI_003368,
    /* 12 */ LIMB_OBJECT_EI_003374,
    /* 13 */ LIMB_OBJECT_EI_003380,
    /* 14 */ LIMB_OBJECT_EI_00338C,
    /* 15 */ LIMB_OBJECT_EI_003398,
    /* 16 */ LIMB_OBJECT_EI_0033A4,
    /* 17 */ LIMB_OBJECT_EI_0033B0,
    /* 18 */ LIMB_OBJECT_EI_0033BC,
    /* 19 */ LIMB_OBJECT_EI_003410_MAX
} gStingerSkelLimb;
extern SkeletonHeader gStingerSkel;

#endif
