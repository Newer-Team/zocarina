#ifndef OBJECT_SD_H
#define OBJECT_SD_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

//#define gEnHeishiKingGuardTLUT_TLUT_COUNT 256
extern u64 gEnHeishiKingGuardTLUT[];
#define gEnHeishiKingGuardTex_200_WIDTH 8
#define gEnHeishiKingGuardTex_200_HEIGHT 8
extern u64 gEnHeishiKingGuardTex_200[TEX_LEN(u64, gEnHeishiKingGuardTex_200_WIDTH, gEnHeishiKingGuardTex_200_HEIGHT, 8)];
#define gEnHeishiKingGuardTex_240_WIDTH 8
#define gEnHeishiKingGuardTex_240_HEIGHT 8
extern u64 gEnHeishiKingGuardTex_240[TEX_LEN(u64, gEnHeishiKingGuardTex_240_WIDTH, gEnHeishiKingGuardTex_240_HEIGHT, 8)];
#define gEnHeishiKingGuardArmorTex_WIDTH 8
#define gEnHeishiKingGuardArmorTex_HEIGHT 8
extern u64 gEnHeishiKingGuardArmorTex[TEX_LEN(u64, gEnHeishiKingGuardArmorTex_WIDTH, gEnHeishiKingGuardArmorTex_HEIGHT, 8)];
#define gEnHeishiKingGuardShoulderGuardTex_WIDTH 8
#define gEnHeishiKingGuardShoulderGuardTex_HEIGHT 16
extern u64 gEnHeishiKingGuardShoulderGuardTex[TEX_LEN(u64, gEnHeishiKingGuardShoulderGuardTex_WIDTH, gEnHeishiKingGuardShoulderGuardTex_HEIGHT, 8)];
#define gEnHeishiKingGuardChestArmorTex_WIDTH 32
#define gEnHeishiKingGuardChestArmorTex_HEIGHT 64
extern u64 gEnHeishiKingGuardChestArmorTex[TEX_LEN(u64, gEnHeishiKingGuardChestArmorTex_WIDTH, gEnHeishiKingGuardChestArmorTex_HEIGHT, 8)];
#define gEnHeishiKingGuardTex_B40_WIDTH 16
#define gEnHeishiKingGuardTex_B40_HEIGHT 16
extern u64 gEnHeishiKingGuardTex_B40[TEX_LEN(u64, gEnHeishiKingGuardTex_B40_WIDTH, gEnHeishiKingGuardTex_B40_HEIGHT, 8)];
#define gEnHeishiKingGuardHandTex_WIDTH 8
#define gEnHeishiKingGuardHandTex_HEIGHT 8
extern u64 gEnHeishiKingGuardHandTex[TEX_LEN(u64, gEnHeishiKingGuardHandTex_WIDTH, gEnHeishiKingGuardHandTex_HEIGHT, 8)];
#define gEnHeishiKingGuardPantsTex_WIDTH 16
#define gEnHeishiKingGuardPantsTex_HEIGHT 16
extern u64 gEnHeishiKingGuardPantsTex[TEX_LEN(u64, gEnHeishiKingGuardPantsTex_WIDTH, gEnHeishiKingGuardPantsTex_HEIGHT, 8)];
extern Vtx gHeishiKingGuardVtx[];
extern Gfx gHeishiKingGuardDL[1140];
extern s16 gEnHeishiSlamSpearFrameData[];
extern JointIndex gEnHeishiSlamSpearJointIndices[];
extern AnimationHeader gEnHeishiSlamSpearAnim;
extern s16 gEnHeishiWalkFrameData[];
extern JointIndex gEnHeishiWalkJointIndices[];
extern AnimationHeader gEnHeishiWalkAnim;
extern s16 gEnHeishiIdleFrameData[];
extern JointIndex gEnHeishiIdleJointIndices[];
extern AnimationHeader gEnHeishiIdleAnim;
//#define gHeishiTLUT_TLUT_COUNT 256
extern u64 gHeishiTLUT[];
#define gEnHeishiMouthTex_WIDTH 16
#define gEnHeishiMouthTex_HEIGHT 16
extern u64 gEnHeishiMouthTex[TEX_LEN(u64, gEnHeishiMouthTex_WIDTH, gEnHeishiMouthTex_HEIGHT, 8)];
#define gEnHeishiGradient1Tex_WIDTH 8
#define gEnHeishiGradient1Tex_HEIGHT 8
extern u64 gEnHeishiGradient1Tex[TEX_LEN(u64, gEnHeishiGradient1Tex_WIDTH, gEnHeishiGradient1Tex_HEIGHT, 8)];
#define gEnHeishiGradient2Tex_WIDTH 8
#define gEnHeishiGradient2Tex_HEIGHT 8
extern u64 gEnHeishiGradient2Tex[TEX_LEN(u64, gEnHeishiGradient2Tex_WIDTH, gEnHeishiGradient2Tex_HEIGHT, 8)];
#define gEnHeishiArmorTex_WIDTH 8
#define gEnHeishiArmorTex_HEIGHT 8
extern u64 gEnHeishiArmorTex[TEX_LEN(u64, gEnHeishiArmorTex_WIDTH, gEnHeishiArmorTex_HEIGHT, 8)];
#define gEnHeishiUniform1Tex_WIDTH 16
#define gEnHeishiUniform1Tex_HEIGHT 16
extern u64 gEnHeishiUniform1Tex[TEX_LEN(u64, gEnHeishiUniform1Tex_WIDTH, gEnHeishiUniform1Tex_HEIGHT, 4)];
#define gEnHeishiUniform2Tex_WIDTH 16
#define gEnHeishiUniform2Tex_HEIGHT 8
extern u64 gEnHeishiUniform2Tex[TEX_LEN(u64, gEnHeishiUniform2Tex_WIDTH, gEnHeishiUniform2Tex_HEIGHT, 4)];
#define gEnHeishiUniformGreyTriforceTex_WIDTH 32
#define gEnHeishiUniformGreyTriforceTex_HEIGHT 32
extern u64 gEnHeishiUniformGreyTriforceTex[TEX_LEN(u64, gEnHeishiUniformGreyTriforceTex_WIDTH, gEnHeishiUniformGreyTriforceTex_HEIGHT, 4)];
#define gEnHeishiUniformGoldTriforceTex_WIDTH 32
#define gEnHeishiUniformGoldTriforceTex_HEIGHT 32
extern u64 gEnHeishiUniformGoldTriforceTex[TEX_LEN(u64, gEnHeishiUniformGoldTriforceTex_WIDTH, gEnHeishiUniformGoldTriforceTex_HEIGHT, 8)];
#define gEnHeishiLegTex_WIDTH 16
#define gEnHeishiLegTex_HEIGHT 16
extern u64 gEnHeishiLegTex[TEX_LEN(u64, gEnHeishiLegTex_WIDTH, gEnHeishiLegTex_HEIGHT, 8)];
#define gEnHeishiTex_0067C0_WIDTH 32
#define gEnHeishiTex_0067C0_HEIGHT 32
extern u64 gEnHeishiTex_0067C0[TEX_LEN(u64, gEnHeishiTex_0067C0_WIDTH, gEnHeishiTex_0067C0_HEIGHT, 8)];
#define gEnHeishiHandTex_WIDTH 16
#define gEnHeishiHandTex_HEIGHT 16
extern u64 gEnHeishiHandTex[TEX_LEN(u64, gEnHeishiHandTex_WIDTH, gEnHeishiHandTex_HEIGHT, 8)];
extern Vtx gEnHeishiHeadVtx[];
extern Vtx gEnHeishiTorsoArmorVtx[];
extern Vtx gEnHeishiTorsoVtx[];
extern Vtx gEnHeishiRightFootVtx[];
extern Vtx gEnHeishiLeg1Vtx[];
extern Vtx gEnHeishiUpperLeg1Vtx[];
extern Vtx gEnHeishiSpearVtx[];
extern Vtx gEnHeishiLowerRightArmVtx[];
extern Vtx gEnHeishiUpperArmVtx[];
extern Vtx gEnHeishiLeftFootVtx[];
extern Vtx gEnHeishiLeftShinVtx[];
extern Vtx gEnHeishiLeftThighVtx[];
extern Vtx gEnHeishiHandVtx[];
extern Vtx gEnHeishiLeftArmVtx[];
extern Vtx gEnHeishiUpperLeftArmVtx[];
extern Gfx gEnHeishiHeadDL[130];
extern Gfx gEnHeishiTorsoArmorDL[87];
extern Gfx gEnHeishiTorsoDL[42];
extern Gfx gEnHeishiRightFootDL[29];
extern Gfx gEnHeishiLeg1DL[50];
extern Gfx gEnHeishiUpperLeg1DL[42];
extern Gfx gEnHeishiSpearDL[86];
extern Gfx gEnHeishiLowerRightArmDL[50];
extern Gfx gEnHeishiUpperArmDL[33];
extern Gfx gEnHeishiLeftFootDL[29];
extern Gfx gEnHeishiLeftShinDL[50];
extern Gfx gEnHeishiLeftThighDL[42];
extern Gfx gEnHeishiHandDL[66];
extern Gfx gEnHeishiLeftArmDL[50];
extern Gfx gEnHeishiUpperLeftArmDL[33];
extern StandardLimb gEnHeishiRootLimb;
extern StandardLimb gEnHeishiTorsoLimb;
extern StandardLimb gEnHeishiLeftThighLimb;
extern StandardLimb gEnHeishiLeftShinLimb;
extern StandardLimb gEnHeishiLeftFootLimb;
extern StandardLimb gEnHeishiRightThighLimb;
extern StandardLimb gEnHeishiRightShinLimb;
extern StandardLimb gEnHeishiRightFootLimb;
extern StandardLimb gEnHeishiChestLimb;
extern StandardLimb gEnHeishiLeftUpperArmLimb;
extern StandardLimb gEnHeishiLeftArmLimb;
extern StandardLimb gEnHeishiLeftHandLimb;
extern StandardLimb gEnHeishiRightUpperArmLimb;
extern StandardLimb gEnHeishiRightArmLimb;
extern StandardLimb gEnHeishiRightHandLimb;
extern StandardLimb gEnHeishiRightHeadLimb;
extern void* gEnHeishiLimbs[];
typedef enum gEnHeishiSkelLimb {
    /*  0 */ LIMB_OBJECT_SD_00BAC8_NONE,
    /*  1 */ LIMB_OBJECT_SD_00B9C8,
    /*  2 */ LIMB_OBJECT_SD_00B9D4,
    /*  3 */ LIMB_OBJECT_SD_00B9E0,
    /*  4 */ LIMB_OBJECT_SD_00B9EC,
    /*  5 */ LIMB_OBJECT_SD_00B9F8,
    /*  6 */ LIMB_OBJECT_SD_00BA04,
    /*  7 */ LIMB_OBJECT_SD_00BA10,
    /*  8 */ LIMB_OBJECT_SD_00BA1C,
    /*  9 */ LIMB_OBJECT_SD_00BA28,
    /* 10 */ LIMB_OBJECT_SD_00BA34,
    /* 11 */ LIMB_OBJECT_SD_00BA40,
    /* 12 */ LIMB_OBJECT_SD_00BA4C,
    /* 13 */ LIMB_OBJECT_SD_00BA58,
    /* 14 */ LIMB_OBJECT_SD_00BA64,
    /* 15 */ LIMB_OBJECT_SD_00BA70,
    /* 16 */ LIMB_OBJECT_SD_00BA7C,
    /* 17 */ LIMB_OBJECT_SD_00BAC8_MAX
} gEnHeishiSkelLimb;
extern SkeletonHeader gEnHeishiSkel;
extern s16 gEnHeishiDyingGuardDieFrameData[];
extern JointIndex gEnHeishiDyingGuardDieJointIndices[];
extern AnimationHeader gEnHeishiDyingGuardDieAnim;
extern s16 gEnHeishiDyingGuardAnim_00C444_0600C390_FrameData[];
extern JointIndex gEnHeishiDyingGuardAnim_00C444_0600C3DC_JointIndices[];
extern AnimationHeader gEnHeishiDyingGuardAnim_00C444;
extern s16 gEnHeishiDyingGuardTalkFrameData[];
extern JointIndex gEnHeishiDyingGuardTalkJointIndices[];
extern AnimationHeader gEnHeishiDyingGuardTalkAnim;

#endif
