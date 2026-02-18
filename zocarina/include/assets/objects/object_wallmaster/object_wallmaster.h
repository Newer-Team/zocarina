#ifndef OBJECT_WALLMASTER_H
#define OBJECT_WALLMASTER_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gWallmasterDamageFrameData[];
extern JointIndex gWallmasterDamageJointIndices[];
extern AnimationHeader gWallmasterDamageAnim;
extern s16 gWallmasterRecoverFromDamageFrameData[];
extern JointIndex gWallmasterRecoverFromDamageJointIndices[];
extern AnimationHeader gWallmasterRecoverFromDamageAnim;
extern s16 gWallmasterJumpFrameData[];
extern JointIndex gWallmasterJumpJointIndices[];
extern AnimationHeader gWallmasterJumpAnim;
extern s16 gFloormasterTurnFrameData[];
extern JointIndex gFloormasterTurnJointIndices[];
extern AnimationHeader gFloormasterTurnAnim;
extern s16 gWallmasterLungeFrameData[];
extern JointIndex gWallmasterLungeJointIndices[];
extern AnimationHeader gWallmasterLungeAnim;
extern s16 gWallmasterMissFrameData[];
extern JointIndex gWallmasterMissJointIndices[];
extern AnimationHeader gWallmasterMissAnim;
extern s16 gFloormasterTapFingerFrameData[];
extern JointIndex gFloormasterTapFingerJointIndices[];
extern AnimationHeader gFloormasterTapFingerAnim;
extern s16 gWallmasterWalkFrameData[];
extern JointIndex gWallmasterWalkJointIndices[];
extern AnimationHeader gWallmasterWalkAnim;
extern Vtx object_wallmaster_Vtx_004210[];
extern Vtx object_wallmaster_Vtx_0044C0[];
extern Vtx object_wallmaster_Vtx_0046B0[];
extern Vtx object_wallmaster_Vtx_0049D0[];
extern Vtx object_wallmaster_Vtx_004BA0[];
extern Vtx object_wallmaster_Vtx_004D90[];
extern Vtx object_wallmaster_Vtx_0050C0[];
extern Vtx object_wallmaster_Vtx_0052F0[];
extern Vtx object_wallmaster_Vtx_0054D0[];
extern Vtx object_wallmaster_Vtx_005800[];
extern Vtx object_wallmaster_Vtx_005A20[];
extern Vtx object_wallmaster_Vtx_005C10[];
extern Vtx object_wallmaster_Vtx_005F40[];
extern Vtx object_wallmaster_Vtx_006180[];
extern Gfx object_wallmaster_006660_DL[52];
extern Gfx object_wallmaster_006800_DL[68];
extern Gfx object_wallmaster_006A20_DL[71];
extern Gfx object_wallmaster_006C58_DL[72];
extern Gfx object_wallmaster_006E98_DL[52];
extern Gfx object_wallmaster_007038_DL[68];
extern Gfx object_wallmaster_007258_DL[54];
extern Gfx object_wallmaster_007408_DL[52];
extern Gfx object_wallmaster_0075A8_DL[68];
extern Gfx object_wallmaster_0077C8_DL[54];
extern Gfx object_wallmaster_007978_DL[52];
extern Gfx object_wallmaster_007B18_DL[58];
extern Gfx object_wallmaster_007CE8_DL[54];
extern Gfx object_wallmaster_007E98_DL[138];
extern Vtx gWallmasterFingerVtx[];
extern Gfx gWallmasterFingerDL[77];
#define gWallmasterExposedBoneTex_WIDTH 8
#define gWallmasterExposedBoneTex_HEIGHT 16
extern u64 gWallmasterExposedBoneTex[TEX_LEN(u64, gWallmasterExposedBoneTex_WIDTH, gWallmasterExposedBoneTex_HEIGHT, 16)];
#define gWallmasterBloodyEdgeTex_WIDTH 8
#define gWallmasterBloodyEdgeTex_HEIGHT 16
extern u64 gWallmasterBloodyEdgeTex[TEX_LEN(u64, gWallmasterBloodyEdgeTex_WIDTH, gWallmasterBloodyEdgeTex_HEIGHT, 16)];
#define gWallmasterUpperSkinTex_WIDTH 8
#define gWallmasterUpperSkinTex_HEIGHT 8
extern u64 gWallmasterUpperSkinTex[TEX_LEN(u64, gWallmasterUpperSkinTex_WIDTH, gWallmasterUpperSkinTex_HEIGHT, 16)];
#define gWallmasterFingerTipTex_WIDTH 4
#define gWallmasterFingerTipTex_HEIGHT 16
extern u64 gWallmasterFingerTipTex[TEX_LEN(u64, gWallmasterFingerTipTex_WIDTH, gWallmasterFingerTipTex_HEIGHT, 16)];
#define gWallmasterUpperToUnderBorderTex_WIDTH 4
#define gWallmasterUpperToUnderBorderTex_HEIGHT 8
extern u64 gWallmasterUpperToUnderBorderTex[TEX_LEN(u64, gWallmasterUpperToUnderBorderTex_WIDTH, gWallmasterUpperToUnderBorderTex_HEIGHT, 16)];
#define gWallmasterUnderSkinTex_WIDTH 8
#define gWallmasterUnderSkinTex_HEIGHT 16
extern u64 gWallmasterUnderSkinTex[TEX_LEN(u64, gWallmasterUnderSkinTex_WIDTH, gWallmasterUnderSkinTex_HEIGHT, 16)];
#define gWallmasterKnuckleTex_WIDTH 8
#define gWallmasterKnuckleTex_HEIGHT 16
extern u64 gWallmasterKnuckleTex[TEX_LEN(u64, gWallmasterKnuckleTex_WIDTH, gWallmasterKnuckleTex_HEIGHT, 16)];
extern StandardLimb object_wallmaster_008E30_Limb;
extern StandardLimb object_wallmaster_008E3C_Limb;
extern StandardLimb object_wallmaster_008E48_Limb;
extern StandardLimb object_wallmaster_008E54_Limb;
extern StandardLimb object_wallmaster_008E60_Limb;
extern StandardLimb object_wallmaster_008E6C_Limb;
extern StandardLimb object_wallmaster_008E78_Limb;
extern StandardLimb object_wallmaster_008E84_Limb;
extern StandardLimb object_wallmaster_008E90_Limb;
extern StandardLimb object_wallmaster_008E9C_Limb;
extern StandardLimb object_wallmaster_008EA8_Limb;
extern StandardLimb object_wallmaster_008EB4_Limb;
extern StandardLimb object_wallmaster_008EC0_Limb;
extern StandardLimb object_wallmaster_008ECC_Limb;
extern StandardLimb object_wallmaster_008ED8_Limb;
extern StandardLimb object_wallmaster_008EE4_Limb;
extern StandardLimb object_wallmaster_008EF0_Limb;
extern StandardLimb object_wallmaster_008EFC_Limb;
extern StandardLimb object_wallmaster_008F08_Limb;
extern StandardLimb object_wallmaster_008F14_Limb;
extern StandardLimb object_wallmaster_008F20_Limb;
extern StandardLimb object_wallmaster_008F2C_Limb;
extern StandardLimb object_wallmaster_008F38_Limb;
extern StandardLimb object_wallmaster_008F44_Limb;
extern void* gWallmasterLimbs[];
typedef enum gWallmasterSkelLimb {
    /*  0 */ LIMB_OBJECT_WALLMASTER_008FB0_NONE,
    /*  1 */ LIMB_OBJECT_WALLMASTER_008E30,
    /*  2 */ LIMB_OBJECT_WALLMASTER_008E3C,
    /*  3 */ LIMB_OBJECT_WALLMASTER_008E48,
    /*  4 */ LIMB_OBJECT_WALLMASTER_008E54,
    /*  5 */ LIMB_OBJECT_WALLMASTER_008E60,
    /*  6 */ LIMB_OBJECT_WALLMASTER_008E6C,
    /*  7 */ LIMB_OBJECT_WALLMASTER_008E78,
    /*  8 */ LIMB_OBJECT_WALLMASTER_008E84,
    /*  9 */ LIMB_OBJECT_WALLMASTER_008E90,
    /* 10 */ LIMB_OBJECT_WALLMASTER_008E9C,
    /* 11 */ LIMB_OBJECT_WALLMASTER_008EA8,
    /* 12 */ LIMB_OBJECT_WALLMASTER_008EB4,
    /* 13 */ LIMB_OBJECT_WALLMASTER_008EC0,
    /* 14 */ LIMB_OBJECT_WALLMASTER_008ECC,
    /* 15 */ LIMB_OBJECT_WALLMASTER_008ED8,
    /* 16 */ LIMB_OBJECT_WALLMASTER_008EE4,
    /* 17 */ LIMB_OBJECT_WALLMASTER_008EF0,
    /* 18 */ LIMB_OBJECT_WALLMASTER_008EFC,
    /* 19 */ LIMB_OBJECT_WALLMASTER_008F08,
    /* 20 */ LIMB_OBJECT_WALLMASTER_008F14,
    /* 21 */ LIMB_OBJECT_WALLMASTER_008F20,
    /* 22 */ LIMB_OBJECT_WALLMASTER_008F2C,
    /* 23 */ LIMB_OBJECT_WALLMASTER_008F38,
    /* 24 */ LIMB_OBJECT_WALLMASTER_008F44,
    /* 25 */ LIMB_OBJECT_WALLMASTER_008FB0_MAX
} gWallmasterSkelLimb;
extern FlexSkeletonHeader gWallmasterSkel;
extern s16 gWallmasterStopWalkFrameData[];
extern JointIndex gWallmasterStopWalkJointIndices[];
extern AnimationHeader gWallmasterStopWalkAnim;
extern s16 gWallmasterHoverFrameData[];
extern JointIndex gWallmasterHoverJointIndices[];
extern AnimationHeader gWallmasterHoverAnim;
extern s16 gWallmasterWaitFrameData[];
extern JointIndex gWallmasterWaitJointIndices[];
extern AnimationHeader gWallmasterWaitAnim;
extern s16 gWallmasterStandUpFrameData[];
extern JointIndex gWallmasterStandUpJointIndices[];
extern AnimationHeader gWallmasterStandUpAnim;

#endif
