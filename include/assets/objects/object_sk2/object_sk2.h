#ifndef OBJECT_SK2_H
#define OBJECT_SK2_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gStalfosFlinchFromHitBehindFrameData[];
extern JointIndex gStalfosFlinchFromHitBehindJointIndices[];
extern AnimationHeader gStalfosFlinchFromHitBehindAnim;
extern s16 gStalfosFallOverBackwardsFrameData[];
extern JointIndex gStalfosFallOverBackwardsJointIndices[];
extern AnimationHeader gStalfosFallOverBackwardsAnim;
extern s16 gStalfosJumpBackwardsFrameData[];
extern JointIndex gStalfosJumpBackwardsJointIndices[];
extern AnimationHeader gStalfosJumpBackwardsAnim;
extern s16 gStalfosBlockWithShieldFrameData[];
extern JointIndex gStalfosBlockWithShieldJointIndices[];
extern AnimationHeader gStalfosBlockWithShieldAnim;
extern s16 gStalfosStandAttentionFrameData[];
extern JointIndex gStalfosStandAttentionJointIndices[];
extern AnimationHeader gStalfosStandAttentionAnim;
extern s16 gStalfosFastAdvanceFrameData[];
extern JointIndex gStalfosFastAdvanceJointIndices[];
extern AnimationHeader gStalfosFastAdvanceAnim;
extern s16 gStalfosMiddleGuardFrameData[];
extern JointIndex gStalfosMiddleGuardJointIndices[];
extern AnimationHeader gStalfosMiddleGuardAnim;
extern Vtx gStalfosSkullVtx[];
extern Vtx gStalfosUpperCoreVtx[];
extern Vtx gStalfosRightUpperArmVtx[];
extern Vtx gStalfosLowerCoreVtx[];
extern Vtx gStalfosRightThighVtx[];
extern Vtx gStalfosRightHandVtx[];
extern Vtx gStalfosChestVtx[];
extern Vtx gStalfosJawVtx[];
extern Vtx gStalfosUpperNeckVtx[];
extern Vtx gStalfosLowerNeckVtx[];
extern Vtx gStalfosShieldVtx[];
extern Vtx gStalfosWaistVtx[];
extern Vtx gStalfosRightLowerLegVtx[];
extern Vtx gStalfosRightForearmVtx[];
extern Vtx gStalfosRightFootVtx[];
extern Vtx gStalfosRightShoulderArmorVtx[];
extern Vtx gStalfosLeftUpperArmVtx[];
extern Vtx gStalfosLeftShoulderArmorVtx[];
extern Vtx gStalfosLeftFootVtx[];
extern Vtx gStalfosLeftForearmVtx[];
extern Vtx gStalfosLeftLowerLegVtx[];
extern Vtx gStalfosLeftThighVtx[];
extern Vtx gStalfosLeftHandVtx[];
extern Vtx gStalfosSwordVtx[];
extern Gfx gStalfosSkullDL[106];
extern Gfx gStalfosUpperCoreDL[19];
extern Gfx gStalfosRightUpperArmDL[27];
extern Gfx gStalfosLowerCoreDL[28];
extern Gfx gStalfosRightThighDL[21];
extern Gfx gStalfosRightHandDL[24];
extern Gfx gStalfosChestDL[23];
extern Gfx gStalfosJawDL[29];
extern Gfx gStalfosUpperNeckDL[18];
extern Gfx gStalfosLowerNeckDL[19];
extern Gfx gStalfosShieldDL[32];
extern Gfx gStalfosWaistDL[33];
extern Gfx gStalfosRightLowerLegDL[45];
extern Gfx gStalfosRightForearmDL[31];
extern Gfx gStalfosRightFootDL[32];
extern Gfx gStalfosRightShoulderArmorDL[26];
extern Gfx gStalfosLeftUpperArmDL[27];
extern Gfx gStalfosLeftShoulderArmorDL[26];
extern Gfx gStalfosLeftFootDL[32];
extern Gfx gStalfosLeftForearmDL[31];
extern Gfx gStalfosLeftLowerLegDL[45];
extern Gfx gStalfosLeftThighDL[21];
extern Gfx gStalfosLeftHandDL[24];
extern Gfx gStalfosSwordDL[44];
#define gStalfosEyeSocketTex_WIDTH 16
#define gStalfosEyeSocketTex_HEIGHT 16
extern u64 gStalfosEyeSocketTex[TEX_LEN(u64, gStalfosEyeSocketTex_WIDTH, gStalfosEyeSocketTex_HEIGHT, 16)];
#define gStalfosEyeTex_WIDTH 8
#define gStalfosEyeTex_HEIGHT 8
extern u64 gStalfosEyeTex[TEX_LEN(u64, gStalfosEyeTex_WIDTH, gStalfosEyeTex_HEIGHT, 16)];
#define gStalfosBoneGradientTex_WIDTH 4
#define gStalfosBoneGradientTex_HEIGHT 4
extern u64 gStalfosBoneGradientTex[TEX_LEN(u64, gStalfosBoneGradientTex_WIDTH, gStalfosBoneGradientTex_HEIGHT, 16)];
#define gStalfosNostrilTex_WIDTH 8
#define gStalfosNostrilTex_HEIGHT 8
extern u64 gStalfosNostrilTex[TEX_LEN(u64, gStalfosNostrilTex_WIDTH, gStalfosNostrilTex_HEIGHT, 16)];
#define gStalfosBoneDetailTex_WIDTH 8
#define gStalfosBoneDetailTex_HEIGHT 8
extern u64 gStalfosBoneDetailTex[TEX_LEN(u64, gStalfosBoneDetailTex_WIDTH, gStalfosBoneDetailTex_HEIGHT, 16)];
#define gStalfosRibTex_WIDTH 16
#define gStalfosRibTex_HEIGHT 16
extern u64 gStalfosRibTex[TEX_LEN(u64, gStalfosRibTex_WIDTH, gStalfosRibTex_HEIGHT, 16)];
#define gStalfosTrousersSideTex_WIDTH 16
#define gStalfosTrousersSideTex_HEIGHT 16
extern u64 gStalfosTrousersSideTex[TEX_LEN(u64, gStalfosTrousersSideTex_WIDTH, gStalfosTrousersSideTex_HEIGHT, 16)];
#define gStalfosShieldTex_WIDTH 16
#define gStalfosShieldTex_HEIGHT 16
extern u64 gStalfosShieldTex[TEX_LEN(u64, gStalfosShieldTex_WIDTH, gStalfosShieldTex_HEIGHT, 16)];
#define gStalfosLimbArmorTex_WIDTH 16
#define gStalfosLimbArmorTex_HEIGHT 16
extern u64 gStalfosLimbArmorTex[TEX_LEN(u64, gStalfosLimbArmorTex_WIDTH, gStalfosLimbArmorTex_HEIGHT, 16)];
#define gStalfosArmorBackTex_WIDTH 8
#define gStalfosArmorBackTex_HEIGHT 8
extern u64 gStalfosArmorBackTex[TEX_LEN(u64, gStalfosArmorBackTex_WIDTH, gStalfosArmorBackTex_HEIGHT, 16)];
#define gStalfosSwordBladeTex_WIDTH 4
#define gStalfosSwordBladeTex_HEIGHT 4
extern u64 gStalfosSwordBladeTex[TEX_LEN(u64, gStalfosSwordBladeTex_WIDTH, gStalfosSwordBladeTex_HEIGHT, 16)];
#define gStalfosTrousersTopTex_WIDTH 8
#define gStalfosTrousersTopTex_HEIGHT 8
extern u64 gStalfosTrousersTopTex[TEX_LEN(u64, gStalfosTrousersTopTex_WIDTH, gStalfosTrousersTopTex_HEIGHT, 16)];
extern StandardLimb gStalfosRootLimb;
extern StandardLimb gStalfosUpperBodyRootLimb;
extern StandardLimb gStalfosLowerCoreRootLimb;
extern StandardLimb gStalfosUpperCoreRootLimb;
extern StandardLimb gStalfosLowerNeckRootLimb;
extern StandardLimb gStalfosSkullRootLimb;
extern StandardLimb gStalfosLimb7Limb;
extern StandardLimb gStalfosLimb8Limb;
extern StandardLimb gStalfosJawRootLimb;
extern StandardLimb gStalfosJawLimb;
extern StandardLimb gStalfosSkullLimb;
extern StandardLimb gStalfosUpperNeckLimb;
extern StandardLimb gStalfosLowerNeckLimb;
extern StandardLimb gStalfosUpperCoreLimb;
extern StandardLimb gStalfosChestLimb;
extern StandardLimb gStalfosRightShoulderRootLimb;
extern StandardLimb gStalfosRightShoulderArmorRootLimb;
extern StandardLimb gStalfosRightShoulderArmorLimb;
extern StandardLimb gStalfosLeftShoulderRootLimb;
extern StandardLimb gStalfosLeftShoulderArmorRootLimb;
extern StandardLimb gStalfosLeftShoulderArmorLimb;
extern StandardLimb gStalfosLeftArmRootLimb;
extern StandardLimb gStalfosLeftUpperArmRootLimb;
extern StandardLimb gStalfosLeftForearmRootLimb;
extern StandardLimb gStalfosLeftHandRootLimb;
extern StandardLimb gStalfosLeftHandLimb;
extern StandardLimb gStalfosShieldLimb;
extern StandardLimb gStalfosLeftForearmLimb;
extern StandardLimb gStalfosLeftUpperArmLimb;
extern StandardLimb gStalfosRightArmRootLimb;
extern StandardLimb gStalfosRightUpperArmRootLimb;
extern StandardLimb gStalfosRightForearmRootLimb;
extern StandardLimb gStalfosRightHandRootLimb;
extern StandardLimb gStalfosSwordLimb;
extern StandardLimb gStalfosRightHandLimb;
extern StandardLimb gStalfosRightForearmLimb;
extern StandardLimb gStalfosRightUpperArmLimb;
extern StandardLimb gStalfosLowerCoreLimb;
extern StandardLimb gStalfosLowerBodyRootLimb;
extern StandardLimb gStalfosWaistRootLimb;
extern StandardLimb gStalfosLegsRootLimb;
extern StandardLimb gStalfosLeftLegRootLimb;
extern StandardLimb gStalfosLeftThighRootLimb;
extern StandardLimb gStalfosLeftLowerLegRootLimb;
extern StandardLimb gStalfosLeftAnkleRootLimb;
extern StandardLimb gStalfosLeftAnkleLimb;
extern StandardLimb gStalfosLeftFootRootLimb;
extern StandardLimb gStalfosLeftFootLimb;
extern StandardLimb gStalfosLeftLowerLegLimb;
extern StandardLimb gStalfosLeftThighLimb;
extern StandardLimb gStalfosRightLegRootLimb;
extern StandardLimb gStalfosRightThighRootLimb;
extern StandardLimb gStalfosRightLowerLegRootLimb;
extern StandardLimb gStalfosRightAnkleRootLimb;
extern StandardLimb gStalfosRightAnkleLimb;
extern StandardLimb gStalfosRightFootRootLimb;
extern StandardLimb gStalfosRightFootLimb;
extern StandardLimb gStalfosRightLowerLegLimb;
extern StandardLimb gStalfosRightThighLimb;
extern StandardLimb gStalfosWaistLimb;
extern void* gStalfosLimbs[];
typedef enum StalfosLimb {
    /*  0 */ STALFOS_LIMB_NONE,
    /*  1 */ STALFOS_LIMB_ROOT,
    /*  2 */ STALFOS_LIMB_UPPERBODY_ROOT,
    /*  3 */ STALFOS_LIMB_CORE_LOWER_ROOT,
    /*  4 */ STALFOS_LIMB_CORE_UPPER_ROOT,
    /*  5 */ STALFOS_LIMB_NECK_ROOT,
    /*  6 */ STALFOS_LIMB_HEAD_ROOT,
    /*  7 */ STALFOS_LIMB_7,
    /*  8 */ STALFOS_LIMB_8,
    /*  9 */ STALFOS_LIMB_JAW_ROOT,
    /* 10 */ STALFOS_LIMB_JAW,
    /* 11 */ STALFOS_LIMB_HEAD,
    /* 12 */ STALFOS_LIMB_NECK_UPPER,
    /* 13 */ STALFOS_LIMB_NECK_LOWER,
    /* 14 */ STALFOS_LIMB_CORE_UPPER,
    /* 15 */ STALFOS_LIMB_CHEST,
    /* 16 */ STALFOS_LIMB_SHOULDER_R_ROOT,
    /* 17 */ STALFOS_LIMB_SHOULDER_ARMOR_R_ROOT,
    /* 18 */ STALFOS_LIMB_SHOULDER_ARMOR_R,
    /* 19 */ STALFOS_LIMB_SHOULDER_L_ROOT,
    /* 20 */ STALFOS_LIMB_SHOULDER_ARMOR_L_ROOT,
    /* 21 */ STALFOS_LIMB_SHOULDER_ARMOR_L,
    /* 22 */ STALFOS_LIMB_ARM_L_ROOT,
    /* 23 */ STALFOS_LIMB_UPPERARM_L_ROOT,
    /* 24 */ STALFOS_LIMB_FOREARM_L_ROOT,
    /* 25 */ STALFOS_LIMB_HAND_L_ROOT,
    /* 26 */ STALFOS_LIMB_HAND_L,
    /* 27 */ STALFOS_LIMB_SHIELD,
    /* 28 */ STALFOS_LIMB_FOREARM_L,
    /* 29 */ STALFOS_LIMB_UPPERARM_L,
    /* 30 */ STALFOS_LIMB_ARM_R_ROOT,
    /* 31 */ STALFOS_LIMB_UPPERARM_R_ROOT,
    /* 32 */ STALFOS_LIMB_FOREARM_R_ROOT,
    /* 33 */ STALFOS_LIMB_HAND_R_ROOT,
    /* 34 */ STALFOS_LIMB_SWORD,
    /* 35 */ STALFOS_LIMB_HAND_R,
    /* 36 */ STALFOS_LIMB_FOREARM_R,
    /* 37 */ STALFOS_LIMB_UPPERARM_R,
    /* 38 */ STALFOS_LIMB_CORE_LOWER,
    /* 39 */ STALFOS_LIMB_LOWERBODY_ROOT,
    /* 40 */ STALFOS_LIMB_WAIST_ROOT,
    /* 41 */ STALFOS_LIMB_LEGS_ROOT,
    /* 42 */ STALFOS_LIMB_LEG_L_ROOT,
    /* 43 */ STALFOS_LIMB_THIGH_L_ROOT,
    /* 44 */ STALFOS_LIMB_LOWERLEG_L_ROOT,
    /* 45 */ STALFOS_LIMB_ANKLE_L_ROOT,
    /* 46 */ STALFOS_LIMB_ANKLE_L,
    /* 47 */ STALFOS_LIMB_FOOT_L_ROOT,
    /* 48 */ STALFOS_LIMB_FOOT_L,
    /* 49 */ STALFOS_LIMB_LOWERLEG_L,
    /* 50 */ STALFOS_LIMB_THIGH_L,
    /* 51 */ STALFOS_LIMB_LEG_R_ROOT,
    /* 52 */ STALFOS_LIMB_THIGH_R_ROOT,
    /* 53 */ STALFOS_LIMB_LOWERLEG_R_ROOT,
    /* 54 */ STALFOS_LIMB_ANKLE_R_ROOT,
    /* 55 */ STALFOS_LIMB_ANKLE_R,
    /* 56 */ STALFOS_LIMB_FOOT_R_ROOT,
    /* 57 */ STALFOS_LIMB_FOOT_R,
    /* 58 */ STALFOS_LIMB_LOWERLEG_R,
    /* 59 */ STALFOS_LIMB_THIGH_R,
    /* 60 */ STALFOS_LIMB_WAIST,
    /* 61 */ STALFOS_LIMB_MAX
} StalfosLimb;
extern SkeletonHeader gStalfosSkel;
extern s16 gStalfosSlowAdvanceFrameData[];
extern JointIndex gStalfosSlowAdvanceJointIndices[];
extern AnimationHeader gStalfosSlowAdvanceAnim;
extern s16 gStalfosFlinchFromHitFrontFrameData[];
extern JointIndex gStalfosFlinchFromHitFrontJointIndices[];
extern AnimationHeader gStalfosFlinchFromHitFrontAnim;
extern s16 gStalfosFallOverForwardsFrameData[];
extern JointIndex gStalfosFallOverForwardsJointIndices[];
extern AnimationHeader gStalfosFallOverForwardsAnim;
extern s16 gStalfosLeapFrameData[];
extern JointIndex gStalfosLeapJointIndices[];
extern AnimationHeader gStalfosLeapAnim;
extern s16 gStalfosJumpFrameData[];
extern JointIndex gStalfosJumpJointIndices[];
extern AnimationHeader gStalfosJumpAnim;
extern s16 gStalfosJumpslashFrameData[];
extern JointIndex gStalfosJumpslashJointIndices[];
extern AnimationHeader gStalfosJumpslashAnim;
extern s16 gStalfosDownSlashFrameData[];
extern JointIndex gStalfosDownSlashJointIndices[];
extern AnimationHeader gStalfosDownSlashAnim;
extern s16 gStalfosRecoverFromDownSlashFrameData[];
extern JointIndex gStalfosRecoverFromDownSlashJointIndices[];
extern AnimationHeader gStalfosRecoverFromDownSlashAnim;
extern s16 gStalfosUpSlashFrameData[];
extern JointIndex gStalfosUpSlashJointIndices[];
extern AnimationHeader gStalfosUpSlashAnim;
extern s16 gStalfosLandFromLeapFrameData[];
extern JointIndex gStalfosLandFromLeapJointIndices[];
extern AnimationHeader gStalfosLandFromLeapAnim;
extern s16 gStalfosLaughFrameData[];
extern JointIndex gStalfosLaughJointIndices[];
extern AnimationHeader gStalfosLaughAnim;
extern s16 gStalfosLookAroundFrameData[];
extern JointIndex gStalfosLookAroundJointIndices[];
extern AnimationHeader gStalfosLookAroundAnim;
extern s16 gStalfosSidestepFrameData[];
extern JointIndex gStalfosSidestepJointIndices[];
extern AnimationHeader gStalfosSidestepAnim;
extern s16 gStalfosReleaseAttentionFrameData[];
extern JointIndex gStalfosReleaseAttentionJointIndices[];
extern AnimationHeader gStalfosReleaseAttentionAnim;

#endif
