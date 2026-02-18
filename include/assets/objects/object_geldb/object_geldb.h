#ifndef OBJECT_GELDB_H
#define OBJECT_GELDB_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gGerudoRedSlashFrameData[];
extern JointIndex gGerudoRedSlashJointIndices[];
extern AnimationHeader gGerudoRedSlashAnim;
extern s16 gGerudoRedSpinAttackFrameData[];
extern JointIndex gGerudoRedSpinAttackJointIndices[];
extern AnimationHeader gGerudoRedSpinAttackAnim;
extern s16 gGerudoRedFlipFrameData[];
extern JointIndex gGerudoRedFlipJointIndices[];
extern AnimationHeader gGerudoRedFlipAnim;
extern s16 gGerudoRedBlockFrameData[];
extern JointIndex gGerudoRedBlockJointIndices[];
extern AnimationHeader gGerudoRedBlockAnim;
extern s16 gGerudoRedDefeatFrameData[];
extern JointIndex gGerudoRedDefeatJointIndices[];
extern AnimationHeader gGerudoRedDefeatAnim;
extern s16 gGerudoRedDamageFrameData[];
extern JointIndex gGerudoRedDamageJointIndices[];
extern AnimationHeader gGerudoRedDamageAnim;
extern s16 gGerudoRedWalkFrameData[];
extern JointIndex gGerudoRedWalkJointIndices[];
extern AnimationHeader gGerudoRedWalkAnim;
//#define object_geldb_002500_TLUT_TLUT_COUNT 104
extern u64 object_geldb_002500_TLUT[];
extern u8 object_geldb_0025D0_Blob[];
#define object_geldb_002700_Tex_WIDTH 8
#define object_geldb_002700_Tex_HEIGHT 8
extern u64 object_geldb_002700_Tex[TEX_LEN(u64, object_geldb_002700_Tex_WIDTH, object_geldb_002700_Tex_HEIGHT, 8)];
#define object_geldb_002740_Tex_WIDTH 8
#define object_geldb_002740_Tex_HEIGHT 8
extern u64 object_geldb_002740_Tex[TEX_LEN(u64, object_geldb_002740_Tex_WIDTH, object_geldb_002740_Tex_HEIGHT, 8)];
#define object_geldb_002780_Tex_WIDTH 16
#define object_geldb_002780_Tex_HEIGHT 16
extern u64 object_geldb_002780_Tex[TEX_LEN(u64, object_geldb_002780_Tex_WIDTH, object_geldb_002780_Tex_HEIGHT, 8)];
#define object_geldb_002880_Tex_WIDTH 16
#define object_geldb_002880_Tex_HEIGHT 16
extern u64 object_geldb_002880_Tex[TEX_LEN(u64, object_geldb_002880_Tex_WIDTH, object_geldb_002880_Tex_HEIGHT, 8)];
#define object_geldb_002980_Tex_WIDTH 16
#define object_geldb_002980_Tex_HEIGHT 16
extern u64 object_geldb_002980_Tex[TEX_LEN(u64, object_geldb_002980_Tex_WIDTH, object_geldb_002980_Tex_HEIGHT, 8)];
#define object_geldb_002A80_Tex_WIDTH 16
#define object_geldb_002A80_Tex_HEIGHT 16
extern u64 object_geldb_002A80_Tex[TEX_LEN(u64, object_geldb_002A80_Tex_WIDTH, object_geldb_002A80_Tex_HEIGHT, 8)];
#define object_geldb_002B80_Tex_WIDTH 8
#define object_geldb_002B80_Tex_HEIGHT 16
extern u64 object_geldb_002B80_Tex[TEX_LEN(u64, object_geldb_002B80_Tex_WIDTH, object_geldb_002B80_Tex_HEIGHT, 8)];
extern Vtx object_geldb_Vtx_002C00[];
extern Vtx object_geldb_Vtx_002DE0[];
extern Vtx object_geldb_Vtx_002F70[];
extern Vtx object_geldb_Vtx_003150[];
extern Vtx object_geldb_Vtx_0032E0[];
extern Vtx object_geldb_Vtx_003930[];
extern Vtx object_geldb_Vtx_003D40[];
extern Vtx object_geldb_Vtx_003F30[];
extern Vtx object_geldb_Vtx_004300[];
extern Vtx object_geldb_Vtx_0044F0[];
extern Gfx object_geldb_0048E0_DL[144];
extern Gfx object_geldb_004D60_DL[39];
extern Gfx object_geldb_004E98_DL[69];
extern Gfx object_geldb_0050C0_DL[39];
extern Gfx object_geldb_0051F8_DL[69];
extern Gfx object_geldb_005420_DL[68];
extern Gfx object_geldb_005640_DL[32];
extern Gfx object_geldb_005740_DL[78];
extern Gfx object_geldb_0059B0_DL[32];
extern Gfx object_geldb_005AB0_DL[80];
//#define sGerudoRedTexHint1_TLUT_COUNT 252
extern u64 sGerudoRedTexHint1[];
#define sGerudoRedTexHint2_WIDTH 8
#define sGerudoRedTexHint2_HEIGHT 8
extern u64 sGerudoRedTexHint2[TEX_LEN(u64, sGerudoRedTexHint2_WIDTH, sGerudoRedTexHint2_HEIGHT, 8)];
#define object_geldb_005F68_Tex_WIDTH 8
#define object_geldb_005F68_Tex_HEIGHT 16
extern u64 object_geldb_005F68_Tex[TEX_LEN(u64, object_geldb_005F68_Tex_WIDTH, object_geldb_005F68_Tex_HEIGHT, 8)];
#define gGerudoRedEyeOpenTex_WIDTH 32
#define gGerudoRedEyeOpenTex_HEIGHT 32
extern u64 gGerudoRedEyeOpenTex[TEX_LEN(u64, gGerudoRedEyeOpenTex_WIDTH, gGerudoRedEyeOpenTex_HEIGHT, 8)];
#define object_geldb_0063E8_Tex_WIDTH 16
#define object_geldb_0063E8_Tex_HEIGHT 16
extern u64 object_geldb_0063E8_Tex[TEX_LEN(u64, object_geldb_0063E8_Tex_WIDTH, object_geldb_0063E8_Tex_HEIGHT, 8)];
#define object_geldb_0064E8_Tex_WIDTH 8
#define object_geldb_0064E8_Tex_HEIGHT 16
extern u64 object_geldb_0064E8_Tex[TEX_LEN(u64, object_geldb_0064E8_Tex_WIDTH, object_geldb_0064E8_Tex_HEIGHT, 8)];
#define object_geldb_006568_Tex_WIDTH 8
#define object_geldb_006568_Tex_HEIGHT 8
extern u64 object_geldb_006568_Tex[TEX_LEN(u64, object_geldb_006568_Tex_WIDTH, object_geldb_006568_Tex_HEIGHT, 8)];
#define gGerudoRedEyeHalfTex_WIDTH 32
#define gGerudoRedEyeHalfTex_HEIGHT 32
extern u64 gGerudoRedEyeHalfTex[TEX_LEN(u64, gGerudoRedEyeHalfTex_WIDTH, gGerudoRedEyeHalfTex_HEIGHT, 8)];
#define object_geldb_0069A8_Tex_WIDTH 8
#define object_geldb_0069A8_Tex_HEIGHT 16
extern u64 object_geldb_0069A8_Tex[TEX_LEN(u64, object_geldb_0069A8_Tex_WIDTH, object_geldb_0069A8_Tex_HEIGHT, 8)];
#define object_geldb_006A28_Tex_WIDTH 16
#define object_geldb_006A28_Tex_HEIGHT 16
extern u64 object_geldb_006A28_Tex[TEX_LEN(u64, object_geldb_006A28_Tex_WIDTH, object_geldb_006A28_Tex_HEIGHT, 8)];
#define object_geldb_006B28_Tex_WIDTH 16
#define object_geldb_006B28_Tex_HEIGHT 16
extern u64 object_geldb_006B28_Tex[TEX_LEN(u64, object_geldb_006B28_Tex_WIDTH, object_geldb_006B28_Tex_HEIGHT, 8)];
#define object_geldb_006C28_Tex_WIDTH 16
#define object_geldb_006C28_Tex_HEIGHT 16
extern u64 object_geldb_006C28_Tex[TEX_LEN(u64, object_geldb_006C28_Tex_WIDTH, object_geldb_006C28_Tex_HEIGHT, 8)];
#define gGerudoRedEyeShutTex_WIDTH 32
#define gGerudoRedEyeShutTex_HEIGHT 32
extern u64 gGerudoRedEyeShutTex[TEX_LEN(u64, gGerudoRedEyeShutTex_WIDTH, gGerudoRedEyeShutTex_HEIGHT, 8)];
extern Vtx object_geldb_Vtx_007128[];
extern Vtx object_geldb_Vtx_0073D8[];
extern Vtx object_geldb_Vtx_007688[];
extern Vtx object_geldb_Vtx_0078A8[];
extern Vtx object_geldb_Vtx_007AD8[];
extern Vtx object_geldb_Vtx_007CF8[];
extern Vtx object_geldb_Vtx_007F28[];
extern Vtx object_geldb_Vtx_007FE8[];
extern Vtx object_geldb_Vtx_0080C8[];
extern Gfx object_geldb_008F48_DL[56];
extern Gfx object_geldb_009108_DL[56];
extern Gfx object_geldb_0092C8_DL[51];
extern Gfx object_geldb_009460_DL[59];
extern Gfx object_geldb_009638_DL[51];
extern Gfx object_geldb_0097D0_DL[59];
extern Gfx object_geldb_0099A8_DL[23];
extern Gfx object_geldb_009A60_DL[30];
extern Gfx object_geldb_009B50_DL[243];
extern StandardLimb object_geldb_00A2E8_Limb;
extern StandardLimb object_geldb_00A2F4_Limb;
extern StandardLimb object_geldb_00A300_Limb;
extern StandardLimb object_geldb_00A30C_Limb;
extern StandardLimb object_geldb_00A318_Limb;
extern StandardLimb object_geldb_00A324_Limb;
extern StandardLimb object_geldb_00A330_Limb;
extern StandardLimb object_geldb_00A33C_Limb;
extern StandardLimb object_geldb_00A348_Limb;
extern StandardLimb object_geldb_00A354_Limb;
extern StandardLimb object_geldb_00A360_Limb;
extern StandardLimb object_geldb_00A36C_Limb;
extern StandardLimb object_geldb_00A378_Limb;
extern StandardLimb object_geldb_00A384_Limb;
extern StandardLimb object_geldb_00A390_Limb;
extern StandardLimb object_geldb_00A39C_Limb;
extern StandardLimb object_geldb_00A3A8_Limb;
extern StandardLimb object_geldb_00A3B4_Limb;
extern StandardLimb object_geldb_00A3C0_Limb;
extern StandardLimb object_geldb_00A3CC_Limb;
extern StandardLimb object_geldb_00A3D8_Limb;
extern StandardLimb object_geldb_00A3E4_Limb;
extern StandardLimb object_geldb_00A3F0_Limb;
extern void* gGerudoRedLimbs[];
typedef enum GerudoRedLimb {
    /*  0 */ GERUDO_RED_LIMB_NONE,
    /*  1 */ GERUDO_RED_LIMB_ROOT,
    /*  2 */ GERUDO_RED_LIMB_TORSO,
    /*  3 */ GERUDO_RED_LIMB_NECK,
    /*  4 */ GERUDO_RED_LIMB_PONYTAIL,
    /*  5 */ GERUDO_RED_LIMB_VEIL,
    /*  6 */ GERUDO_RED_LIMB_HEAD,
    /*  7 */ GERUDO_RED_LIMB_R_UPPER_ARM,
    /*  8 */ GERUDO_RED_LIMB_R_FOREARM,
    /*  9 */ GERUDO_RED_LIMB_R_WRIST,
    /* 10 */ GERUDO_RED_LIMB_R_HAND,
    /* 11 */ GERUDO_RED_LIMB_R_SWORD,
    /* 12 */ GERUDO_RED_LIMB_L_UPPER_ARM,
    /* 13 */ GERUDO_RED_LIMB_L_FOREARM,
    /* 14 */ GERUDO_RED_LIMB_L_WRIST,
    /* 15 */ GERUDO_RED_LIMB_L_HAND,
    /* 16 */ GERUDO_RED_LIMB_L_SWORD,
    /* 17 */ GERUDO_RED_LIMB_L_THIGH,
    /* 18 */ GERUDO_RED_LIMB_L_SHIN,
    /* 19 */ GERUDO_RED_LIMB_L_FOOT,
    /* 20 */ GERUDO_RED_LIMB_R_THIGH,
    /* 21 */ GERUDO_RED_LIMB_R_SHIN,
    /* 22 */ GERUDO_RED_LIMB_R_FOOT,
    /* 23 */ GERUDO_RED_LIMB_WAIST,
    /* 24 */ GERUDO_RED_LIMB_MAX
} GerudoRedLimb;
extern FlexSkeletonHeader gGerudoRedSkel;
extern s16 gGerudoRedSidestepFrameData[];
extern JointIndex gGerudoRedSidestepJointIndices[];
extern AnimationHeader gGerudoRedSidestepAnim;
extern s16 gGerudoRedJumpFrameData[];
extern JointIndex gGerudoRedJumpJointIndices[];
extern AnimationHeader gGerudoRedJumpAnim;
extern s16 gGerudoRedStandFrameData[];
extern JointIndex gGerudoRedStandJointIndices[];
extern AnimationHeader gGerudoRedStandAnim;
extern s16 gGerudoRedNeutralFrameData[];
extern JointIndex gGerudoRedNeutralJointIndices[];
extern AnimationHeader gGerudoRedNeutralAnim;

#endif
