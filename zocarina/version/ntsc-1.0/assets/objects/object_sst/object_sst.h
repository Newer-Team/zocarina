#ifndef OBJECT_SST_H
#define OBJECT_SST_H

#include "animation.h"
#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern s16 gBongoLeftHandIdleFrameData[];
extern JointIndex gBongoLeftHandIdleJointIndices[];
extern AnimationHeader gBongoLeftHandIdleAnim;
extern Vtx object_sst_0036E8_DL_06000300_Vtx_fused_[];
extern Gfx object_sst_002850_DL[76];
extern Gfx object_sst_002AB0_DL[75];
extern Gfx object_sst_002D08_DL[94];
extern Gfx object_sst_002FF8_DL[76];
extern Gfx object_sst_003258_DL[73];
extern Gfx object_sst_0034A0_DL[73];
extern Gfx object_sst_0036E8_DL[76];
extern Gfx object_sst_003948_DL[73];
extern Gfx object_sst_003B90_DL[73];
extern Gfx object_sst_003DD8_DL[76];
extern Gfx object_sst_004038_DL[73];
extern Gfx object_sst_004280_DL[73];
extern Gfx object_sst_0044C8_DL[90];
extern Gfx object_sst_004798_DL[76];
extern Gfx object_sst_0049F8_DL[73];
extern StandardLimb object_sst_004C40_Limb;
extern StandardLimb object_sst_004C4C_Limb;
extern StandardLimb object_sst_004C58_Limb;
extern StandardLimb object_sst_004C64_Limb;
extern StandardLimb object_sst_004C70_Limb;
extern StandardLimb object_sst_004C7C_Limb;
extern StandardLimb object_sst_004C88_Limb;
extern StandardLimb object_sst_004C94_Limb;
extern StandardLimb object_sst_004CA0_Limb;
extern StandardLimb object_sst_004CAC_Limb;
extern StandardLimb object_sst_004CB8_Limb;
extern StandardLimb object_sst_004CC4_Limb;
extern StandardLimb object_sst_004CD0_Limb;
extern StandardLimb object_sst_004CDC_Limb;
extern StandardLimb object_sst_004CE8_Limb;
extern StandardLimb object_sst_004CF4_Limb;
extern StandardLimb object_sst_004D00_Limb;
extern StandardLimb object_sst_004D0C_Limb;
extern StandardLimb object_sst_004D18_Limb;
extern StandardLimb object_sst_004D24_Limb;
extern StandardLimb object_sst_004D30_Limb;
extern StandardLimb object_sst_004D3C_Limb;
extern StandardLimb object_sst_004D48_Limb;
extern StandardLimb object_sst_004D54_Limb;
extern StandardLimb object_sst_004D60_Limb;
extern StandardLimb object_sst_004D6C_Limb;
extern void* gBongoLeftHandLimbs[];
typedef enum gBongoLeftHandSkelLimb {
    /*  0 */ LIMB_OBJECT_SST_004DE0_NONE,
    /*  1 */ LIMB_OBJECT_SST_004C40,
    /*  2 */ LIMB_OBJECT_SST_004C4C,
    /*  3 */ LIMB_OBJECT_SST_004C58,
    /*  4 */ LIMB_OBJECT_SST_004C64,
    /*  5 */ LIMB_OBJECT_SST_004C70,
    /*  6 */ LIMB_OBJECT_SST_004C7C,
    /*  7 */ LIMB_OBJECT_SST_004C88,
    /*  8 */ LIMB_OBJECT_SST_004C94,
    /*  9 */ LIMB_OBJECT_SST_004CA0,
    /* 10 */ LIMB_OBJECT_SST_004CAC,
    /* 11 */ LIMB_OBJECT_SST_004CB8,
    /* 12 */ LIMB_OBJECT_SST_004CC4,
    /* 13 */ LIMB_OBJECT_SST_004CD0,
    /* 14 */ LIMB_OBJECT_SST_004CDC,
    /* 15 */ LIMB_OBJECT_SST_004CE8,
    /* 16 */ LIMB_OBJECT_SST_004CF4,
    /* 17 */ LIMB_OBJECT_SST_004D00,
    /* 18 */ LIMB_OBJECT_SST_004D0C,
    /* 19 */ LIMB_OBJECT_SST_004D18,
    /* 20 */ LIMB_OBJECT_SST_004D24,
    /* 21 */ LIMB_OBJECT_SST_004D30,
    /* 22 */ LIMB_OBJECT_SST_004D3C,
    /* 23 */ LIMB_OBJECT_SST_004D48,
    /* 24 */ LIMB_OBJECT_SST_004D54,
    /* 25 */ LIMB_OBJECT_SST_004D60,
    /* 26 */ LIMB_OBJECT_SST_004D6C,
    /* 27 */ LIMB_OBJECT_SST_004DE0_MAX
} gBongoLeftHandSkelLimb;
extern FlexSkeletonHeader gBongoLeftHandSkel;
extern s16 gBongoLeftHandFlatPoseFrameData[];
extern JointIndex gBongoLeftHandFlatPoseJointIndices[];
extern AnimationHeader gBongoLeftHandFlatPoseAnim;
extern s16 gBongoLeftHandOpenPoseFrameData[];
extern JointIndex gBongoLeftHandOpenPoseJointIndices[];
extern AnimationHeader gBongoLeftHandOpenPoseAnim;
extern s16 gBongoLeftHandFistPoseFrameData[];
extern JointIndex gBongoLeftHandFistPoseJointIndices[];
extern AnimationHeader gBongoLeftHandFistPoseAnim;
extern s16 gBongoLeftHandClenchFrameData[];
extern JointIndex gBongoLeftHandClenchJointIndices[];
extern AnimationHeader gBongoLeftHandClenchAnim;
extern s16 gBongoLeftHandDamagePoseFrameData[];
extern JointIndex gBongoLeftHandDamagePoseJointIndices[];
extern AnimationHeader gBongoLeftHandDamagePoseAnim;
extern s16 gBongoLeftHandPushoffPoseFrameData[];
extern JointIndex gBongoLeftHandPushoffPoseJointIndices[];
extern AnimationHeader gBongoLeftHandPushoffPoseAnim;
extern s16 gBongoLeftHandHangPoseFrameData[];
extern JointIndex gBongoLeftHandHangPoseJointIndices[];
extern AnimationHeader gBongoLeftHandHangPoseAnim;
extern s16 gBongoRightHandIdleFrameData[];
extern JointIndex gBongoRightHandIdleJointIndices[];
extern AnimationHeader gBongoRightHandIdleAnim;
extern Vtx object_sst_008C58_DL_06005870_Vtx_fused_[];
extern Gfx object_sst_007DC0_DL[76];
extern Gfx object_sst_008020_DL[75];
extern Gfx object_sst_008278_DL[94];
extern Gfx object_sst_008568_DL[76];
extern Gfx object_sst_0087C8_DL[73];
extern Gfx object_sst_008A10_DL[73];
extern Gfx object_sst_008C58_DL[76];
extern Gfx object_sst_008EB8_DL[73];
extern Gfx object_sst_009100_DL[73];
extern Gfx object_sst_009348_DL[76];
extern Gfx object_sst_0095A8_DL[73];
extern Gfx object_sst_0097F0_DL[73];
extern Gfx object_sst_009A38_DL[90];
extern Gfx object_sst_009D08_DL[76];
extern Gfx object_sst_009F68_DL[73];
extern StandardLimb object_sst_00A1B0_Limb;
extern StandardLimb object_sst_00A1BC_Limb;
extern StandardLimb object_sst_00A1C8_Limb;
extern StandardLimb object_sst_00A1D4_Limb;
extern StandardLimb object_sst_00A1E0_Limb;
extern StandardLimb object_sst_00A1EC_Limb;
extern StandardLimb object_sst_00A1F8_Limb;
extern StandardLimb object_sst_00A204_Limb;
extern StandardLimb object_sst_00A210_Limb;
extern StandardLimb object_sst_00A21C_Limb;
extern StandardLimb object_sst_00A228_Limb;
extern StandardLimb object_sst_00A234_Limb;
extern StandardLimb object_sst_00A240_Limb;
extern StandardLimb object_sst_00A24C_Limb;
extern StandardLimb object_sst_00A258_Limb;
extern StandardLimb object_sst_00A264_Limb;
extern StandardLimb object_sst_00A270_Limb;
extern StandardLimb object_sst_00A27C_Limb;
extern StandardLimb object_sst_00A288_Limb;
extern StandardLimb object_sst_00A294_Limb;
extern StandardLimb object_sst_00A2A0_Limb;
extern StandardLimb object_sst_00A2AC_Limb;
extern StandardLimb object_sst_00A2B8_Limb;
extern StandardLimb object_sst_00A2C4_Limb;
extern StandardLimb object_sst_00A2D0_Limb;
extern StandardLimb object_sst_00A2DC_Limb;
extern void* gBongoRightHandLimbs[];
typedef enum gBongoRightHandSkelLimb {
    /*  0 */ LIMB_OBJECT_SST_00A350_NONE,
    /*  1 */ LIMB_OBJECT_SST_00A1B0,
    /*  2 */ LIMB_OBJECT_SST_00A1BC,
    /*  3 */ LIMB_OBJECT_SST_00A1C8,
    /*  4 */ LIMB_OBJECT_SST_00A1D4,
    /*  5 */ LIMB_OBJECT_SST_00A1E0,
    /*  6 */ LIMB_OBJECT_SST_00A1EC,
    /*  7 */ LIMB_OBJECT_SST_00A1F8,
    /*  8 */ LIMB_OBJECT_SST_00A204,
    /*  9 */ LIMB_OBJECT_SST_00A210,
    /* 10 */ LIMB_OBJECT_SST_00A21C,
    /* 11 */ LIMB_OBJECT_SST_00A228,
    /* 12 */ LIMB_OBJECT_SST_00A234,
    /* 13 */ LIMB_OBJECT_SST_00A240,
    /* 14 */ LIMB_OBJECT_SST_00A24C,
    /* 15 */ LIMB_OBJECT_SST_00A258,
    /* 16 */ LIMB_OBJECT_SST_00A264,
    /* 17 */ LIMB_OBJECT_SST_00A270,
    /* 18 */ LIMB_OBJECT_SST_00A27C,
    /* 19 */ LIMB_OBJECT_SST_00A288,
    /* 20 */ LIMB_OBJECT_SST_00A294,
    /* 21 */ LIMB_OBJECT_SST_00A2A0,
    /* 22 */ LIMB_OBJECT_SST_00A2AC,
    /* 23 */ LIMB_OBJECT_SST_00A2B8,
    /* 24 */ LIMB_OBJECT_SST_00A2C4,
    /* 25 */ LIMB_OBJECT_SST_00A2D0,
    /* 26 */ LIMB_OBJECT_SST_00A2DC,
    /* 27 */ LIMB_OBJECT_SST_00A350_MAX
} gBongoRightHandSkelLimb;
extern FlexSkeletonHeader gBongoRightHandSkel;
extern s16 gBongoRightHandFlatPoseFrameData[];
extern JointIndex gBongoRightHandFlatPoseJointIndices[];
extern AnimationHeader gBongoRightHandFlatPoseAnim;
extern s16 gBongoRightHandOpenPoseFrameData[];
extern JointIndex gBongoRightHandOpenPoseJointIndices[];
extern AnimationHeader gBongoRightHandOpenPoseAnim;
extern s16 gBongoRightHandFistPoseFrameData[];
extern JointIndex gBongoRightHandFistPoseJointIndices[];
extern AnimationHeader gBongoRightHandFistPoseAnim;
extern s16 gBongoRightHandClenchFrameData[];
extern JointIndex gBongoRightHandClenchJointIndices[];
extern AnimationHeader gBongoRightHandClenchAnim;
extern s16 gBongoRightHandDamagePoseFrameData[];
extern JointIndex gBongoRightHandDamagePoseJointIndices[];
extern AnimationHeader gBongoRightHandDamagePoseAnim;
extern s16 gBongoRightHandPushoffPoseFrameData[];
extern JointIndex gBongoRightHandPushoffPoseJointIndices[];
extern AnimationHeader gBongoRightHandPushoffPoseAnim;
extern s16 gBongoRightHandHangPoseFrameData[];
extern JointIndex gBongoRightHandHangPoseJointIndices[];
extern AnimationHeader gBongoRightHandHangPoseAnim;
extern s16 gBongoHeadStunnedFrameData[];
extern JointIndex gBongoHeadStunnedJointIndices[];
extern AnimationHeader gBongoHeadStunnedAnim;
extern s16 gBongoHeadChargeFrameData[];
extern JointIndex gBongoHeadChargeJointIndices[];
extern AnimationHeader gBongoHeadChargeAnim;
extern s16 gBongoHeadKnockoutFrameData[];
extern JointIndex gBongoHeadKnockoutJointIndices[];
extern AnimationHeader gBongoHeadKnockoutAnim;
extern s16 gBongoHeadEyeCloseFrameData[];
extern JointIndex gBongoHeadEyeCloseJointIndices[];
extern AnimationHeader gBongoHeadEyeCloseAnim;
extern s16 gBongoHeadDamagedHandFrameData[];
extern JointIndex gBongoHeadDamagedHandJointIndices[];
extern AnimationHeader gBongoHeadDamagedHandAnim;
extern s16 gBongoHeadEyeOpenFrameData[];
extern JointIndex gBongoHeadEyeOpenJointIndices[];
extern AnimationHeader gBongoHeadEyeOpenAnim;
extern s16 gBongoHeadDamageFrameData[];
extern JointIndex gBongoHeadDamageJointIndices[];
extern AnimationHeader gBongoHeadDamageAnim;
extern s16 gBongoHeadRecoverFrameData[];
extern JointIndex gBongoHeadRecoverJointIndices[];
extern AnimationHeader gBongoHeadRecoverAnim;
extern s16 gBongoHeadEyeCloseIdleFrameData[];
extern JointIndex gBongoHeadEyeCloseIdleJointIndices[];
extern AnimationHeader gBongoHeadEyeCloseIdleAnim;
extern s16 gBongoHeadEyeOpenIdleFrameData[];
extern JointIndex gBongoHeadEyeOpenIdleJointIndices[];
extern AnimationHeader gBongoHeadEyeOpenIdleAnim;
extern Vtx object_sst_013C08_DL_0600E7D0_Vtx_fused_[];
extern Gfx object_sst_011370_DL[24];
extern Gfx object_sst_011430_DL[29];
extern Gfx object_sst_011518_DL[40];
extern Gfx object_sst_011658_DL[107];
extern Gfx object_sst_0119B0_DL[41];
extern Gfx object_sst_011AF8_DL[107];
extern Gfx object_sst_011E50_DL[41];
extern Gfx object_sst_011F98_DL[29];
extern Gfx object_sst_012080_DL[29];
extern Gfx object_sst_012168_DL[67];
extern Gfx object_sst_012380_DL[23];
extern Gfx object_sst_012438_DL[23];
extern Gfx object_sst_0124F0_DL[23];
extern Gfx object_sst_0125A8_DL[23];
extern Gfx object_sst_012660_DL[23];
extern Gfx object_sst_012718_DL[23];
extern Gfx object_sst_0127D0_DL[23];
extern Gfx object_sst_012888_DL[23];
extern Gfx object_sst_012940_DL[61];
extern Gfx object_sst_012B28_DL[47];
extern Gfx object_sst_012CA0_DL[61];
extern Gfx object_sst_012E88_DL[47];
extern Gfx object_sst_013000_DL[61];
extern Gfx object_sst_0131E8_DL[47];
extern Gfx object_sst_013360_DL[61];
extern Gfx object_sst_013548_DL[47];
extern Gfx object_sst_0136C0_DL[61];
extern Gfx object_sst_0138A8_DL[47];
extern Gfx object_sst_013A20_DL[61];
extern Gfx object_sst_013C08_DL[47];
#define gBongoTitleCardTex_WIDTH 128
#define gBongoTitleCardTex_HEIGHT 80
extern u64 gBongoTitleCardTex[TEX_LEN(u64, gBongoTitleCardTex_WIDTH, gBongoTitleCardTex_HEIGHT, 8)];
extern StandardLimb object_sst_016580_Limb;
extern StandardLimb object_sst_01658C_Limb;
extern StandardLimb object_sst_016598_Limb;
extern StandardLimb object_sst_0165A4_Limb;
extern StandardLimb object_sst_0165B0_Limb;
extern StandardLimb object_sst_0165BC_Limb;
extern StandardLimb object_sst_0165C8_Limb;
extern StandardLimb object_sst_0165D4_Limb;
extern StandardLimb object_sst_0165E0_Limb;
extern StandardLimb object_sst_0165EC_Limb;
extern StandardLimb object_sst_0165F8_Limb;
extern StandardLimb object_sst_016604_Limb;
extern StandardLimb object_sst_016610_Limb;
extern StandardLimb object_sst_01661C_Limb;
extern StandardLimb object_sst_016628_Limb;
extern StandardLimb object_sst_016634_Limb;
extern StandardLimb object_sst_016640_Limb;
extern StandardLimb object_sst_01664C_Limb;
extern StandardLimb object_sst_016658_Limb;
extern StandardLimb object_sst_016664_Limb;
extern StandardLimb object_sst_016670_Limb;
extern StandardLimb object_sst_01667C_Limb;
extern StandardLimb object_sst_016688_Limb;
extern StandardLimb object_sst_016694_Limb;
extern StandardLimb object_sst_0166A0_Limb;
extern StandardLimb object_sst_0166AC_Limb;
extern StandardLimb object_sst_0166B8_Limb;
extern StandardLimb object_sst_0166C4_Limb;
extern StandardLimb object_sst_0166D0_Limb;
extern StandardLimb object_sst_0166DC_Limb;
extern StandardLimb object_sst_0166E8_Limb;
extern StandardLimb object_sst_0166F4_Limb;
extern StandardLimb object_sst_016700_Limb;
extern StandardLimb object_sst_01670C_Limb;
extern StandardLimb object_sst_016718_Limb;
extern StandardLimb object_sst_016724_Limb;
extern StandardLimb object_sst_016730_Limb;
extern StandardLimb object_sst_01673C_Limb;
extern StandardLimb object_sst_016748_Limb;
extern StandardLimb object_sst_016754_Limb;
extern StandardLimb object_sst_016760_Limb;
extern StandardLimb object_sst_01676C_Limb;
extern StandardLimb object_sst_016778_Limb;
extern StandardLimb object_sst_016784_Limb;
extern void* gBongoHeadLimbs[];
typedef enum gBongoHeadSkelLimb {
    /*  0 */ LIMB_OBJECT_SST_016840_NONE,
    /*  1 */ LIMB_OBJECT_SST_016580,
    /*  2 */ LIMB_OBJECT_SST_01658C,
    /*  3 */ LIMB_OBJECT_SST_016598,
    /*  4 */ LIMB_OBJECT_SST_0165A4,
    /*  5 */ LIMB_OBJECT_SST_0165B0,
    /*  6 */ LIMB_OBJECT_SST_0165BC,
    /*  7 */ LIMB_OBJECT_SST_0165C8,
    /*  8 */ LIMB_OBJECT_SST_0165D4,
    /*  9 */ LIMB_OBJECT_SST_0165E0,
    /* 10 */ LIMB_OBJECT_SST_0165EC,
    /* 11 */ LIMB_OBJECT_SST_0165F8,
    /* 12 */ LIMB_OBJECT_SST_016604,
    /* 13 */ LIMB_OBJECT_SST_016610,
    /* 14 */ LIMB_OBJECT_SST_01661C,
    /* 15 */ LIMB_OBJECT_SST_016628,
    /* 16 */ LIMB_OBJECT_SST_016634,
    /* 17 */ LIMB_OBJECT_SST_016640,
    /* 18 */ LIMB_OBJECT_SST_01664C,
    /* 19 */ LIMB_OBJECT_SST_016658,
    /* 20 */ LIMB_OBJECT_SST_016664,
    /* 21 */ LIMB_OBJECT_SST_016670,
    /* 22 */ LIMB_OBJECT_SST_01667C,
    /* 23 */ LIMB_OBJECT_SST_016688,
    /* 24 */ LIMB_OBJECT_SST_016694,
    /* 25 */ LIMB_OBJECT_SST_0166A0,
    /* 26 */ LIMB_OBJECT_SST_0166AC,
    /* 27 */ LIMB_OBJECT_SST_0166B8,
    /* 28 */ LIMB_OBJECT_SST_0166C4,
    /* 29 */ LIMB_OBJECT_SST_0166D0,
    /* 30 */ LIMB_OBJECT_SST_0166DC,
    /* 31 */ LIMB_OBJECT_SST_0166E8,
    /* 32 */ LIMB_OBJECT_SST_0166F4,
    /* 33 */ LIMB_OBJECT_SST_016700,
    /* 34 */ LIMB_OBJECT_SST_01670C,
    /* 35 */ LIMB_OBJECT_SST_016718,
    /* 36 */ LIMB_OBJECT_SST_016724,
    /* 37 */ LIMB_OBJECT_SST_016730,
    /* 38 */ LIMB_OBJECT_SST_01673C,
    /* 39 */ LIMB_OBJECT_SST_016748,
    /* 40 */ LIMB_OBJECT_SST_016754,
    /* 41 */ LIMB_OBJECT_SST_016760,
    /* 42 */ LIMB_OBJECT_SST_01676C,
    /* 43 */ LIMB_OBJECT_SST_016778,
    /* 44 */ LIMB_OBJECT_SST_016784,
    /* 45 */ LIMB_OBJECT_SST_016840_MAX
} gBongoHeadSkelLimb;
extern FlexSkeletonHeader gBongoHeadSkel;
extern Vtx gBongoIceShardDL_06016850_Vtx_fused_[];
extern Gfx gBongoIceCrystalDL[20];
extern Gfx gBongoIceShardDL[12];
#define object_sst_016BE0_Tex_WIDTH 32
#define object_sst_016BE0_Tex_HEIGHT 64
extern u64 object_sst_016BE0_Tex[TEX_LEN(u64, object_sst_016BE0_Tex_WIDTH, object_sst_016BE0_Tex_HEIGHT, 16)];
extern Vtx gBongoDrumDL_06017BE0_Vtx_fused_[];
extern Gfx gBongoDrumDL[30];
extern BgCamInfo gBongoDrumBgCamList[];
extern SurfaceType gBongoDrumSurfaceTypes[];
extern CollisionPoly gBongoDrumPolyList[];
extern Vec3s gBongoDrumVtxList[];
extern CollisionHeader gBongoDrumCol;
#define object_sst_018130_Tex_WIDTH 4
#define object_sst_018130_Tex_HEIGHT 8
extern u64 object_sst_018130_Tex[TEX_LEN(u64, object_sst_018130_Tex_WIDTH, object_sst_018130_Tex_HEIGHT, 16)];
#define object_sst_018170_Tex_WIDTH 8
#define object_sst_018170_Tex_HEIGHT 16
extern u64 object_sst_018170_Tex[TEX_LEN(u64, object_sst_018170_Tex_WIDTH, object_sst_018170_Tex_HEIGHT, 16)];
#define object_sst_018270_Tex_WIDTH 8
#define object_sst_018270_Tex_HEIGHT 16
extern u64 object_sst_018270_Tex[TEX_LEN(u64, object_sst_018270_Tex_WIDTH, object_sst_018270_Tex_HEIGHT, 16)];
#define object_sst_018370_Tex_WIDTH 4
#define object_sst_018370_Tex_HEIGHT 8
extern u64 object_sst_018370_Tex[TEX_LEN(u64, object_sst_018370_Tex_WIDTH, object_sst_018370_Tex_HEIGHT, 16)];
#define object_sst_0183B0_Tex_WIDTH 16
#define object_sst_0183B0_Tex_HEIGHT 16
extern u64 object_sst_0183B0_Tex[TEX_LEN(u64, object_sst_0183B0_Tex_WIDTH, object_sst_0183B0_Tex_HEIGHT, 16)];
#define object_sst_0185B0_Tex_WIDTH 8
#define object_sst_0185B0_Tex_HEIGHT 16
extern u64 object_sst_0185B0_Tex[TEX_LEN(u64, object_sst_0185B0_Tex_WIDTH, object_sst_0185B0_Tex_HEIGHT, 16)];
#define object_sst_0186B0_Tex_WIDTH 8
#define object_sst_0186B0_Tex_HEIGHT 16
extern u64 object_sst_0186B0_Tex[TEX_LEN(u64, object_sst_0186B0_Tex_WIDTH, object_sst_0186B0_Tex_HEIGHT, 16)];
#define object_sst_0187B0_Tex_WIDTH 16
#define object_sst_0187B0_Tex_HEIGHT 32
extern u64 object_sst_0187B0_Tex[TEX_LEN(u64, object_sst_0187B0_Tex_WIDTH, object_sst_0187B0_Tex_HEIGHT, 16)];
#define object_sst_018BB0_Tex_WIDTH 8
#define object_sst_018BB0_Tex_HEIGHT 16
extern u64 object_sst_018BB0_Tex[TEX_LEN(u64, object_sst_018BB0_Tex_WIDTH, object_sst_018BB0_Tex_HEIGHT, 16)];
#define object_sst_018CB0_Tex_WIDTH 8
#define object_sst_018CB0_Tex_HEIGHT 16
extern u64 object_sst_018CB0_Tex[TEX_LEN(u64, object_sst_018CB0_Tex_WIDTH, object_sst_018CB0_Tex_HEIGHT, 16)];
#define object_sst_018DB0_Tex_WIDTH 8
#define object_sst_018DB0_Tex_HEIGHT 32
extern u64 object_sst_018DB0_Tex[TEX_LEN(u64, object_sst_018DB0_Tex_WIDTH, object_sst_018DB0_Tex_HEIGHT, 16)];
#define object_sst_018FB0_Tex_WIDTH 16
#define object_sst_018FB0_Tex_HEIGHT 16
extern u64 object_sst_018FB0_Tex[TEX_LEN(u64, object_sst_018FB0_Tex_WIDTH, object_sst_018FB0_Tex_HEIGHT, 16)];
#define object_sst_0191B0_Tex_WIDTH 8
#define object_sst_0191B0_Tex_HEIGHT 16
extern u64 object_sst_0191B0_Tex[TEX_LEN(u64, object_sst_0191B0_Tex_WIDTH, object_sst_0191B0_Tex_HEIGHT, 16)];
#define gBongoUnused1Tex_WIDTH 8
#define gBongoUnused1Tex_HEIGHT 8
extern u64 gBongoUnused1Tex[TEX_LEN(u64, gBongoUnused1Tex_WIDTH, gBongoUnused1Tex_HEIGHT, 16)];
#define object_sst_019330_Tex_WIDTH 4
#define object_sst_019330_Tex_HEIGHT 16
extern u64 object_sst_019330_Tex[TEX_LEN(u64, object_sst_019330_Tex_WIDTH, object_sst_019330_Tex_HEIGHT, 16)];
#define object_sst_0193B0_Tex_WIDTH 16
#define object_sst_0193B0_Tex_HEIGHT 16
extern u64 object_sst_0193B0_Tex[TEX_LEN(u64, object_sst_0193B0_Tex_WIDTH, object_sst_0193B0_Tex_HEIGHT, 16)];
#define gBongoUnused2Tex_WIDTH 16
#define gBongoUnused2Tex_HEIGHT 16
extern u64 gBongoUnused2Tex[TEX_LEN(u64, gBongoUnused2Tex_WIDTH, gBongoUnused2Tex_HEIGHT, 16)];

#endif
