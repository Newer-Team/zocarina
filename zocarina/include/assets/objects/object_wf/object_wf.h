#ifndef OBJECT_WF_H
#define OBJECT_WF_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

#define gWolfosWhiteFurTex_WIDTH 8
#define gWolfosWhiteFurTex_HEIGHT 16
extern u64 gWolfosWhiteFurTex[TEX_LEN(u64, gWolfosWhiteFurTex_WIDTH, gWolfosWhiteFurTex_HEIGHT, 16)];
#define gWolfosWhiteToothClawTex_WIDTH 8
#define gWolfosWhiteToothClawTex_HEIGHT 8
extern u64 gWolfosWhiteToothClawTex[TEX_LEN(u64, gWolfosWhiteToothClawTex_WIDTH, gWolfosWhiteToothClawTex_HEIGHT, 16)];
#define gWolfosWhiteMouthTex_WIDTH 8
#define gWolfosWhiteMouthTex_HEIGHT 8
extern u64 gWolfosWhiteMouthTex[TEX_LEN(u64, gWolfosWhiteMouthTex_WIDTH, gWolfosWhiteMouthTex_HEIGHT, 16)];
#define gWolfosWhiteTongueTex_WIDTH 8
#define gWolfosWhiteTongueTex_HEIGHT 8
extern u64 gWolfosWhiteTongueTex[TEX_LEN(u64, gWolfosWhiteTongueTex_WIDTH, gWolfosWhiteTongueTex_HEIGHT, 16)];
#define gWolfosWhiteNostrilTex_WIDTH 8
#define gWolfosWhiteNostrilTex_HEIGHT 8
extern u64 gWolfosWhiteNostrilTex[TEX_LEN(u64, gWolfosWhiteNostrilTex_WIDTH, gWolfosWhiteNostrilTex_HEIGHT, 16)];
#define gWolfosWhiteEyeOpenTex_WIDTH 16
#define gWolfosWhiteEyeOpenTex_HEIGHT 16
extern u64 gWolfosWhiteEyeOpenTex[TEX_LEN(u64, gWolfosWhiteEyeOpenTex_WIDTH, gWolfosWhiteEyeOpenTex_HEIGHT, 16)];
extern Vtx gWolfosWhiteBackLeftPawVtx[];
extern Vtx gWolfosWhiteBackLeftPasternVtx[];
extern Vtx gWolfosWhiteBackLeftShinVtx[];
extern Vtx gWolfosWhiteBackLeftThighVtx[];
extern Vtx gWolfosWhiteBackRightPawVtx[];
extern Vtx gWolfosWhiteBackRightPasternVtx[];
extern Vtx gWolfosWhiteBackRightShinVtx[];
extern Vtx gWolfosWhiteBackRightThighVtx[];
extern Vtx gWolfosWhiteFrontRightLowerLegVtx[];
extern Vtx gWolfosWhiteFrontRightUpperLegVtx[];
extern Vtx gWolfosWhiteFrontLeftLowerLegVtx[];
extern Vtx gWolfosWhiteFrontLeftUpperLegVtx[];
extern Vtx gWolfosWhiteThoraxVtx[];
extern Vtx gWolfosWhiteAbdomenVtx[];
extern Gfx gWolfosWhiteAbdomenDL[25];
extern Gfx gWolfosWhiteBackRightThighDL[30];
extern Gfx gWolfosWhiteBackRightShinDL[30];
extern Gfx gWolfosWhiteBackRightPasternDL[26];
extern Gfx gWolfosWhiteBackRightPawDL[32];
extern Gfx gWolfosWhiteBackLeftThighDL[30];
extern Gfx gWolfosWhiteBackLeftShinDL[30];
extern Gfx gWolfosWhiteBackLeftPasternDL[26];
extern Gfx gWolfosWhiteBackLeftPawDL[32];
extern Gfx gWolfosWhiteThoraxDL[36];
extern Gfx gWolfosWhiteFrontLeftUpperLegDL[37];
extern Gfx gWolfosWhiteFrontLeftLowerLegDL[34];
extern Gfx gWolfosWhiteFrontRightUpperLegDL[37];
extern Gfx gWolfosWhiteFrontRightLowerLegDL[34];
#define gWolfosWhiteEyeHalfTex_WIDTH 16
#define gWolfosWhiteEyeHalfTex_HEIGHT 16
extern u64 gWolfosWhiteEyeHalfTex[TEX_LEN(u64, gWolfosWhiteEyeHalfTex_WIDTH, gWolfosWhiteEyeHalfTex_HEIGHT, 16)];
#define gWolfosWhiteEyeNarrowTex_WIDTH 16
#define gWolfosWhiteEyeNarrowTex_HEIGHT 16
extern u64 gWolfosWhiteEyeNarrowTex[TEX_LEN(u64, gWolfosWhiteEyeNarrowTex_WIDTH, gWolfosWhiteEyeNarrowTex_HEIGHT, 16)];
extern Vtx gWolfosWhiteTailVtx[];
extern Vtx gWolfosWhiteFrontLeftClawVtx[];
extern Vtx gWolfosWhiteFrontRightClawVtx[];
extern Vtx gWolfosWhiteHeadVtx[];
extern Vtx gWolfosWhiteEyesVtx[];
extern Gfx gWolfosWhiteTailDL[20];
extern Gfx gWolfosWhiteFrontLeftClawDL[25];
extern Gfx gWolfosWhiteFrontRightClawDL[25];
extern Gfx gWolfosWhiteHeadDL[100];
extern Gfx gWolfosWhiteEyesDL[19];
extern StandardLimb gWolfosWhiteRootLimb;
extern StandardLimb gWolfosWhiteBackLeftThighLimb;
extern StandardLimb gWolfosWhiteBackLeftShinLimb;
extern StandardLimb gWolfosWhiteBackLeftPasternLimb;
extern StandardLimb gWolfosWhiteBackLeftPawLimb;
extern StandardLimb gWolfosWhiteTailLimb;
extern StandardLimb gWolfosWhiteAbdomenLimb;
extern StandardLimb gWolfosWhiteBackRightThighLimb;
extern StandardLimb gWolfosWhiteBackRightShinLimb;
extern StandardLimb gWolfosWhiteBackRightPasternLimb;
extern StandardLimb gWolfosWhiteBackRightPawLimb;
extern StandardLimb gWolfosWhiteThoraxLimb;
extern StandardLimb gWolfosWhiteFrontRightUpperLegLimb;
extern StandardLimb gWolfosWhiteFrontRightLowerLegLimb;
extern StandardLimb gWolfosWhiteFrontRightClawLimb;
extern StandardLimb gWolfosWhiteHeadRootLimb;
extern StandardLimb gWolfosWhiteHeadLimb;
extern StandardLimb gWolfosWhiteEyesLimb;
extern StandardLimb gWolfosWhiteFrontLeftUpperLegLimb;
extern StandardLimb gWolfosWhiteFrontLeftLowerLegLimb;
extern StandardLimb gWolfosWhiteFrontLeftClawLimb;
extern void* gWolfosWhiteLimbs[];
typedef enum gWolfosWhiteSkelLimb {
    /*  0 */ LIMB_OBJECT_WF_003BC0_NONE,
    /*  1 */ LIMB_OBJECT_WF_003A70,
    /*  2 */ LIMB_OBJECT_WF_003A7C,
    /*  3 */ LIMB_OBJECT_WF_003A88,
    /*  4 */ LIMB_OBJECT_WF_003A94,
    /*  5 */ LIMB_OBJECT_WF_003AA0,
    /*  6 */ LIMB_OBJECT_WF_003AAC,
    /*  7 */ LIMB_OBJECT_WF_003AB8,
    /*  8 */ LIMB_OBJECT_WF_003AC4,
    /*  9 */ LIMB_OBJECT_WF_003AD0,
    /* 10 */ LIMB_OBJECT_WF_003ADC,
    /* 11 */ LIMB_OBJECT_WF_003AE8,
    /* 12 */ LIMB_OBJECT_WF_003AF4,
    /* 13 */ LIMB_OBJECT_WF_003B00,
    /* 14 */ LIMB_OBJECT_WF_003B0C,
    /* 15 */ LIMB_OBJECT_WF_003B18,
    /* 16 */ LIMB_OBJECT_WF_003B24,
    /* 17 */ LIMB_OBJECT_WF_003B30,
    /* 18 */ LIMB_OBJECT_WF_003B3C,
    /* 19 */ LIMB_OBJECT_WF_003B48,
    /* 20 */ LIMB_OBJECT_WF_003B54,
    /* 21 */ LIMB_OBJECT_WF_003B60,
    /* 22 */ LIMB_OBJECT_WF_003BC0_MAX
} gWolfosWhiteSkelLimb;
extern FlexSkeletonHeader gWolfosWhiteSkel;
extern s16 gWolfosSlashingFrameData[];
extern JointIndex gWolfosSlashingJointIndices[];
extern AnimationHeader gWolfosSlashingAnim;
extern u8 object_wf_zeroes_Blob_004648[];
extern s16 gWolfosBackflippingFrameData[];
extern JointIndex gWolfosBackflippingJointIndices[];
extern AnimationHeader gWolfosBackflippingAnim;
extern u8 object_wf_zeroes_Blob_004AE0[];
extern s16 gWolfosBlockingFrameData[];
extern JointIndex gWolfosBlockingJointIndices[];
extern AnimationHeader gWolfosBlockingAnim;
extern s16 gWolfosRearingUpFallingOverFrameData[];
extern JointIndex gWolfosRearingUpFallingOverJointIndices[];
extern AnimationHeader gWolfosRearingUpFallingOverAnim;
extern u8 object_wf_zeroes_Blob_005440[];
extern s16 gWolfosRunningFrameData[];
extern JointIndex gWolfosRunningJointIndices[];
extern AnimationHeader gWolfosRunningAnim;
extern u8 object_wf_zeroes_Blob_0057B0[];
extern Vtx gWolfosNormalBackLeftPawVtx[];
extern Vtx gWolfosNormalBackLeftPasternVtx[];
extern Vtx gWolfosNormalBackLeftShinVtx[];
extern Vtx gWolfosNormalBackLeftThighVtx[];
extern Vtx gWolfosNormalBackRightPawVtx[];
extern Vtx gWolfosNormalBackRightPasternVtx[];
extern Vtx gWolfosNormalBackRightShinVtx[];
extern Vtx gWolfosNormalBackRightThighVtx[];
extern Vtx gWolfosNormalFrontRightLowerLegVtx[];
extern Vtx gWolfosNormalFrontRightUpperLegVtx[];
extern Vtx gWolfosNormalFrontLeftLowerLegVtx[];
extern Vtx gWolfosNormalFrontLeftUpperLegVtx[];
extern Vtx gWolfosNormalThoraxVtx[];
extern Vtx gWolfosNormalAbdomenVtx[];
extern Gfx gWolfosNormalAbdomenDL[25];
extern Gfx gWolfosNormalBackRightThighDL[30];
extern Gfx gWolfosNormalBackRightShinDL[30];
extern Gfx gWolfosNormalBackRightPasternDL[26];
extern Gfx gWolfosNormalBackRightPawDL[32];
extern Gfx gWolfosNormalBackLeftThighDL[30];
extern Gfx gWolfosNormalBackLeftShinDL[30];
extern Gfx gWolfosNormalBackLeftPasternDL[26];
extern Gfx gWolfosNormalBackLeftPawDL[32];
extern Gfx gWolfosNormalThoraxDL[36];
extern Gfx gWolfosNormalFrontLeftUpperLegDL[35];
extern Gfx gWolfosNormalFrontLeftLowerLegDL[34];
extern Gfx gWolfosNormalFrontRightUpperLegDL[35];
extern Gfx gWolfosNormalFrontRightLowerLegDL[34];
#define gWolfosNormalEyeOpenTex_WIDTH 16
#define gWolfosNormalEyeOpenTex_HEIGHT 16
extern u64 gWolfosNormalEyeOpenTex[TEX_LEN(u64, gWolfosNormalEyeOpenTex_WIDTH, gWolfosNormalEyeOpenTex_HEIGHT, 16)];
#define gWolfosNormalFurTex_WIDTH 16
#define gWolfosNormalFurTex_HEIGHT 32
extern u64 gWolfosNormalFurTex[TEX_LEN(u64, gWolfosNormalFurTex_WIDTH, gWolfosNormalFurTex_HEIGHT, 16)];
#define gWolfosNormalMouthTex_WIDTH 8
#define gWolfosNormalMouthTex_HEIGHT 8
extern u64 gWolfosNormalMouthTex[TEX_LEN(u64, gWolfosNormalMouthTex_WIDTH, gWolfosNormalMouthTex_HEIGHT, 16)];
#define gWolfosNormalTongueTex_WIDTH 8
#define gWolfosNormalTongueTex_HEIGHT 8
extern u64 gWolfosNormalTongueTex[TEX_LEN(u64, gWolfosNormalTongueTex_WIDTH, gWolfosNormalTongueTex_HEIGHT, 16)];
#define gWolfosNormalToothClawTex_WIDTH 8
#define gWolfosNormalToothClawTex_HEIGHT 8
extern u64 gWolfosNormalToothClawTex[TEX_LEN(u64, gWolfosNormalToothClawTex_WIDTH, gWolfosNormalToothClawTex_HEIGHT, 16)];
#define gWolfosNormalNostrilTex_WIDTH 8
#define gWolfosNormalNostrilTex_HEIGHT 8
extern u64 gWolfosNormalNostrilTex[TEX_LEN(u64, gWolfosNormalNostrilTex_WIDTH, gWolfosNormalNostrilTex_HEIGHT, 16)];
#define gWolfosNormalEyeHalfTex_WIDTH 16
#define gWolfosNormalEyeHalfTex_HEIGHT 16
extern u64 gWolfosNormalEyeHalfTex[TEX_LEN(u64, gWolfosNormalEyeHalfTex_WIDTH, gWolfosNormalEyeHalfTex_HEIGHT, 16)];
#define gWolfosNormalEyeNarrowTex_WIDTH 16
#define gWolfosNormalEyeNarrowTex_HEIGHT 16
extern u64 gWolfosNormalEyeNarrowTex[TEX_LEN(u64, gWolfosNormalEyeNarrowTex_WIDTH, gWolfosNormalEyeNarrowTex_HEIGHT, 16)];
extern Vtx gWolfosNormalTailVtx[];
extern Vtx gWolfosNormalFrontLeftClawVtx[];
extern Vtx gWolfosNormalFrontRightClawVtx[];
extern Vtx gWolfosNormalHeadVtx[];
extern Vtx gWolfosNormalEyesVtx[];
extern Gfx gWolfosNormalTailDL[20];
extern Gfx gWolfosNormalFrontLeftClawDL[25];
extern Gfx gWolfosNormalFrontRightClawDL[25];
extern Gfx gWolfosNormalHeadDL[100];
extern Gfx gWolfosNormalEyesDL[19];
extern StandardLimb gWolfosNormalRootLimb;
extern StandardLimb gWolfosNormalBackLeftThighLimb;
extern StandardLimb gWolfosNormalBackLeftShinLimb;
extern StandardLimb gWolfosNormalBackLeftPasternLimb;
extern StandardLimb gWolfosNormalBackLeftPawLimb;
extern StandardLimb gWolfosNormalTailLimb;
extern StandardLimb gWolfosNormalAbdomenLimb;
extern StandardLimb gWolfosNormalBackRightThighLimb;
extern StandardLimb gWolfosNormalBackRightShinLimb;
extern StandardLimb gWolfosNormalBackRightPasternLimb;
extern StandardLimb gWolfosNormalBackRightPawLimb;
extern StandardLimb gWolfosNormalThoraxLimb;
extern StandardLimb gWolfosNormalFrontRightUpperLegLimb;
extern StandardLimb gWolfosNormalFrontRightLowerLegLimb;
extern StandardLimb gWolfosNormalFrontRightClawLimb;
extern StandardLimb gWolfosNormalHeadRootLimb;
extern StandardLimb gWolfosNormalHeadLimb;
extern StandardLimb gWolfosNormalEyesLimb;
extern StandardLimb gWolfosNormalFrontLeftUpperLegLimb;
extern StandardLimb gWolfosNormalFrontLeftLowerLegLimb;
extern StandardLimb gWolfosNormalFrontLeftClawLimb;
extern void* gWolfosNormalLimbs[];
typedef enum gWolfosNormalSkelLimb {
    /*  0 */ LIMB_OBJECT_WF_009690_NONE,
    /*  1 */ LIMB_OBJECT_WF_009540,
    /*  2 */ LIMB_OBJECT_WF_00954C,
    /*  3 */ LIMB_OBJECT_WF_009558,
    /*  4 */ LIMB_OBJECT_WF_009564,
    /*  5 */ LIMB_OBJECT_WF_009570,
    /*  6 */ LIMB_OBJECT_WF_00957C,
    /*  7 */ LIMB_OBJECT_WF_009588,
    /*  8 */ LIMB_OBJECT_WF_009594,
    /*  9 */ LIMB_OBJECT_WF_0095A0,
    /* 10 */ LIMB_OBJECT_WF_0095AC,
    /* 11 */ LIMB_OBJECT_WF_0095B8,
    /* 12 */ LIMB_OBJECT_WF_0095C4,
    /* 13 */ LIMB_OBJECT_WF_0095D0,
    /* 14 */ LIMB_OBJECT_WF_0095DC,
    /* 15 */ LIMB_OBJECT_WF_0095E8,
    /* 16 */ LIMB_OBJECT_WF_0095F4,
    /* 17 */ LIMB_OBJECT_WF_009600,
    /* 18 */ LIMB_OBJECT_WF_00960C,
    /* 19 */ LIMB_OBJECT_WF_009618,
    /* 20 */ LIMB_OBJECT_WF_009624,
    /* 21 */ LIMB_OBJECT_WF_009630,
    /* 22 */ LIMB_OBJECT_WF_009690_MAX
} gWolfosNormalSkelLimb;
extern FlexSkeletonHeader gWolfosNormalSkel;
extern s16 gWolfosSidesteppingFrameData[];
extern JointIndex gWolfosSidesteppingJointIndices[];
extern AnimationHeader gWolfosSidesteppingAnim;
extern u8 object_wf_zeroes_Blob_0098D8[];
extern s16 gWolfosDamagedFrameData[];
extern JointIndex gWolfosDamagedJointIndices[];
extern AnimationHeader gWolfosDamagedAnim;
extern u8 object_wf_zeroes_Blob_009B30[];
extern s16 gWolfosWaitingFrameData[];
extern JointIndex gWolfosWaitingJointIndices[];
extern AnimationHeader gWolfosWaitingAnim;
extern u8 object_wf_zeroes_Blob_00A4BC[];

#endif
