#ifndef OBJECT_MA1_H
#define OBJECT_MA1_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gMalonChildRaiseHandsFrameData[];
extern JointIndex gMalonChildRaiseHandsJointIndices[];
extern AnimationHeader gMalonChildRaiseHandsAnim;
extern s16 gMalonChildIdleFrameData[];
extern JointIndex gMalonChildIdleJointIndices[];
extern AnimationHeader gMalonChildIdleAnim;
//#define gMalonChildDressTLUT_TLUT_COUNT 256
extern u64 gMalonChildDressTLUT[];
#define gMalonChildDressDesignTex_WIDTH 8
#define gMalonChildDressDesignTex_HEIGHT 16
extern u64 gMalonChildDressDesignTex[TEX_LEN(u64, gMalonChildDressDesignTex_WIDTH, gMalonChildDressDesignTex_HEIGHT, 8)];
#define gMalonChildFingersTex_WIDTH 16
#define gMalonChildFingersTex_HEIGHT 16
extern u64 gMalonChildFingersTex[TEX_LEN(u64, gMalonChildFingersTex_WIDTH, gMalonChildFingersTex_HEIGHT, 16)];
#define gMalonChildBowserTex_WIDTH 16
#define gMalonChildBowserTex_HEIGHT 32
extern u64 gMalonChildBowserTex[TEX_LEN(u64, gMalonChildBowserTex_WIDTH, gMalonChildBowserTex_HEIGHT, 16)];
#define gMalonChildScarfTex_WIDTH 8
#define gMalonChildScarfTex_HEIGHT 8
extern u64 gMalonChildScarfTex[TEX_LEN(u64, gMalonChildScarfTex_WIDTH, gMalonChildScarfTex_HEIGHT, 8)];
#define gMalonChildBootTex_WIDTH 64
#define gMalonChildBootTex_HEIGHT 16
extern u64 gMalonChildBootTex[TEX_LEN(u64, gMalonChildBootTex_WIDTH, gMalonChildBootTex_HEIGHT, 8)];
//#define gMalonChildHairTLUT_TLUT_COUNT 96
extern u64 gMalonChildHairTLUT[];
//#define gMalonChildEyeTLUT_TLUT_COUNT 180
extern u64 gMalonChildEyeTLUT[];
#define gMalonChildSkinGradientTex_WIDTH 8
#define gMalonChildSkinGradientTex_HEIGHT 8
extern u64 gMalonChildSkinGradientTex[TEX_LEN(u64, gMalonChildSkinGradientTex_WIDTH, gMalonChildSkinGradientTex_HEIGHT, 16)];
#define gMalonChildBrownCircleTex_WIDTH 8
#define gMalonChildBrownCircleTex_HEIGHT 8
extern u64 gMalonChildBrownCircleTex[TEX_LEN(u64, gMalonChildBrownCircleTex_WIDTH, gMalonChildBrownCircleTex_HEIGHT, 16)];
#define gMalonChildEarTex_WIDTH 16
#define gMalonChildEarTex_HEIGHT 16
extern u64 gMalonChildEarTex[TEX_LEN(u64, gMalonChildEarTex_WIDTH, gMalonChildEarTex_HEIGHT, 16)];
#define gMalonChildHairTex_WIDTH 16
#define gMalonChildHairTex_HEIGHT 16
extern u64 gMalonChildHairTex[TEX_LEN(u64, gMalonChildHairTex_WIDTH, gMalonChildHairTex_HEIGHT, 8)];
#define gMalonChildEyeOpenTex_WIDTH 32
#define gMalonChildEyeOpenTex_HEIGHT 32
extern u64 gMalonChildEyeOpenTex[TEX_LEN(u64, gMalonChildEyeOpenTex_WIDTH, gMalonChildEyeOpenTex_HEIGHT, 8)];
#define gMalonChildNeutralMouthTex_WIDTH 32
#define gMalonChildNeutralMouthTex_HEIGHT 16
extern u64 gMalonChildNeutralMouthTex[TEX_LEN(u64, gMalonChildNeutralMouthTex_WIDTH, gMalonChildNeutralMouthTex_HEIGHT, 16)];
#define gMalonChildEyeHalfTex_WIDTH 32
#define gMalonChildEyeHalfTex_HEIGHT 32
extern u64 gMalonChildEyeHalfTex[TEX_LEN(u64, gMalonChildEyeHalfTex_WIDTH, gMalonChildEyeHalfTex_HEIGHT, 8)];
#define gMalonChildEyeClosedTex_WIDTH 32
#define gMalonChildEyeClosedTex_HEIGHT 32
extern u64 gMalonChildEyeClosedTex[TEX_LEN(u64, gMalonChildEyeClosedTex_WIDTH, gMalonChildEyeClosedTex_HEIGHT, 8)];
#define gMalonChildSmilingMouthTex_WIDTH 32
#define gMalonChildSmilingMouthTex_HEIGHT 16
extern u64 gMalonChildSmilingMouthTex[TEX_LEN(u64, gMalonChildSmilingMouthTex_WIDTH, gMalonChildSmilingMouthTex_HEIGHT, 16)];
#define gMalonChildTalkingMouthTex_WIDTH 32
#define gMalonChildTalkingMouthTex_HEIGHT 16
extern u64 gMalonChildTalkingMouthTex[TEX_LEN(u64, gMalonChildTalkingMouthTex_WIDTH, gMalonChildTalkingMouthTex_HEIGHT, 16)];
extern Vtx gMalonChildHeadVtx[];
extern Gfx gMalonChildHeadDL[314];
extern Vtx gMalonChildDressLowerVtx[];
extern Vtx gMalonChildDressMiddleVtx[];
extern Vtx gMalonChildLeftHandVtx[];
extern Vtx gMalonChildLeftArmVtx[];
extern Vtx gMalonChildLeftShoulderVtx[];
extern Vtx gMalonChildRightHandVtx[];
extern Vtx gMalonChildRightArmVtx[];
extern Vtx gMalonChildRightShoulderVtx[];
extern Vtx gMalonChildChestVtx[];
extern Vtx gMalonChildRightFoorVtx[];
extern Vtx gMalonChildRightShinVtx[];
extern Vtx gMalonChildRightThighVtx[];
extern Vtx gMalonChildLeftFootVtx[];
extern Vtx gMalonChildLeftShinVtx[];
extern Vtx gMalonChildLeftThighVtx[];
extern Vtx gMalonChildDressUpperVtx[];
extern Gfx gMalonChildDressLowerDL[46];
extern Gfx gMalonChildDressMiddleDL[39];
extern Gfx gMalonChildChestDL[138];
extern Gfx gMalonChildRightShoulderDL[55];
extern Gfx gMalonChildRightArmDL[34];
extern Gfx gMalonChildRightHandDL[53];
extern Gfx gMalonChildLeftShoulderDL[55];
extern Gfx gMalonChildLeftArmDL[34];
extern Gfx gMalonChildLeftHandDL[53];
extern Gfx gMalonChildDressUpperDL[32];
extern Gfx gMalonChildRightThighDL[11];
extern Gfx gMalonChildRightShinDL[44];
extern Gfx gMalonChildRightFoorDL[41];
extern Gfx gMalonChildLeftThighDL[11];
extern Gfx gMalonChildLeftShinDL[44];
extern Gfx gMalonChildLeftFootDL[41];
extern StandardLimb gMalonChildRootLimb;
extern StandardLimb gMalonChildLeftThighLimb;
extern StandardLimb gMalonChildLeftShinLimb;
extern StandardLimb gMalonChildLeftFootLimb;
extern StandardLimb gMalonChildRightThighLimb;
extern StandardLimb gMalonChildRightShinLimb;
extern StandardLimb gMalonChildRightFootLimb;
extern StandardLimb gMalonChildChestLimb;
extern StandardLimb gMalonChildLeftShoulderLimb;
extern StandardLimb gMalonChildLeftArmLimb;
extern StandardLimb gMalonChildLeftHandLimb;
extern StandardLimb gMalonChildRightShoulderLimb;
extern StandardLimb gMalonChildRightArmLimb;
extern StandardLimb gMalonChildRightHandLimb;
extern StandardLimb gMalonChildHeadLimb;
extern StandardLimb gMalonChildDressUpperLimb;
extern StandardLimb gMalonChildDressMiddleLimb;
extern StandardLimb gMalonChildDressLowerLimb;
extern void* gMalonChildLimbs[];
typedef enum ChildMalonLimb {
    /*  0 */ CHILD_MALON_LIMB_NONE,
    /*  1 */ CHILD_MALON_ROOT,
    /*  2 */ CHILD_MALON_LIMB_LEFT_THIGH,
    /*  3 */ CHILD_MALON_LIMB_LEFT_SHIN,
    /*  4 */ CHILD_MALON_LIMB_LEFT_FOOT,
    /*  5 */ CHILD_MALON_LIMB_RIGHT_THIGH,
    /*  6 */ CHILD_MALON_LIMB_RIGHT_SHIN,
    /*  7 */ CHILD_MALON_LIMB_RIGHT_FOOT,
    /*  8 */ CHILD_MALON_LIMB_CHEST,
    /*  9 */ CHILD_MALON_LIMB_LEFT_SHOULDER,
    /* 10 */ CHILD_MALON_LIMB_LEFT_ARM,
    /* 11 */ CHILD_MALON_LIMB_LEFT_HAND,
    /* 12 */ CHILD_MALON_LIMB_RIGHT_SHOULDER,
    /* 13 */ CHILD_MALON_LIMB_RIGHT_ARM,
    /* 14 */ CHILD_MALON_LIMB_RIGHT_HAND,
    /* 15 */ CHILD_MALON_LIMB_HEAD,
    /* 16 */ CHILD_MALON_LIMB_DRESS_UPPER,
    /* 17 */ CHILD_MALON_LIMB_DRESS_MIDDLE,
    /* 18 */ CHILD_MALON_LIMB_DRESS_LOWER,
    /* 19 */ CHILD_MALON_LIMB_MAX
} ChildMalonLimb;
extern FlexSkeletonHeader gMalonChildSkel;
extern s16 gMalonChildSingFrameData[];
extern JointIndex gMalonChildSingJointIndices[];
extern AnimationHeader gMalonChildSingAnim;

#endif
