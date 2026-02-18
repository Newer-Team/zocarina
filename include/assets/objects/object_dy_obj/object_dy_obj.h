#ifndef OBJECT_DY_OBJ_H
#define OBJECT_DY_OBJ_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gGreatFairyAnim_000108_06000000_FrameData[];
extern JointIndex gGreatFairyAnim_000108_06000060_JointIndices[];
extern AnimationHeader gGreatFairyAnim_000108;
extern s16 gGreatFairySpellFountainSpinShrinkFrameData[];
extern JointIndex gGreatFairySpellFountainSpinShrinkJointIndices[];
extern AnimationHeader gGreatFairySpellFountainSpinShrinkAnim;
extern s16 gGreatFairyLayingSidewaysFrameData[];
extern JointIndex gGreatFairyLayingSidewaysJointIndices[];
extern AnimationHeader gGreatFairyLayingSidewaysAnim;
extern s16 gGreatFairyLayingDownTransitionFrameData[];
extern JointIndex gGreatFairyLayingDownTransitionJointIndices[];
extern AnimationHeader gGreatFairyLayingDownTransitionAnim;
extern s16 gGreatFairyAfterSpellFrameData[];
extern JointIndex gGreatFairyAfterSpellJointIndices[];
extern AnimationHeader gGreatFairyAfterSpellAnim;
extern s16 gGreatFairyAnim_005810_06004360_FrameData[];
extern JointIndex gGreatFairyAnim_005810_06005768_JointIndices[];
extern AnimationHeader gGreatFairyAnim_005810;
extern Vtx gGreatFairyParticleModelVtx[];
extern Gfx gGreatFairyParticleMaterialDL[15];
extern Gfx gGreatFairyParticleModelDL[3];
#define gGreatFairyParticleTex_WIDTH 32
#define gGreatFairyParticleTex_HEIGHT 32
extern u64 gGreatFairyParticleTex[TEX_LEN(u64, gGreatFairyParticleTex_WIDTH, gGreatFairyParticleTex_HEIGHT, 4)];
extern s16 gGreatFairyJewelFountainSpinShrinkFrameData[];
extern JointIndex gGreatFairyJewelFountainSpinShrinkJointIndices[];
extern AnimationHeader gGreatFairyJewelFountainSpinShrinkAnim;
extern s16 gGreatFairyGivingUpgradeFrameData[];
extern JointIndex gGreatFairyGivingUpgradeJointIndices[];
extern AnimationHeader gGreatFairyGivingUpgradeAnim;
extern s16 gGreatFairyAfterUpgradeFrameData[];
extern JointIndex gGreatFairyAfterUpgradeJointIndices[];
extern AnimationHeader gGreatFairyAfterUpgradeAnim;
extern s16 gGreatFairySittingTransitionFrameData[];
extern JointIndex gGreatFairySittingTransitionJointIndices[];
extern AnimationHeader gGreatFairySittingTransitionAnim;
#define gGreatFairyBetaGradient1Tex_WIDTH 32
#define gGreatFairyBetaGradient1Tex_HEIGHT 32
extern u64 gGreatFairyBetaGradient1Tex[TEX_LEN(u64, gGreatFairyBetaGradient1Tex_WIDTH, gGreatFairyBetaGradient1Tex_HEIGHT, 16)];
#define gGreatFairyBetaGradient2Tex_WIDTH 32
#define gGreatFairyBetaGradient2Tex_HEIGHT 32
extern u64 gGreatFairyBetaGradient2Tex[TEX_LEN(u64, gGreatFairyBetaGradient2Tex_WIDTH, gGreatFairyBetaGradient2Tex_HEIGHT, 16)];
#define gGreatFairyBetaClothesTex_WIDTH 16
#define gGreatFairyBetaClothesTex_HEIGHT 16
extern u64 gGreatFairyBetaClothesTex[TEX_LEN(u64, gGreatFairyBetaClothesTex_WIDTH, gGreatFairyBetaClothesTex_HEIGHT, 16)];
#define gGreatFairyFlowerTex_WIDTH 32
#define gGreatFairyFlowerTex_HEIGHT 32
extern u64 gGreatFairyFlowerTex[TEX_LEN(u64, gGreatFairyFlowerTex_WIDTH, gGreatFairyFlowerTex_HEIGHT, 16)];
extern Vtx gGreatFairyBetaVtx[];
extern Vtx gGreatFairyFlowerVtx[];
extern Gfx gGreatFairyBetaDL[343];
extern Gfx gGreatFairyFlowerDL[19];
extern Vtx gGreatFairyLeftFootVtx[];
extern Vtx gGreatFairyLeftLegVtx[];
extern Vtx gGreatFairyLeftThighVtx[];
extern Vtx gGreatFairyLeftHairTipVtx[];
extern Vtx gGreatFairyLeftHairUpperPartVtx[];
extern Vtx gGreatFairyLeftHairMiddlePartVtx[];
extern Vtx gGreatFairyLeftHairLowerPartVtx[];
extern Vtx gGreatFairyRightHairTipVtx[];
extern Vtx gGreatFairyRightHairUpperPartVtx[];
extern Vtx gGreatFairyRightHairMiddlePartVtx[];
extern Vtx gGreatFairyRightHairLowerPartVtx[];
extern Vtx gGreatFairyMiddleHairTipVtx[];
extern Vtx gGreatFairyMiddleHairUpperPartVtx[];
extern Vtx gGreatFairyMiddleHairMiddlePartVtx[];
extern Vtx gGreatFairyMiddleHairLowerPartVtx[];
extern Vtx gGreatFairyHeadVtx[];
extern Vtx gGreatFairyLeftHandVtx[];
extern Vtx gGreatFairyLeftForearmVtx[];
extern Vtx gGreatFairyLeftUpperArmVtx[];
extern Vtx gGreatFairyRightHandVtx[];
extern Vtx gGreatFairyRightForearmVtx[];
extern Vtx gGreatFairyRightUpperArmVtx[];
extern Vtx gGreatFairyTorsoVtx[];
extern Vtx gGreatFairyRightFootVtx[];
extern Vtx gGreatFairyRightLegVtx[];
extern Vtx gGreatFairyRightThighVtx[];
extern Vtx gGreatFairyWaistVtx[];
extern Gfx gGreatFairyWaistDL[37];
extern Gfx gGreatFairyTorsoDL[126];
extern Gfx gGreatFairyHeadDL[195];
extern Gfx gGreatFairyRightHairLowerPartDL[34];
extern Gfx gGreatFairyRightHairMiddlePartDL[47];
extern Gfx gGreatFairyRightHairUpperPartDL[32];
extern Gfx gGreatFairyRightHairTipDL[31];
extern Gfx gGreatFairyLeftHairLowerPartDL[50];
extern Gfx gGreatFairyLeftHairMiddlePartDL[32];
extern Gfx gGreatFairyLeftHairUpperPartDL[47];
extern Gfx gGreatFairyLeftHairTipDL[31];
extern Gfx gGreatFairyMiddleHairLowerPartDL[50];
extern Gfx gGreatFairyMiddleHairMiddlePartDL[33];
extern Gfx gGreatFairyMiddleHairUpperPartDL[33];
extern Gfx gGreatFairyMiddleHairTipDL[31];
extern Gfx gGreatFairyRightUpperArmDL[39];
extern Gfx gGreatFairyRightForearmDL[53];
extern Gfx gGreatFairyRightHandDL[63];
extern Gfx gGreatFairyLeftUpperArmDL[39];
extern Gfx gGreatFairyLeftForearmDL[71];
extern Gfx gGreatFairyLeftHandDL[63];
extern Gfx gGreatFairyRightThighDL[125];
extern Gfx gGreatFairyRightLegDL[46];
extern Gfx gGreatFairyRightFootDL[37];
extern Gfx gGreatFairyLeftThighDL[80];
extern Gfx gGreatFairyLeftLegDL[46];
extern Gfx gGreatFairyLeftFootDL[37];
//#define gGreatFairyTLUT_TLUT_COUNT 256
extern u64 gGreatFairyTLUT[];
#define gGreatFairyBootPatternTex_WIDTH 32
#define gGreatFairyBootPatternTex_HEIGHT 64
extern u64 gGreatFairyBootPatternTex[TEX_LEN(u64, gGreatFairyBootPatternTex_WIDTH, gGreatFairyBootPatternTex_HEIGHT, 8)];
#define gGreatFairyLeavesPattern1Tex_WIDTH 32
#define gGreatFairyLeavesPattern1Tex_HEIGHT 32
extern u64 gGreatFairyLeavesPattern1Tex[TEX_LEN(u64, gGreatFairyLeavesPattern1Tex_WIDTH, gGreatFairyLeavesPattern1Tex_HEIGHT, 8)];
#define gGreatFairySkinGradient_WIDTH 8
#define gGreatFairySkinGradient_HEIGHT 8
extern u64 gGreatFairySkinGradient[TEX_LEN(u64, gGreatFairySkinGradient_WIDTH, gGreatFairySkinGradient_HEIGHT, 8)];
#define gGreatFairyLeavesPattern2Tex_WIDTH 32
#define gGreatFairyLeavesPattern2Tex_HEIGHT 16
extern u64 gGreatFairyLeavesPattern2Tex[TEX_LEN(u64, gGreatFairyLeavesPattern2Tex_WIDTH, gGreatFairyLeavesPattern2Tex_HEIGHT, 16)];
#define gGreatFairyHairTex_WIDTH 16
#define gGreatFairyHairTex_HEIGHT 16
extern u64 gGreatFairyHairTex[TEX_LEN(u64, gGreatFairyHairTex_WIDTH, gGreatFairyHairTex_HEIGHT, 8)];
#define gGreatFairyEyeOpenTex_WIDTH 32
#define gGreatFairyEyeOpenTex_HEIGHT 32
extern u64 gGreatFairyEyeOpenTex[TEX_LEN(u64, gGreatFairyEyeOpenTex_WIDTH, gGreatFairyEyeOpenTex_HEIGHT, 16)];
#define gGreatFairyEyeHalfTex_WIDTH 32
#define gGreatFairyEyeHalfTex_HEIGHT 32
extern u64 gGreatFairyEyeHalfTex[TEX_LEN(u64, gGreatFairyEyeHalfTex_WIDTH, gGreatFairyEyeHalfTex_HEIGHT, 16)];
#define gGreatFairyEyeClosedTex_WIDTH 32
#define gGreatFairyEyeClosedTex_HEIGHT 32
extern u64 gGreatFairyEyeClosedTex[TEX_LEN(u64, gGreatFairyEyeClosedTex_WIDTH, gGreatFairyEyeClosedTex_HEIGHT, 16)];
#define gGreatFairyMouthClosedTex_WIDTH 64
#define gGreatFairyMouthClosedTex_HEIGHT 32
extern u64 gGreatFairyMouthClosedTex[TEX_LEN(u64, gGreatFairyMouthClosedTex_WIDTH, gGreatFairyMouthClosedTex_HEIGHT, 16)];
#define gGreatFairyMouthOpenTex_WIDTH 64
#define gGreatFairyMouthOpenTex_HEIGHT 32
extern u64 gGreatFairyMouthOpenTex[TEX_LEN(u64, gGreatFairyMouthOpenTex_WIDTH, gGreatFairyMouthOpenTex_HEIGHT, 16)];
#define gGreatFairyEar1Tex_WIDTH 8
#define gGreatFairyEar1Tex_HEIGHT 8
extern u64 gGreatFairyEar1Tex[TEX_LEN(u64, gGreatFairyEar1Tex_WIDTH, gGreatFairyEar1Tex_HEIGHT, 8)];
#define gGreatFairyEar2Tex_WIDTH 8
#define gGreatFairyEar2Tex_HEIGHT 8
extern u64 gGreatFairyEar2Tex[TEX_LEN(u64, gGreatFairyEar2Tex_WIDTH, gGreatFairyEar2Tex_HEIGHT, 8)];
#define gGreatFairyBackOfHandTex_WIDTH 16
#define gGreatFairyBackOfHandTex_HEIGHT 16
extern u64 gGreatFairyBackOfHandTex[TEX_LEN(u64, gGreatFairyBackOfHandTex_WIDTH, gGreatFairyBackOfHandTex_HEIGHT, 8)];
#define gGreatFairyLeavesPattern3Tex_WIDTH 32
#define gGreatFairyLeavesPattern3Tex_HEIGHT 32
extern u64 gGreatFairyLeavesPattern3Tex[TEX_LEN(u64, gGreatFairyLeavesPattern3Tex_WIDTH, gGreatFairyLeavesPattern3Tex_HEIGHT, 8)];
#define gGreatFairySpiralBeamPatternTex_WIDTH 16
#define gGreatFairySpiralBeamPatternTex_HEIGHT 16
extern u64 gGreatFairySpiralBeamPatternTex[TEX_LEN(u64, gGreatFairySpiralBeamPatternTex_WIDTH, gGreatFairySpiralBeamPatternTex_HEIGHT, 8)];
#define gGreatFairySpiralBeamGradientTex_WIDTH 32
#define gGreatFairySpiralBeamGradientTex_HEIGHT 64
extern u64 gGreatFairySpiralBeamGradientTex[TEX_LEN(u64, gGreatFairySpiralBeamGradientTex_WIDTH, gGreatFairySpiralBeamGradientTex_HEIGHT, 8)];
extern Vtx gGreatFairySpiralBeamVtx[];
extern Gfx gGreatFairySpiralBeamDL[40];
extern StandardLimb gGreatFairyRootLimb;
extern StandardLimb gGreatFairyLeftThighLimb;
extern StandardLimb gGreatFairyLeftLegLimb;
extern StandardLimb gGreatFairyLeftFootLimb;
extern StandardLimb gGreatFairyRightThighLimb;
extern StandardLimb gGreatFairyRightLegLimb;
extern StandardLimb gGreatFairyRightFootLimb;
extern StandardLimb gGreatFairyTorsoLimb;
extern StandardLimb gGreatFairyLeftUpperArmLimb;
extern StandardLimb gGreatFairyLeftForearmLimb;
extern StandardLimb gGreatFairyLeftHandLimb;
extern StandardLimb gGreatFairyRightUpperArmLimb;
extern StandardLimb gGreatFairyRightForearmLimb;
extern StandardLimb gGreatFairyRightHandLimb;
extern StandardLimb gGreatFairyHeadLimb;
extern StandardLimb gGreatFairyMiddleHairLowerPartLimb;
extern StandardLimb gGreatFairyMiddleHairMiddlePartLimb;
extern StandardLimb gGreatFairyMiddleHairUpperPartLimb;
extern StandardLimb gGreatFairyMiddleHairTipLimb;
extern StandardLimb gGreatFairyLeftHairLowerPartLimb;
extern StandardLimb gGreatFairyLeftHairMiddlePartLimb;
extern StandardLimb gGreatFairyLeftHairUpperPartLimb;
extern StandardLimb gGreatFairyLeftHairTipLimb;
extern StandardLimb gGreatFairyRightHairLowerPartLimb;
extern StandardLimb gGreatFairyRightHairMiddlePartLimb;
extern StandardLimb gGreatFairyRightHairUpperPartLimb;
extern StandardLimb gGreatFairyRightHairTipLimb;
extern void* gGreatFairyLimbs[];
typedef enum gGreatFairySkelLimb {
    /*  0 */ LIMB_OBJECT_DY_OBJ_01C450_NONE,
    /*  1 */ LIMB_OBJECT_DY_OBJ_01C2A0,
    /*  2 */ LIMB_OBJECT_DY_OBJ_01C2AC,
    /*  3 */ LIMB_OBJECT_DY_OBJ_01C2B8,
    /*  4 */ LIMB_OBJECT_DY_OBJ_01C2C4,
    /*  5 */ LIMB_OBJECT_DY_OBJ_01C2D0,
    /*  6 */ LIMB_OBJECT_DY_OBJ_01C2DC,
    /*  7 */ LIMB_OBJECT_DY_OBJ_01C2E8,
    /*  8 */ LIMB_OBJECT_DY_OBJ_01C2F4,
    /*  9 */ LIMB_OBJECT_DY_OBJ_01C300,
    /* 10 */ LIMB_OBJECT_DY_OBJ_01C30C,
    /* 11 */ LIMB_OBJECT_DY_OBJ_01C318,
    /* 12 */ LIMB_OBJECT_DY_OBJ_01C324,
    /* 13 */ LIMB_OBJECT_DY_OBJ_01C330,
    /* 14 */ LIMB_OBJECT_DY_OBJ_01C33C,
    /* 15 */ LIMB_OBJECT_DY_OBJ_01C348,
    /* 16 */ LIMB_OBJECT_DY_OBJ_01C354,
    /* 17 */ LIMB_OBJECT_DY_OBJ_01C360,
    /* 18 */ LIMB_OBJECT_DY_OBJ_01C36C,
    /* 19 */ LIMB_OBJECT_DY_OBJ_01C378,
    /* 20 */ LIMB_OBJECT_DY_OBJ_01C384,
    /* 21 */ LIMB_OBJECT_DY_OBJ_01C390,
    /* 22 */ LIMB_OBJECT_DY_OBJ_01C39C,
    /* 23 */ LIMB_OBJECT_DY_OBJ_01C3A8,
    /* 24 */ LIMB_OBJECT_DY_OBJ_01C3B4,
    /* 25 */ LIMB_OBJECT_DY_OBJ_01C3C0,
    /* 26 */ LIMB_OBJECT_DY_OBJ_01C3CC,
    /* 27 */ LIMB_OBJECT_DY_OBJ_01C3D8,
    /* 28 */ LIMB_OBJECT_DY_OBJ_01C450_MAX
} gGreatFairySkelLimb;
extern FlexSkeletonHeader gGreatFairySkel;
extern s16 gGreatFairySittingFrameData[];
extern JointIndex gGreatFairySittingJointIndices[];
extern AnimationHeader gGreatFairySittingAnim;

#endif
