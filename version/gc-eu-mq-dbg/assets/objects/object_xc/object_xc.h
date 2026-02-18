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
//#define object_xc_004840_TLUT_TLUT_COUNT 256
extern u64 object_xc_004840_TLUT[];
//#define object_xc_TLUT_004A40_TLUT_COUNT 256
extern u64 object_xc_TLUT_004A40[];
#define object_xc_004C40_Tex_WIDTH 8
#define object_xc_004C40_Tex_HEIGHT 8
extern u64 object_xc_004C40_Tex[TEX_LEN(u64, object_xc_004C40_Tex_WIDTH, object_xc_004C40_Tex_HEIGHT, 8)];
#define object_xc_004C80_Tex_WIDTH 8
#define object_xc_004C80_Tex_HEIGHT 8
extern u64 object_xc_004C80_Tex[TEX_LEN(u64, object_xc_004C80_Tex_WIDTH, object_xc_004C80_Tex_HEIGHT, 8)];
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
#define object_xc_005CC0_Tex_WIDTH 32
#define object_xc_005CC0_Tex_HEIGHT 32
extern u64 object_xc_005CC0_Tex[TEX_LEN(u64, object_xc_005CC0_Tex_WIDTH, object_xc_005CC0_Tex_HEIGHT, 8)];
#define object_xc_0060C0_Tex_WIDTH 32
#define object_xc_0060C0_Tex_HEIGHT 32
extern u64 object_xc_0060C0_Tex[TEX_LEN(u64, object_xc_0060C0_Tex_WIDTH, object_xc_0060C0_Tex_HEIGHT, 8)];
#define object_xc_0064C0_Tex_WIDTH 32
#define object_xc_0064C0_Tex_HEIGHT 32
extern u64 object_xc_0064C0_Tex[TEX_LEN(u64, object_xc_0064C0_Tex_WIDTH, object_xc_0064C0_Tex_HEIGHT, 16)];
#define object_xc_006CC0_Tex_WIDTH 8
#define object_xc_006CC0_Tex_HEIGHT 16
extern u64 object_xc_006CC0_Tex[TEX_LEN(u64, object_xc_006CC0_Tex_WIDTH, object_xc_006CC0_Tex_HEIGHT, 8)];
#define object_xc_006D40_Tex_WIDTH 8
#define object_xc_006D40_Tex_HEIGHT 8
extern u64 object_xc_006D40_Tex[TEX_LEN(u64, object_xc_006D40_Tex_WIDTH, object_xc_006D40_Tex_HEIGHT, 8)];
#define object_xc_006D80_Tex_WIDTH 16
#define object_xc_006D80_Tex_HEIGHT 16
extern u64 object_xc_006D80_Tex[TEX_LEN(u64, object_xc_006D80_Tex_WIDTH, object_xc_006D80_Tex_HEIGHT, 8)];
#define object_xc_006E80_Tex_WIDTH 32
#define object_xc_006E80_Tex_HEIGHT 32
extern u64 object_xc_006E80_Tex[TEX_LEN(u64, object_xc_006E80_Tex_WIDTH, object_xc_006E80_Tex_HEIGHT, 8)];
#define object_xc_007280_Tex_WIDTH 16
#define object_xc_007280_Tex_HEIGHT 16
extern u64 object_xc_007280_Tex[TEX_LEN(u64, object_xc_007280_Tex_WIDTH, object_xc_007280_Tex_HEIGHT, 8)];
#define object_xc_007380_Tex_WIDTH 32
#define object_xc_007380_Tex_HEIGHT 32
extern u64 object_xc_007380_Tex[TEX_LEN(u64, object_xc_007380_Tex_WIDTH, object_xc_007380_Tex_HEIGHT, 16)];
#define object_xc_007B80_Tex_WIDTH 32
#define object_xc_007B80_Tex_HEIGHT 64
extern u64 object_xc_007B80_Tex[TEX_LEN(u64, object_xc_007B80_Tex_WIDTH, object_xc_007B80_Tex_HEIGHT, 8)];
#define object_xc_008380_Tex_WIDTH 32
#define object_xc_008380_Tex_HEIGHT 64
extern u64 object_xc_008380_Tex[TEX_LEN(u64, object_xc_008380_Tex_WIDTH, object_xc_008380_Tex_HEIGHT, 8)];
#define object_xc_008B80_Tex_WIDTH 16
#define object_xc_008B80_Tex_HEIGHT 8
extern u64 object_xc_008B80_Tex[TEX_LEN(u64, object_xc_008B80_Tex_WIDTH, object_xc_008B80_Tex_HEIGHT, 8)];
#define object_xc_008C00_Tex_WIDTH 32
#define object_xc_008C00_Tex_HEIGHT 16
extern u64 object_xc_008C00_Tex[TEX_LEN(u64, object_xc_008C00_Tex_WIDTH, object_xc_008C00_Tex_HEIGHT, 8)];
extern Vtx object_xc_Vtx_008E00[];
extern Vtx object_xc_Vtx_00A2C0[];
extern Vtx object_xc_Vtx_00A710[];
extern Vtx object_xc_Vtx_00A900[];
extern Vtx object_xc_Vtx_00AC00[];
extern Vtx object_xc_Vtx_00B050[];
extern Vtx object_xc_Vtx_00B240[];
extern Vtx object_xc_Vtx_00B540[];
extern Vtx object_xc_Vtx_00BE30[];
extern Vtx object_xc_Vtx_00C080[];
extern Vtx object_xc_Vtx_00C360[];
extern Vtx object_xc_Vtx_00C6B0[];
extern Vtx object_xc_Vtx_00C900[];
extern Vtx object_xc_Vtx_00CBE0[];
extern Vtx object_xc_Vtx_00CF30[];
extern Gfx object_xc_00D120_DL[190];
extern Gfx object_xc_00D710_DL[227];
extern Gfx object_xc_00DE28_DL[58];
extern Gfx object_xc_00DFF8_DL[69];
extern Gfx object_xc_00E220_DL[72];
extern Gfx object_xc_00E460_DL[58];
extern Gfx object_xc_00E630_DL[69];
extern Gfx object_xc_00E858_DL[72];
extern Gfx object_xc_00EA98_DL[41];
extern Gfx object_xc_00EBE0_DL[58];
extern Gfx object_xc_00EDB0_DL[62];
extern Gfx object_xc_00EFA0_DL[54];
extern Gfx object_xc_00F150_DL[58];
extern Gfx object_xc_00F320_DL[62];
extern Gfx object_xc_00F510_DL[54];
//#define object_xc_00F6C0_TLUT_TLUT_COUNT 48
extern u64 object_xc_00F6C0_TLUT[];
//#define object_xc_00F720_TLUT_TLUT_COUNT 56
extern u64 object_xc_00F720_TLUT[];
#define object_xc_00F790_Tex_WIDTH 8
#define object_xc_00F790_Tex_HEIGHT 8
extern u64 object_xc_00F790_Tex[TEX_LEN(u64, object_xc_00F790_Tex_WIDTH, object_xc_00F790_Tex_HEIGHT, 8)];
#define object_xc_00F7D0_Tex_WIDTH 32
#define object_xc_00F7D0_Tex_HEIGHT 32
extern u64 object_xc_00F7D0_Tex[TEX_LEN(u64, object_xc_00F7D0_Tex_WIDTH, object_xc_00F7D0_Tex_HEIGHT, 8)];
#define object_xc_00FBD0_Tex_WIDTH 16
#define object_xc_00FBD0_Tex_HEIGHT 16
extern u64 object_xc_00FBD0_Tex[TEX_LEN(u64, object_xc_00FBD0_Tex_WIDTH, object_xc_00FBD0_Tex_HEIGHT, 8)];
#define object_xc_00FCD0_Tex_WIDTH 8
#define object_xc_00FCD0_Tex_HEIGHT 8
extern u64 object_xc_00FCD0_Tex[TEX_LEN(u64, object_xc_00FCD0_Tex_WIDTH, object_xc_00FCD0_Tex_HEIGHT, 8)];
#define object_xc_00FD10_Tex_WIDTH 8
#define object_xc_00FD10_Tex_HEIGHT 8
extern u64 object_xc_00FD10_Tex[TEX_LEN(u64, object_xc_00FD10_Tex_WIDTH, object_xc_00FD10_Tex_HEIGHT, 16)];
#define object_xc_00FD90_Tex_WIDTH 8
#define object_xc_00FD90_Tex_HEIGHT 8
extern u64 object_xc_00FD90_Tex[TEX_LEN(u64, object_xc_00FD90_Tex_WIDTH, object_xc_00FD90_Tex_HEIGHT, 8)];
#define object_xc_00FDD0_Tex_WIDTH 16
#define object_xc_00FDD0_Tex_HEIGHT 32
extern u64 object_xc_00FDD0_Tex[TEX_LEN(u64, object_xc_00FDD0_Tex_WIDTH, object_xc_00FDD0_Tex_HEIGHT, 16)];
#define object_xc_0101D0_Tex_WIDTH 8
#define object_xc_0101D0_Tex_HEIGHT 16
extern u64 object_xc_0101D0_Tex[TEX_LEN(u64, object_xc_0101D0_Tex_WIDTH, object_xc_0101D0_Tex_HEIGHT, 16)];
extern Vtx gSheikHarpVtx[];
extern Vtx object_xc_Vtx_0108D0[];
extern Gfx gSheikHarpDL[154];
extern Gfx gSheikDL_011620[97];
#define object_xc_011930_Tex_WIDTH 64
#define object_xc_011930_Tex_HEIGHT 64
extern u64 object_xc_011930_Tex[TEX_LEN(u64, object_xc_011930_Tex_WIDTH, object_xc_011930_Tex_HEIGHT, 8)];
extern Vtx object_xc_Vtx_012930[];
extern Gfx gSheikDL_012970[16];
extern StandardLimb object_xc_0129F0_Limb;
extern StandardLimb object_xc_0129FC_Limb;
extern StandardLimb object_xc_012A08_Limb;
extern StandardLimb object_xc_012A14_Limb;
extern StandardLimb object_xc_012A20_Limb;
extern StandardLimb object_xc_012A2C_Limb;
extern StandardLimb object_xc_012A38_Limb;
extern StandardLimb object_xc_012A44_Limb;
extern StandardLimb object_xc_012A50_Limb;
extern StandardLimb object_xc_012A5C_Limb;
extern StandardLimb object_xc_012A68_Limb;
extern StandardLimb object_xc_012A74_Limb;
extern StandardLimb object_xc_012A80_Limb;
extern StandardLimb object_xc_012A8C_Limb;
extern StandardLimb object_xc_012A98_Limb;
extern StandardLimb object_xc_012AA4_Limb;
extern void* gSheikLimbs[];
typedef enum gSheikSkelLimb {
    /*  0 */ LIMB_OBJECT_XC_012AF0_NONE,
    /*  1 */ LIMB_OBJECT_XC_0129F0,
    /*  2 */ LIMB_OBJECT_XC_0129FC,
    /*  3 */ LIMB_OBJECT_XC_012A08,
    /*  4 */ LIMB_OBJECT_XC_012A14,
    /*  5 */ LIMB_OBJECT_XC_012A20,
    /*  6 */ LIMB_OBJECT_XC_012A2C,
    /*  7 */ LIMB_OBJECT_XC_012A38,
    /*  8 */ LIMB_OBJECT_XC_012A44,
    /*  9 */ LIMB_OBJECT_XC_012A50,
    /* 10 */ LIMB_OBJECT_XC_012A5C,
    /* 11 */ LIMB_OBJECT_XC_012A68,
    /* 12 */ LIMB_OBJECT_XC_012A74,
    /* 13 */ LIMB_OBJECT_XC_012A80,
    /* 14 */ LIMB_OBJECT_XC_012A8C,
    /* 15 */ LIMB_OBJECT_XC_012A98,
    /* 16 */ LIMB_OBJECT_XC_012AA4,
    /* 17 */ LIMB_OBJECT_XC_012AF0_MAX
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
extern s16 gSheikAnim_01A048_06019F90_FrameData[];
extern JointIndex gSheikAnim_01A048_06019FE0_JointIndices[];
extern AnimationHeader gSheikAnim_01A048;
extern s16 gSheikPullingOutHarpFrameData[];
extern JointIndex gSheikPullingOutHarpJointIndices[];
extern AnimationHeader gSheikPullingOutHarpAnim;
extern s16 gSheikFallingFromSkyFrameData[];
extern JointIndex gSheikFallingFromSkyJointIndices[];
extern AnimationHeader gSheikFallingFromSkyAnim;

#endif
