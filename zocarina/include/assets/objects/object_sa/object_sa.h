#ifndef OBJECT_SA_H
#define OBJECT_SA_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gSariaSealGanonFrameData[];
extern JointIndex gSariaSealGanonJointIndices[];
extern AnimationHeader gSariaSealGanonAnim;
extern s16 gSariaOcarinaToMouthFrameData[];
extern JointIndex gSariaOcarinaToMouthJointIndices[];
extern AnimationHeader gSariaOcarinaToMouthAnim;
extern s16 gSariaWaitArmsToSideFrameData[];
extern JointIndex gSariaWaitArmsToSideJointIndices[];
extern AnimationHeader gSariaWaitArmsToSideAnim;
//#define gSariaClothesTLUT_TLUT_COUNT 256
extern u64 gSariaClothesTLUT[];
#define gSariaBootsTex_WIDTH 16
#define gSariaBootsTex_HEIGHT 16
extern u64 gSariaBootsTex[TEX_LEN(u64, gSariaBootsTex_WIDTH, gSariaBootsTex_HEIGHT, 8)];
#define gSariaGreenTex_WIDTH 8
#define gSariaGreenTex_HEIGHT 8
extern u64 gSariaGreenTex[TEX_LEN(u64, gSariaGreenTex_WIDTH, gSariaGreenTex_HEIGHT, 8)];
#define object_sa_002530_Tex_WIDTH 8
#define object_sa_002530_Tex_HEIGHT 8
extern u64 object_sa_002530_Tex[TEX_LEN(u64, object_sa_002530_Tex_WIDTH, object_sa_002530_Tex_HEIGHT, 8)];
#define gSariaKneeTex_WIDTH 16
#define gSariaKneeTex_HEIGHT 16
extern u64 gSariaKneeTex[TEX_LEN(u64, gSariaKneeTex_WIDTH, gSariaKneeTex_HEIGHT, 8)];
#define gSariaTorsoTex_WIDTH 16
#define gSariaTorsoTex_HEIGHT 16
extern u64 gSariaTorsoTex[TEX_LEN(u64, gSariaTorsoTex_WIDTH, gSariaTorsoTex_HEIGHT, 8)];
#define gSariaBeltTex_WIDTH 16
#define gSariaBeltTex_HEIGHT 16
extern u64 gSariaBeltTex[TEX_LEN(u64, gSariaBeltTex_WIDTH, gSariaBeltTex_HEIGHT, 8)];
#define gSariaUnkGreenTex_WIDTH 16
#define gSariaUnkGreenTex_HEIGHT 8
extern u64 gSariaUnkGreenTex[TEX_LEN(u64, gSariaUnkGreenTex_WIDTH, gSariaUnkGreenTex_HEIGHT, 8)];
#define gSariaUnusedHandTex_WIDTH 16
#define gSariaUnusedHandTex_HEIGHT 16
extern u64 gSariaUnusedHandTex[TEX_LEN(u64, gSariaUnusedHandTex_WIDTH, gSariaUnusedHandTex_HEIGHT, 8)];
#define gSariaSleeveTex_WIDTH 8
#define gSariaSleeveTex_HEIGHT 16
extern u64 gSariaSleeveTex[TEX_LEN(u64, gSariaSleeveTex_WIDTH, gSariaSleeveTex_HEIGHT, 8)];
//#define gSariaSkinTLUT_TLUT_COUNT 72
extern u64 gSariaSkinTLUT[];
//#define gSariaEyeTLUT_TLUT_COUNT 252
extern u64 gSariaEyeTLUT[];
//#define gSariaMouthTLUT_TLUT_COUNT 232
extern u64 gSariaMouthTLUT[];
#define gSariaHairTex_WIDTH 8
#define gSariaHairTex_HEIGHT 16
extern u64 gSariaHairTex[TEX_LEN(u64, gSariaHairTex_WIDTH, gSariaHairTex_HEIGHT, 8)];
#define gSariaEyeOpenTex_WIDTH 32
#define gSariaEyeOpenTex_HEIGHT 32
extern u64 gSariaEyeOpenTex[TEX_LEN(u64, gSariaEyeOpenTex_WIDTH, gSariaEyeOpenTex_HEIGHT, 8)];
#define gSariaMouthClosedTex_WIDTH 32
#define gSariaMouthClosedTex_HEIGHT 16
extern u64 gSariaMouthClosedTex[TEX_LEN(u64, gSariaMouthClosedTex_WIDTH, gSariaMouthClosedTex_HEIGHT, 8)];
#define gSariaSkinTex_WIDTH 8
#define gSariaSkinTex_HEIGHT 8
extern u64 gSariaSkinTex[TEX_LEN(u64, gSariaSkinTex_WIDTH, gSariaSkinTex_HEIGHT, 8)];
#define gSariaMouthClosed2Tex_WIDTH 32
#define gSariaMouthClosed2Tex_HEIGHT 16
extern u64 gSariaMouthClosed2Tex[TEX_LEN(u64, gSariaMouthClosed2Tex_WIDTH, gSariaMouthClosed2Tex_HEIGHT, 8)];
#define gSariaEarTex_WIDTH 8
#define gSariaEarTex_HEIGHT 8
extern u64 gSariaEarTex[TEX_LEN(u64, gSariaEarTex_WIDTH, gSariaEarTex_HEIGHT, 8)];
#define gSariaCollarTex_WIDTH 8
#define gSariaCollarTex_HEIGHT 8
extern u64 gSariaCollarTex[TEX_LEN(u64, gSariaCollarTex_WIDTH, gSariaCollarTex_HEIGHT, 8)];
#define gSariaHandTex_WIDTH 8
#define gSariaHandTex_HEIGHT 8
extern u64 gSariaHandTex[TEX_LEN(u64, gSariaHandTex_WIDTH, gSariaHandTex_HEIGHT, 8)];
#define gSariaEyeClosedTex_WIDTH 32
#define gSariaEyeClosedTex_HEIGHT 32
extern u64 gSariaEyeClosedTex[TEX_LEN(u64, gSariaEyeClosedTex_WIDTH, gSariaEyeClosedTex_HEIGHT, 8)];
#define gSariaEyeHalfTex_WIDTH 32
#define gSariaEyeHalfTex_HEIGHT 32
extern u64 gSariaEyeHalfTex[TEX_LEN(u64, gSariaEyeHalfTex_WIDTH, gSariaEyeHalfTex_HEIGHT, 8)];
#define gSariaFairyOcarinaTex_WIDTH 32
#define gSariaFairyOcarinaTex_HEIGHT 16
extern u64 gSariaFairyOcarinaTex[TEX_LEN(u64, gSariaFairyOcarinaTex_WIDTH, gSariaFairyOcarinaTex_HEIGHT, 16)];
#define gSariaMouthSmilingOpenTex_WIDTH 32
#define gSariaMouthSmilingOpenTex_HEIGHT 16
extern u64 gSariaMouthSmilingOpenTex[TEX_LEN(u64, gSariaMouthSmilingOpenTex_WIDTH, gSariaMouthSmilingOpenTex_HEIGHT, 8)];
#define gSariaMouthFrowningTex_WIDTH 32
#define gSariaMouthFrowningTex_HEIGHT 16
extern u64 gSariaMouthFrowningTex[TEX_LEN(u64, gSariaMouthFrowningTex_WIDTH, gSariaMouthFrowningTex_HEIGHT, 8)];
#define gSariaEyeSuprisedTex_WIDTH 32
#define gSariaEyeSuprisedTex_HEIGHT 32
extern u64 gSariaEyeSuprisedTex[TEX_LEN(u64, gSariaEyeSuprisedTex_WIDTH, gSariaEyeSuprisedTex_HEIGHT, 8)];
#define gSariaMouthSuprisedTex_WIDTH 32
#define gSariaMouthSuprisedTex_HEIGHT 16
extern u64 gSariaMouthSuprisedTex[TEX_LEN(u64, gSariaMouthSuprisedTex_WIDTH, gSariaMouthSuprisedTex_HEIGHT, 8)];
#define gSariaEyeSadTex_WIDTH 32
#define gSariaEyeSadTex_HEIGHT 32
extern u64 gSariaEyeSadTex[TEX_LEN(u64, gSariaEyeSadTex_WIDTH, gSariaEyeSadTex_HEIGHT, 8)];
extern Vtx gSariaHeadVtx[];
extern Vtx gSariaLeftHandVtx[];
extern Vtx gSariaRightHandVtx[];
extern Vtx gSariaRightHandAndOcarinaVtx[];
extern Gfx gSariaHeadDL[417];
extern Gfx gSariaLeftHandDL[40];
extern Gfx gSariaRightHandDL[40];
extern Gfx gSariaRightHandAndOcarinaDL[71];
extern Vtx gSariaLeftFootVtx[];
extern Vtx gSariaLeftShinVtx[];
extern Vtx gSariaLeftThighVtx[];
extern Vtx gSariaRightFootVtx[];
extern Vtx gSariaRightShinVtx[];
extern Vtx gSariaRightThighVtx[];
extern Vtx gSariaWaistVtx[];
extern Vtx gSariaLeftArmVtx[];
extern Vtx gSariaLeftShoulderVtx[];
extern Vtx gSariaRightArmVtx[];
extern Vtx gSariaRightShoulderVtx[];
extern Vtx gSariaChestVtx[];
extern Gfx gSariaChestDL[50];
extern Gfx gSariaRightShoulderDL[57];
extern Gfx gSariaRightArmDL[39];
extern Gfx gSariaLeftShoulderDL[57];
extern Gfx gSariaLeftArmDL[39];
extern Gfx gSariaWaistDL[75];
extern Gfx gSariaRightThighDL[74];
extern Gfx gSariaRightShinDL[88];
extern Gfx gSariaRightFootDL[56];
extern Gfx gSariaLeftThighDL[74];
extern Gfx gSariaLeftShinDL[88];
extern Gfx gSariaLeftFootDL[56];
extern StandardLimb gSariaRootLimb;
extern StandardLimb gSariaWaistLimb;
extern StandardLimb gSariaLeftThighLimb;
extern StandardLimb gSariaLeftShinLimb;
extern StandardLimb gSariaLeftFootLimb;
extern StandardLimb gSariaRightThighLimb;
extern StandardLimb gSariaRightShinLimb;
extern StandardLimb gSariaRightFootLimb;
extern StandardLimb gSariaRightChestLimb;
extern StandardLimb gSariaLeftShoulderLimb;
extern StandardLimb gSariaLeftArmLimb;
extern StandardLimb gSariaLeftHandLimb;
extern StandardLimb gSariaRightShoulderLimb;
extern StandardLimb gSariaRightArmLimb;
extern StandardLimb gSariaRightHandLimb;
extern StandardLimb gSariaHeadLimb;
extern void* gSariaLimbs[];
typedef enum gSariaSkelLimb {
    /*  0 */ LIMB_OBJECT_SA_00B1A0_NONE,
    /*  1 */ LIMB_OBJECT_SA_00B0A0,
    /*  2 */ LIMB_OBJECT_SA_00B0AC,
    /*  3 */ LIMB_OBJECT_SA_00B0B8,
    /*  4 */ LIMB_OBJECT_SA_00B0C4,
    /*  5 */ LIMB_OBJECT_SA_00B0D0,
    /*  6 */ LIMB_OBJECT_SA_00B0DC,
    /*  7 */ LIMB_OBJECT_SA_00B0E8,
    /*  8 */ LIMB_OBJECT_SA_00B0F4,
    /*  9 */ LIMB_OBJECT_SA_00B100,
    /* 10 */ LIMB_OBJECT_SA_00B10C,
    /* 11 */ LIMB_OBJECT_SA_00B118,
    /* 12 */ LIMB_OBJECT_SA_00B124,
    /* 13 */ LIMB_OBJECT_SA_00B130,
    /* 14 */ LIMB_OBJECT_SA_00B13C,
    /* 15 */ LIMB_OBJECT_SA_00B148,
    /* 16 */ LIMB_OBJECT_SA_00B154,
    /* 17 */ LIMB_OBJECT_SA_00B1A0_MAX
} gSariaSkelLimb;
extern FlexSkeletonHeader gSariaSkel;
extern s16 gSariaPlayingOcarinaFrameData[];
extern JointIndex gSariaPlayingOcarinaJointIndices[];
extern AnimationHeader gSariaPlayingOcarinaAnim;
extern s16 gSariaStopPlayingOcarinaFrameData[];
extern JointIndex gSariaStopPlayingOcarinaJointIndices[];
extern AnimationHeader gSariaStopPlayingOcarinaAnim;
extern s16 gSariaLinkLearnedSariasSongFrameData[];
extern JointIndex gSariaLinkLearnedSariasSongJointIndices[];
extern AnimationHeader gSariaLinkLearnedSariasSongAnim;
extern s16 gSariaReturnToOcarinaFrameData[];
extern JointIndex gSariaReturnToOcarinaJointIndices[];
extern AnimationHeader gSariaReturnToOcarinaAnim;
extern s16 gSariaGiveForestMedallionFrameData[];
extern JointIndex gSariaGiveForestMedallionJointIndices[];
extern AnimationHeader gSariaGiveForestMedallionAnim;
extern s16 gSariaGiveForestMedallionStandFrameData[];
extern JointIndex gSariaGiveForestMedallionStandJointIndices[];
extern AnimationHeader gSariaGiveForestMedallionStandAnim;
extern s16 gSariaLookUpArmExtendedFrameData[];
extern JointIndex gSariaLookUpArmExtendedJointIndices[];
extern AnimationHeader gSariaLookUpArmExtendedAnim;
extern s16 gSariaRunFrameData[];
extern JointIndex gSariaRunJointIndices[];
extern AnimationHeader gSariaRunAnim;
extern s16 gSariaWaveFrameData[];
extern JointIndex gSariaWaveJointIndices[];
extern AnimationHeader gSariaWaveAnim;
extern s16 gSariaSitting1FrameData[];
extern JointIndex gSariaSitting1JointIndices[];
extern AnimationHeader gSariaSitting1Anim;
extern s16 gSariaSitting2FrameData[];
extern JointIndex gSariaSitting2JointIndices[];
extern AnimationHeader gSariaSitting2Anim;
extern s16 gSariaSitting3FrameData[];
extern JointIndex gSariaSitting3JointIndices[];
extern AnimationHeader gSariaSitting3Anim;
extern s16 gSariaLookOverShoulderFrameData[];
extern JointIndex gSariaLookOverShoulderJointIndices[];
extern AnimationHeader gSariaLookOverShoulderAnim;
extern s16 gSariaWaitOnBridgeFrameData[];
extern JointIndex gSariaWaitOnBridgeJointIndices[];
extern AnimationHeader gSariaWaitOnBridgeAnim;
extern s16 gSariaTransitionHandsSideToBackFrameData[];
extern JointIndex gSariaTransitionHandsSideToBackJointIndices[];
extern AnimationHeader gSariaTransitionHandsSideToBackAnim;
extern s16 gSariaHandsOutFrameData[];
extern JointIndex gSariaHandsOutJointIndices[];
extern AnimationHeader gSariaHandsOutAnim;
extern s16 gSariaTransitionHandsSideToHipsFrameData[];
extern JointIndex gSariaTransitionHandsSideToHipsJointIndices[];
extern AnimationHeader gSariaTransitionHandsSideToHipsAnim;
extern s16 gSariaHandsBehindBackWaitFrameData[];
extern JointIndex gSariaHandsBehindBackWaitJointIndices[];
extern AnimationHeader gSariaHandsBehindBackWaitAnim;
extern s16 gSariaTransitionHandsSideToChestToSideFrameData[];
extern JointIndex gSariaTransitionHandsSideToChestToSideJointIndices[];
extern AnimationHeader gSariaTransitionHandsSideToChestToSideAnim;
extern s16 gSariaRightArmExtendedWaitFrameData[];
extern JointIndex gSariaRightArmExtendedWaitJointIndices[];
extern AnimationHeader gSariaRightArmExtendedWaitAnim;
extern s16 gSariaGiveLinkOcarinaFrameData[];
extern JointIndex gSariaGiveLinkOcarinaJointIndices[];
extern AnimationHeader gSariaGiveLinkOcarinaAnim;
extern s16 gSariaHoldOutOcarinaFrameData[];
extern JointIndex gSariaHoldOutOcarinaJointIndices[];
extern AnimationHeader gSariaHoldOutOcarinaAnim;
extern s16 gSariaHoldOcarinaFrameData[];
extern JointIndex gSariaHoldOcarinaJointIndices[];
extern AnimationHeader gSariaHoldOcarinaAnim;
extern s16 gSariaStandHandsOnHipsFrameData[];
extern JointIndex gSariaStandHandsOnHipsJointIndices[];
extern AnimationHeader gSariaStandHandsOnHipsAnim;
extern s16 gSariaExtendRightArmFrameData[];
extern JointIndex gSariaExtendRightArmJointIndices[];
extern AnimationHeader gSariaExtendRightArmAnim;
extern s16 gSariaHandsOnFaceFrameData[];
extern JointIndex gSariaHandsOnFaceJointIndices[];
extern AnimationHeader gSariaHandsOnFaceAnim;

#endif
