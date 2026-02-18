#ifndef OBJECT_DU_H
#define OBJECT_DU_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gDaruniaItemGiveFrameData[];
extern JointIndex gDaruniaItemGiveJointIndices[];
extern AnimationHeader gDaruniaItemGiveAnim;
extern s16 gDaruniaItemGiveIdleFrameData[];
extern JointIndex gDaruniaItemGiveIdleJointIndices[];
extern AnimationHeader gDaruniaItemGiveIdleAnim;
extern s16 gDaruniaHitLinkFrameData[];
extern JointIndex gDaruniaHitLinkJointIndices[];
extern AnimationHeader gDaruniaHitLinkAnim;
extern s16 gDaruniaHitBreastFrameData[];
extern JointIndex gDaruniaHitBreastJointIndices[];
extern AnimationHeader gDaruniaHitBreastAnim;
extern s16 gDaruniaStandUpAfterFallingFrameData[];
extern JointIndex gDaruniaStandUpAfterFallingJointIndices[];
extern AnimationHeader gDaruniaStandUpAfterFallingAnim;
extern s16 gDaruniaDancingLoop1FrameData[];
extern JointIndex gDaruniaDancingLoop1JointIndices[];
extern AnimationHeader gDaruniaDancingLoop1Anim;
extern s16 gDaruniaWrongSongFrameData[];
extern JointIndex gDaruniaWrongSongJointIndices[];
extern AnimationHeader gDaruniaWrongSongAnim;
extern s16 gDaruniaDancingLoop2FrameData[];
extern JointIndex gDaruniaDancingLoop2JointIndices[];
extern AnimationHeader gDaruniaDancingLoop2Anim;
extern s16 gDaruniaDancingEndFrameData[];
extern JointIndex gDaruniaDancingEndJointIndices[];
extern AnimationHeader gDaruniaDancingEndAnim;
extern s16 gDaruniaWrongSongEndFrameData[];
extern JointIndex gDaruniaWrongSongEndJointIndices[];
extern AnimationHeader gDaruniaWrongSongEndAnim;
extern s16 gDaruniaDancingLoop3FrameData[];
extern JointIndex gDaruniaDancingLoop3JointIndices[];
extern AnimationHeader gDaruniaDancingLoop3Anim;
extern s16 gDaruniaDancingLoop4FrameData[];
extern JointIndex gDaruniaDancingLoop4JointIndices[];
extern AnimationHeader gDaruniaDancingLoop4Anim;
extern s16 gDaruniaLookingUpToSariaFrameData[];
extern JointIndex gDaruniaLookingUpToSariaJointIndices[];
extern AnimationHeader gDaruniaLookingUpToSariaAnim;
extern s16 gDaruniaCreditsHitBreastFrameData[];
extern JointIndex gDaruniaCreditsHitBreastJointIndices[];
extern AnimationHeader gDaruniaCreditsHitBreastAnim;
extern s16 gDaruniaCreditsIdleFrameData[];
extern JointIndex gDaruniaCreditsIdleJointIndices[];
extern AnimationHeader gDaruniaCreditsIdleAnim;
extern s16 gDaruniaIdleFrameData[];
extern JointIndex gDaruniaIdleJointIndices[];
extern AnimationHeader gDaruniaIdleAnim;
//#define gDaruniaTLUT_6EC0_TLUT_COUNT 256
extern u64 gDaruniaTLUT_6EC0[];
#define gDaruniaSkelTex_70C0_WIDTH 32
#define gDaruniaSkelTex_70C0_HEIGHT 16
extern u64 gDaruniaSkelTex_70C0[TEX_LEN(u64, gDaruniaSkelTex_70C0_WIDTH, gDaruniaSkelTex_70C0_HEIGHT, 8)];
#define gDaruniaSkelTex_72C0_WIDTH 16
#define gDaruniaSkelTex_72C0_HEIGHT 16
extern u64 gDaruniaSkelTex_72C0[TEX_LEN(u64, gDaruniaSkelTex_72C0_WIDTH, gDaruniaSkelTex_72C0_HEIGHT, 8)];
#define gDaruniaSkelTex_73C0_WIDTH 8
#define gDaruniaSkelTex_73C0_HEIGHT 16
extern u64 gDaruniaSkelTex_73C0[TEX_LEN(u64, gDaruniaSkelTex_73C0_WIDTH, gDaruniaSkelTex_73C0_HEIGHT, 8)];
#define gDaruniaSkelTex_7440_WIDTH 8
#define gDaruniaSkelTex_7440_HEIGHT 8
extern u64 gDaruniaSkelTex_7440[TEX_LEN(u64, gDaruniaSkelTex_7440_WIDTH, gDaruniaSkelTex_7440_HEIGHT, 8)];
#define gDaruniaSkelTex_7480_WIDTH 16
#define gDaruniaSkelTex_7480_HEIGHT 16
extern u64 gDaruniaSkelTex_7480[TEX_LEN(u64, gDaruniaSkelTex_7480_WIDTH, gDaruniaSkelTex_7480_HEIGHT, 8)];
#define gDaruniaSkelTex_7580_WIDTH 32
#define gDaruniaSkelTex_7580_HEIGHT 32
extern u64 gDaruniaSkelTex_7580[TEX_LEN(u64, gDaruniaSkelTex_7580_WIDTH, gDaruniaSkelTex_7580_HEIGHT, 8)];
//#define gDaruniaTLUT_7980_TLUT_COUNT 188
extern u64 gDaruniaTLUT_7980[];
//#define gDaruniaTLUT_7AF8_TLUT_COUNT 232
extern u64 gDaruniaTLUT_7AF8[];
//#define gDaruniaTLUT_7CC8_TLUT_COUNT 252
extern u64 gDaruniaTLUT_7CC8[];
#define gDaruniaSkelTex_7EC0_WIDTH 8
#define gDaruniaSkelTex_7EC0_HEIGHT 16
extern u64 gDaruniaSkelTex_7EC0[TEX_LEN(u64, gDaruniaSkelTex_7EC0_WIDTH, gDaruniaSkelTex_7EC0_HEIGHT, 8)];
#define gDaruniaSkelTex_7F40_WIDTH 8
#define gDaruniaSkelTex_7F40_HEIGHT 16
extern u64 gDaruniaSkelTex_7F40[TEX_LEN(u64, gDaruniaSkelTex_7F40_WIDTH, gDaruniaSkelTex_7F40_HEIGHT, 8)];
#define gDaruniaNoseSeriousTex_WIDTH 8
#define gDaruniaNoseSeriousTex_HEIGHT 8
extern u64 gDaruniaNoseSeriousTex[TEX_LEN(u64, gDaruniaNoseSeriousTex_WIDTH, gDaruniaNoseSeriousTex_HEIGHT, 8)];
#define gDaruniaSkelTex_8000_WIDTH 8
#define gDaruniaSkelTex_8000_HEIGHT 16
extern u64 gDaruniaSkelTex_8000[TEX_LEN(u64, gDaruniaSkelTex_8000_WIDTH, gDaruniaSkelTex_8000_HEIGHT, 8)];
#define gDaruniaEyeOpenTex_WIDTH 32
#define gDaruniaEyeOpenTex_HEIGHT 32
extern u64 gDaruniaEyeOpenTex[TEX_LEN(u64, gDaruniaEyeOpenTex_WIDTH, gDaruniaEyeOpenTex_HEIGHT, 8)];
#define gDaruniaEyeOpeningTex_WIDTH 32
#define gDaruniaEyeOpeningTex_HEIGHT 32
extern u64 gDaruniaEyeOpeningTex[TEX_LEN(u64, gDaruniaEyeOpeningTex_WIDTH, gDaruniaEyeOpeningTex_HEIGHT, 8)];
#define gDaruniaEyeShutTex_WIDTH 32
#define gDaruniaEyeShutTex_HEIGHT 32
extern u64 gDaruniaEyeShutTex[TEX_LEN(u64, gDaruniaEyeShutTex_WIDTH, gDaruniaEyeShutTex_HEIGHT, 8)];
#define gDaruniaMouthSeriousTex_WIDTH 64
#define gDaruniaMouthSeriousTex_HEIGHT 32
extern u64 gDaruniaMouthSeriousTex[TEX_LEN(u64, gDaruniaMouthSeriousTex_WIDTH, gDaruniaMouthSeriousTex_HEIGHT, 8)];
#define gDaruniaSkelTex_9480_WIDTH 8
#define gDaruniaSkelTex_9480_HEIGHT 16
extern u64 gDaruniaSkelTex_9480[TEX_LEN(u64, gDaruniaSkelTex_9480_WIDTH, gDaruniaSkelTex_9480_HEIGHT, 8)];
#define gDaruniaSkelTex_9500_WIDTH 32
#define gDaruniaSkelTex_9500_HEIGHT 64
extern u64 gDaruniaSkelTex_9500[TEX_LEN(u64, gDaruniaSkelTex_9500_WIDTH, gDaruniaSkelTex_9500_HEIGHT, 8)];
#define gDaruniaSkelTex_9D00_WIDTH 8
#define gDaruniaSkelTex_9D00_HEIGHT 8
extern u64 gDaruniaSkelTex_9D00[TEX_LEN(u64, gDaruniaSkelTex_9D00_WIDTH, gDaruniaSkelTex_9D00_HEIGHT, 8)];
#define gDaruniaMouthGrinningTex_WIDTH 64
#define gDaruniaMouthGrinningTex_HEIGHT 32
extern u64 gDaruniaMouthGrinningTex[TEX_LEN(u64, gDaruniaMouthGrinningTex_WIDTH, gDaruniaMouthGrinningTex_HEIGHT, 8)];
#define gDaruniaEyeClosingTex_WIDTH 32
#define gDaruniaEyeClosingTex_HEIGHT 32
extern u64 gDaruniaEyeClosingTex[TEX_LEN(u64, gDaruniaEyeClosingTex_WIDTH, gDaruniaEyeClosingTex_HEIGHT, 8)];
#define gDaruniaMouthOpenTex_WIDTH 64
#define gDaruniaMouthOpenTex_HEIGHT 32
extern u64 gDaruniaMouthOpenTex[TEX_LEN(u64, gDaruniaMouthOpenTex_WIDTH, gDaruniaMouthOpenTex_HEIGHT, 8)];
#define gDaruniaNoseHappyTex_WIDTH 8
#define gDaruniaNoseHappyTex_HEIGHT 8
extern u64 gDaruniaNoseHappyTex[TEX_LEN(u64, gDaruniaNoseHappyTex_WIDTH, gDaruniaNoseHappyTex_HEIGHT, 8)];
#define gDaruniaMouthHappyTex_WIDTH 64
#define gDaruniaMouthHappyTex_HEIGHT 32
extern u64 gDaruniaMouthHappyTex[TEX_LEN(u64, gDaruniaMouthHappyTex_WIDTH, gDaruniaMouthHappyTex_HEIGHT, 8)];
extern Vtx object_du_Vtx_00BF80[];
extern Vtx object_du_Vtx_00BFB0[];
extern Vtx object_du_Vtx_00BFE0[];
extern Vtx object_du_Vtx_00C930[];
extern Gfx object_du_00D770_DL[12];
extern Gfx object_du_00D7D0_DL[12];
extern Gfx object_du_00D830_DL[188];
extern Gfx object_du_00DE10_DL[357];
extern Vtx object_du_Vtx_00E938[];
extern Vtx object_du_Vtx_00EB88[];
extern Vtx object_du_Vtx_00ED98[];
extern Vtx object_du_Vtx_00EEB8[];
extern Vtx object_du_Vtx_00F108[];
extern Vtx object_du_Vtx_00F318[];
extern Vtx object_du_Vtx_00F438[];
extern Vtx object_du_Vtx_00FA38[];
extern Vtx object_du_Vtx_00FC88[];
extern Vtx object_du_Vtx_010038[];
extern Vtx object_du_Vtx_010638[];
extern Vtx object_du_Vtx_010888[];
extern Gfx object_du_010C38_DL[55];
extern Gfx object_du_010DF0_DL[40];
extern Gfx object_du_010F30_DL[69];
extern Gfx object_du_011158_DL[55];
extern Gfx object_du_011310_DL[40];
extern Gfx object_du_011450_DL[69];
extern Gfx object_du_011678_DL[32];
extern Gfx object_du_011778_DL[72];
extern Gfx object_du_0119B8_DL[74];
extern Gfx object_du_011C08_DL[32];
extern Gfx object_du_011D08_DL[72];
extern Gfx object_du_011F48_DL[74];
extern StandardLimb object_du_012198_Limb;
extern StandardLimb object_du_0121A4_Limb;
extern StandardLimb object_du_0121B0_Limb;
extern StandardLimb object_du_0121BC_Limb;
extern StandardLimb object_du_0121C8_Limb;
extern StandardLimb object_du_0121D4_Limb;
extern StandardLimb object_du_0121E0_Limb;
extern StandardLimb object_du_0121EC_Limb;
extern StandardLimb object_du_0121F8_Limb;
extern StandardLimb object_du_012204_Limb;
extern StandardLimb object_du_012210_Limb;
extern StandardLimb object_du_01221C_Limb;
extern StandardLimb object_du_012228_Limb;
extern StandardLimb object_du_012234_Limb;
extern StandardLimb object_du_012240_Limb;
extern StandardLimb object_du_01224C_Limb;
extern StandardLimb object_du_012258_Limb;
extern void* gDaruniaLimbs[];
typedef enum gDaruniaSkelLimb {
    /*  0 */ LIMB_OBJECT_DU_0122A8_NONE,
    /*  1 */ LIMB_OBJECT_DU_012198,
    /*  2 */ LIMB_OBJECT_DU_0121A4,
    /*  3 */ LIMB_OBJECT_DU_0121B0,
    /*  4 */ LIMB_OBJECT_DU_0121BC,
    /*  5 */ LIMB_OBJECT_DU_0121C8,
    /*  6 */ LIMB_OBJECT_DU_0121D4,
    /*  7 */ LIMB_OBJECT_DU_0121E0,
    /*  8 */ LIMB_OBJECT_DU_0121EC,
    /*  9 */ LIMB_OBJECT_DU_0121F8,
    /* 10 */ LIMB_OBJECT_DU_012204,
    /* 11 */ LIMB_OBJECT_DU_012210,
    /* 12 */ LIMB_OBJECT_DU_01221C,
    /* 13 */ LIMB_OBJECT_DU_012228,
    /* 14 */ LIMB_OBJECT_DU_012234,
    /* 15 */ LIMB_OBJECT_DU_012240,
    /* 16 */ LIMB_OBJECT_DU_01224C,
    /* 17 */ LIMB_OBJECT_DU_012258,
    /* 18 */ LIMB_OBJECT_DU_0122A8_MAX
} gDaruniaSkelLimb;
extern FlexSkeletonHeader gDaruniaSkel;
extern s16 gDaruniaSageFormationFrameData[];
extern JointIndex gDaruniaSageFormationJointIndices[];
extern AnimationHeader gDaruniaSageFormationAnim;

#endif
