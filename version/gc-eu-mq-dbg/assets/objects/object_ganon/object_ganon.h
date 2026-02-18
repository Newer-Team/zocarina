#ifndef OBJECT_GANON_H
#define OBJECT_GANON_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern Vtx gGanondorfJawVtx[];
extern Vtx gGanondorfMouthVtx[];
extern Vtx gGanondorfRightUpperLipVtx[];
extern Vtx gGanondorfLeftUpperLipVtx[];
extern Vtx gGanondorfLowerHairEndVtx[];
extern Vtx gGanondorfUpperHairEndVtx[];
extern Vtx gGanondorfHeadVtx[];
extern Vtx gGanondorfLeftForearmVtx[];
extern Vtx gGanondorfLeftUpperArmVtx[];
extern Vtx gGanondorfLeftShoulderVtx[];
extern Vtx gGanondorfRightForearmVtx[];
extern Vtx gGanondorfRightUpperArmVtx[];
extern Vtx gGanondorfRightShoulderVtx[];
extern Vtx gGanondorfTorsoVtx[];
extern Vtx gGanondorfLeftFootVtx[];
extern Vtx gGanondorfLeftShinVtx[];
extern Vtx gGanondorfLeftThighVtx[];
extern Vtx gGanondorfRightFootVtx[];
extern Vtx gGanondorfRightShinVtx[];
extern Vtx gGanondorfRightThighVtx[];
extern Vtx gGanondorfPelvisVtx[];
extern Gfx gGanondorfPelvisDL[73];
extern Gfx gGanondorfRightShinDL[64];
extern Gfx gGanondorfRightFootDL[35];
extern Gfx gGanondorfRightThighDL[42];
extern Gfx gGanondorfLeftShinDL[64];
extern Gfx gGanondorfLeftFootDL[35];
extern Gfx gGanondorfLeftThighDL[42];
extern Gfx gGanondorfHeadDL[363];
extern Gfx gGanondorfRightUpperLipDL[45];
extern Gfx gGanondorfLowerHairEndDL[43];
extern Gfx gGanondorfUpperHairEndDL[46];
extern Gfx gGanondorfJawDL[81];
extern Gfx gGanondorfMouthDL[104];
extern Gfx gGanondorfLeftUpperLipDL[45];
extern Gfx gGanondorfTorsoDL[114];
extern Gfx gGanondorfRightForearmDL[37];
extern Gfx gGanondorfRightUpperArmDL[89];
extern Gfx gGanondorfRightShoulderDL[65];
extern Gfx gGanondorfLeftForearmDL[37];
extern Gfx gGanondorfLeftUpperArmDL[89];
extern Gfx gGanondorfLeftShoulderDL[65];
//#define gGanondorfSkinTLUT_TLUT_COUNT 256
extern u64 gGanondorfSkinTLUT[];
//#define gGanondorfHairTLUT_TLUT_COUNT 256
extern u64 gGanondorfHairTLUT[];
#define gGanondorfInnerMouthTex_WIDTH 8
#define gGanondorfInnerMouthTex_HEIGHT 8
extern u64 gGanondorfInnerMouthTex[TEX_LEN(u64, gGanondorfInnerMouthTex_WIDTH, gGanondorfInnerMouthTex_HEIGHT, 16)];
#define gGanondorfJawTex_WIDTH 16
#define gGanondorfJawTex_HEIGHT 16
extern u64 gGanondorfJawTex[TEX_LEN(u64, gGanondorfJawTex_WIDTH, gGanondorfJawTex_HEIGHT, 8)];
#define gGanondorfSideburnTex_WIDTH 16
#define gGanondorfSideburnTex_HEIGHT 16
extern u64 gGanondorfSideburnTex[TEX_LEN(u64, gGanondorfSideburnTex_WIDTH, gGanondorfSideburnTex_HEIGHT, 8)];
#define gGanondorfOuterMouthTex_WIDTH 4
#define gGanondorfOuterMouthTex_HEIGHT 8
extern u64 gGanondorfOuterMouthTex[TEX_LEN(u64, gGanondorfOuterMouthTex_WIDTH, gGanondorfOuterMouthTex_HEIGHT, 16)];
#define gGanondorfUpperLipTex_WIDTH 16
#define gGanondorfUpperLipTex_HEIGHT 16
extern u64 gGanondorfUpperLipTex[TEX_LEN(u64, gGanondorfUpperLipTex_WIDTH, gGanondorfUpperLipTex_HEIGHT, 8)];
#define gGanondorfHairTex_WIDTH 16
#define gGanondorfHairTex_HEIGHT 16
extern u64 gGanondorfHairTex[TEX_LEN(u64, gGanondorfHairTex_WIDTH, gGanondorfHairTex_HEIGHT, 8)];
#define gGanondorfTeethTex_WIDTH 4
#define gGanondorfTeethTex_HEIGHT 4
extern u64 gGanondorfTeethTex[TEX_LEN(u64, gGanondorfTeethTex_WIDTH, gGanondorfTeethTex_HEIGHT, 16)];
#define gGanondorfEyebrowTex_WIDTH 16
#define gGanondorfEyebrowTex_HEIGHT 8
extern u64 gGanondorfEyebrowTex[TEX_LEN(u64, gGanondorfEyebrowTex_WIDTH, gGanondorfEyebrowTex_HEIGHT, 8)];
#define gGanondorfHairFringeTex_WIDTH 16
#define gGanondorfHairFringeTex_HEIGHT 16
extern u64 gGanondorfHairFringeTex[TEX_LEN(u64, gGanondorfHairFringeTex_WIDTH, gGanondorfHairFringeTex_HEIGHT, 8)];
#define gGanondorfNoseBridgeTex_WIDTH 4
#define gGanondorfNoseBridgeTex_HEIGHT 16
extern u64 gGanondorfNoseBridgeTex[TEX_LEN(u64, gGanondorfNoseBridgeTex_WIDTH, gGanondorfNoseBridgeTex_HEIGHT, 16)];
#define gGanondorfNoseTex_WIDTH 8
#define gGanondorfNoseTex_HEIGHT 8
extern u64 gGanondorfNoseTex[TEX_LEN(u64, gGanondorfNoseTex_WIDTH, gGanondorfNoseTex_HEIGHT, 8)];
#define gGanondorfEarTex_WIDTH 8
#define gGanondorfEarTex_HEIGHT 16
extern u64 gGanondorfEarTex[TEX_LEN(u64, gGanondorfEarTex_WIDTH, gGanondorfEarTex_HEIGHT, 16)];
#define gGanondorfEyeOrbitTex_WIDTH 32
#define gGanondorfEyeOrbitTex_HEIGHT 16
extern u64 gGanondorfEyeOrbitTex[TEX_LEN(u64, gGanondorfEyeOrbitTex_WIDTH, gGanondorfEyeOrbitTex_HEIGHT, 8)];
#define gGanondorfGerudoFabricTex_WIDTH 16
#define gGanondorfGerudoFabricTex_HEIGHT 16
extern u64 gGanondorfGerudoFabricTex[TEX_LEN(u64, gGanondorfGerudoFabricTex_WIDTH, gGanondorfGerudoFabricTex_HEIGHT, 16)];
#define gGanondorfRedFabricTex_WIDTH 16
#define gGanondorfRedFabricTex_HEIGHT 16
extern u64 gGanondorfRedFabricTex[TEX_LEN(u64, gGanondorfRedFabricTex_WIDTH, gGanondorfRedFabricTex_HEIGHT, 16)];
#define gGanondorfBodysuitTex_WIDTH 8
#define gGanondorfBodysuitTex_HEIGHT 8
extern u64 gGanondorfBodysuitTex[TEX_LEN(u64, gGanondorfBodysuitTex_WIDTH, gGanondorfBodysuitTex_HEIGHT, 16)];
#define gGanondorfLeatherTex_WIDTH 16
#define gGanondorfLeatherTex_HEIGHT 16
extern u64 gGanondorfLeatherTex[TEX_LEN(u64, gGanondorfLeatherTex_WIDTH, gGanondorfLeatherTex_HEIGHT, 16)];
#define gGanondorfCapeFasteningTex_WIDTH 16
#define gGanondorfCapeFasteningTex_HEIGHT 16
extern u64 gGanondorfCapeFasteningTex[TEX_LEN(u64, gGanondorfCapeFasteningTex_WIDTH, gGanondorfCapeFasteningTex_HEIGHT, 16)];
#define gGanondorfGerudoFabricWithSunTex_WIDTH 32
#define gGanondorfGerudoFabricWithSunTex_HEIGHT 16
extern u64 gGanondorfGerudoFabricWithSunTex[TEX_LEN(u64, gGanondorfGerudoFabricWithSunTex_WIDTH, gGanondorfGerudoFabricWithSunTex_HEIGHT, 16)];
//#define gGanondorfHandTLUT_TLUT_COUNT 56
extern u64 gGanondorfHandTLUT[];
#define gGanondorfJewelTex_WIDTH 16
#define gGanondorfJewelTex_HEIGHT 32
extern u64 gGanondorfJewelTex[TEX_LEN(u64, gGanondorfJewelTex_WIDTH, gGanondorfJewelTex_HEIGHT, 16)];
#define gGanondorfNormalEyeTex_WIDTH 32
#define gGanondorfNormalEyeTex_HEIGHT 16
extern u64 gGanondorfNormalEyeTex[TEX_LEN(u64, gGanondorfNormalEyeTex_WIDTH, gGanondorfNormalEyeTex_HEIGHT, 16)];
#define gGanondorfChestJewelTex_WIDTH 16
#define gGanondorfChestJewelTex_HEIGHT 16
extern u64 gGanondorfChestJewelTex[TEX_LEN(u64, gGanondorfChestJewelTex_WIDTH, gGanondorfChestJewelTex_HEIGHT, 16)];
#define gGanondorfBlackLeatherTex_WIDTH 16
#define gGanondorfBlackLeatherTex_HEIGHT 16
extern u64 gGanondorfBlackLeatherTex[TEX_LEN(u64, gGanondorfBlackLeatherTex_WIDTH, gGanondorfBlackLeatherTex_HEIGHT, 16)];
#define gGanondorfThumbTex_WIDTH 8
#define gGanondorfThumbTex_HEIGHT 8
extern u64 gGanondorfThumbTex[TEX_LEN(u64, gGanondorfThumbTex_WIDTH, gGanondorfThumbTex_HEIGHT, 8)];
#define gGanondorfGauntletAndPauldronTex_WIDTH 16
#define gGanondorfGauntletAndPauldronTex_HEIGHT 16
extern u64 gGanondorfGauntletAndPauldronTex[TEX_LEN(u64, gGanondorfGauntletAndPauldronTex_WIDTH, gGanondorfGauntletAndPauldronTex_HEIGHT, 16)];
#define gGanondorfHandSideTex_WIDTH 8
#define gGanondorfHandSideTex_HEIGHT 8
extern u64 gGanondorfHandSideTex[TEX_LEN(u64, gGanondorfHandSideTex_WIDTH, gGanondorfHandSideTex_HEIGHT, 8)];
#define gGanondorfFingerTex_WIDTH 8
#define gGanondorfFingerTex_HEIGHT 8
extern u64 gGanondorfFingerTex[TEX_LEN(u64, gGanondorfFingerTex_WIDTH, gGanondorfFingerTex_HEIGHT, 8)];
#define gGanondorfCrazedEyeTex_WIDTH 32
#define gGanondorfCrazedEyeTex_HEIGHT 16
extern u64 gGanondorfCrazedEyeTex[TEX_LEN(u64, gGanondorfCrazedEyeTex_WIDTH, gGanondorfCrazedEyeTex_HEIGHT, 16)];
#define gGanondorfEmptyEyeTex_WIDTH 32
#define gGanondorfEmptyEyeTex_HEIGHT 16
extern u64 gGanondorfEmptyEyeTex[TEX_LEN(u64, gGanondorfEmptyEyeTex_WIDTH, gGanondorfEmptyEyeTex_HEIGHT, 16)];
extern Vtx gGanondorfEyesVtx[];
extern Vtx gGanondorfJewelVtx[];
extern Vtx gGanondorfLeftHandVtx[];
extern Vtx gGanondorfRightHandClosedVtx[];
extern Vtx gGanondorfRightHandOpenVtx[];
extern Gfx gGanondorfEyesDL[22];
extern Gfx gGanondorfJewelDL[33];
extern Gfx gGanondorfLeftHandDL[154];
extern Gfx gGanondorfRightHandClosedDL[154];
extern Gfx gGanondorfRightHandOpenDL[163];
#define gGanondorfTitleCardTex_WIDTH 128
#define gGanondorfTitleCardTex_HEIGHT 120
extern u64 gGanondorfTitleCardTex[TEX_LEN(u64, gGanondorfTitleCardTex_WIDTH, gGanondorfTitleCardTex_HEIGHT, 8)];
extern s16 gGanondorfEndingFloatFrameData[];
extern JointIndex gGanondorfEndingFloatJointIndices[];
extern AnimationHeader gGanondorfEndingFloatAnim;
extern StandardLimb gGanondorfRootLimb;
extern StandardLimb gGanondorfTorsoLimb;
extern StandardLimb gGanondorfLeftShoulderLimb;
extern StandardLimb gGanondorfLeftUpperArmLimb;
extern StandardLimb gGanondorfLeftForearmLimb;
extern StandardLimb gGanondorfLeftHandLimb;
extern StandardLimb gGanondorfRightShoulderLimb;
extern StandardLimb gGanondorfRightUpperArmLimb;
extern StandardLimb gGanondorfRightForearmLimb;
extern StandardLimb gGanondorfRightHandLimb;
extern StandardLimb gGanondorfJewelLimb;
extern StandardLimb gGanondorfLeftUpperLipLimb;
extern StandardLimb gGanondorfMouthLimb;
extern StandardLimb gGanondorfJawLimb;
extern StandardLimb gGanondorfUpperHairEndLimb;
extern StandardLimb gGanondorfLowerHairEndLimb;
extern StandardLimb gGanondorfRightUpperLipLimb;
extern StandardLimb gGanondorfHeadLimb;
extern StandardLimb gGanondorfPelvisLimb;
extern StandardLimb gGanondorfLeftThighLimb;
extern StandardLimb gGanondorfLeftShinLimb;
extern StandardLimb gGanondorfLeftFootLimb;
extern StandardLimb gGanondorfRightThighLimb;
extern StandardLimb gGanondorfRightShinLimb;
extern StandardLimb gGanondorfRightFootLimb;
extern void* gGanondorfLimbs[];
typedef enum gGanondorfSkelLimb {
    /*  0 */ LIMB_OBJECT_GANON_0114E8_NONE,
    /*  1 */ LIMB_OBJECT_GANON_011358,
    /*  2 */ LIMB_OBJECT_GANON_011364,
    /*  3 */ LIMB_OBJECT_GANON_011370,
    /*  4 */ LIMB_OBJECT_GANON_01137C,
    /*  5 */ LIMB_OBJECT_GANON_011388,
    /*  6 */ LIMB_OBJECT_GANON_011394,
    /*  7 */ LIMB_OBJECT_GANON_0113A0,
    /*  8 */ LIMB_OBJECT_GANON_0113AC,
    /*  9 */ LIMB_OBJECT_GANON_0113B8,
    /* 10 */ LIMB_OBJECT_GANON_0113C4,
    /* 11 */ LIMB_OBJECT_GANON_0113D0,
    /* 12 */ LIMB_OBJECT_GANON_0113DC,
    /* 13 */ LIMB_OBJECT_GANON_0113E8,
    /* 14 */ LIMB_OBJECT_GANON_0113F4,
    /* 15 */ LIMB_OBJECT_GANON_011400,
    /* 16 */ LIMB_OBJECT_GANON_01140C,
    /* 17 */ LIMB_OBJECT_GANON_011418,
    /* 18 */ LIMB_OBJECT_GANON_011424,
    /* 19 */ LIMB_OBJECT_GANON_011430,
    /* 20 */ LIMB_OBJECT_GANON_01143C,
    /* 21 */ LIMB_OBJECT_GANON_011448,
    /* 22 */ LIMB_OBJECT_GANON_011454,
    /* 23 */ LIMB_OBJECT_GANON_011460,
    /* 24 */ LIMB_OBJECT_GANON_01146C,
    /* 25 */ LIMB_OBJECT_GANON_011478,
    /* 26 */ LIMB_OBJECT_GANON_0114E8_MAX
} gGanondorfSkelLimb;
extern FlexSkeletonHeader gGanondorfSkel;

#endif
