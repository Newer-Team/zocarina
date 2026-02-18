#ifndef OBJECT_GANON2_H
#define OBJECT_GANON2_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gGanonFinalBlowFrameData[];
extern JointIndex gGanonFinalBlowJointIndices[];
extern AnimationHeader gGanonFinalBlowAnim;
extern s16 gGanonDeadStartFrameData[];
extern JointIndex gGanonDeadStartJointIndices[];
extern AnimationHeader gGanonDeadStartAnim;
extern s16 gGanonDeadLoopFrameData[];
extern JointIndex gGanonDeadLoopJointIndices[];
extern AnimationHeader gGanonDeadLoopAnim;
extern s16 gGanonGuardToWalk_06008ED0_FrameData[];
extern JointIndex gGanonGuardToWalk_06009538_JointIndices[];
extern AnimationHeader gGanonGuardToWalk;
extern s16 gGanonLeftSwordSwingFrameData[];
extern JointIndex gGanonLeftSwordSwingJointIndices[];
extern AnimationHeader gGanonLeftSwordSwingAnim;
extern s16 gGanonRightSwordSwingFrameData[];
extern JointIndex gGanonRightSwordSwingJointIndices[];
extern AnimationHeader gGanonRightSwordSwingAnim;
extern s16 gGanonDamageFrameData[];
extern JointIndex gGanonDamageJointIndices[];
extern AnimationHeader gGanonDamageAnim;
extern s16 gGanonGuardWalkFrameData[];
extern JointIndex gGanonGuardWalkJointIndices[];
extern AnimationHeader gGanonGuardWalkAnim;
extern s16 gGanonGuardSidestepFrameData[];
extern JointIndex gGanonGuardSidestepJointIndices[];
extern AnimationHeader gGanonGuardSidestepAnim;
extern s16 gGanonGuardIdleFrameData[];
extern JointIndex gGanonGuardIdleJointIndices[];
extern AnimationHeader gGanonGuardIdleAnim;
extern Vtx gGanonRightHair3Vtx[];
extern Vtx gGanonRightHair2Vtx[];
extern Vtx gGanonRightHair1Vtx[];
extern Vtx gGanonLeftHair3Vtx[];
extern Vtx gGanonLeftHair2Vtx[];
extern Vtx gGanonLeftHair1Vtx[];
extern Vtx gGanonMiddleHair3Vtx[];
extern Vtx gGanonMiddleHair2Vtx[];
extern Vtx gGanonMiddleHair1Vtx[];
extern Vtx gGanonJawVtx[];
extern Vtx gGanonMouthVtx[];
extern Vtx gGanonSnoutVtx[];
extern Vtx gGanonHeadVtx[];
extern Vtx gGanonNeckVtx[];
extern Vtx gGanonRightWristVtx[];
extern Vtx gGanonRightForearmVtx[];
extern Vtx gGanonRightUpperArmVtx[];
extern Vtx gGanonRightShoulderVtx[];
extern Vtx gGanonLeftWristVtx[];
extern Vtx gGanonLeftForearmVtx[];
extern Vtx gGanonLeftUpperArmVtx[];
extern Vtx gGanonLeftShoulderVtx[];
extern Vtx gGanonTorsoVtx[];
extern Vtx gGanonLeftFootVtx[];
extern Vtx gGanonLeftShinVtx[];
extern Vtx gGanonLeftThighVtx[];
extern Vtx gGanonRightFootVtx[];
extern Vtx gGanonRightShinVtx[];
extern Vtx gGanonRightThighVtx[];
extern Vtx gGanonTail1Vtx[];
extern Vtx gGanonTail2Vtx[];
extern Vtx gGanonTail3Vtx[];
extern Vtx gGanonTail4Vtx[];
extern Vtx gGanonTail5Vtx[];
extern Vtx gGanonPelvisVtx[];
extern Gfx gGanonPelvisDL[72];
extern Gfx gGanonTail1DL[34];
extern Gfx gGanonTail2DL[52];
extern Gfx gGanonTail3DL[57];
extern Gfx gGanonTail4DL[40];
extern Gfx gGanonTail5DL[37];
extern Gfx gGanonRightShinDL[78];
extern Gfx gGanonRightFootDL[60];
extern Gfx gGanonRightThighDL[152];
extern Gfx gGanonLeftShinDL[94];
extern Gfx gGanonLeftFootDL[60];
extern Gfx gGanonLeftThighDL[152];
extern Gfx gGanonNeckDL[38];
extern Gfx gGanonHeadDL[174];
extern Gfx gGanonRightHair3DL[30];
extern Gfx gGanonRightHair2DL[29];
extern Gfx gGanonRightHair1DL[22];
extern Gfx gGanonLeftHair3DL[30];
extern Gfx gGanonLeftHair2DL[29];
extern Gfx gGanonLeftHair1DL[22];
extern Gfx gGanonJawDL[104];
extern Gfx gGanonMouthDL[110];
extern Gfx gGanonSnoutDL[36];
extern Gfx gGanonMiddleHair3DL[30];
extern Gfx gGanonMiddleHair2DL[30];
extern Gfx gGanonMiddleHair1DL[22];
extern Gfx gGanonTorsoDL[144];
extern Gfx gGanonRightShoulderDL[69];
extern Gfx gGanonRightForearmDL[92];
extern Gfx gGanonRightWristDL[33];
extern Gfx gGanonRightUpperArmDL[146];
extern Gfx gGanonLeftShoulderDL[69];
extern Gfx gGanonLeftForearmDL[92];
extern Gfx gGanonLeftWristDL[33];
extern Gfx gGanonLeftUpperArmDL[146];
//#define gGanonBodyTLUT_TLUT_COUNT 256
extern u64 gGanonBodyTLUT[];
//#define gGanonHairFringeTLUT_TLUT_COUNT 256
extern u64 gGanonHairFringeTLUT[];
#define gGanonUnusedTLUT_WIDTH 16
#define gGanonUnusedTLUT_HEIGHT 16
extern u64 gGanonUnusedTLUT[TEX_LEN(u64, gGanonUnusedTLUT_WIDTH, gGanonUnusedTLUT_HEIGHT, 16)];
//#define gGanonGerudoFabricTLUT_TLUT_COUNT 256
extern u64 gGanonGerudoFabricTLUT[];
//#define gGanonRedFabricTLUT_TLUT_COUNT 256
extern u64 gGanonRedFabricTLUT[];
//#define gGanonBlackLeatherAndPauldronTLUT_TLUT_COUNT 256
extern u64 gGanonBlackLeatherAndPauldronTLUT[];
//#define gGanonLeatherTLUT_TLUT_COUNT 256
extern u64 gGanonLeatherTLUT[];
//#define gGanonHoofTLUT_TLUT_COUNT 256
extern u64 gGanonHoofTLUT[];
//#define gGanonTailTLUT_TLUT_COUNT 256
extern u64 gGanonTailTLUT[];
#define gGanonHairTex_WIDTH 8
#define gGanonHairTex_HEIGHT 16
extern u64 gGanonHairTex[TEX_LEN(u64, gGanonHairTex_WIDTH, gGanonHairTex_HEIGHT, 16)];
#define gGanonMouthTex_WIDTH 8
#define gGanonMouthTex_HEIGHT 16
extern u64 gGanonMouthTex[TEX_LEN(u64, gGanonMouthTex_WIDTH, gGanonMouthTex_HEIGHT, 16)];
#define gGanonFacialHairTex_WIDTH 8
#define gGanonFacialHairTex_HEIGHT 8
extern u64 gGanonFacialHairTex[TEX_LEN(u64, gGanonFacialHairTex_WIDTH, gGanonFacialHairTex_HEIGHT, 16)];
#define gGanonBodyTex_WIDTH 32
#define gGanonBodyTex_HEIGHT 32
extern u64 gGanonBodyTex[TEX_LEN(u64, gGanonBodyTex_WIDTH, gGanonBodyTex_HEIGHT, 8)];
#define gGanonSnoutFrontTex_WIDTH 8
#define gGanonSnoutFrontTex_HEIGHT 16
extern u64 gGanonSnoutFrontTex[TEX_LEN(u64, gGanonSnoutFrontTex_WIDTH, gGanonSnoutFrontTex_HEIGHT, 16)];
#define gGanonSnoutSideTex_WIDTH 8
#define gGanonSnoutSideTex_HEIGHT 16
extern u64 gGanonSnoutSideTex[TEX_LEN(u64, gGanonSnoutSideTex_WIDTH, gGanonSnoutSideTex_HEIGHT, 16)];
#define gGanonHairFringeTex_WIDTH 32
#define gGanonHairFringeTex_HEIGHT 16
extern u64 gGanonHairFringeTex[TEX_LEN(u64, gGanonHairFringeTex_WIDTH, gGanonHairFringeTex_HEIGHT, 8)];
#define gGanonGerudoFabricTex_WIDTH 16
#define gGanonGerudoFabricTex_HEIGHT 16
extern u64 gGanonGerudoFabricTex[TEX_LEN(u64, gGanonGerudoFabricTex_WIDTH, gGanonGerudoFabricTex_HEIGHT, 8)];
#define gGanonFurTuftTex_WIDTH 16
#define gGanonFurTuftTex_HEIGHT 16
extern u64 gGanonFurTuftTex[TEX_LEN(u64, gGanonFurTuftTex_WIDTH, gGanonFurTuftTex_HEIGHT, 16)];
#define gGanonRedFabricTex_WIDTH 16
#define gGanonRedFabricTex_HEIGHT 16
extern u64 gGanonRedFabricTex[TEX_LEN(u64, gGanonRedFabricTex_WIDTH, gGanonRedFabricTex_HEIGHT, 8)];
#define gGanonPauldronTex_WIDTH 16
#define gGanonPauldronTex_HEIGHT 16
extern u64 gGanonPauldronTex[TEX_LEN(u64, gGanonPauldronTex_WIDTH, gGanonPauldronTex_HEIGHT, 8)];
#define gGanonCapeFasteningTex_WIDTH 16
#define gGanonCapeFasteningTex_HEIGHT 16
extern u64 gGanonCapeFasteningTex[TEX_LEN(u64, gGanonCapeFasteningTex_WIDTH, gGanonCapeFasteningTex_HEIGHT, 8)];
#define gGanonBlackLeatherTex_WIDTH 16
#define gGanonBlackLeatherTex_HEIGHT 16
extern u64 gGanonBlackLeatherTex[TEX_LEN(u64, gGanonBlackLeatherTex_WIDTH, gGanonBlackLeatherTex_HEIGHT, 8)];
#define gGanonLeatherTex_WIDTH 16
#define gGanonLeatherTex_HEIGHT 16
extern u64 gGanonLeatherTex[TEX_LEN(u64, gGanonLeatherTex_WIDTH, gGanonLeatherTex_HEIGHT, 8)];
#define gGanonHoofTex_WIDTH 16
#define gGanonHoofTex_HEIGHT 16
extern u64 gGanonHoofTex[TEX_LEN(u64, gGanonHoofTex_WIDTH, gGanonHoofTex_HEIGHT, 8)];
#define gGanonUnderSkirtTex_WIDTH 4
#define gGanonUnderSkirtTex_HEIGHT 16
extern u64 gGanonUnderSkirtTex[TEX_LEN(u64, gGanonUnderSkirtTex_WIDTH, gGanonUnderSkirtTex_HEIGHT, 16)];
#define gGanonTailTex_WIDTH 16
#define gGanonTailTex_HEIGHT 32
extern u64 gGanonTailTex[TEX_LEN(u64, gGanonTailTex_WIDTH, gGanonTailTex_HEIGHT, 8)];
//#define gGanonEyesTLUT_TLUT_COUNT 16
extern u64 gGanonEyesTLUT[];
//#define gGanonHandTLUT_TLUT_COUNT 176
extern u64 gGanonHandTLUT[];
#define gGanonHandTex_WIDTH 32
#define gGanonHandTex_HEIGHT 32
extern u64 gGanonHandTex[TEX_LEN(u64, gGanonHandTex_WIDTH, gGanonHandTex_HEIGHT, 8)];
#define gGanonJewelTex_WIDTH 16
#define gGanonJewelTex_HEIGHT 32
extern u64 gGanonJewelTex[TEX_LEN(u64, gGanonJewelTex_WIDTH, gGanonJewelTex_HEIGHT, 16)];
#define gGanonClawAndTeethTex_WIDTH 8
#define gGanonClawAndTeethTex_HEIGHT 8
extern u64 gGanonClawAndTeethTex[TEX_LEN(u64, gGanonClawAndTeethTex_WIDTH, gGanonClawAndTeethTex_HEIGHT, 16)];
#define gGanonEyeOpenTex_WIDTH 16
#define gGanonEyeOpenTex_HEIGHT 16
extern u64 gGanonEyeOpenTex[TEX_LEN(u64, gGanonEyeOpenTex_WIDTH, gGanonEyeOpenTex_HEIGHT, 4)];
#define gGanonLipsTex_WIDTH 8
#define gGanonLipsTex_HEIGHT 8
extern u64 gGanonLipsTex[TEX_LEN(u64, gGanonLipsTex_WIDTH, gGanonLipsTex_HEIGHT, 16)];
#define gGanonHornBaseTex_WIDTH 16
#define gGanonHornBaseTex_HEIGHT 16
extern u64 gGanonHornBaseTex[TEX_LEN(u64, gGanonHornBaseTex_WIDTH, gGanonHornBaseTex_HEIGHT, 16)];
#define gGanonHornTex_WIDTH 16
#define gGanonHornTex_HEIGHT 8
extern u64 gGanonHornTex[TEX_LEN(u64, gGanonHornTex_WIDTH, gGanonHornTex_HEIGHT, 16)];
#define gGanonSwordBladeTex_WIDTH 32
#define gGanonSwordBladeTex_HEIGHT 32
extern u64 gGanonSwordBladeTex[TEX_LEN(u64, gGanonSwordBladeTex_WIDTH, gGanonSwordBladeTex_HEIGHT, 4)];
#define gGanonSwordGuardTex_WIDTH 8
#define gGanonSwordGuardTex_HEIGHT 16
extern u64 gGanonSwordGuardTex[TEX_LEN(u64, gGanonSwordGuardTex_WIDTH, gGanonSwordGuardTex_HEIGHT, 16)];
#define gGanonSwordGripTex_WIDTH 8
#define gGanonSwordGripTex_HEIGHT 16
extern u64 gGanonSwordGripTex[TEX_LEN(u64, gGanonSwordGripTex_WIDTH, gGanonSwordGripTex_HEIGHT, 16)];
#define gGanonEyeHalfTex_WIDTH 16
#define gGanonEyeHalfTex_HEIGHT 16
extern u64 gGanonEyeHalfTex[TEX_LEN(u64, gGanonEyeHalfTex_WIDTH, gGanonEyeHalfTex_HEIGHT, 4)];
#define gGanonEyeClosedTex_WIDTH 16
#define gGanonEyeClosedTex_HEIGHT 16
extern u64 gGanonEyeClosedTex[TEX_LEN(u64, gGanonEyeClosedTex_WIDTH, gGanonEyeClosedTex_HEIGHT, 4)];
extern Vtx gGanonEyesVtx[];
extern Vtx gGanonJewelVtx[];
extern Vtx gGanonRightHornVtx[];
extern Vtx gGanonLeftHornVtx[];
extern Vtx gGanonRightHandVtx[];
extern Vtx gGanonLeftHandVtx[];
extern Vtx gGanonRightSwordVtx[];
extern Vtx gGanonLeftSwordVtx[];
extern Vtx gGanonOuterTeethVtx[];
extern Vtx gGanonInnerTeethVtx[];
extern Gfx gGanonEyesDL[25];
extern Gfx gGanonJewelDL[20];
extern Gfx gGanonRightHornDL[45];
extern Gfx gGanonLeftHornDL[45];
extern Gfx gGanonRightHandDL[58];
extern Gfx gGanonLeftHandDL[58];
extern Gfx gGanonRightSwordDL[92];
extern Gfx gGanonLeftSwordDL[93];
extern Gfx gGanonOuterTeethDL[36];
extern Gfx gGanonInnerTeethDL[23];
#define gGanonTitleCardTex_WIDTH 128
#define gGanonTitleCardTex_HEIGHT 80
extern u64 gGanonTitleCardTex[TEX_LEN(u64, gGanonTitleCardTex_WIDTH, gGanonTitleCardTex_HEIGHT, 8)];
extern StandardLimb gGanonRootLimb;
extern StandardLimb gGanonTorsoLimb;
extern StandardLimb gGanonLeftShoulderLimb;
extern StandardLimb gGanonLeftUpperArmLimb;
extern StandardLimb gGanonLeftForearmLimb;
extern StandardLimb gGanonLeftWristLimb;
extern StandardLimb gGanonLeftSwordLimb;
extern StandardLimb gGanonLeftHandLimb;
extern StandardLimb gGanonRightShoulderLimb;
extern StandardLimb gGanonRightUpperArmLimb;
extern StandardLimb gGanonRightForearmLimb;
extern StandardLimb gGanonRightWristLimb;
extern StandardLimb gGanonRightSwordLimb;
extern StandardLimb gGanonRightHandLimb;
extern StandardLimb gGanonNeckLimb;
extern StandardLimb gGanonJewelLimb;
extern StandardLimb gGanonSnoutLimb;
extern StandardLimb gGanonOuterTeethLimb;
extern StandardLimb gGanonMouthLimb;
extern StandardLimb gGanonInnerTeethLimb;
extern StandardLimb gGanonJawLimb;
extern StandardLimb gGanonMiddleHair1Limb;
extern StandardLimb gGanonMiddleHair2Limb;
extern StandardLimb gGanonMiddleHair3Limb;
extern StandardLimb gGanonLeftHair1Limb;
extern StandardLimb gGanonLeftHair2Limb;
extern StandardLimb gGanonLeftHair3Limb;
extern StandardLimb gGanonRightHair1Limb;
extern StandardLimb gGanonRightHair2Limb;
extern StandardLimb gGanonRightHair3Limb;
extern StandardLimb gGanonEyesLimb;
extern StandardLimb gGanonHeadLimb;
extern StandardLimb gGanonLeftHornLimb;
extern StandardLimb gGanonRightHornLimb;
extern StandardLimb gGanonPelvisLimb;
extern StandardLimb gGanonLeftThighLimb;
extern StandardLimb gGanonLeftShinLimb;
extern StandardLimb gGanonLeftFootLimb;
extern StandardLimb gGanonRightThighLimb;
extern StandardLimb gGanonRightShinLimb;
extern StandardLimb gGanonRightFootLimb;
extern StandardLimb gGanonTail1Limb;
extern StandardLimb gGanonTail2Limb;
extern StandardLimb gGanonTail3Limb;
extern StandardLimb gGanonTail4Limb;
extern StandardLimb gGanonTail5Limb;
extern void* gGanonLimbs[];
typedef enum gGanonSkelLimb {
    /*  0 */ LIMB_OBJECT_GANON2_024570_NONE,
    /*  1 */ LIMB_OBJECT_GANON2_024290,
    /*  2 */ LIMB_OBJECT_GANON2_02429C,
    /*  3 */ LIMB_OBJECT_GANON2_0242A8,
    /*  4 */ LIMB_OBJECT_GANON2_0242B4,
    /*  5 */ LIMB_OBJECT_GANON2_0242C0,
    /*  6 */ LIMB_OBJECT_GANON2_0242CC,
    /*  7 */ LIMB_OBJECT_GANON2_0242D8,
    /*  8 */ LIMB_OBJECT_GANON2_0242E4,
    /*  9 */ LIMB_OBJECT_GANON2_0242F0,
    /* 10 */ LIMB_OBJECT_GANON2_0242FC,
    /* 11 */ LIMB_OBJECT_GANON2_024308,
    /* 12 */ LIMB_OBJECT_GANON2_024314,
    /* 13 */ LIMB_OBJECT_GANON2_024320,
    /* 14 */ LIMB_OBJECT_GANON2_02432C,
    /* 15 */ LIMB_OBJECT_GANON2_024338,
    /* 16 */ LIMB_OBJECT_GANON2_024344,
    /* 17 */ LIMB_OBJECT_GANON2_024350,
    /* 18 */ LIMB_OBJECT_GANON2_02435C,
    /* 19 */ LIMB_OBJECT_GANON2_024368,
    /* 20 */ LIMB_OBJECT_GANON2_024374,
    /* 21 */ LIMB_OBJECT_GANON2_024380,
    /* 22 */ LIMB_OBJECT_GANON2_02438C,
    /* 23 */ LIMB_OBJECT_GANON2_024398,
    /* 24 */ LIMB_OBJECT_GANON2_0243A4,
    /* 25 */ LIMB_OBJECT_GANON2_0243B0,
    /* 26 */ LIMB_OBJECT_GANON2_0243BC,
    /* 27 */ LIMB_OBJECT_GANON2_0243C8,
    /* 28 */ LIMB_OBJECT_GANON2_0243D4,
    /* 29 */ LIMB_OBJECT_GANON2_0243E0,
    /* 30 */ LIMB_OBJECT_GANON2_0243EC,
    /* 31 */ LIMB_OBJECT_GANON2_0243F8,
    /* 32 */ LIMB_OBJECT_GANON2_024404,
    /* 33 */ LIMB_OBJECT_GANON2_024410,
    /* 34 */ LIMB_OBJECT_GANON2_02441C,
    /* 35 */ LIMB_OBJECT_GANON2_024428,
    /* 36 */ LIMB_OBJECT_GANON2_024434,
    /* 37 */ LIMB_OBJECT_GANON2_024440,
    /* 38 */ LIMB_OBJECT_GANON2_02444C,
    /* 39 */ LIMB_OBJECT_GANON2_024458,
    /* 40 */ LIMB_OBJECT_GANON2_024464,
    /* 41 */ LIMB_OBJECT_GANON2_024470,
    /* 42 */ LIMB_OBJECT_GANON2_02447C,
    /* 43 */ LIMB_OBJECT_GANON2_024488,
    /* 44 */ LIMB_OBJECT_GANON2_024494,
    /* 45 */ LIMB_OBJECT_GANON2_0244A0,
    /* 46 */ LIMB_OBJECT_GANON2_0244AC,
    /* 47 */ LIMB_OBJECT_GANON2_024570_MAX
} gGanonSkelLimb;
extern FlexSkeletonHeader gGanonSkel;
extern s16 gGanonStunStartFrameData[];
extern JointIndex gGanonStunStartJointIndices[];
extern AnimationHeader gGanonStunStartAnim;
extern s16 gGanonStunLoopFrameData[];
extern JointIndex gGanonStunLoopJointIndices[];
extern AnimationHeader gGanonStunLoopAnim;
extern s16 gGanonStunEndFrameData[];
extern JointIndex gGanonStunEndJointIndices[];
extern AnimationHeader gGanonStunEndAnim;
extern s16 gGanonDownedStartFrameData[];
extern JointIndex gGanonDownedStartJointIndices[];
extern AnimationHeader gGanonDownedStartAnim;
extern s16 gGanonStunEndToWalkFrameData[];
extern JointIndex gGanonStunEndToWalkJointIndices[];
extern AnimationHeader gGanonStunEndToWalkAnim;
extern s16 gGanonDuplicateStunStartFrameData[];
extern JointIndex gGanonDuplicateStunStartJointIndices[];
extern AnimationHeader gGanonDuplicateStunStartAnim;
extern s16 gGanonDuplicateStunLoopFrameData[];
extern JointIndex gGanonDuplicateStunLoopJointIndices[];
extern AnimationHeader gGanonDuplicateStunLoopAnim;
extern s16 gGanonGetUpFrameData[];
extern JointIndex gGanonGetUpJointIndices[];
extern AnimationHeader gGanonGetUpAnim;
extern s16 gGanonDownedLoopFrameData[];
extern JointIndex gGanonDownedLoopJointIndices[];
extern AnimationHeader gGanonDownedLoopAnim;
extern s16 gGanonWalkFrameData[];
extern JointIndex gGanonWalkJointIndices[];
extern AnimationHeader gGanonWalkAnim;
extern s16 gGanonWalkToGuardFrameData[];
extern JointIndex gGanonWalkToGuardJointIndices[];
extern AnimationHeader gGanonWalkToGuardAnim;

#endif
