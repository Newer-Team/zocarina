#ifndef OBJECT_ZL1_H
#define OBJECT_ZL1_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gChildZelda1Anim_00438_06000000_FrameData[];
extern JointIndex gChildZelda1Anim_00438_060003CC_JointIndices[];
extern AnimationHeader gChildZelda1Anim_00438;
//#define gChildZelda1TLUT_0450_TLUT_COUNT 256
extern u64 gChildZelda1TLUT_0450[];
#define gChildZelda1DressGradientTex_WIDTH 8
#define gChildZelda1DressGradientTex_HEIGHT 8
extern u64 gChildZelda1DressGradientTex[TEX_LEN(u64, gChildZelda1DressGradientTex_WIDTH, gChildZelda1DressGradientTex_HEIGHT, 8)];
#define gChildZelda1PurpleDressPatternTex_WIDTH 16
#define gChildZelda1PurpleDressPatternTex_HEIGHT 16
extern u64 gChildZelda1PurpleDressPatternTex[TEX_LEN(u64, gChildZelda1PurpleDressPatternTex_WIDTH, gChildZelda1PurpleDressPatternTex_HEIGHT, 8)];
#define gChildZelda1TriforceSashTex_WIDTH 32
#define gChildZelda1TriforceSashTex_HEIGHT 64
extern u64 gChildZelda1TriforceSashTex[TEX_LEN(u64, gChildZelda1TriforceSashTex_WIDTH, gChildZelda1TriforceSashTex_HEIGHT, 8)];
#define gChildZelda1BeltTex_WIDTH 32
#define gChildZelda1BeltTex_HEIGHT 8
extern u64 gChildZelda1BeltTex[TEX_LEN(u64, gChildZelda1BeltTex_WIDTH, gChildZelda1BeltTex_HEIGHT, 8)];
#define gChildZelda1BeltLoopsTex_WIDTH 8
#define gChildZelda1BeltLoopsTex_HEIGHT 8
extern u64 gChildZelda1BeltLoopsTex[TEX_LEN(u64, gChildZelda1BeltLoopsTex_WIDTH, gChildZelda1BeltLoopsTex_HEIGHT, 8)];
#define gChildZelda1DressWrinklesTex_WIDTH 32
#define gChildZelda1DressWrinklesTex_HEIGHT 32
extern u64 gChildZelda1DressWrinklesTex[TEX_LEN(u64, gChildZelda1DressWrinklesTex_WIDTH, gChildZelda1DressWrinklesTex_HEIGHT, 8)];
#define gChildZelda1BackOfHandTex_WIDTH 16
#define gChildZelda1BackOfHandTex_HEIGHT 16
extern u64 gChildZelda1BackOfHandTex[TEX_LEN(u64, gChildZelda1BackOfHandTex_WIDTH, gChildZelda1BackOfHandTex_HEIGHT, 16)];
#define gChildZelda1BraceletTex_WIDTH 16
#define gChildZelda1BraceletTex_HEIGHT 16
extern u64 gChildZelda1BraceletTex[TEX_LEN(u64, gChildZelda1BraceletTex_WIDTH, gChildZelda1BraceletTex_HEIGHT, 8)];
#define gChildZelda1BlueUndershirtGradient1Tex_WIDTH 8
#define gChildZelda1BlueUndershirtGradient1Tex_HEIGHT 8
extern u64 gChildZelda1BlueUndershirtGradient1Tex[TEX_LEN(u64, gChildZelda1BlueUndershirtGradient1Tex_WIDTH, gChildZelda1BlueUndershirtGradient1Tex_HEIGHT, 16)];
#define gChildZelda1BlueUndershirtGradient2Tex_WIDTH 16
#define gChildZelda1BlueUndershirtGradient2Tex_HEIGHT 16
extern u64 gChildZelda1BlueUndershirtGradient2Tex[TEX_LEN(u64, gChildZelda1BlueUndershirtGradient2Tex_WIDTH, gChildZelda1BlueUndershirtGradient2Tex_HEIGHT, 16)];
#define gChildZelda1Tex_1A50_WIDTH 8
#define gChildZelda1Tex_1A50_HEIGHT 8
extern u64 gChildZelda1Tex_1A50[TEX_LEN(u64, gChildZelda1Tex_1A50_WIDTH, gChildZelda1Tex_1A50_HEIGHT, 8)];
#define gChildZelda1StripedShoulderPatternTex_WIDTH 8
#define gChildZelda1StripedShoulderPatternTex_HEIGHT 8
extern u64 gChildZelda1StripedShoulderPatternTex[TEX_LEN(u64, gChildZelda1StripedShoulderPatternTex_WIDTH, gChildZelda1StripedShoulderPatternTex_HEIGHT, 8)];
#define gChildZelda1UndershirtWrinklesTex_WIDTH 16
#define gChildZelda1UndershirtWrinklesTex_HEIGHT 16
extern u64 gChildZelda1UndershirtWrinklesTex[TEX_LEN(u64, gChildZelda1UndershirtWrinklesTex_WIDTH, gChildZelda1UndershirtWrinklesTex_HEIGHT, 8)];
#define gChildZelda1PendantTex_WIDTH 32
#define gChildZelda1PendantTex_HEIGHT 32
extern u64 gChildZelda1PendantTex[TEX_LEN(u64, gChildZelda1PendantTex_WIDTH, gChildZelda1PendantTex_HEIGHT, 16)];
extern Vtx gChildZelda1Dress3Vtx[];
extern Vtx gChildZelda1Dress2Vtx[];
extern Vtx gChildZelda1Dress1Vtx[];
extern Vtx gChildZelda1WaistVtx[];
extern Vtx gChildZelda1LeftHandVtx[];
extern Vtx gChildZelda1LeftForearmVtx[];
extern Vtx gChildZelda1LeftUpperArmVtx[];
extern Vtx gChildZelda1RightHandVtx[];
extern Vtx gChildZelda1RightForearmVtx[];
extern Vtx gChildZelda1RightUpperArmVtx[];
extern Vtx gChildZelda1TorsoVtx[];
extern Gfx gChildZelda1TorsoDL[304];
extern Gfx gChildZelda1RightUpperArmDL[77];
extern Gfx gChildZelda1RightForearmDL[42];
extern Gfx gChildZelda1RightHandDL[60];
extern Gfx gChildZelda1LeftUpperArmDL[78];
extern Gfx gChildZelda1LeftForearmDL[42];
extern Gfx gChildZelda1LeftHandDL[60];
extern Gfx gChildZelda1WaistDL[260];
extern Gfx gChildZelda1Dress1DL[55];
extern Gfx gChildZelda1Dress2DL[56];
extern Gfx gChildZelda1Dress3DL[39];
//#define gChildZelda1TLUT_6CD8_TLUT_COUNT 252
extern u64 gChildZelda1TLUT_6CD8[];
//#define gChildZelda1TLUT_6ED0_TLUT_COUNT 252
extern u64 gChildZelda1TLUT_6ED0[];
//#define gChildZelda1TLUT_70C8_TLUT_COUNT 160
extern u64 gChildZelda1TLUT_70C8[];
#define gChildZelda1EyeOpenLookingUpRightTex_WIDTH 32
#define gChildZelda1EyeOpenLookingUpRightTex_HEIGHT 32
extern u64 gChildZelda1EyeOpenLookingUpRightTex[TEX_LEN(u64, gChildZelda1EyeOpenLookingUpRightTex_WIDTH, gChildZelda1EyeOpenLookingUpRightTex_HEIGHT, 8)];
#define gChildZelda1MouthNeutralTex_WIDTH 32
#define gChildZelda1MouthNeutralTex_HEIGHT 32
extern u64 gChildZelda1MouthNeutralTex[TEX_LEN(u64, gChildZelda1MouthNeutralTex_WIDTH, gChildZelda1MouthNeutralTex_HEIGHT, 8)];
#define gChildZelda1HeaddressGradientTex_WIDTH 8
#define gChildZelda1HeaddressGradientTex_HEIGHT 8
extern u64 gChildZelda1HeaddressGradientTex[TEX_LEN(u64, gChildZelda1HeaddressGradientTex_WIDTH, gChildZelda1HeaddressGradientTex_HEIGHT, 8)];
#define gChildZelda1SkinGradientTex_WIDTH 8
#define gChildZelda1SkinGradientTex_HEIGHT 8
extern u64 gChildZelda1SkinGradientTex[TEX_LEN(u64, gChildZelda1SkinGradientTex_WIDTH, gChildZelda1SkinGradientTex_HEIGHT, 16)];
#define gChildZelda1HeaddressTriforceEmblemTex_WIDTH 16
#define gChildZelda1HeaddressTriforceEmblemTex_HEIGHT 32
extern u64 gChildZelda1HeaddressTriforceEmblemTex[TEX_LEN(u64, gChildZelda1HeaddressTriforceEmblemTex_WIDTH, gChildZelda1HeaddressTriforceEmblemTex_HEIGHT, 16)];
#define gChildZelda1PointedHairOnSideTex_WIDTH 16
#define gChildZelda1PointedHairOnSideTex_HEIGHT 16
extern u64 gChildZelda1PointedHairOnSideTex[TEX_LEN(u64, gChildZelda1PointedHairOnSideTex_WIDTH, gChildZelda1PointedHairOnSideTex_HEIGHT, 16)];
#define gChildZelda1HairTex_WIDTH 16
#define gChildZelda1HairTex_HEIGHT 8
extern u64 gChildZelda1HairTex[TEX_LEN(u64, gChildZelda1HairTex_WIDTH, gChildZelda1HairTex_HEIGHT, 16)];
#define gChildZelda1Tex_81C8_WIDTH 8
#define gChildZelda1Tex_81C8_HEIGHT 8
extern u64 gChildZelda1Tex_81C8[TEX_LEN(u64, gChildZelda1Tex_81C8_WIDTH, gChildZelda1Tex_81C8_HEIGHT, 8)];
#define gChildZelda1EarTex_WIDTH 16
#define gChildZelda1EarTex_HEIGHT 16
extern u64 gChildZelda1EarTex[TEX_LEN(u64, gChildZelda1EarTex_WIDTH, gChildZelda1EarTex_HEIGHT, 16)];
#define gChildZelda1AlternateDressPatternTex_WIDTH 8
#define gChildZelda1AlternateDressPatternTex_HEIGHT 8
extern u64 gChildZelda1AlternateDressPatternTex[TEX_LEN(u64, gChildZelda1AlternateDressPatternTex_WIDTH, gChildZelda1AlternateDressPatternTex_HEIGHT, 8)];
#define gChildZelda1ALternateDressBeltTex_WIDTH 32
#define gChildZelda1ALternateDressBeltTex_HEIGHT 8
extern u64 gChildZelda1ALternateDressBeltTex[TEX_LEN(u64, gChildZelda1ALternateDressBeltTex_WIDTH, gChildZelda1ALternateDressBeltTex_HEIGHT, 8)];
#define gChildZelda1AlternateDressGradientTex_WIDTH 16
#define gChildZelda1AlternateDressGradientTex_HEIGHT 16
extern u64 gChildZelda1AlternateDressGradientTex[TEX_LEN(u64, gChildZelda1AlternateDressGradientTex_WIDTH, gChildZelda1AlternateDressGradientTex_HEIGHT, 8)];
#define gChildZelda1AlternateDressLiningTex_WIDTH 8
#define gChildZelda1AlternateDressLiningTex_HEIGHT 16
extern u64 gChildZelda1AlternateDressLiningTex[TEX_LEN(u64, gChildZelda1AlternateDressLiningTex_WIDTH, gChildZelda1AlternateDressLiningTex_HEIGHT, 16)];
#define gChildZelda1BootTex_WIDTH 8
#define gChildZelda1BootTex_HEIGHT 8
extern u64 gChildZelda1BootTex[TEX_LEN(u64, gChildZelda1BootTex_WIDTH, gChildZelda1BootTex_HEIGHT, 16)];
#define gChildZelda1BootShaftTex_WIDTH 8
#define gChildZelda1BootShaftTex_HEIGHT 8
extern u64 gChildZelda1BootShaftTex[TEX_LEN(u64, gChildZelda1BootShaftTex_WIDTH, gChildZelda1BootShaftTex_HEIGHT, 16)];
#define gChildZelda1EyeOpenLookingLeftTex_WIDTH 32
#define gChildZelda1EyeOpenLookingLeftTex_HEIGHT 32
extern u64 gChildZelda1EyeOpenLookingLeftTex[TEX_LEN(u64, gChildZelda1EyeOpenLookingLeftTex_WIDTH, gChildZelda1EyeOpenLookingLeftTex_HEIGHT, 8)];
#define gChildZelda1EyeOpenLookingRightTex_WIDTH 32
#define gChildZelda1EyeOpenLookingRightTex_HEIGHT 32
extern u64 gChildZelda1EyeOpenLookingRightTex[TEX_LEN(u64, gChildZelda1EyeOpenLookingRightTex_WIDTH, gChildZelda1EyeOpenLookingRightTex_HEIGHT, 8)];
#define gChildZelda1MouthFrowningTex_WIDTH 32
#define gChildZelda1MouthFrowningTex_HEIGHT 32
extern u64 gChildZelda1MouthFrowningTex[TEX_LEN(u64, gChildZelda1MouthFrowningTex_WIDTH, gChildZelda1MouthFrowningTex_HEIGHT, 8)];
#define gChildZelda1EyeHalf1Tex_WIDTH 32
#define gChildZelda1EyeHalf1Tex_HEIGHT 32
extern u64 gChildZelda1EyeHalf1Tex[TEX_LEN(u64, gChildZelda1EyeHalf1Tex_WIDTH, gChildZelda1EyeHalf1Tex_HEIGHT, 8)];
#define gChildZelda1EyeHalf2Tex_WIDTH 32
#define gChildZelda1EyeHalf2Tex_HEIGHT 32
extern u64 gChildZelda1EyeHalf2Tex[TEX_LEN(u64, gChildZelda1EyeHalf2Tex_WIDTH, gChildZelda1EyeHalf2Tex_HEIGHT, 8)];
#define gChildZelda1EyeClosedTex_WIDTH 32
#define gChildZelda1EyeClosedTex_HEIGHT 32
extern u64 gChildZelda1EyeClosedTex[TEX_LEN(u64, gChildZelda1EyeClosedTex_WIDTH, gChildZelda1EyeClosedTex_HEIGHT, 8)];
#define gChildZelda1EyeWideTex_WIDTH 32
#define gChildZelda1EyeWideTex_HEIGHT 32
extern u64 gChildZelda1EyeWideTex[TEX_LEN(u64, gChildZelda1EyeWideTex_WIDTH, gChildZelda1EyeWideTex_HEIGHT, 8)];
#define gChildZelda1MouthOpenTex_WIDTH 32
#define gChildZelda1MouthOpenTex_HEIGHT 32
extern u64 gChildZelda1MouthOpenTex[TEX_LEN(u64, gChildZelda1MouthOpenTex_WIDTH, gChildZelda1MouthOpenTex_HEIGHT, 8)];
#define gChildZelda1Tex_A848_WIDTH 8
#define gChildZelda1Tex_A848_HEIGHT 8
extern u64 gChildZelda1Tex_A848[TEX_LEN(u64, gChildZelda1Tex_A848_WIDTH, gChildZelda1Tex_A848_HEIGHT, 16)];
#define gChildZelda1HeaddressTex_A8C8_WIDTH 8
#define gChildZelda1HeaddressTex_A8C8_HEIGHT 16
extern u64 gChildZelda1HeaddressTex_A8C8[TEX_LEN(u64, gChildZelda1HeaddressTex_A8C8_WIDTH, gChildZelda1HeaddressTex_A8C8_HEIGHT, 8)];
#define gChildZelda1HeaddressStripeTex_WIDTH 16
#define gChildZelda1HeaddressStripeTex_HEIGHT 32
extern u64 gChildZelda1HeaddressStripeTex[TEX_LEN(u64, gChildZelda1HeaddressStripeTex_WIDTH, gChildZelda1HeaddressStripeTex_HEIGHT, 8)];
#define gChildZelda1MouthOpenSmilingTex_WIDTH 32
#define gChildZelda1MouthOpenSmilingTex_HEIGHT 32
extern u64 gChildZelda1MouthOpenSmilingTex[TEX_LEN(u64, gChildZelda1MouthOpenSmilingTex_WIDTH, gChildZelda1MouthOpenSmilingTex_HEIGHT, 8)];
extern Vtx gChildZelda1HeadVtx[];
extern Vtx gChildZelda1AlternateDressVtx[];
extern Vtx gChildZelda1LeftFootVtx[];
extern Vtx gChildZelda1RightFootVtx[];
extern Vtx gChildZelda1RightLegVtx[];
extern Vtx gChildZelda1LeftLegVtx[];
extern Gfx gChildZelda1HeadDL[550];
extern Gfx gChildZelda1AlternateDressDL[272];
extern Gfx gChildZelda1LeftFootDL[102];
extern Gfx gChildZelda1RightFootDL[102];
extern Gfx gChildZelda1RightLegDL[11];
extern Gfx gChildZelda1LeftLegDL[11];
#define object_zl1_00EE58_Tex_WIDTH 32
#define object_zl1_00EE58_Tex_HEIGHT 16
extern u64 object_zl1_00EE58_Tex[TEX_LEN(u64, object_zl1_00EE58_Tex_WIDTH, object_zl1_00EE58_Tex_HEIGHT, 16)];
extern Vtx gChildZelda1OcarinaVtx[];
extern Gfx gChildZelda1OcarinaDL[36];
extern StandardLimb gChildZelda1RootLimb;
extern StandardLimb gChildZelda1WaistLimb;
extern StandardLimb gChildZelda1LeftLegLimb;
extern StandardLimb gChildZelda1LeftFootLimb;
extern StandardLimb gChildZelda1RightLegLimb;
extern StandardLimb gChildZelda1RightFootLimb;
extern StandardLimb gChildZelda1Dress1Limb;
extern StandardLimb gChildZelda1Dress2Limb;
extern StandardLimb gChildZelda1Dress3Limb;
extern StandardLimb gChildZelda1TorsoLimb;
extern StandardLimb gChildZelda1LeftUpperArmLimb;
extern StandardLimb gChildZelda1LeftForearmLimb;
extern StandardLimb gChildZelda1LeftHandLimb;
extern StandardLimb gChildZelda1RightUpperArmLimb;
extern StandardLimb gChildZelda1RightForearmLimb;
extern StandardLimb gChildZelda1RightHandLimb;
extern StandardLimb gChildZelda1HeadLimb;
extern void* gChildZelda1Limbs[];
typedef enum gChildZelda1SkelLimb {
    /*  0 */ LIMB_OBJECT_ZL1_00F5D8_NONE,
    /*  1 */ LIMB_OBJECT_ZL1_00F4C8,
    /*  2 */ LIMB_OBJECT_ZL1_00F4D4,
    /*  3 */ LIMB_OBJECT_ZL1_00F4E0,
    /*  4 */ LIMB_OBJECT_ZL1_00F4EC,
    /*  5 */ LIMB_OBJECT_ZL1_00F4F8,
    /*  6 */ LIMB_OBJECT_ZL1_00F504,
    /*  7 */ LIMB_OBJECT_ZL1_00F510,
    /*  8 */ LIMB_OBJECT_ZL1_00F51C,
    /*  9 */ LIMB_OBJECT_ZL1_00F528,
    /* 10 */ LIMB_OBJECT_ZL1_00F534,
    /* 11 */ LIMB_OBJECT_ZL1_00F540,
    /* 12 */ LIMB_OBJECT_ZL1_00F54C,
    /* 13 */ LIMB_OBJECT_ZL1_00F558,
    /* 14 */ LIMB_OBJECT_ZL1_00F564,
    /* 15 */ LIMB_OBJECT_ZL1_00F570,
    /* 16 */ LIMB_OBJECT_ZL1_00F57C,
    /* 17 */ LIMB_OBJECT_ZL1_00F588,
    /* 18 */ LIMB_OBJECT_ZL1_00F5D8_MAX
} gChildZelda1SkelLimb;
extern FlexSkeletonHeader gChildZelda1Skel;
extern s16 gChildZelda1Anim_10B38_0600F5F0_FrameData[];
extern JointIndex gChildZelda1Anim_10B38_06010ACC_JointIndices[];
extern AnimationHeader gChildZelda1Anim_10B38;
extern s16 gChildZelda1Anim_11348_06010B50_FrameData[];
extern JointIndex gChildZelda1Anim_11348_060112DC_JointIndices[];
extern AnimationHeader gChildZelda1Anim_11348;
extern s16 gChildZelda1Anim_116E4_06011360_FrameData[];
extern JointIndex gChildZelda1Anim_116E4_06011678_JointIndices[];
extern AnimationHeader gChildZelda1Anim_116E4;
extern s16 gChildZelda1Anim_12B88_06011700_FrameData[];
extern JointIndex gChildZelda1Anim_12B88_06011B1C_JointIndices[];
extern AnimationHeader gChildZelda1Anim_12B88;
extern s16 gChildZelda1Anim_12118_06011BA0_FrameData[];
extern JointIndex gChildZelda1Anim_12118_060120AC_JointIndices[];
extern AnimationHeader gChildZelda1Anim_12118;
extern s16 gChildZelda1Anim_12B04_06012130_FrameData[];
extern JointIndex gChildZelda1Anim_12B04_06012A98_JointIndices[];
extern AnimationHeader gChildZelda1Anim_12B04;
extern s16 gChildZelda1Anim_12F80_06012B20_FrameData[];
extern JointIndex gChildZelda1Anim_12F80_06012F14_JointIndices[];
extern AnimationHeader gChildZelda1Anim_12F80;
extern s16 gChildZelda1Anim_132D8_06012F90_FrameData[];
extern JointIndex gChildZelda1Anim_132D8_0601326C_JointIndices[];
extern AnimationHeader gChildZelda1Anim_132D8;
extern s16 gChildZelda1Anim_138E0_060132F0_FrameData[];
extern JointIndex gChildZelda1Anim_138E0_06013874_JointIndices[];
extern AnimationHeader gChildZelda1Anim_138E0;
extern s16 gChildZelda1Anim_13F10_060138F0_FrameData[];
extern JointIndex gChildZelda1Anim_13F10_06013EA4_JointIndices[];
extern AnimationHeader gChildZelda1Anim_13F10;
extern s16 gChildZelda1Anim_143A8_06013F20_FrameData[];
extern JointIndex gChildZelda1Anim_143A8_0601433C_JointIndices[];
extern AnimationHeader gChildZelda1Anim_143A8;

#endif
