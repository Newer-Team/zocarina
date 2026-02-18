#ifndef OBJECT_DS_H
#define OBJECT_DS_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gPotionShopLadyFrameData[];
extern JointIndex gPotionShopLadyJointIndices[];
extern AnimationHeader gPotionShopLadyAnim;
extern Vtx gPotionShopLadyHeadVtx[];
extern Vtx gPotionShopLadyArmVtx[];
extern Vtx gPotionShopLadyTorsoVtx[];
extern Vtx gPotionShopLadyCatVtx[];
extern Gfx gPotionShopLadyTorsoDL[56];
extern Gfx gPotionShopLadyHeadDL[264];
extern Gfx gPotionShopLadyArmDL[80];
extern Gfx gPotionShopLadyCatDL[75];
//#define gPotionShopLadyTLUT_TLUT_COUNT 256
extern u64 gPotionShopLadyTLUT[];
#define gPotionShopLadySkinGradientTex_WIDTH 8
#define gPotionShopLadySkinGradientTex_HEIGHT 8
extern u64 gPotionShopLadySkinGradientTex[TEX_LEN(u64, gPotionShopLadySkinGradientTex_WIDTH, gPotionShopLadySkinGradientTex_HEIGHT, 8)];
#define gPotionShopLadyEyelashBottomTex_WIDTH 16
#define gPotionShopLadyEyelashBottomTex_HEIGHT 8
extern u64 gPotionShopLadyEyelashBottomTex[TEX_LEN(u64, gPotionShopLadyEyelashBottomTex_WIDTH, gPotionShopLadyEyelashBottomTex_HEIGHT, 8)];
#define gPotionShopLadyEyelashTopTex_WIDTH 16
#define gPotionShopLadyEyelashTopTex_HEIGHT 8
extern u64 gPotionShopLadyEyelashTopTex[TEX_LEN(u64, gPotionShopLadyEyelashTopTex_WIDTH, gPotionShopLadyEyelashTopTex_HEIGHT, 8)];
#define gPotionShopLadyEar1Tex_WIDTH 16
#define gPotionShopLadyEar1Tex_HEIGHT 16
extern u64 gPotionShopLadyEar1Tex[TEX_LEN(u64, gPotionShopLadyEar1Tex_WIDTH, gPotionShopLadyEar1Tex_HEIGHT, 8)];
#define gPotionShopLadyHairTex_WIDTH 16
#define gPotionShopLadyHairTex_HEIGHT 32
extern u64 gPotionShopLadyHairTex[TEX_LEN(u64, gPotionShopLadyHairTex_WIDTH, gPotionShopLadyHairTex_HEIGHT, 8)];
#define gPotionShopLadyEyeTex_WIDTH 16
#define gPotionShopLadyEyeTex_HEIGHT 8
extern u64 gPotionShopLadyEyeTex[TEX_LEN(u64, gPotionShopLadyEyeTex_WIDTH, gPotionShopLadyEyeTex_HEIGHT, 8)];
#define gPotionShopLadyEar2Tex_WIDTH 16
#define gPotionShopLadyEar2Tex_HEIGHT 16
extern u64 gPotionShopLadyEar2Tex[TEX_LEN(u64, gPotionShopLadyEar2Tex_WIDTH, gPotionShopLadyEar2Tex_HEIGHT, 8)];
#define gPotionShopLadyArmGradientTex_WIDTH 8
#define gPotionShopLadyArmGradientTex_HEIGHT 8
extern u64 gPotionShopLadyArmGradientTex[TEX_LEN(u64, gPotionShopLadyArmGradientTex_WIDTH, gPotionShopLadyArmGradientTex_HEIGHT, 8)];
#define gPotionShopLadyShirtPatternTex_WIDTH 16
#define gPotionShopLadyShirtPatternTex_HEIGHT 16
extern u64 gPotionShopLadyShirtPatternTex[TEX_LEN(u64, gPotionShopLadyShirtPatternTex_WIDTH, gPotionShopLadyShirtPatternTex_HEIGHT, 8)];
#define gPotionShopLadyCatPattern1Tex_WIDTH 32
#define gPotionShopLadyCatPattern1Tex_HEIGHT 32
extern u64 gPotionShopLadyCatPattern1Tex[TEX_LEN(u64, gPotionShopLadyCatPattern1Tex_WIDTH, gPotionShopLadyCatPattern1Tex_HEIGHT, 8)];
#define gPotionShopLadyCatPattern2Tex_WIDTH 16
#define gPotionShopLadyCatPattern2Tex_HEIGHT 16
extern u64 gPotionShopLadyCatPattern2Tex[TEX_LEN(u64, gPotionShopLadyCatPattern2Tex_WIDTH, gPotionShopLadyCatPattern2Tex_HEIGHT, 8)];
extern StandardLimb gPotionShopLadyRootLimb;
extern StandardLimb gPotionShopLadyCatLimb;
extern StandardLimb gPotionShopLadyTorsoLimb;
extern StandardLimb gPotionShopLadyArmLimb;
extern StandardLimb gPotionShopLadyHeadLimb;
extern void* gPotionShopLadyLimbs[];
typedef enum gPotionShopLadySkelLimb {
    /*  0 */ LIMB_OBJECT_DS_004768_NONE,
    /*  1 */ LIMB_OBJECT_DS_004718,
    /*  2 */ LIMB_OBJECT_DS_004724,
    /*  3 */ LIMB_OBJECT_DS_004730,
    /*  4 */ LIMB_OBJECT_DS_00473C,
    /*  5 */ LIMB_OBJECT_DS_004748,
    /*  6 */ LIMB_OBJECT_DS_004768_MAX
} gPotionShopLadySkelLimb;
extern FlexSkeletonHeader gPotionShopLadySkel;

#endif
