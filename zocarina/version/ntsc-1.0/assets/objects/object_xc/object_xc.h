#ifndef OBJECT_XC_H
#define OBJECT_XC_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gSheikPlayingHarpFrameData[];
extern JointIndex gSheikPlayingHarpJointIndices[];
extern AnimationHeader gSheikPlayingHarpAnim;
extern s16 gSheikShowingTriforceOnHandFrameData[];
extern JointIndex gSheikShowingTriforceOnHandJointIndices[];
extern AnimationHeader gSheikShowingTriforceOnHandAnim;
extern s16 gSheikShowingTriforceOnHandIdleFrameData[];
extern JointIndex gSheikShowingTriforceOnHandIdleJointIndices[];
extern AnimationHeader gSheikShowingTriforceOnHandIdleAnim;
extern s16 gSheikPlayingHarp2FrameData[];
extern JointIndex gSheikPlayingHarp2JointIndices[];
extern AnimationHeader gSheikPlayingHarp2Anim;
extern s16 gSheikPlayingHarp3FrameData[];
extern JointIndex gSheikPlayingHarp3JointIndices[];
extern AnimationHeader gSheikPlayingHarp3Anim;
extern s16 gSheikPlayingHarp4FrameData[];
extern JointIndex gSheikPlayingHarp4JointIndices[];
extern AnimationHeader gSheikPlayingHarp4Anim;
extern s16 gSheikIdleFrameData[];
extern JointIndex gSheikIdleJointIndices[];
extern AnimationHeader gSheikIdleAnim;
//#define object_xc_005260_TLUT_TLUT_COUNT 256
extern u64 object_xc_005260_TLUT[];
//#define object_xc_TLUT_004A40_TLUT_COUNT 256
extern u64 object_xc_TLUT_004A40[];
#define object_xc_005660_Tex_WIDTH 8
#define object_xc_005660_Tex_HEIGHT 8
extern u64 object_xc_005660_Tex[TEX_LEN(u64, object_xc_005660_Tex_WIDTH, object_xc_005660_Tex_HEIGHT, 8)];
#define object_xc_0056A0_Tex_WIDTH 8
#define object_xc_0056A0_Tex_HEIGHT 8
extern u64 object_xc_0056A0_Tex[TEX_LEN(u64, object_xc_0056A0_Tex_WIDTH, object_xc_0056A0_Tex_HEIGHT, 8)];
#define gSheikEyeOpenTex_WIDTH 32
#define gSheikEyeOpenTex_HEIGHT 32
extern u64 gSheikEyeOpenTex[TEX_LEN(u64, gSheikEyeOpenTex_WIDTH, gSheikEyeOpenTex_HEIGHT, 8)];
#define gSheikEyeHalfClosedTex_WIDTH 32
#define gSheikEyeHalfClosedTex_HEIGHT 32
extern u64 gSheikEyeHalfClosedTex[TEX_LEN(u64, gSheikEyeHalfClosedTex_WIDTH, gSheikEyeHalfClosedTex_HEIGHT, 8)];
#define gSheikEyeShutTex_WIDTH 32
#define gSheikEyeShutTex_HEIGHT 32
extern u64 gSheikEyeShutTex[TEX_LEN(u64, gSheikEyeShutTex_WIDTH, gSheikEyeShutTex_HEIGHT, 8)];
#define gSheikEyeSquintingTex_WIDTH 32
#define gSheikEyeSquintingTex_HEIGHT 32
extern u64 gSheikEyeSquintingTex[TEX_LEN(u64, gSheikEyeSquintingTex_WIDTH, gSheikEyeSquintingTex_HEIGHT, 8)];
#define object_xc_0066E0_Tex_WIDTH 32
#define object_xc_0066E0_Tex_HEIGHT 32
extern u64 object_xc_0066E0_Tex[TEX_LEN(u64, object_xc_0066E0_Tex_WIDTH, object_xc_0066E0_Tex_HEIGHT, 8)];
#define object_xc_006AE0_Tex_WIDTH 32
#define object_xc_006AE0_Tex_HEIGHT 32
extern u64 object_xc_006AE0_Tex[TEX_LEN(u64, object_xc_006AE0_Tex_WIDTH, object_xc_006AE0_Tex_HEIGHT, 8)];
#define object_xc_006EE0_Tex_WIDTH 32
#define object_xc_006EE0_Tex_HEIGHT 32
extern u64 object_xc_006EE0_Tex[TEX_LEN(u64, object_xc_006EE0_Tex_WIDTH, object_xc_006EE0_Tex_HEIGHT, 16)];
#define object_xc_0076E0_Tex_WIDTH 8
#define object_xc_0076E0_Tex_HEIGHT 16
extern u64 object_xc_0076E0_Tex[TEX_LEN(u64, object_xc_0076E0_Tex_WIDTH, object_xc_0076E0_Tex_HEIGHT, 8)];
#define object_xc_007760_Tex_WIDTH 8
#define object_xc_007760_Tex_HEIGHT 8
extern u64 object_xc_007760_Tex[TEX_LEN(u64, object_xc_007760_Tex_WIDTH, object_xc_007760_Tex_HEIGHT, 8)];
#define object_xc_0077A0_Tex_WIDTH 16
#define object_xc_0077A0_Tex_HEIGHT 16
extern u64 object_xc_0077A0_Tex[TEX_LEN(u64, object_xc_0077A0_Tex_WIDTH, object_xc_0077A0_Tex_HEIGHT, 8)];
#define object_xc_0078A0_Tex_WIDTH 32
#define object_xc_0078A0_Tex_HEIGHT 32
extern u64 object_xc_0078A0_Tex[TEX_LEN(u64, object_xc_0078A0_Tex_WIDTH, object_xc_0078A0_Tex_HEIGHT, 8)];
#define object_xc_007CA0_Tex_WIDTH 16
#define object_xc_007CA0_Tex_HEIGHT 16
extern u64 object_xc_007CA0_Tex[TEX_LEN(u64, object_xc_007CA0_Tex_WIDTH, object_xc_007CA0_Tex_HEIGHT, 8)];
#define object_xc_007DA0_Tex_WIDTH 32
#define object_xc_007DA0_Tex_HEIGHT 32
extern u64 object_xc_007DA0_Tex[TEX_LEN(u64, object_xc_007DA0_Tex_WIDTH, object_xc_007DA0_Tex_HEIGHT, 16)];
#define object_xc_0085A0_Tex_WIDTH 32
#define object_xc_0085A0_Tex_HEIGHT 64
extern u64 object_xc_0085A0_Tex[TEX_LEN(u64, object_xc_0085A0_Tex_WIDTH, object_xc_0085A0_Tex_HEIGHT, 8)];
#define object_xc_008DA0_Tex_WIDTH 32
#define object_xc_008DA0_Tex_HEIGHT 64
extern u64 object_xc_008DA0_Tex[TEX_LEN(u64, object_xc_008DA0_Tex_WIDTH, object_xc_008DA0_Tex_HEIGHT, 8)];
#define object_xc_0095A0_Tex_WIDTH 16
#define object_xc_0095A0_Tex_HEIGHT 8
extern u64 object_xc_0095A0_Tex[TEX_LEN(u64, object_xc_0095A0_Tex_WIDTH, object_xc_0095A0_Tex_HEIGHT, 8)];
#define object_xc_009620_Tex_WIDTH 32
#define object_xc_009620_Tex_HEIGHT 16
extern u64 object_xc_009620_Tex[TEX_LEN(u64, object_xc_009620_Tex_WIDTH, object_xc_009620_Tex_HEIGHT, 8)];
extern Vtx object_xc_Vtx_009820[];
extern Vtx object_xc_Vtx_00ACE0[];
extern Vtx object_xc_Vtx_00B130[];
extern Vtx object_xc_Vtx_00B320[];
extern Vtx object_xc_Vtx_00B620[];
extern Vtx object_xc_Vtx_00BA70[];
extern Vtx object_xc_Vtx_00BC60[];
extern Vtx object_xc_Vtx_00BF60[];
extern Vtx object_xc_Vtx_00C850[];
extern Vtx object_xc_Vtx_00CAA0[];
extern Vtx object_xc_Vtx_00CD80[];
extern Vtx object_xc_Vtx_00D0D0[];
extern Vtx object_xc_Vtx_00D320[];
extern Vtx object_xc_Vtx_00D600[];
extern Vtx object_xc_Vtx_00D950[];
extern Gfx object_xc_00DB40_DL[190];
extern Gfx object_xc_00E130_DL[227];
extern Gfx object_xc_00E848_DL[58];
extern Gfx object_xc_00EA18_DL[69];
extern Gfx object_xc_00EC40_DL[72];
extern Gfx object_xc_00EE80_DL[58];
extern Gfx object_xc_00F050_DL[69];
extern Gfx object_xc_00F278_DL[72];
extern Gfx object_xc_00F4B8_DL[41];
extern Gfx object_xc_00F600_DL[58];
extern Gfx object_xc_00F7D0_DL[62];
extern Gfx object_xc_00F9C0_DL[54];
extern Gfx object_xc_00FB70_DL[58];
extern Gfx object_xc_00FD40_DL[62];
extern Gfx object_xc_00FF30_DL[54];
//#define object_xc_0100E0_TLUT_TLUT_COUNT 48
extern u64 object_xc_0100E0_TLUT[];
//#define object_xc_010140_TLUT_TLUT_COUNT 56
extern u64 object_xc_010140_TLUT[];
#define object_xc_0101B0_Tex_WIDTH 8
#define object_xc_0101B0_Tex_HEIGHT 8
extern u64 object_xc_0101B0_Tex[TEX_LEN(u64, object_xc_0101B0_Tex_WIDTH, object_xc_0101B0_Tex_HEIGHT, 8)];
#define object_xc_0101F0_Tex_WIDTH 32
#define object_xc_0101F0_Tex_HEIGHT 32
extern u64 object_xc_0101F0_Tex[TEX_LEN(u64, object_xc_0101F0_Tex_WIDTH, object_xc_0101F0_Tex_HEIGHT, 8)];
#define object_xc_0105F0_Tex_WIDTH 16
#define object_xc_0105F0_Tex_HEIGHT 16
extern u64 object_xc_0105F0_Tex[TEX_LEN(u64, object_xc_0105F0_Tex_WIDTH, object_xc_0105F0_Tex_HEIGHT, 8)];
#define object_xc_0106F0_Tex_WIDTH 8
#define object_xc_0106F0_Tex_HEIGHT 8
extern u64 object_xc_0106F0_Tex[TEX_LEN(u64, object_xc_0106F0_Tex_WIDTH, object_xc_0106F0_Tex_HEIGHT, 8)];
#define object_xc_010730_Tex_WIDTH 8
#define object_xc_010730_Tex_HEIGHT 8
extern u64 object_xc_010730_Tex[TEX_LEN(u64, object_xc_010730_Tex_WIDTH, object_xc_010730_Tex_HEIGHT, 16)];
#define object_xc_0107B0_Tex_WIDTH 8
#define object_xc_0107B0_Tex_HEIGHT 8
extern u64 object_xc_0107B0_Tex[TEX_LEN(u64, object_xc_0107B0_Tex_WIDTH, object_xc_0107B0_Tex_HEIGHT, 8)];
#define object_xc_0107F0_Tex_WIDTH 16
#define object_xc_0107F0_Tex_HEIGHT 32
extern u64 object_xc_0107F0_Tex[TEX_LEN(u64, object_xc_0107F0_Tex_WIDTH, object_xc_0107F0_Tex_HEIGHT, 16)];
#define object_xc_010BF0_Tex_WIDTH 8
#define object_xc_010BF0_Tex_HEIGHT 16
extern u64 object_xc_010BF0_Tex[TEX_LEN(u64, object_xc_010BF0_Tex_WIDTH, object_xc_010BF0_Tex_HEIGHT, 16)];
extern Vtx gSheikHarpVtx[];
extern Vtx object_xc_Vtx_0112F0[];
extern Gfx gSheikHarpDL[154];
extern Gfx gSheikDL_011620[97];
#define object_xc_012350_Tex_WIDTH 64
#define object_xc_012350_Tex_HEIGHT 64
extern u64 object_xc_012350_Tex[TEX_LEN(u64, object_xc_012350_Tex_WIDTH, object_xc_012350_Tex_HEIGHT, 8)];
extern Vtx object_xc_Vtx_013350[];
extern Gfx gSheikDL_012970[16];
extern StandardLimb object_xc_013410_Limb;
extern StandardLimb object_xc_01341C_Limb;
extern StandardLimb object_xc_013428_Limb;
extern StandardLimb object_xc_013434_Limb;
extern StandardLimb object_xc_013440_Limb;
extern StandardLimb object_xc_01344C_Limb;
extern StandardLimb object_xc_013458_Limb;
extern StandardLimb object_xc_013464_Limb;
extern StandardLimb object_xc_013470_Limb;
extern StandardLimb object_xc_01347C_Limb;
extern StandardLimb object_xc_013488_Limb;
extern StandardLimb object_xc_013494_Limb;
extern StandardLimb object_xc_0134A0_Limb;
extern StandardLimb object_xc_0134AC_Limb;
extern StandardLimb object_xc_0134B8_Limb;
extern StandardLimb object_xc_0134C4_Limb;
extern void* gSheikLimbs[];
typedef enum gSheikSkelLimb {
    /*  0 */ LIMB_OBJECT_XC_013510_NONE,
    /*  1 */ LIMB_OBJECT_XC_013410,
    /*  2 */ LIMB_OBJECT_XC_01341C,
    /*  3 */ LIMB_OBJECT_XC_013428,
    /*  4 */ LIMB_OBJECT_XC_013434,
    /*  5 */ LIMB_OBJECT_XC_013440,
    /*  6 */ LIMB_OBJECT_XC_01344C,
    /*  7 */ LIMB_OBJECT_XC_013458,
    /*  8 */ LIMB_OBJECT_XC_013464,
    /*  9 */ LIMB_OBJECT_XC_013470,
    /* 10 */ LIMB_OBJECT_XC_01347C,
    /* 11 */ LIMB_OBJECT_XC_013488,
    /* 12 */ LIMB_OBJECT_XC_013494,
    /* 13 */ LIMB_OBJECT_XC_0134A0,
    /* 14 */ LIMB_OBJECT_XC_0134AC,
    /* 15 */ LIMB_OBJECT_XC_0134B8,
    /* 16 */ LIMB_OBJECT_XC_0134C4,
    /* 17 */ LIMB_OBJECT_XC_013510_MAX
} gSheikSkelLimb;
extern FlexSkeletonHeader gSheikSkel;
extern s16 gSheikWalkingFrameData[];
extern JointIndex gSheikWalkingJointIndices[];
extern AnimationHeader gSheikWalkingAnim;
extern s16 gSheikArmsCrossedIdleFrameData[];
extern JointIndex gSheikArmsCrossedIdleJointIndices[];
extern AnimationHeader gSheikArmsCrossedIdleAnim;
extern s16 gSheikFallingFromContortionsFrameData[];
extern JointIndex gSheikFallingFromContortionsJointIndices[];
extern AnimationHeader gSheikFallingFromContortionsAnim;
extern s16 gSheikContortionsFrameData[];
extern JointIndex gSheikContortionsJointIndices[];
extern AnimationHeader gSheikContortionsAnim;
extern s16 gSheikPlayingHarp5FrameData[];
extern JointIndex gSheikPlayingHarp5JointIndices[];
extern AnimationHeader gSheikPlayingHarp5Anim;
extern s16 gSheikInitialHarpFrameData[];
extern JointIndex gSheikInitialHarpJointIndices[];
extern AnimationHeader gSheikInitialHarpAnim;
extern s16 gSheikDefenseStanceFrameData[];
extern JointIndex gSheikDefenseStanceJointIndices[];
extern AnimationHeader gSheikDefenseStanceAnim;
extern s16 gSheikThrowingNutFrameData[];
extern JointIndex gSheikThrowingNutJointIndices[];
extern AnimationHeader gSheikThrowingNutAnim;
extern s16 gSheikKneelingFrameData[];
extern JointIndex gSheikKneelingJointIndices[];
extern AnimationHeader gSheikKneelingAnim;
extern s16 gSheikHittingGroundFrameData[];
extern JointIndex gSheikHittingGroundJointIndices[];
extern AnimationHeader gSheikHittingGroundAnim;
extern s16 gSheikAnim_01A048_0601A9B0_FrameData[];
extern JointIndex gSheikAnim_01A048_0601AA00_JointIndices[];
extern AnimationHeader gSheikAnim_01A048;
extern s16 gSheikPullingOutHarpFrameData[];
extern JointIndex gSheikPullingOutHarpJointIndices[];
extern AnimationHeader gSheikPullingOutHarpAnim;
extern s16 gSheikFallingFromSkyFrameData[];
extern JointIndex gSheikFallingFromSkyJointIndices[];
extern AnimationHeader gSheikFallingFromSkyAnim;

#endif
