#ifndef OBJECT_TR_H
#define OBJECT_TR_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gKotakeKoumeLookOverRightShoulderFrameData[];
extern JointIndex gKotakeKoumeLookOverRightShoulderJointIndices[];
extern AnimationHeader gKotakeKoumeLookOverRightShoulderAnim;
extern s16 gKotakeKoumeLookingOverRightShoulderFrameData[];
extern JointIndex gKotakeKoumeLookingOverRightShoulderJointIndices[];
extern AnimationHeader gKotakeKoumeLookingOverRightShoulderAnim;
extern s16 gKotakeKoumeStandingBroomOverLeftShoulderFrameData[];
extern JointIndex gKotakeKoumeStandingBroomOverLeftShoulderJointIndices[];
extern AnimationHeader gKotakeKoumeStandingBroomOverLeftShoulderAnim;
extern s16 gKotakeKoumeLookOverLeftShoulderFrameData[];
extern JointIndex gKotakeKoumeLookOverLeftShoulderJointIndices[];
extern AnimationHeader gKotakeKoumeLookOverLeftShoulderAnim;
extern s16 gKotakeKoumeLookingOverLeftShoulderFrameData[];
extern JointIndex gKotakeKoumeLookingOverLeftShoulderJointIndices[];
extern AnimationHeader gKotakeKoumeLookingOverLeftShoulderAnim;
extern s16 gKotakeKoumeStandingBroomOverRightShoulderFrameData[];
extern JointIndex gKotakeKoumeStandingBroomOverRightShoulderJointIndices[];
extern AnimationHeader gKotakeKoumeStandingBroomOverRightShoulderAnim;
extern s16 gKotakeKoumeFlyFrameData[];
extern JointIndex gKotakeKoumeFlyJointIndices[];
extern AnimationHeader gKotakeKoumeFlyAnim;
extern s16 gKotakeKoumeStandingBroomOverRightShoulderUnusedFrameData[];
extern JointIndex gKotakeKoumeStandingBroomOverRightShoulderUnusedJointIndices[];
extern AnimationHeader gKotakeKoumeStandingBroomOverRightShoulderUnusedAnim;
extern Vtx gKotakeVtx[];
extern Gfx gKotakePelvisDL[48];
extern Gfx gKotakeTorsoDL[44];
extern Gfx gKotakeNeckDL[40];
extern Gfx gKotakeLeftBraidStartDL[34];
extern Gfx gKotakeLeftBraidEndDL[31];
extern Gfx gKotakeRightBraidStartDL[34];
extern Gfx gKotakeRightBraidEndDL[31];
extern Gfx gKotakeRightSleeveStartDL[36];
extern Gfx gKotakeRightSleeveFrontDL[48];
extern Gfx gKotakeRightSleeveMidDL[37];
extern Gfx gKotakeRightSleeveEndDL[36];
extern Gfx gKotakeLeftSleeveStartDL[36];
extern Gfx gKotakeLeftSleeveFrontDL[48];
extern Gfx gKotakeLeftSleeveMidDL[37];
extern Gfx gKotakeLeftSleeveEndDL[36];
extern Gfx gKotakeRightThighDL[1];
extern Gfx gKotakeLeftThighDL[1];
//#define gKotakeKoumeTLUT_TLUT_COUNT 212
extern u64 gKotakeKoumeTLUT[];
#define gKotakeGerudoFabricTex_WIDTH 32
#define gKotakeGerudoFabricTex_HEIGHT 32
extern u64 gKotakeGerudoFabricTex[TEX_LEN(u64, gKotakeGerudoFabricTex_WIDTH, gKotakeGerudoFabricTex_HEIGHT, 16)];
#define gKotakeRobeTex_WIDTH 16
#define gKotakeRobeTex_HEIGHT 16
extern u64 gKotakeRobeTex[TEX_LEN(u64, gKotakeRobeTex_WIDTH, gKotakeRobeTex_HEIGHT, 16)];
#define gKotakeKoumeRobePatternTex_WIDTH 16
#define gKotakeKoumeRobePatternTex_HEIGHT 16
extern u64 gKotakeKoumeRobePatternTex[TEX_LEN(u64, gKotakeKoumeRobePatternTex_WIDTH, gKotakeKoumeRobePatternTex_HEIGHT, 16)];
#define gKotakeKoumeRobeTrimTex_WIDTH 16
#define gKotakeKoumeRobeTrimTex_HEIGHT 16
extern u64 gKotakeKoumeRobeTrimTex[TEX_LEN(u64, gKotakeKoumeRobeTrimTex_WIDTH, gKotakeKoumeRobeTrimTex_HEIGHT, 16)];
#define gKotakeKoumeEyeOpenTex_WIDTH 32
#define gKotakeKoumeEyeOpenTex_HEIGHT 32
extern u64 gKotakeKoumeEyeOpenTex[TEX_LEN(u64, gKotakeKoumeEyeOpenTex_WIDTH, gKotakeKoumeEyeOpenTex_HEIGHT, 8)];
#define gKotakeKoumeSkinTex_WIDTH 16
#define gKotakeKoumeSkinTex_HEIGHT 8
extern u64 gKotakeKoumeSkinTex[TEX_LEN(u64, gKotakeKoumeSkinTex_WIDTH, gKotakeKoumeSkinTex_HEIGHT, 8)];
#define gKotakeKoumeMouthTex_WIDTH 8
#define gKotakeKoumeMouthTex_HEIGHT 8
extern u64 gKotakeKoumeMouthTex[TEX_LEN(u64, gKotakeKoumeMouthTex_WIDTH, gKotakeKoumeMouthTex_HEIGHT, 8)];
#define gKotakeKoumeHairTex_WIDTH 8
#define gKotakeKoumeHairTex_HEIGHT 32
extern u64 gKotakeKoumeHairTex[TEX_LEN(u64, gKotakeKoumeHairTex_WIDTH, gKotakeKoumeHairTex_HEIGHT, 16)];
#define gKotakeKoumeEarTex_WIDTH 8
#define gKotakeKoumeEarTex_HEIGHT 8
extern u64 gKotakeKoumeEarTex[TEX_LEN(u64, gKotakeKoumeEarTex_WIDTH, gKotakeKoumeEarTex_HEIGHT, 8)];
#define gKotakeKoumeFingerTex_WIDTH 8
#define gKotakeKoumeFingerTex_HEIGHT 16
extern u64 gKotakeKoumeFingerTex[TEX_LEN(u64, gKotakeKoumeFingerTex_WIDTH, gKotakeKoumeFingerTex_HEIGHT, 8)];
#define gKotakeKoumeBroomHandleTex_WIDTH 8
#define gKotakeKoumeBroomHandleTex_HEIGHT 8
extern u64 gKotakeKoumeBroomHandleTex[TEX_LEN(u64, gKotakeKoumeBroomHandleTex_WIDTH, gKotakeKoumeBroomHandleTex_HEIGHT, 16)];
#define gKotakeKoumeBroomHeadTex_WIDTH 16
#define gKotakeKoumeBroomHeadTex_HEIGHT 32
extern u64 gKotakeKoumeBroomHeadTex[TEX_LEN(u64, gKotakeKoumeBroomHeadTex_WIDTH, gKotakeKoumeBroomHeadTex_HEIGHT, 16)];
#define gKotakeKoumeJewelHolderTex_WIDTH 16
#define gKotakeKoumeJewelHolderTex_HEIGHT 8
extern u64 gKotakeKoumeJewelHolderTex[TEX_LEN(u64, gKotakeKoumeJewelHolderTex_WIDTH, gKotakeKoumeJewelHolderTex_HEIGHT, 16)];
#define gKotakeJewelTex_WIDTH 8
#define gKotakeJewelTex_HEIGHT 8
extern u64 gKotakeJewelTex[TEX_LEN(u64, gKotakeJewelTex_WIDTH, gKotakeJewelTex_HEIGHT, 16)];
#define gKotakeKoumeNeckTex_WIDTH 8
#define gKotakeKoumeNeckTex_HEIGHT 8
extern u64 gKotakeKoumeNeckTex[TEX_LEN(u64, gKotakeKoumeNeckTex_WIDTH, gKotakeKoumeNeckTex_HEIGHT, 8)];
#define gKotakeKoumeNostrilsTex_WIDTH 8
#define gKotakeKoumeNostrilsTex_HEIGHT 8
extern u64 gKotakeKoumeNostrilsTex[TEX_LEN(u64, gKotakeKoumeNostrilsTex_WIDTH, gKotakeKoumeNostrilsTex_HEIGHT, 8)];
#define gKotakeKoumeEyeHalfTex_WIDTH 32
#define gKotakeKoumeEyeHalfTex_HEIGHT 32
extern u64 gKotakeKoumeEyeHalfTex[TEX_LEN(u64, gKotakeKoumeEyeHalfTex_WIDTH, gKotakeKoumeEyeHalfTex_HEIGHT, 8)];
#define gKotakeKoumeEyeClosedTex_WIDTH 32
#define gKotakeKoumeEyeClosedTex_HEIGHT 32
extern u64 gKotakeKoumeEyeClosedTex[TEX_LEN(u64, gKotakeKoumeEyeClosedTex_WIDTH, gKotakeKoumeEyeClosedTex_HEIGHT, 8)];
extern Vtx gKotakeHeadVtx[];
extern Vtx gKotakeTeethVtx[];
extern Vtx gKotakeRightShinVtx[];
extern Vtx gKotakeLeftShinVtx[];
extern Vtx gKotakeBroomVtx[];
extern Vtx gKotakeRightFootVtx[];
extern Vtx gKotakeLeftFootVtx[];
extern Vtx gKotakeRightHandVtx[];
extern Vtx gKotakeLeftHandVtx[];
extern Gfx gKotakeHeadDL[198];
extern Gfx gKotakeTeethDL[12];
extern Gfx gKotakeRightShinDL[22];
extern Gfx gKotakeLeftShinDL[22];
extern Gfx gKotakeBroomDL[53];
extern Gfx gKotakeRightFootDL[19];
extern Gfx gKotakeLeftFootDL[19];
extern Gfx gKotakeRightHandDL[45];
extern Gfx gKotakeLeftHandDL[45];
#define gKotakeKoumeBraidEndTex_WIDTH 8
#define gKotakeKoumeBraidEndTex_HEIGHT 8
extern u64 gKotakeKoumeBraidEndTex[TEX_LEN(u64, gKotakeKoumeBraidEndTex_WIDTH, gKotakeKoumeBraidEndTex_HEIGHT, 16)];
extern u8 object_tr_Blob_00BD50[];
#define gKotakeCollarNeckTex_WIDTH 4
#define gKotakeCollarNeckTex_HEIGHT 8
extern u64 gKotakeCollarNeckTex[TEX_LEN(u64, gKotakeCollarNeckTex_WIDTH, gKotakeCollarNeckTex_HEIGHT, 16)];
extern u8 object_tr_Blob_00C310[];
extern StandardLimb gKotakePelvisLimb;
extern StandardLimb gKotakeLeftThighLimb;
extern StandardLimb gKotakeLeftShinLimb;
extern StandardLimb gKotakeLeftFootLimb;
extern StandardLimb gKotakeRightThighLimb;
extern StandardLimb gKotakeRightShinLimb;
extern StandardLimb gKotakeRightFootLimb;
extern StandardLimb gKotakeTorsoLimb;
extern StandardLimb gKotakeLeftSleeveStartLimb;
extern StandardLimb gKotakeLeftSleeveMidLimb;
extern StandardLimb gKotakeLeftSleeveEndLimb;
extern StandardLimb gKotakeLeftSleeveFrontLimb;
extern StandardLimb gKotakeLeftHandLimb;
extern StandardLimb gKotakeBroomLimb;
extern StandardLimb gKotakeRightSleeveStartLimb;
extern StandardLimb gKotakeRightSleeveMidLimb;
extern StandardLimb gKotakeRightSleeveEndLimb;
extern StandardLimb gKotakeRightSleeveFrontLimb;
extern StandardLimb gKotakeRightHandLimb;
extern StandardLimb gKotakeNeckLimb;
extern StandardLimb gKotakeHeadLimb;
extern StandardLimb gKotakeRightBraidStartLimb;
extern StandardLimb gKotakeRightBraidEndLimb;
extern StandardLimb gKotakeTeethLimb;
extern StandardLimb gKotakeLeftBraidStartLimb;
extern StandardLimb gKotakeLeftBraidEndLimb;
extern void* gKotakeLimbs[];
typedef enum gKotakeSkelLimb {
    /*  0 */ LIMB_OBJECT_TR_00C530_NONE,
    /*  1 */ LIMB_OBJECT_TR_00C390,
    /*  2 */ LIMB_OBJECT_TR_00C39C,
    /*  3 */ LIMB_OBJECT_TR_00C3A8,
    /*  4 */ LIMB_OBJECT_TR_00C3B4,
    /*  5 */ LIMB_OBJECT_TR_00C3C0,
    /*  6 */ LIMB_OBJECT_TR_00C3CC,
    /*  7 */ LIMB_OBJECT_TR_00C3D8,
    /*  8 */ LIMB_OBJECT_TR_00C3E4,
    /*  9 */ LIMB_OBJECT_TR_00C3F0,
    /* 10 */ LIMB_OBJECT_TR_00C3FC,
    /* 11 */ LIMB_OBJECT_TR_00C408,
    /* 12 */ LIMB_OBJECT_TR_00C414,
    /* 13 */ LIMB_OBJECT_TR_00C420,
    /* 14 */ LIMB_OBJECT_TR_00C42C,
    /* 15 */ LIMB_OBJECT_TR_00C438,
    /* 16 */ LIMB_OBJECT_TR_00C444,
    /* 17 */ LIMB_OBJECT_TR_00C450,
    /* 18 */ LIMB_OBJECT_TR_00C45C,
    /* 19 */ LIMB_OBJECT_TR_00C468,
    /* 20 */ LIMB_OBJECT_TR_00C474,
    /* 21 */ LIMB_OBJECT_TR_00C480,
    /* 22 */ LIMB_OBJECT_TR_00C48C,
    /* 23 */ LIMB_OBJECT_TR_00C498,
    /* 24 */ LIMB_OBJECT_TR_00C4A4,
    /* 25 */ LIMB_OBJECT_TR_00C4B0,
    /* 26 */ LIMB_OBJECT_TR_00C4BC,
    /* 27 */ LIMB_OBJECT_TR_00C530_MAX
} gKotakeSkelLimb;
extern FlexSkeletonHeader gKotakeSkel;
extern s16 gKotakeKoumeTPoseFrameData[];
extern JointIndex gKotakeKoumeTPoseJointIndices[];
extern AnimationHeader gKotakeKoumeTPoseAnim;
extern Vtx gKoumeVtx[];
extern Gfx gKoumePelvisDL[48];
extern Gfx gKoumeTorsoDL[44];
extern Gfx gKoumeNeckDL[40];
extern Gfx gKoumeLeftBraidStartDL[34];
extern Gfx gKoumeLeftBraidEndDL[31];
extern Gfx gKoumeRightBraidStartDL[34];
extern Gfx gKoumeRightBraidEndDL[31];
extern Gfx gKoumeRightSleeveStartDL[36];
extern Gfx gKoumeRightSleeveFrontDL[48];
extern Gfx gKoumeRightSleeveMidDL[37];
extern Gfx gKoumeRightSleeveEndDL[36];
extern Gfx gKoumeLeftSleeveStartDL[36];
extern Gfx gKoumeLeftSleeveFrontDL[48];
extern Gfx gKoumeLeftSleeveMidDL[37];
extern Gfx gKoumeLeftSleeveEndDL[36];
extern Gfx gKoumeRightThighDL[1];
extern Gfx gKoumeLeftThighDL[1];
#define gKoumeGerudoFabricTex_WIDTH 32
#define gKoumeGerudoFabricTex_HEIGHT 32
extern u64 gKoumeGerudoFabricTex[TEX_LEN(u64, gKoumeGerudoFabricTex_WIDTH, gKoumeGerudoFabricTex_HEIGHT, 16)];
#define gKoumeRobeTex_WIDTH 16
#define gKoumeRobeTex_HEIGHT 16
extern u64 gKoumeRobeTex[TEX_LEN(u64, gKoumeRobeTex_WIDTH, gKoumeRobeTex_HEIGHT, 16)];
#define gKoumeJewelTex_WIDTH 8
#define gKoumeJewelTex_HEIGHT 8
extern u64 gKoumeJewelTex[TEX_LEN(u64, gKoumeJewelTex_WIDTH, gKoumeJewelTex_HEIGHT, 16)];
extern Vtx gKoumeHeadVtx[];
extern Vtx gKoumeTeethVtx[];
extern Vtx gKoumeRightShinVtx[];
extern Vtx gKoumeLeftShinVtx[];
extern Vtx gKoumeBroomVtx[];
extern Vtx gKoumeRightFootVtx[];
extern Vtx gKoumeLeftFootVtx[];
extern Vtx gKoumeRightHandVtx[];
extern Vtx gKoumeLeftHandVtx[];
extern Gfx gKoumeHeadDL[198];
extern Gfx gKoumeTeethDL[12];
extern Gfx gKoumeRightShinDL[22];
extern Gfx gKoumeLeftShinDL[22];
extern Gfx gKoumeBroomDL[53];
extern Gfx gKoumeRightFootDL[19];
extern Gfx gKoumeLeftFootDL[19];
extern Gfx gKoumeRightHandDL[45];
extern Gfx gKoumeLeftHandDL[45];
#define gKoumeCollarNeckTex_WIDTH 4
#define gKoumeCollarNeckTex_HEIGHT 8
extern u64 gKoumeCollarNeckTex[TEX_LEN(u64, gKoumeCollarNeckTex_WIDTH, gKoumeCollarNeckTex_HEIGHT, 16)];
extern StandardLimb gKoumePelvisLimb;
extern StandardLimb gKoumeLeftThighLimb;
extern StandardLimb gKoumeLeftShinLimb;
extern StandardLimb gKoumeLeftFootLimb;
extern StandardLimb gKoumeRightThighLimb;
extern StandardLimb gKoumeRightShinLimb;
extern StandardLimb gKoumeRightFootLimb;
extern StandardLimb gKoumeTorsoLimb;
extern StandardLimb gKoumeLeftSleeveStartLimb;
extern StandardLimb gKoumeLeftSleeveMidLimb;
extern StandardLimb gKoumeLeftSleeveEndLimb;
extern StandardLimb gKoumeLeftSleeveFrontLimb;
extern StandardLimb gKoumeLeftHandLimb;
extern StandardLimb gKoumeBroomLimb;
extern StandardLimb gKoumeRightSleeveStartLimb;
extern StandardLimb gKoumeRightSleeveMidLimb;
extern StandardLimb gKoumeRightSleeveEndLimb;
extern StandardLimb gKoumeRightSleeveFrontLimb;
extern StandardLimb gKoumeRightHandLimb;
extern StandardLimb gKoumeNeckLimb;
extern StandardLimb gKoumeHeadLimb;
extern StandardLimb gKoumeRightBraidStartLimb;
extern StandardLimb gKoumeRightBraidEndLimb;
extern StandardLimb gKoumeTeethLimb;
extern StandardLimb gKoumeLeftBraidStartLimb;
extern StandardLimb gKoumeLeftBraidEndLimb;
extern void* gKoumeLimbs[];
typedef enum gKoumeSkelLimb {
    /*  0 */ LIMB_OBJECT_TR_011688_NONE,
    /*  1 */ LIMB_OBJECT_TR_0114E8,
    /*  2 */ LIMB_OBJECT_TR_0114F4,
    /*  3 */ LIMB_OBJECT_TR_011500,
    /*  4 */ LIMB_OBJECT_TR_01150C,
    /*  5 */ LIMB_OBJECT_TR_011518,
    /*  6 */ LIMB_OBJECT_TR_011524,
    /*  7 */ LIMB_OBJECT_TR_011530,
    /*  8 */ LIMB_OBJECT_TR_01153C,
    /*  9 */ LIMB_OBJECT_TR_011548,
    /* 10 */ LIMB_OBJECT_TR_011554,
    /* 11 */ LIMB_OBJECT_TR_011560,
    /* 12 */ LIMB_OBJECT_TR_01156C,
    /* 13 */ LIMB_OBJECT_TR_011578,
    /* 14 */ LIMB_OBJECT_TR_011584,
    /* 15 */ LIMB_OBJECT_TR_011590,
    /* 16 */ LIMB_OBJECT_TR_01159C,
    /* 17 */ LIMB_OBJECT_TR_0115A8,
    /* 18 */ LIMB_OBJECT_TR_0115B4,
    /* 19 */ LIMB_OBJECT_TR_0115C0,
    /* 20 */ LIMB_OBJECT_TR_0115CC,
    /* 21 */ LIMB_OBJECT_TR_0115D8,
    /* 22 */ LIMB_OBJECT_TR_0115E4,
    /* 23 */ LIMB_OBJECT_TR_0115F0,
    /* 24 */ LIMB_OBJECT_TR_0115FC,
    /* 25 */ LIMB_OBJECT_TR_011608,
    /* 26 */ LIMB_OBJECT_TR_011614,
    /* 27 */ LIMB_OBJECT_TR_011688_MAX
} gKoumeSkelLimb;
extern FlexSkeletonHeader gKoumeSkel;
extern s16 gKotakeKoumeCastMagicFrameData[];
extern JointIndex gKotakeKoumeCastMagicJointIndices[];
extern AnimationHeader gKotakeKoumeCastMagicAnim;

#endif
