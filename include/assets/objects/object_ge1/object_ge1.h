#ifndef OBJECT_GE1_H
#define OBJECT_GE1_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gGerudoWhiteUnusedFoldingArmsFrameData[];
extern JointIndex gGerudoWhiteUnusedFoldingArmsJointIndices[];
extern AnimationHeader gGerudoWhiteUnusedFoldingArmsAnim;
extern s16 gGerudoWhiteIdleFrameData[];
extern JointIndex gGerudoWhiteIdleJointIndices[];
extern AnimationHeader gGerudoWhiteIdleAnim;
extern StandardLimb gGerudoWhiteWaistLimb;
extern StandardLimb gGerudoWhiteLeftThighLimb;
extern StandardLimb gGerudoWhiteLeftShinLimb;
extern StandardLimb gGerudoWhiteLeftFootLimb;
extern StandardLimb gGerudoWhiteRightThighLimb;
extern StandardLimb gGerudoWhiteRightShinLimb;
extern StandardLimb gGerudoWhiteRightFootLimb;
extern StandardLimb gGerudoWhiteTorsoLimb;
extern StandardLimb gGerudoWhiteLeftUpperArmLimb;
extern StandardLimb gGerudoWhiteLeftForearmLimb;
extern StandardLimb gGerudoWhiteLeftHandLimb;
extern StandardLimb gGerudoWhiteRightUpperArmLimb;
extern StandardLimb gGerudoWhiteRightForearmLimb;
extern StandardLimb gGerudoWhiteRightHandLimb;
extern StandardLimb gGerudoWhiteHeadLimb;
extern void* gGerudoWhiteLimbs[];
typedef enum GerudoWhiteLimb {
    /*  0 */ GERUDO_WHITE_LIMB_NONE,
    /*  1 */ GERUDO_WHITE_LIMB_WAIST,
    /*  2 */ GERUDO_WHITE_LIMB_L_THIGH,
    /*  3 */ GERUDO_WHITE_LIMB_L_SHIN,
    /*  4 */ GERUDO_WHITE_LIMB_L_FOOT,
    /*  5 */ GERUDO_WHITE_LIMB_R_THIGH,
    /*  6 */ GERUDO_WHITE_LIMB_R_SHIN,
    /*  7 */ GERUDO_WHITE_LIMB_R_FOOT,
    /*  8 */ GERUDO_WHITE_LIMB_TORSO,
    /*  9 */ GERUDO_WHITE_LIMB_L_UPPER_ARM,
    /* 10 */ GERUDO_WHITE_LIMB_L_FOREARM,
    /* 11 */ GERUDO_WHITE_LIMB_L_HAND,
    /* 12 */ GERUDO_WHITE_LIMB_R_UPPER_ARM,
    /* 13 */ GERUDO_WHITE_LIMB_R_FOREARM,
    /* 14 */ GERUDO_WHITE_LIMB_R_HAND,
    /* 15 */ GERUDO_WHITE_LIMB_HEAD,
    /* 16 */ GERUDO_WHITE_LIMB_MAX
} GerudoWhiteLimb;
extern FlexSkeletonHeader gGerudoWhiteSkel;
//#define gGerudoWhiteGeneralTLUT_TLUT_COUNT 256
extern u64 gGerudoWhiteGeneralTLUT[];
#define gGerudoWhiteSkinGradientTex_WIDTH 8
#define gGerudoWhiteSkinGradientTex_HEIGHT 8
extern u64 gGerudoWhiteSkinGradientTex[TEX_LEN(u64, gGerudoWhiteSkinGradientTex_WIDTH, gGerudoWhiteSkinGradientTex_HEIGHT, 8)];
#define gGerudoWhiteWhiteFabricLipsTex_WIDTH 16
#define gGerudoWhiteWhiteFabricLipsTex_HEIGHT 16
extern u64 gGerudoWhiteWhiteFabricLipsTex[TEX_LEN(u64, gGerudoWhiteWhiteFabricLipsTex_WIDTH, gGerudoWhiteWhiteFabricLipsTex_HEIGHT, 8)];
#define gGerudoWhiteEarTex_WIDTH 8
#define gGerudoWhiteEarTex_HEIGHT 16
extern u64 gGerudoWhiteEarTex[TEX_LEN(u64, gGerudoWhiteEarTex_WIDTH, gGerudoWhiteEarTex_HEIGHT, 8)];
#define gGerudoWhiteEyeOpenTex_WIDTH 32
#define gGerudoWhiteEyeOpenTex_HEIGHT 32
extern u64 gGerudoWhiteEyeOpenTex[TEX_LEN(u64, gGerudoWhiteEyeOpenTex_WIDTH, gGerudoWhiteEyeOpenTex_HEIGHT, 16)];
#define gGerudoWhiteEyeHalfTex_WIDTH 32
#define gGerudoWhiteEyeHalfTex_HEIGHT 32
extern u64 gGerudoWhiteEyeHalfTex[TEX_LEN(u64, gGerudoWhiteEyeHalfTex_WIDTH, gGerudoWhiteEyeHalfTex_HEIGHT, 16)];
#define gGerudoWhiteEyeClosedTex_WIDTH 32
#define gGerudoWhiteEyeClosedTex_HEIGHT 32
extern u64 gGerudoWhiteEyeClosedTex[TEX_LEN(u64, gGerudoWhiteEyeClosedTex_WIDTH, gGerudoWhiteEyeClosedTex_HEIGHT, 16)];
#define gGerudoWhiteFingersTex_WIDTH 32
#define gGerudoWhiteFingersTex_HEIGHT 32
extern u64 gGerudoWhiteFingersTex[TEX_LEN(u64, gGerudoWhiteFingersTex_WIDTH, gGerudoWhiteFingersTex_HEIGHT, 8)];
#define gGerudoWhiteArmletTex_WIDTH 8
#define gGerudoWhiteArmletTex_HEIGHT 16
extern u64 gGerudoWhiteArmletTex[TEX_LEN(u64, gGerudoWhiteArmletTex_WIDTH, gGerudoWhiteArmletTex_HEIGHT, 8)];
#define gGerudoWhiteJacketTex_WIDTH 16
#define gGerudoWhiteJacketTex_HEIGHT 16
extern u64 gGerudoWhiteJacketTex[TEX_LEN(u64, gGerudoWhiteJacketTex_WIDTH, gGerudoWhiteJacketTex_HEIGHT, 8)];
#define gGerudoWhiteTubeTopTex_WIDTH 16
#define gGerudoWhiteTubeTopTex_HEIGHT 16
extern u64 gGerudoWhiteTubeTopTex[TEX_LEN(u64, gGerudoWhiteTubeTopTex_WIDTH, gGerudoWhiteTubeTopTex_HEIGHT, 8)];
#define gGerudoWhiteNavelTex_WIDTH 16
#define gGerudoWhiteNavelTex_HEIGHT 16
extern u64 gGerudoWhiteNavelTex[TEX_LEN(u64, gGerudoWhiteNavelTex_WIDTH, gGerudoWhiteNavelTex_HEIGHT, 8)];
#define gGerudoWhiteCleavageTex_WIDTH 8
#define gGerudoWhiteCleavageTex_HEIGHT 8
extern u64 gGerudoWhiteCleavageTex[TEX_LEN(u64, gGerudoWhiteCleavageTex_WIDTH, gGerudoWhiteCleavageTex_HEIGHT, 8)];
#define gGerudoWhiteShoeUpperTex_WIDTH 8
#define gGerudoWhiteShoeUpperTex_HEIGHT 16
extern u64 gGerudoWhiteShoeUpperTex[TEX_LEN(u64, gGerudoWhiteShoeUpperTex_WIDTH, gGerudoWhiteShoeUpperTex_HEIGHT, 8)];
#define gGerudoWhiteShoeSoleTex_WIDTH 8
#define gGerudoWhiteShoeSoleTex_HEIGHT 8
extern u64 gGerudoWhiteShoeSoleTex[TEX_LEN(u64, gGerudoWhiteShoeSoleTex_WIDTH, gGerudoWhiteShoeSoleTex_HEIGHT, 8)];
#define gGerudoWhiteCrotchTex_WIDTH 8
#define gGerudoWhiteCrotchTex_HEIGHT 8
extern u64 gGerudoWhiteCrotchTex[TEX_LEN(u64, gGerudoWhiteCrotchTex_WIDTH, gGerudoWhiteCrotchTex_HEIGHT, 16)];
//#define gGerudoWhiteHairTLUT_TLUT_COUNT 256
extern u64 gGerudoWhiteHairTLUT[];
#define gGerudoWhiteHairTex_WIDTH 16
#define gGerudoWhiteHairTex_HEIGHT 16
extern u64 gGerudoWhiteHairTex[TEX_LEN(u64, gGerudoWhiteHairTex_WIDTH, gGerudoWhiteHairTex_HEIGHT, 8)];
extern Vtx gGerudoWhiteHeadVtx[];
extern Vtx gGerudoWhiteLeftHandVtx[];
extern Vtx gGerudoWhiteLeftForearmVtx[];
extern Vtx gGerudoWhiteLeftUpperArmVtx[];
extern Vtx gGerudoWhiteRightHandVtx[];
extern Vtx gGerudoWhiteRightForearmVtx[];
extern Vtx gGerudoWhiteRightUpperArmVtx[];
extern Vtx gGerudoWhiteTorsoVtx[];
extern Vtx gGerudoWhiteLeftFootVtx[];
extern Vtx gGerudoWhiteLeftShinVtx[];
extern Vtx gGerudoWhiteLeftThighVtx[];
extern Vtx gGerudoWhiteRightFootVtx[];
extern Vtx gGerudoWhiteRightShinVtx[];
extern Vtx gGerudoWhiteRightThighVtx[];
extern Vtx gGerudoWhiteWaistVtx[];
extern Gfx gGerudoWhiteTorsoDL[198];
extern Gfx gGerudoWhiteHeadDL[129];
extern Gfx gGerudoWhiteRightUpperArmDL[53];
extern Gfx gGerudoWhiteRightForearmDL[38];
extern Gfx gGerudoWhiteRightHandDL[63];
extern Gfx gGerudoWhiteLeftUpperArmDL[53];
extern Gfx gGerudoWhiteLeftForearmDL[38];
extern Gfx gGerudoWhiteLeftHandDL[63];
extern Gfx gGerudoWhiteWaistDL[30];
extern Gfx gGerudoWhiteRightThighDL[38];
extern Gfx gGerudoWhiteRightShinDL[74];
extern Gfx gGerudoWhiteRightFootDL[76];
extern Gfx gGerudoWhiteLeftThighDL[38];
extern Gfx gGerudoWhiteLeftShinDL[57];
extern Gfx gGerudoWhiteLeftFootDL[60];
extern Vtx gGerudoWhiteHairstyleBobVtx[];
extern Vtx gGerudoWhiteHairstyleStraightFringeVtx[];
extern Vtx gGerudoWhiteHairstyleSpikyVtx[];
extern Gfx gGerudoWhiteHairstyleBobDL[83];
extern Gfx gGerudoWhiteHairstyleStraightFringeDL[76];
extern Gfx gGerudoWhiteHairstyleSpikyDL[59];
extern s16 gGerudoWhiteClapFrameData[];
extern JointIndex gGerudoWhiteClapJointIndices[];
extern AnimationHeader gGerudoWhiteClapAnim;
extern s16 gGerudoWhiteDismissiveFrameData[];
extern JointIndex gGerudoWhiteDismissiveJointIndices[];
extern AnimationHeader gGerudoWhiteDismissiveAnim;

#endif
