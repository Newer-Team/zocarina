#ifndef OBJECT_SHOPNUTS_H
#define OBJECT_SHOPNUTS_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gBusinessScrubThrowNutFrameData[];
extern JointIndex gBusinessScrubThrowNutJointIndices[];
extern AnimationHeader gBusinessScrubThrowNutAnim;
extern s16 gBusinessScrubPeekBurrowFrameData[];
extern JointIndex gBusinessScrubPeekBurrowJointIndices[];
extern AnimationHeader gBusinessScrubPeekBurrowAnim;
extern s16 gBusinessScrubRotateFrameData[];
extern JointIndex gBusinessScrubRotateJointIndices[];
extern AnimationHeader gBusinessScrubRotateAnim;
extern s16 gBusinessScrubNervousTransitionFrameData[];
extern JointIndex gBusinessScrubNervousTransitionJointIndices[];
extern AnimationHeader gBusinessScrubNervousTransitionAnim;
extern s16 gBusinessScrubLookAroundFrameData[];
extern JointIndex gBusinessScrubLookAroundJointIndices[];
extern AnimationHeader gBusinessScrubLookAroundAnim;
extern s16 gBusinessScrubNervousIdleFrameData[];
extern JointIndex gBusinessScrubNervousIdleJointIndices[];
extern AnimationHeader gBusinessScrubNervousIdleAnim;
extern s16 gBusinessScrubInitialFrameData[];
extern JointIndex gBusinessScrubInitialJointIndices[];
extern AnimationHeader gBusinessScrubInitialAnim;
extern Vtx gBusinessScrubLeftHandVtx[];
extern Vtx gBusinessScrubLeftForearmVtx[];
extern Vtx gBusinessScrubLeftUpperArmVtx[];
extern Vtx gBusinessScrubRightHandVtx[];
extern Vtx gBusinessScrubRightForearmVtx[];
extern Vtx gBusinessScrubRightUpperArmVtx[];
extern Vtx gBusinessScrubLeftFootVtx[];
extern Vtx gBusinessScrubLeftShinVtx[];
extern Vtx gBusinessScrubLeftThighVtx[];
extern Vtx gBusinessScrubRightFootVtx[];
extern Vtx gBusinessScrubRightShinVtx[];
extern Vtx gBusinessScrubRightThighVtx[];
extern Gfx gBusinessScrubRightHandDL[31];
extern Gfx gBusinessScrubRightForearmDL[26];
extern Gfx gBusinessScrubRightUpperArmDL[22];
extern Gfx gBusinessScrubLeftHandDL[31];
extern Gfx gBusinessScrubLeftForearmDL[26];
extern Gfx gBusinessScrubLeftUpperArmDL[22];
extern Gfx gBusinessScrubRightFootDL[29];
extern Gfx gBusinessScrubRightShinDL[26];
extern Gfx gBusinessScrubRightThighDL[22];
extern Gfx gBusinessScrubLeftFootDL[29];
extern Gfx gBusinessScrubLeftShinDL[26];
extern Gfx gBusinessScrubLeftThighDL[22];
#define gBusinessScrubBodyTex_WIDTH 16
#define gBusinessScrubBodyTex_HEIGHT 16
extern u64 gBusinessScrubBodyTex[TEX_LEN(u64, gBusinessScrubBodyTex_WIDTH, gBusinessScrubBodyTex_HEIGHT, 16)];
#define gBusinessScrubNoseTex_WIDTH 8
#define gBusinessScrubNoseTex_HEIGHT 8
extern u64 gBusinessScrubNoseTex[TEX_LEN(u64, gBusinessScrubNoseTex_WIDTH, gBusinessScrubNoseTex_HEIGHT, 16)];
#define gBusinessScrubNostrilTex_WIDTH 8
#define gBusinessScrubNostrilTex_HEIGHT 8
extern u64 gBusinessScrubNostrilTex[TEX_LEN(u64, gBusinessScrubNostrilTex_WIDTH, gBusinessScrubNostrilTex_HEIGHT, 16)];
#define gBusinessScrubEyeTex_WIDTH 8
#define gBusinessScrubEyeTex_HEIGHT 8
extern u64 gBusinessScrubEyeTex[TEX_LEN(u64, gBusinessScrubEyeTex_WIDTH, gBusinessScrubEyeTex_HEIGHT, 16)];
#define gBusinessScrubLeafStemTex_WIDTH 8
#define gBusinessScrubLeafStemTex_HEIGHT 8
extern u64 gBusinessScrubLeafStemTex[TEX_LEN(u64, gBusinessScrubLeafStemTex_WIDTH, gBusinessScrubLeafStemTex_HEIGHT, 16)];
#define gBusinessScrubLeafTex_WIDTH 32
#define gBusinessScrubLeafTex_HEIGHT 32
extern u64 gBusinessScrubLeafTex[TEX_LEN(u64, gBusinessScrubLeafTex_WIDTH, gBusinessScrubLeafTex_HEIGHT, 16)];
extern Vtx gBusinessScrubBodyVtx[];
extern Vtx gBusinessScrubEyesVtx[];
extern Vtx gBusinessScrubNoseVtx[];
extern Vtx gBusinessScrubRootLeafVtx[];
extern Vtx gBusinessScrubTopLeafVtx[];
extern Gfx gBusinessScrubBodyDL[52];
extern Gfx gBusinessScrubEyesDL[19];
extern Gfx gBusinessScrubNoseDL[35];
extern Gfx gBusinessScrubRootLeafDL[22];
extern Gfx gBusinessScrubTopLeafDL[21];
#define gBusinessScrubDekuNutTex_WIDTH 16
#define gBusinessScrubDekuNutTex_HEIGHT 16
extern u64 gBusinessScrubDekuNutTex[TEX_LEN(u64, gBusinessScrubDekuNutTex_WIDTH, gBusinessScrubDekuNutTex_HEIGHT, 16)];
extern Vtx gBusinessScrubDekuNutVtx[];
extern Gfx gBusinessScrubDekuNutDL[18];
extern StandardLimb gBusinessScrubRootLimb;
extern StandardLimb gBusinessScrubLeftThighLimb;
extern StandardLimb gBusinessScrubLeftShinLimb;
extern StandardLimb gBusinessScrubLeftFootLimb;
extern StandardLimb gBusinessScrubRightThighLimb;
extern StandardLimb gBusinessScrubRightShinLimb;
extern StandardLimb gBusinessScrubRightFootLimb;
extern StandardLimb gBusinessScrubTopLeafLimb;
extern StandardLimb gBusinessScrubNoseLimb;
extern StandardLimb gBusinessScrubLeftUpperArmLimb;
extern StandardLimb gBusinessScrubLeftForearmLimb;
extern StandardLimb gBusinessScrubLeftHandLimb;
extern StandardLimb gBusinessScrubRightUpperArmLimb;
extern StandardLimb gBusinessScrubRightForearmLimb;
extern StandardLimb gBusinessScrubRightHandLimb;
extern StandardLimb gBusinessScrubEyesLimb;
extern StandardLimb gBusinessScrubBodyLimb;
extern void* gBusinessScrubLimbs[];
typedef enum BusinessScrubLimb {
    /*  0 */ BUSINESS_SCRUB_LIMB_NONE,
    /*  1 */ BUSINESS_SCRUB_LIMB_ROOT,
    /*  2 */ BUSINESS_SCRUB_LIMB_LEFT_THIGH,
    /*  3 */ BUSINESS_SCRUB_LIMB_LEFT_SHIN,
    /*  4 */ BUSINESS_SCRUB_LIMB_LEFT_FOOT,
    /*  5 */ BUSINESS_SCRUB_LIMB_RIGHT_THIGH,
    /*  6 */ BUSINESS_SCRUB_LIMB_RIGHT_SHIN,
    /*  7 */ BUSINESS_SCRUB_LIMB_RIGHT_FOOT,
    /*  8 */ BUSINESS_SCRUB_LIMB_TOP_LEAF,
    /*  9 */ BUSINESS_SCRUB_LIMB_NOSE,
    /* 10 */ BUSINESS_SCRUB_LIMB_LEFT_UPPER_ARM,
    /* 11 */ BUSINESS_SCRUB_LIMB_LEFT_FOREARM,
    /* 12 */ BUSINESS_SCRUB_LIMB_LEFT_HAND,
    /* 13 */ BUSINESS_SCRUB_LIMB_RIGHT_UPPER_ARM,
    /* 14 */ BUSINESS_SCRUB_LIMB_RIGHT_FOREARM,
    /* 15 */ BUSINESS_SCRUB_LIMB_RIGHT_HAND,
    /* 16 */ BUSINESS_SCRUB_LIMB_EYES,
    /* 17 */ BUSINESS_SCRUB_LIMB_BODY,
    /* 18 */ BUSINESS_SCRUB_LIMB_MAX
} BusinessScrubLimb;
extern FlexSkeletonHeader gBusinessScrubSkel;
extern s16 gBusinessScrubLeaveBurrowFrameData[];
extern JointIndex gBusinessScrubLeaveBurrowJointIndices[];
extern AnimationHeader gBusinessScrubLeaveBurrowAnim;
extern s16 gBusinessScrubPeekFrameData[];
extern JointIndex gBusinessScrubPeekJointIndices[];
extern AnimationHeader gBusinessScrubPeekAnim;

#endif
