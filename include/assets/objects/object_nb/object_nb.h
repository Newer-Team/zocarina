#ifndef OBJECT_NB_H
#define OBJECT_NB_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gNabooruPuttingHandsTogetherCastingMagicFrameData[];
extern JointIndex gNabooruPuttingHandsTogetherCastingMagicJointIndices[];
extern AnimationHeader gNabooruPuttingHandsTogetherCastingMagicAnim;
extern s16 gNabooruSittingCrossLeggedFrameData[];
extern JointIndex gNabooruSittingCrossLeggedJointIndices[];
extern AnimationHeader gNabooruSittingCrossLeggedAnim;
extern s16 gNabooruTrappedInVortexRaisingArmFrameData[];
extern JointIndex gNabooruTrappedInVortexRaisingArmJointIndices[];
extern AnimationHeader gNabooruTrappedInVortexRaisingArmAnim;
extern s16 gNabooruSuckedByVortexFrameData[];
extern JointIndex gNabooruSuckedByVortexJointIndices[];
extern AnimationHeader gNabooruSuckedByVortexAnim;
extern s16 gNabooruTrappedInVortexPushingGroundFrameData[];
extern JointIndex gNabooruTrappedInVortexPushingGroundJointIndices[];
extern AnimationHeader gNabooruTrappedInVortexPushingGroundAnim;
extern s16 gNabooruRaisingArmsGivingMedallionFrameData[];
extern JointIndex gNabooruRaisingArmsGivingMedallionJointIndices[];
extern AnimationHeader gNabooruRaisingArmsGivingMedallionAnim;
extern s16 gNabooruArmsRaisedGivingMedallionFrameData[];
extern JointIndex gNabooruArmsRaisedGivingMedallionJointIndices[];
extern AnimationHeader gNabooruArmsRaisedGivingMedallionAnim;
extern s16 gNabooruOnOneKneeTurningHeadRightToLeftTransitionFrameData[];
extern JointIndex gNabooruOnOneKneeTurningHeadRightToLeftTransitionJointIndices[];
extern AnimationHeader gNabooruOnOneKneeTurningHeadRightToLeftTransitionAnim;
extern s16 gNabooruOnOneKneeLookingLeftFrameData[];
extern JointIndex gNabooruOnOneKneeLookingLeftJointIndices[];
extern AnimationHeader gNabooruOnOneKneeLookingLeftAnim;
extern s16 gNabooruOnAllFoursToOnOneKneeLookingRightTransitionFrameData[];
extern JointIndex gNabooruOnAllFoursToOnOneKneeLookingRightTransitionJointIndices[];
extern AnimationHeader gNabooruOnAllFoursToOnOneKneeLookingRightTransitionAnim;
extern s16 gNabooruOnOneKneeLookingRightFrameData[];
extern JointIndex gNabooruOnOneKneeLookingRightJointIndices[];
extern AnimationHeader gNabooruOnOneKneeLookingRightAnim;
extern s16 gNabooruOnAllFoursFrameData[];
extern JointIndex gNabooruOnAllFoursJointIndices[];
extern AnimationHeader gNabooruOnAllFoursAnim;
extern s16 gNabooruStandingHandsOnHipsFrameData[];
extern JointIndex gNabooruStandingHandsOnHipsJointIndices[];
extern AnimationHeader gNabooruStandingHandsOnHipsAnim;
extern s16 gNabooruStandingToWalkingTransitionFrameData[];
extern JointIndex gNabooruStandingToWalkingTransitionJointIndices[];
extern AnimationHeader gNabooruStandingToWalkingTransitionAnim;
extern s16 gNabooruSittingCrossLeggedLookingUpRightFrameData[];
extern JointIndex gNabooruSittingCrossLeggedLookingUpRightJointIndices[];
extern AnimationHeader gNabooruSittingCrossLeggedLookingUpRightAnim;
extern s16 gNabooruSittingCrossLeggedTurningToLookUpRightTransitionFrameData[];
extern JointIndex gNabooruSittingCrossLeggedTurningToLookUpRightTransitionJointIndices[];
extern AnimationHeader gNabooruSittingCrossLeggedTurningToLookUpRightTransitionAnim;
extern s16 gNabooruKneeingToRunningToHitFrameData[];
extern JointIndex gNabooruKneeingToRunningToHitJointIndices[];
extern AnimationHeader gNabooruKneeingToRunningToHitAnim;
extern s16 gNabooruUnusedKneelingAtCrawlspaceToStandingTransitionFrameData[];
extern JointIndex gNabooruUnusedKneelingAtCrawlspaceToStandingTransitionJointIndices[];
extern AnimationHeader gNabooruUnusedKneelingAtCrawlspaceToStandingTransitionAnim;
extern s16 gNabooruKneeingAtCrawlspaceFrameData[];
extern JointIndex gNabooruKneeingAtCrawlspaceJointIndices[];
extern AnimationHeader gNabooruKneeingAtCrawlspaceAnim;
extern s16 gNabooruCollapseFromStandingToKneelingTransitionFrameData[];
extern JointIndex gNabooruCollapseFromStandingToKneelingTransitionJointIndices[];
extern AnimationHeader gNabooruCollapseFromStandingToKneelingTransitionAnim;
extern s16 gNabooruWalkingFrameData[];
extern JointIndex gNabooruWalkingJointIndices[];
extern AnimationHeader gNabooruWalkingAnim;
extern s16 gNabooruStandingHandsOnHipsChamberOfSagesFrameData[];
extern JointIndex gNabooruStandingHandsOnHipsChamberOfSagesJointIndices[];
extern AnimationHeader gNabooruStandingHandsOnHipsChamberOfSagesAnim;
//#define gNabooru1TLUT_TLUT_COUNT 256
extern u64 gNabooru1TLUT[];
#define gNabooruClothesButtonsTex_WIDTH 16
#define gNabooruClothesButtonsTex_HEIGHT 16
extern u64 gNabooruClothesButtonsTex[TEX_LEN(u64, gNabooruClothesButtonsTex_WIDTH, gNabooruClothesButtonsTex_HEIGHT, 8)];
#define gNabooruSkinGradient1Tex_WIDTH 8
#define gNabooruSkinGradient1Tex_HEIGHT 8
extern u64 gNabooruSkinGradient1Tex[TEX_LEN(u64, gNabooruSkinGradient1Tex_WIDTH, gNabooruSkinGradient1Tex_HEIGHT, 8)];
#define gNabooruNavelTex_WIDTH 16
#define gNabooruNavelTex_HEIGHT 16
extern u64 gNabooruNavelTex[TEX_LEN(u64, gNabooruNavelTex_WIDTH, gNabooruNavelTex_HEIGHT, 8)];
#define gNabooruPendantJewelTex_WIDTH 32
#define gNabooruPendantJewelTex_HEIGHT 32
extern u64 gNabooruPendantJewelTex[TEX_LEN(u64, gNabooruPendantJewelTex_WIDTH, gNabooruPendantJewelTex_HEIGHT, 8)];
#define gNabooruCleavageTex_WIDTH 8
#define gNabooruCleavageTex_HEIGHT 8
extern u64 gNabooruCleavageTex[TEX_LEN(u64, gNabooruCleavageTex_WIDTH, gNabooruCleavageTex_HEIGHT, 8)];
#define gNabooruTopFabricPatternTex_WIDTH 16
#define gNabooruTopFabricPatternTex_HEIGHT 16
extern u64 gNabooruTopFabricPatternTex[TEX_LEN(u64, gNabooruTopFabricPatternTex_WIDTH, gNabooruTopFabricPatternTex_HEIGHT, 16)];
#define gNabooruAnkleBraceletTex_WIDTH 16
#define gNabooruAnkleBraceletTex_HEIGHT 16
extern u64 gNabooruAnkleBraceletTex[TEX_LEN(u64, gNabooruAnkleBraceletTex_WIDTH, gNabooruAnkleBraceletTex_HEIGHT, 8)];
#define gNabooruTrousersShadowTex_WIDTH 8
#define gNabooruTrousersShadowTex_HEIGHT 8
extern u64 gNabooruTrousersShadowTex[TEX_LEN(u64, gNabooruTrousersShadowTex_WIDTH, gNabooruTrousersShadowTex_HEIGHT, 8)];
#define gNabooruTrousersFabricTex_WIDTH 16
#define gNabooruTrousersFabricTex_HEIGHT 16
extern u64 gNabooruTrousersFabricTex[TEX_LEN(u64, gNabooruTrousersFabricTex_WIDTH, gNabooruTrousersFabricTex_HEIGHT, 8)];
#define gNabooruTrouserCuffPatternTex_WIDTH 16
#define gNabooruTrouserCuffPatternTex_HEIGHT 16
extern u64 gNabooruTrouserCuffPatternTex[TEX_LEN(u64, gNabooruTrouserCuffPatternTex_WIDTH, gNabooruTrouserCuffPatternTex_HEIGHT, 16)];
#define gNabooruBeltJewelTex_WIDTH 16
#define gNabooruBeltJewelTex_HEIGHT 16
extern u64 gNabooruBeltJewelTex[TEX_LEN(u64, gNabooruBeltJewelTex_WIDTH, gNabooruBeltJewelTex_HEIGHT, 8)];
#define gNabooruBeltTex_WIDTH 32
#define gNabooruBeltTex_HEIGHT 32
extern u64 gNabooruBeltTex[TEX_LEN(u64, gNabooruBeltTex_WIDTH, gNabooruBeltTex_HEIGHT, 16)];
//#define gNabooru2TLUT_TLUT_COUNT 236
extern u64 gNabooru2TLUT[];
//#define gNabooru3TLUT_TLUT_COUNT 256
extern u64 gNabooru3TLUT[];
#define gNabooruSkinGradient2Tex_WIDTH 8
#define gNabooruSkinGradient2Tex_HEIGHT 8
extern u64 gNabooruSkinGradient2Tex[TEX_LEN(u64, gNabooruSkinGradient2Tex_WIDTH, gNabooruSkinGradient2Tex_HEIGHT, 8)];
#define gNabooruForeheadJewelSettingTopTex_WIDTH 8
#define gNabooruForeheadJewelSettingTopTex_HEIGHT 4
extern u64 gNabooruForeheadJewelSettingTopTex[TEX_LEN(u64, gNabooruForeheadJewelSettingTopTex_WIDTH, gNabooruForeheadJewelSettingTopTex_HEIGHT, 8)];
#define gNabooruForeheadJewelSettingBottomTex_WIDTH 8
#define gNabooruForeheadJewelSettingBottomTex_HEIGHT 16
extern u64 gNabooruForeheadJewelSettingBottomTex[TEX_LEN(u64, gNabooruForeheadJewelSettingBottomTex_WIDTH, gNabooruForeheadJewelSettingBottomTex_HEIGHT, 8)];
#define gNabooruForeheadJewelSettingSideTex_WIDTH 16
#define gNabooruForeheadJewelSettingSideTex_HEIGHT 16
extern u64 gNabooruForeheadJewelSettingSideTex[TEX_LEN(u64, gNabooruForeheadJewelSettingSideTex_WIDTH, gNabooruForeheadJewelSettingSideTex_HEIGHT, 8)];
#define gNabooruEyeOpenTex_WIDTH 32
#define gNabooruEyeOpenTex_HEIGHT 32
extern u64 gNabooruEyeOpenTex[TEX_LEN(u64, gNabooruEyeOpenTex_WIDTH, gNabooruEyeOpenTex_HEIGHT, 8)];
#define gNabooruHairTex_WIDTH 16
#define gNabooruHairTex_HEIGHT 16
extern u64 gNabooruHairTex[TEX_LEN(u64, gNabooruHairTex_WIDTH, gNabooruHairTex_HEIGHT, 8)];
#define gNabooruForeheadJewelTex_WIDTH 16
#define gNabooruForeheadJewelTex_HEIGHT 16
extern u64 gNabooruForeheadJewelTex[TEX_LEN(u64, gNabooruForeheadJewelTex_WIDTH, gNabooruForeheadJewelTex_HEIGHT, 8)];
#define gNabooruEarTex_WIDTH 8
#define gNabooruEarTex_HEIGHT 16
extern u64 gNabooruEarTex[TEX_LEN(u64, gNabooruEarTex_WIDTH, gNabooruEarTex_HEIGHT, 8)];
#define gNabooruFingersBackSideTex_WIDTH 32
#define gNabooruFingersBackSideTex_HEIGHT 32
extern u64 gNabooruFingersBackSideTex[TEX_LEN(u64, gNabooruFingersBackSideTex_WIDTH, gNabooruFingersBackSideTex_HEIGHT, 8)];
#define gNabooruEarringsNecklaceArmletTex_WIDTH 32
#define gNabooruEarringsNecklaceArmletTex_HEIGHT 32
extern u64 gNabooruEarringsNecklaceArmletTex[TEX_LEN(u64, gNabooruEarringsNecklaceArmletTex_WIDTH, gNabooruEarringsNecklaceArmletTex_HEIGHT, 16)];
#define gNabooruPonytailCuffJewelTex_WIDTH 32
#define gNabooruPonytailCuffJewelTex_HEIGHT 32
extern u64 gNabooruPonytailCuffJewelTex[TEX_LEN(u64, gNabooruPonytailCuffJewelTex_WIDTH, gNabooruPonytailCuffJewelTex_HEIGHT, 8)];
#define gNabooruGloveHandBackTex_WIDTH 16
#define gNabooruGloveHandBackTex_HEIGHT 16
extern u64 gNabooruGloveHandBackTex[TEX_LEN(u64, gNabooruGloveHandBackTex_WIDTH, gNabooruGloveHandBackTex_HEIGHT, 8)];
#define gNabooruGloveHandPalmTex_WIDTH 8
#define gNabooruGloveHandPalmTex_HEIGHT 8
extern u64 gNabooruGloveHandPalmTex[TEX_LEN(u64, gNabooruGloveHandPalmTex_WIDTH, gNabooruGloveHandPalmTex_HEIGHT, 8)];
#define gNabooruShoeUpperMouthTex_WIDTH 8
#define gNabooruShoeUpperMouthTex_HEIGHT 8
extern u64 gNabooruShoeUpperMouthTex[TEX_LEN(u64, gNabooruShoeUpperMouthTex_WIDTH, gNabooruShoeUpperMouthTex_HEIGHT, 8)];
#define gNabooruShoeSoleTex_WIDTH 8
#define gNabooruShoeSoleTex_HEIGHT 8
extern u64 gNabooruShoeSoleTex[TEX_LEN(u64, gNabooruShoeSoleTex_WIDTH, gNabooruShoeSoleTex_HEIGHT, 8)];
#define gNabooruTopOfFootTex_WIDTH 8
#define gNabooruTopOfFootTex_HEIGHT 16
extern u64 gNabooruTopOfFootTex[TEX_LEN(u64, gNabooruTopOfFootTex_WIDTH, gNabooruTopOfFootTex_HEIGHT, 8)];
#define gNabooruFingersPalmSideTex_WIDTH 32
#define gNabooruFingersPalmSideTex_HEIGHT 32
extern u64 gNabooruFingersPalmSideTex[TEX_LEN(u64, gNabooruFingersPalmSideTex_WIDTH, gNabooruFingersPalmSideTex_HEIGHT, 8)];
#define gNabooruEyeHalfTex_WIDTH 32
#define gNabooruEyeHalfTex_HEIGHT 32
extern u64 gNabooruEyeHalfTex[TEX_LEN(u64, gNabooruEyeHalfTex_WIDTH, gNabooruEyeHalfTex_HEIGHT, 8)];
#define gNabooruEyeClosedTex_WIDTH 32
#define gNabooruEyeClosedTex_HEIGHT 32
extern u64 gNabooruEyeClosedTex[TEX_LEN(u64, gNabooruEyeClosedTex_WIDTH, gNabooruEyeClosedTex_HEIGHT, 8)];
#define gNabooruEyeWideTex_WIDTH 32
#define gNabooruEyeWideTex_HEIGHT 32
extern u64 gNabooruEyeWideTex[TEX_LEN(u64, gNabooruEyeWideTex_WIDTH, gNabooruEyeWideTex_HEIGHT, 8)];
#define gNabooruLipsTex_WIDTH 8
#define gNabooruLipsTex_HEIGHT 8
extern u64 gNabooruLipsTex[TEX_LEN(u64, gNabooruLipsTex_WIDTH, gNabooruLipsTex_HEIGHT, 16)];
extern Vtx gNabooruHeadMouthClosedVtx[];
extern Vtx gNabooruUnusedVtx_00EFF8[];
extern Vtx gNabooruPonytailVtx[];
extern Vtx gNabooruLeftHandVtx[];
extern Vtx gNabooruRightHandVtx[];
extern Vtx gNabooruRightFootVtx[];
extern Vtx gNabooruLeftFootVtx[];
extern Vtx gNabooruHeadMouthOpenVtx[];
extern Gfx gNabooruHeadMouthClosedDL[543];
extern Gfx gNabooruBlankDL[1];
extern Gfx gNabooruPonytailDL[34];
extern Gfx gNabooruLeftHandDL[105];
extern Gfx gNabooruRightHandDL[105];
extern Gfx gNabooruRightFootDL[65];
extern Gfx gNabooruLeftFootDL[65];
extern Gfx gNabooruHeadMouthOpenDL[563];
extern Vtx gNabooruRightForearmVtx[];
extern Vtx gNabooruRightUpperArmVtx[];
extern Vtx gNabooruLeftForearmVtx[];
extern Vtx gNabooruLeftUpperArmVtx[];
extern Vtx gNabooruTorsoVtx[];
extern Vtx gNabooruRightShinVtx[];
extern Vtx gNabooruRightThighVtx[];
extern Vtx gNabooruLeftShinVtx[];
extern Vtx gNabooruLeftThighVtx[];
extern Vtx gNabooruWaistVtx[];
extern Gfx gNabooruWaistDL[119];
extern Gfx gNabooruTorsoDL[243];
extern Gfx gNabooruRightUpperArmDL[40];
extern Gfx gNabooruRightForearmDL[55];
extern Gfx gNabooruLeftUpperArmDL[57];
extern Gfx gNabooruLeftForearmDL[55];
extern Gfx gNabooruRightThighDL[56];
extern Gfx gNabooruRightShinDL[101];
extern Gfx gNabooruLeftThighDL[72];
extern Gfx gNabooruLeftShinDL[101];
extern StandardLimb gNabooruRootLimb;
extern StandardLimb gNabooruLeftThighLimb;
extern StandardLimb gNabooruLeftShinLimb;
extern StandardLimb gNabooruLeftFootLimb;
extern StandardLimb gNabooruRightThighLimb;
extern StandardLimb gNabooruRightShinLimb;
extern StandardLimb gNabooruRightFootLimb;
extern StandardLimb gNabooruTorsoLimb;
extern StandardLimb gNabooruLeftUpperArmLimb;
extern StandardLimb gNabooruLeftForearmLimb;
extern StandardLimb gNabooruLeftHandLimb;
extern StandardLimb gNabooruRightUpperArmLimb;
extern StandardLimb gNabooruRightForearmLimb;
extern StandardLimb gNabooruRightHandLimb;
extern StandardLimb gNabooruHeadLimb;
extern StandardLimb gNabooruBlankLimb;
extern StandardLimb gNabooruPonytailLimb;
extern StandardLimb gNabooruWaistLimb;
extern void* gNabooruLimbs[];
typedef enum NabooruLimb {
    /*  0 */ NABOORU_LIMB_NONE,
    /*  1 */ NABOORU_LIMB_ROOT,
    /*  2 */ NABOORU_LIMB_L_THIGH,
    /*  3 */ NABOORU_LIMB_L_SHIN,
    /*  4 */ NABOORU_LIMB_L_FOOT,
    /*  5 */ NABOORU_LIMB_R_THIGH,
    /*  6 */ NABOORU_LIMB_R_SHIN,
    /*  7 */ NABOORU_LIMB_R_FOOT,
    /*  8 */ NABOORU_LIMB_TORSO,
    /*  9 */ NABOORU_LIMB_L_UPPER_ARM,
    /* 10 */ NABOORU_LIMB_L_FOREARM,
    /* 11 */ NABOORU_LIMB_L_HAND,
    /* 12 */ NABOORU_LIMB_R_UPPER_ARM,
    /* 13 */ NABOORU_LIMB_R_FOREARM,
    /* 14 */ NABOORU_LIMB_R_HAND,
    /* 15 */ NABOORU_LIMB_HEAD,
    /* 16 */ NABOORU_LIMB_BLANK,
    /* 17 */ NABOORU_LIMB_PONYTAIL,
    /* 18 */ NABOORU_LIMB_WAIST,
    /* 19 */ NABOORU_LIMB_MAX
} NabooruLimb;
extern FlexSkeletonHeader gNabooruSkel;

#endif
