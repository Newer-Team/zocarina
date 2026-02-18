#ifndef OBJECT_IK_H
#define OBJECT_IK_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 object_ik_Anim_00035C_06000000_FrameData[];
extern JointIndex object_ik_Anim_00035C_06000350_JointIndices[];
extern AnimationHeader object_ik_Anim_00035C;
extern StandardLimb object_ik_000370_Limb;
extern void* object_ik_Skel_000380_0600037C_Limbs[];
typedef enum object_ik_Skel_000380Limb {
    /*  0 */ LIMB_OBJECT_IK_000380_NONE,
    /*  1 */ LIMB_OBJECT_IK_000370,
    /*  2 */ LIMB_OBJECT_IK_000380_MAX
} object_ik_Skel_000380Limb;
extern FlexSkeletonHeader object_ik_Skel_000380;
extern s16 object_ik_Anim_000634_06000390_FrameData[];
extern JointIndex object_ik_Anim_000634_06000628_JointIndices[];
extern AnimationHeader object_ik_Anim_000634;
extern StandardLimb object_ik_000650_Limb;
extern void* object_ik_Skel_000660_0600065C_Limbs[];
typedef enum object_ik_Skel_000660Limb {
    /*  0 */ LIMB_OBJECT_IK_000660_NONE,
    /*  1 */ LIMB_OBJECT_IK_000650,
    /*  2 */ LIMB_OBJECT_IK_000660_MAX
} object_ik_Skel_000660Limb;
extern FlexSkeletonHeader object_ik_Skel_000660;
extern s16 object_ik_Anim_0008DC_06000670_FrameData[];
extern JointIndex object_ik_Anim_0008DC_060008D0_JointIndices[];
extern AnimationHeader object_ik_Anim_0008DC;
extern StandardLimb object_ik_0008F0_Limb;
extern void* object_ik_Skel_000900_060008FC_Limbs[];
typedef enum object_ik_Skel_000900Limb {
    /*  0 */ LIMB_OBJECT_IK_000900_NONE,
    /*  1 */ LIMB_OBJECT_IK_0008F0,
    /*  2 */ LIMB_OBJECT_IK_000900_MAX
} object_ik_Skel_000900Limb;
extern FlexSkeletonHeader object_ik_Skel_000900;
extern s16 object_ik_Anim_000C6C_06000910_FrameData[];
extern JointIndex object_ik_Anim_000C6C_06000C60_JointIndices[];
extern AnimationHeader object_ik_Anim_000C6C;
extern StandardLimb object_ik_000C80_Limb;
extern void* object_ik_Skel_000C90_06000C8C_Limbs[];
typedef enum object_ik_Skel_000C90Limb {
    /*  0 */ LIMB_OBJECT_IK_000C90_NONE,
    /*  1 */ LIMB_OBJECT_IK_000C80,
    /*  2 */ LIMB_OBJECT_IK_000C90_MAX
} object_ik_Skel_000C90Limb;
extern FlexSkeletonHeader object_ik_Skel_000C90;
extern s16 object_ik_Anim_000F0C_06000CA0_FrameData[];
extern JointIndex object_ik_Anim_000F0C_06000F00_JointIndices[];
extern AnimationHeader object_ik_Anim_000F0C;
extern StandardLimb object_ik_000F20_Limb;
extern void* object_ik_Skel_000F30_06000F2C_Limbs[];
typedef enum object_ik_Skel_000F30Limb {
    /*  0 */ LIMB_OBJECT_IK_000F30_NONE,
    /*  1 */ LIMB_OBJECT_IK_000F20,
    /*  2 */ LIMB_OBJECT_IK_000F30_MAX
} object_ik_Skel_000F30Limb;
extern FlexSkeletonHeader object_ik_Skel_000F30;
extern s16 gIronKnuckleVerticalAttackFrameData[];
extern JointIndex gIronKnuckleVerticalAttackJointIndices[];
extern AnimationHeader gIronKnuckleVerticalAttackAnim;
extern s16 gIronKnuckleRecoverFromVerticalAttackFrameData[];
extern JointIndex gIronKnuckleRecoverFromVerticalAttackJointIndices[];
extern AnimationHeader gIronKnuckleRecoverFromVerticalAttackAnim;
extern s16 gIronKnuckleAxeStuckFrameData[];
extern JointIndex gIronKnuckleAxeStuckJointIndices[];
extern AnimationHeader gIronKnuckleAxeStuckAnim;
extern s16 gIronKnuckleHorizontalAttackFrameData[];
extern JointIndex gIronKnuckleHorizontalAttackJointIndices[];
extern AnimationHeader gIronKnuckleHorizontalAttackAnim;
extern s16 gIronKnuckleRecoverFromHorizontalAttackFrameData[];
extern JointIndex gIronKnuckleRecoverFromHorizontalAttackJointIndices[];
extern AnimationHeader gIronKnuckleRecoverFromHorizontalAttackAnim;
extern s16 gIronKnuckleBackHitFrameData[];
extern JointIndex gIronKnuckleBackHitJointIndices[];
extern AnimationHeader gIronKnuckleBackHitAnim;
extern s16 gIronKnuckleBlockFrameData[];
extern JointIndex gIronKnuckleBlockJointIndices[];
extern AnimationHeader gIronKnuckleBlockAnim;
extern s16 gIronKnuckleDeathFrameData[];
extern JointIndex gIronKnuckleDeathJointIndices[];
extern AnimationHeader gIronKnuckleDeathAnim;
extern s16 gIronKnuckleFrontHitFrameData[];
extern JointIndex gIronKnuckleFrontHitJointIndices[];
extern AnimationHeader gIronKnuckleFrontHitAnim;
extern s16 gIronKnuckleRunFrameData[];
extern JointIndex gIronKnuckleRunJointIndices[];
extern AnimationHeader gIronKnuckleRunAnim;
extern s16 gIronKnuckleNabooruSummonAxeFrameData[];
extern JointIndex gIronKnuckleNabooruSummonAxeJointIndices[];
extern AnimationHeader gIronKnuckleNabooruSummonAxeAnim;
extern s16 gIronKnuckleStandUpFrameData[];
extern JointIndex gIronKnuckleStandUpJointIndices[];
extern AnimationHeader gIronKnuckleStandUpAnim;
extern s16 object_ik_Anim_00DD50_0600CD80_FrameData[];
extern JointIndex object_ik_Anim_00DD50_0600DC9C_JointIndices[];
extern AnimationHeader object_ik_Anim_00DD50;
extern s16 gIronKnuckleUnused1FrameData[];
extern JointIndex gIronKnuckleUnused1JointIndices[];
extern AnimationHeader gIronKnuckleUnused1Anim;
extern s16 gIronKnuckleWalkFrameData[];
extern JointIndex gIronKnuckleWalkJointIndices[];
extern AnimationHeader gIronKnuckleWalkAnim;
extern s16 gIronKnuckleUnused2FrameData[];
extern JointIndex gIronKnuckleUnused2JointIndices[];
extern AnimationHeader gIronKnuckleUnused2Anim;
//#define object_ik_Tlut_00F630_TLUT_COUNT 184
extern u64 object_ik_Tlut_00F630[];
#define gIronKnuckleMetalTex_WIDTH 32
#define gIronKnuckleMetalTex_HEIGHT 64
extern u64 gIronKnuckleMetalTex[TEX_LEN(u64, gIronKnuckleMetalTex_WIDTH, gIronKnuckleMetalTex_HEIGHT, 4)];
#define gIronKnuckleBigRivetTex_WIDTH 32
#define gIronKnuckleBigRivetTex_HEIGHT 32
extern u64 gIronKnuckleBigRivetTex[TEX_LEN(u64, gIronKnuckleBigRivetTex_WIDTH, gIronKnuckleBigRivetTex_HEIGHT, 8)];
#define gIronKnuckleBlockPatternTex_WIDTH 16
#define gIronKnuckleBlockPatternTex_HEIGHT 16
extern u64 gIronKnuckleBlockPatternTex[TEX_LEN(u64, gIronKnuckleBlockPatternTex_WIDTH, gIronKnuckleBlockPatternTex_HEIGHT, 16)];
#define gIronKnuckleChainMailTex_WIDTH 16
#define gIronKnuckleChainMailTex_HEIGHT 16
extern u64 gIronKnuckleChainMailTex[TEX_LEN(u64, gIronKnuckleChainMailTex_WIDTH, gIronKnuckleChainMailTex_HEIGHT, 16)];
#define object_ik_Tex_0103A0_WIDTH 32
#define object_ik_Tex_0103A0_HEIGHT 32
extern u64 object_ik_Tex_0103A0[TEX_LEN(u64, object_ik_Tex_0103A0_WIDTH, object_ik_Tex_0103A0_HEIGHT, 16)];
#define gIronKnuckleGerudoEyeTex_WIDTH 32
#define gIronKnuckleGerudoEyeTex_HEIGHT 32
extern u64 gIronKnuckleGerudoEyeTex[TEX_LEN(u64, gIronKnuckleGerudoEyeTex_WIDTH, gIronKnuckleGerudoEyeTex_HEIGHT, 16)];
#define gIronKnuckleNabooruLipTex_WIDTH 8
#define gIronKnuckleNabooruLipTex_HEIGHT 8
extern u64 gIronKnuckleNabooruLipTex[TEX_LEN(u64, gIronKnuckleNabooruLipTex_WIDTH, gIronKnuckleNabooruLipTex_HEIGHT, 16)];
#define gIronKnuckleJewelTex_WIDTH 16
#define gIronKnuckleJewelTex_HEIGHT 16
extern u64 gIronKnuckleJewelTex[TEX_LEN(u64, gIronKnuckleJewelTex_WIDTH, gIronKnuckleJewelTex_HEIGHT, 8)];
#define gIronKnuckleNabooruForeheadJewelTex_WIDTH 16
#define gIronKnuckleNabooruForeheadJewelTex_HEIGHT 16
extern u64 gIronKnuckleNabooruForeheadJewelTex[TEX_LEN(u64, gIronKnuckleNabooruForeheadJewelTex_WIDTH, gIronKnuckleNabooruForeheadJewelTex_HEIGHT, 8)];
#define object_ik_Tex_011620_WIDTH 8
#define object_ik_Tex_011620_HEIGHT 8
extern u64 object_ik_Tex_011620[TEX_LEN(u64, object_ik_Tex_011620_WIDTH, object_ik_Tex_011620_HEIGHT, 8)];
#define gIronKnuckleNabooruHair1Tex_WIDTH 16
#define gIronKnuckleNabooruHair1Tex_HEIGHT 16
extern u64 gIronKnuckleNabooruHair1Tex[TEX_LEN(u64, gIronKnuckleNabooruHair1Tex_WIDTH, gIronKnuckleNabooruHair1Tex_HEIGHT, 8)];
#define object_ik_Tex_011760_WIDTH 8
#define object_ik_Tex_011760_HEIGHT 16
extern u64 object_ik_Tex_011760[TEX_LEN(u64, object_ik_Tex_011760_WIDTH, object_ik_Tex_011760_HEIGHT, 8)];
#define object_ik_Tex_0117E0_WIDTH 8
#define object_ik_Tex_0117E0_HEIGHT 16
extern u64 object_ik_Tex_0117E0[TEX_LEN(u64, object_ik_Tex_0117E0_WIDTH, object_ik_Tex_0117E0_HEIGHT, 8)];
#define object_ik_Tex_011860_WIDTH 16
#define object_ik_Tex_011860_HEIGHT 16
extern u64 object_ik_Tex_011860[TEX_LEN(u64, object_ik_Tex_011860_WIDTH, object_ik_Tex_011860_HEIGHT, 8)];
#define object_ik_Tex_011960_WIDTH 16
#define object_ik_Tex_011960_HEIGHT 16
extern u64 object_ik_Tex_011960[TEX_LEN(u64, object_ik_Tex_011960_WIDTH, object_ik_Tex_011960_HEIGHT, 8)];
extern Vtx object_ik_Vtx_011A60[];
extern Vtx object_ik_Vtx_011D20[];
extern Vtx gIronKnuckleNabooruHelmetVtx[];
extern Vtx gIronKnuckleAxeVtx[];
extern Vtx gIronKnuckleShockedNabooruHeadVtx[];
extern Vtx object_ik_Vtx_013A70[];
extern Vtx object_ik_Vtx_013C40[];
extern Vtx object_ik_Vtx_013D20[];
extern Vtx object_ik_Vtx_013F10[];
extern Vtx object_ik_Vtx_013FF0[];
extern Vtx object_ik_Vtx_014140[];
extern Vtx gIronKnuckleSplitHelmetLeftVtx[];
extern Vtx gIronKnuckleSplitHelmetRightVtx[];
extern Vtx gIronKnuckleArmorRivetAndSymbolVtx[];
extern Vtx object_ik_Vtx_0149A0[];
extern Vtx object_ik_Vtx_014A40[];
extern Vtx object_ik_Vtx_014D30[];
extern Vtx object_ik_Vtx_014E10[];
extern Vtx object_ik_Vtx_014EF0[];
extern Vtx object_ik_Vtx_015070[];
extern Gfx object_ik_DL_0151F0[50];
extern Gfx object_ik_DL_015380[44];
extern Gfx gIronKnuckleNabooruHelmetDL[108];
extern Gfx gIronKnuckleAxeDL[88];
extern Gfx gIronKnuckleShockedNabooruHeadDL[195];
extern Gfx object_ik_DL_016118[44];
extern Gfx object_ik_DL_016278[25];
extern Gfx object_ik_DL_016340[44];
extern Gfx object_ik_DL_0164A0[25];
extern Gfx object_ik_DL_016568[30];
extern Gfx object_ik_DL_016658[30];
extern Gfx gIronKnuckleSplitHelmetLeftDL[84];
extern Gfx gIronKnuckleSplitHelmetRightDL[63];
extern Gfx gIronKnuckleArmorRivetAndSymbolDL[31];
extern Gfx object_ik_DL_016CD8[22];
extern Gfx object_ik_DL_016D88[44];
extern Gfx object_ik_DL_016EE8[20];
extern Gfx object_ik_DL_016F88[20];
extern Gfx object_ik_DL_017028[41];
extern Gfx object_ik_DL_017170[35];
//#define object_ik_Tlut_017288_TLUT_COUNT 120
extern u64 object_ik_Tlut_017288[];
#define object_ik_Tex_017378_WIDTH 16
#define object_ik_Tex_017378_HEIGHT 16
extern u64 object_ik_Tex_017378[TEX_LEN(u64, object_ik_Tex_017378_WIDTH, object_ik_Tex_017378_HEIGHT, 8)];
#define object_ik_Tex_017478_WIDTH 8
#define object_ik_Tex_017478_HEIGHT 8
extern u64 object_ik_Tex_017478[TEX_LEN(u64, object_ik_Tex_017478_WIDTH, object_ik_Tex_017478_HEIGHT, 8)];
#define gIronKnuckleHair2Tex_WIDTH 16
#define gIronKnuckleHair2Tex_HEIGHT 16
extern u64 gIronKnuckleHair2Tex[TEX_LEN(u64, gIronKnuckleHair2Tex_WIDTH, gIronKnuckleHair2Tex_HEIGHT, 8)];
#define object_ik_Tex_0175B8_WIDTH 8
#define object_ik_Tex_0175B8_HEIGHT 16
extern u64 object_ik_Tex_0175B8[TEX_LEN(u64, object_ik_Tex_0175B8_WIDTH, object_ik_Tex_0175B8_HEIGHT, 8)];
#define object_ik_Tex_017638_WIDTH 8
#define object_ik_Tex_017638_HEIGHT 16
extern u64 object_ik_Tex_017638[TEX_LEN(u64, object_ik_Tex_017638_WIDTH, object_ik_Tex_017638_HEIGHT, 8)];
#define object_ik_Tex_0176B8_WIDTH 16
#define object_ik_Tex_0176B8_HEIGHT 16
extern u64 object_ik_Tex_0176B8[TEX_LEN(u64, object_ik_Tex_0176B8_WIDTH, object_ik_Tex_0176B8_HEIGHT, 8)];
extern Vtx gIronKnuckleHelmetVtx[];
extern Vtx gIronKnuckleGerudoHeadVtx[];
extern Vtx gIronKnuckleHelmetMarkingVtx[];
extern Gfx gIronKnuckleHelmetDL[81];
extern Gfx gIronKnuckleGerudoHeadDL[417];
extern Gfx gIronKnuckleHelmetMarkingDL[38];
extern Vtx object_ik_Vtx_019F38[];
extern Vtx object_ik_Vtx_01A0F8[];
extern Vtx object_ik_Vtx_01A1E8[];
extern Vtx object_ik_Vtx_01A3F8[];
extern Vtx object_ik_Vtx_01A5B8[];
extern Vtx object_ik_Vtx_01A6A8[];
extern Vtx object_ik_Vtx_01A8C8[];
extern Vtx object_ik_Vtx_01ACA8[];
extern Vtx object_ik_Vtx_01AEB8[];
extern Vtx object_ik_Vtx_01B048[];
extern Vtx object_ik_Vtx_01B258[];
extern Vtx gIronKnuckleTorsoVtx[];
extern Vtx object_ik_Vtx_01B8D8[];
extern Gfx gIronKnuckleTorsoDL[132];
extern Gfx object_ik_DL_01BE98[83];
extern Gfx object_ik_DL_01C130[49];
extern Gfx object_ik_DL_01C2B8[83];
extern Gfx object_ik_DL_01C550[49];
extern Gfx object_ik_DL_01C6D8[28];
extern Gfx object_ik_DL_01C7B8[116];
extern Gfx object_ik_DL_01CB58[41];
extern Gfx object_ik_DL_01CCA0[72];
extern Gfx object_ik_DL_01CEE0[122];
extern Gfx object_ik_DL_01D2B0[41];
extern Gfx object_ik_DL_01D3F8[72];
extern Gfx object_ik_DL_01D638[110];
//#define object_ik_Tlut_01D9A8_TLUT_COUNT 256
extern u64 object_ik_Tlut_01D9A8[];
#define object_ik_Tex_01DBA8_WIDTH 16
#define object_ik_Tex_01DBA8_HEIGHT 16
extern u64 object_ik_Tex_01DBA8[TEX_LEN(u64, object_ik_Tex_01DBA8_WIDTH, object_ik_Tex_01DBA8_HEIGHT, 16)];
#define gIronKnuckleHair3Tex_WIDTH 16
#define gIronKnuckleHair3Tex_HEIGHT 16
extern u64 gIronKnuckleHair3Tex[TEX_LEN(u64, gIronKnuckleHair3Tex_WIDTH, gIronKnuckleHair3Tex_HEIGHT, 8)];
#define gIronKnuckleNabooruChestJewelTex_WIDTH 16
#define gIronKnuckleNabooruChestJewelTex_HEIGHT 16
extern u64 gIronKnuckleNabooruChestJewelTex[TEX_LEN(u64, gIronKnuckleNabooruChestJewelTex_WIDTH, gIronKnuckleNabooruChestJewelTex_HEIGHT, 8)];
extern StandardLimb object_ik_01DFA8_Limb;
extern StandardLimb object_ik_01DFB4_Limb;
extern StandardLimb object_ik_01DFC0_Limb;
extern StandardLimb object_ik_01DFCC_Limb;
extern StandardLimb object_ik_01DFD8_Limb;
extern StandardLimb object_ik_01DFE4_Limb;
extern StandardLimb object_ik_01DFF0_Limb;
extern StandardLimb object_ik_01DFFC_Limb;
extern StandardLimb object_ik_01E008_Limb;
extern StandardLimb object_ik_01E014_Limb;
extern StandardLimb object_ik_01E020_Limb;
extern StandardLimb object_ik_01E02C_Limb;
extern StandardLimb object_ik_01E038_Limb;
extern StandardLimb object_ik_01E044_Limb;
extern StandardLimb object_ik_01E050_Limb;
extern StandardLimb object_ik_01E05C_Limb;
extern StandardLimb object_ik_01E068_Limb;
extern StandardLimb object_ik_01E074_Limb;
extern StandardLimb object_ik_01E080_Limb;
extern StandardLimb object_ik_01E08C_Limb;
extern StandardLimb object_ik_01E098_Limb;
extern StandardLimb object_ik_01E0A4_Limb;
extern StandardLimb object_ik_01E0B0_Limb;
extern StandardLimb object_ik_01E0BC_Limb;
extern StandardLimb object_ik_01E0C8_Limb;
extern StandardLimb object_ik_01E0D4_Limb;
extern StandardLimb object_ik_01E0E0_Limb;
extern StandardLimb object_ik_01E0EC_Limb;
extern StandardLimb object_ik_01E0F8_Limb;
extern void* gIronKnuckleLimbs[];
typedef enum gIronKnuckleSkelLimb {
    /*  0 */ LIMB_OBJECT_IK_01E178_NONE,
    /*  1 */ LIMB_OBJECT_IK_01DFA8,
    /*  2 */ LIMB_OBJECT_IK_01DFB4,
    /*  3 */ LIMB_OBJECT_IK_01DFC0,
    /*  4 */ LIMB_OBJECT_IK_01DFCC,
    /*  5 */ LIMB_OBJECT_IK_01DFD8,
    /*  6 */ LIMB_OBJECT_IK_01DFE4,
    /*  7 */ LIMB_OBJECT_IK_01DFF0,
    /*  8 */ LIMB_OBJECT_IK_01DFFC,
    /*  9 */ LIMB_OBJECT_IK_01E008,
    /* 10 */ LIMB_OBJECT_IK_01E014,
    /* 11 */ LIMB_OBJECT_IK_01E020,
    /* 12 */ LIMB_OBJECT_IK_01E02C,
    /* 13 */ LIMB_OBJECT_IK_01E038,
    /* 14 */ LIMB_OBJECT_IK_01E044,
    /* 15 */ LIMB_OBJECT_IK_01E050,
    /* 16 */ LIMB_OBJECT_IK_01E05C,
    /* 17 */ LIMB_OBJECT_IK_01E068,
    /* 18 */ LIMB_OBJECT_IK_01E074,
    /* 19 */ LIMB_OBJECT_IK_01E080,
    /* 20 */ LIMB_OBJECT_IK_01E08C,
    /* 21 */ LIMB_OBJECT_IK_01E098,
    /* 22 */ LIMB_OBJECT_IK_01E0A4,
    /* 23 */ LIMB_OBJECT_IK_01E0B0,
    /* 24 */ LIMB_OBJECT_IK_01E0BC,
    /* 25 */ LIMB_OBJECT_IK_01E0C8,
    /* 26 */ LIMB_OBJECT_IK_01E0D4,
    /* 27 */ LIMB_OBJECT_IK_01E0E0,
    /* 28 */ LIMB_OBJECT_IK_01E0EC,
    /* 29 */ LIMB_OBJECT_IK_01E0F8,
    /* 30 */ LIMB_OBJECT_IK_01E178_MAX
} gIronKnuckleSkelLimb;
extern FlexSkeletonHeader gIronKnuckleSkel;
extern s16 gIronKnuckleUnused3FrameData[];
extern JointIndex gIronKnuckleUnused3JointIndices[];
extern AnimationHeader gIronKnuckleUnused3Anim;
extern s16 object_ik_Anim_01EB14_0601E830_FrameData[];
extern JointIndex object_ik_Anim_01EB14_0601EB08_JointIndices[];
extern AnimationHeader object_ik_Anim_01EB14;
extern StandardLimb object_ik_01EB30_Limb;
extern void* object_ik_Skel_01EB40_0601EB3C_Limbs[];
typedef enum object_ik_Skel_01EB40Limb {
    /*  0 */ LIMB_OBJECT_IK_01EB40_NONE,
    /*  1 */ LIMB_OBJECT_IK_01EB30,
    /*  2 */ LIMB_OBJECT_IK_01EB40_MAX
} object_ik_Skel_01EB40Limb;
extern FlexSkeletonHeader object_ik_Skel_01EB40;
extern s16 object_ik_Anim_01EE34_0601EB50_FrameData[];
extern JointIndex object_ik_Anim_01EE34_0601EE28_JointIndices[];
extern AnimationHeader object_ik_Anim_01EE34;
extern StandardLimb object_ik_01EE50_Limb;
extern void* object_ik_Skel_01EE60_0601EE5C_Limbs[];
typedef enum object_ik_Skel_01EE60Limb {
    /*  0 */ LIMB_OBJECT_IK_01EE60_NONE,
    /*  1 */ LIMB_OBJECT_IK_01EE50,
    /*  2 */ LIMB_OBJECT_IK_01EE60_MAX
} object_ik_Skel_01EE60Limb;
extern FlexSkeletonHeader object_ik_Skel_01EE60;
extern s16 gIronKnuckleNabooruDeathFrameData[];
extern JointIndex gIronKnuckleNabooruDeathJointIndices[];
extern AnimationHeader gIronKnuckleNabooruDeathAnim;
extern StandardLimb object_ik_0203F0_Limb;
extern StandardLimb object_ik_0203FC_Limb;
extern StandardLimb object_ik_020408_Limb;
extern StandardLimb object_ik_020414_Limb;
extern StandardLimb object_ik_020420_Limb;
extern StandardLimb object_ik_02042C_Limb;
extern StandardLimb object_ik_020438_Limb;
extern StandardLimb object_ik_020444_Limb;
extern StandardLimb object_ik_020450_Limb;
extern StandardLimb object_ik_02045C_Limb;
extern StandardLimb object_ik_020468_Limb;
extern StandardLimb object_ik_020474_Limb;
extern StandardLimb object_ik_020480_Limb;
extern StandardLimb object_ik_02048C_Limb;
extern StandardLimb object_ik_020498_Limb;
extern StandardLimb object_ik_0204A4_Limb;
extern StandardLimb object_ik_0204B0_Limb;
extern StandardLimb object_ik_0204BC_Limb;
extern StandardLimb object_ik_0204C8_Limb;
extern StandardLimb object_ik_0204D4_Limb;
extern StandardLimb object_ik_0204E0_Limb;
extern StandardLimb object_ik_0204EC_Limb;
extern StandardLimb object_ik_0204F8_Limb;
extern StandardLimb object_ik_020504_Limb;
extern StandardLimb object_ik_020510_Limb;
extern StandardLimb object_ik_02051C_Limb;
extern StandardLimb object_ik_020528_Limb;
extern StandardLimb object_ik_020534_Limb;
extern StandardLimb object_ik_020540_Limb;
extern void* gIronKnuckleDefeatLimbs[];
typedef enum gIronKnuckleDefeatSkelLimb {
    /*  0 */ LIMB_OBJECT_IK_0205C0_NONE,
    /*  1 */ LIMB_OBJECT_IK_0203F0,
    /*  2 */ LIMB_OBJECT_IK_0203FC,
    /*  3 */ LIMB_OBJECT_IK_020408,
    /*  4 */ LIMB_OBJECT_IK_020414,
    /*  5 */ LIMB_OBJECT_IK_020420,
    /*  6 */ LIMB_OBJECT_IK_02042C,
    /*  7 */ LIMB_OBJECT_IK_020438,
    /*  8 */ LIMB_OBJECT_IK_020444,
    /*  9 */ LIMB_OBJECT_IK_020450,
    /* 10 */ LIMB_OBJECT_IK_02045C,
    /* 11 */ LIMB_OBJECT_IK_020468,
    /* 12 */ LIMB_OBJECT_IK_020474,
    /* 13 */ LIMB_OBJECT_IK_020480,
    /* 14 */ LIMB_OBJECT_IK_02048C,
    /* 15 */ LIMB_OBJECT_IK_020498,
    /* 16 */ LIMB_OBJECT_IK_0204A4,
    /* 17 */ LIMB_OBJECT_IK_0204B0,
    /* 18 */ LIMB_OBJECT_IK_0204BC,
    /* 19 */ LIMB_OBJECT_IK_0204C8,
    /* 20 */ LIMB_OBJECT_IK_0204D4,
    /* 21 */ LIMB_OBJECT_IK_0204E0,
    /* 22 */ LIMB_OBJECT_IK_0204EC,
    /* 23 */ LIMB_OBJECT_IK_0204F8,
    /* 24 */ LIMB_OBJECT_IK_020504,
    /* 25 */ LIMB_OBJECT_IK_020510,
    /* 26 */ LIMB_OBJECT_IK_02051C,
    /* 27 */ LIMB_OBJECT_IK_020528,
    /* 28 */ LIMB_OBJECT_IK_020534,
    /* 29 */ LIMB_OBJECT_IK_020540,
    /* 30 */ LIMB_OBJECT_IK_0205C0_MAX
} gIronKnuckleDefeatSkelLimb;
extern FlexSkeletonHeader gIronKnuckleDefeatSkel;

#endif
