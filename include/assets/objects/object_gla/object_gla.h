#ifndef OBJECT_GLA_H
#define OBJECT_GLA_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gGerudoPurpleUnusedHorizontalSlashFrameData[];
extern JointIndex gGerudoPurpleUnusedHorizontalSlashJointIndices[];
extern AnimationHeader gGerudoPurpleUnusedHorizontalSlashAnim;
extern s16 gGerudoPurpleUnusedSlashToStandingFrameData[];
extern JointIndex gGerudoPurpleUnusedSlashToStandingJointIndices[];
extern AnimationHeader gGerudoPurpleUnusedSlashToStandingAnim;
extern s16 gGerudoPurpleFallingToGroundFrameData[];
extern JointIndex gGerudoPurpleFallingToGroundJointIndices[];
extern AnimationHeader gGerudoPurpleFallingToGroundAnim;
extern s16 gGerudoPurpleUnusedStandingToCrouchFrameData[];
extern JointIndex gGerudoPurpleUnusedStandingToCrouchJointIndices[];
extern AnimationHeader gGerudoPurpleUnusedStandingToCrouchAnim;
extern s16 gGerudoPurpleUnusedCrouchingLookAroundFrameData[];
extern JointIndex gGerudoPurpleUnusedCrouchingLookAroundJointIndices[];
extern AnimationHeader gGerudoPurpleUnusedCrouchingLookAroundAnim;
extern Vtx gGerudoPurpleRightForearmVtx[];
extern Vtx gGerudoPurpleRightUpperArmVtx[];
extern Vtx gGerudoPurpleLeftForearmVtx[];
extern Vtx gGerudoPurpleLeftUpperArmVtx[];
extern Vtx gGerudoPurpleTorsoVtx[];
extern Vtx gGerudoPurpleLeftShinVtx[];
extern Vtx gGerudoPurpleLeftThighVtx[];
extern Vtx gGerudoPurpleRightShinVtx[];
extern Vtx gGerudoPurpleRightThighVtx[];
extern Vtx gGerudoPurpleWaistVtx[];
extern Gfx gGerudoPurpleTorsoDL[148];
extern Gfx gGerudoPurpleRightUpperArmDL[39];
extern Gfx gGerudoPurpleRightForearmDL[64];
extern Gfx gGerudoPurpleLeftUpperArmDL[39];
extern Gfx gGerudoPurpleLeftForearmDL[64];
extern Gfx gGerudoPurpleWaistDL[51];
extern Gfx gGerudoPurpleRightThighDL[34];
extern Gfx gGerudoPurpleRightShinDL[56];
extern Gfx gGerudoPurpleLeftThighDL[34];
extern Gfx gGerudoPurpleLeftShinDL[56];
//#define gGerudoPurple1TLUT_TLUT_COUNT 256
extern u64 gGerudoPurple1TLUT[];
#define gGerudoPurpleSkinShadowTex_WIDTH 8
#define gGerudoPurpleSkinShadowTex_HEIGHT 8
extern u64 gGerudoPurpleSkinShadowTex[TEX_LEN(u64, gGerudoPurpleSkinShadowTex_WIDTH, gGerudoPurpleSkinShadowTex_HEIGHT, 8)];
#define gGerudoPurpleDarkFabricTex_WIDTH 8
#define gGerudoPurpleDarkFabricTex_HEIGHT 8
extern u64 gGerudoPurpleDarkFabricTex[TEX_LEN(u64, gGerudoPurpleDarkFabricTex_WIDTH, gGerudoPurpleDarkFabricTex_HEIGHT, 8)];
#define gGerudoPurpleNavelTex_WIDTH 16
#define gGerudoPurpleNavelTex_HEIGHT 16
extern u64 gGerudoPurpleNavelTex[TEX_LEN(u64, gGerudoPurpleNavelTex_WIDTH, gGerudoPurpleNavelTex_HEIGHT, 8)];
#define gGerudoPurpleChestJewelTex_WIDTH 16
#define gGerudoPurpleChestJewelTex_HEIGHT 16
extern u64 gGerudoPurpleChestJewelTex[TEX_LEN(u64, gGerudoPurpleChestJewelTex_WIDTH, gGerudoPurpleChestJewelTex_HEIGHT, 8)];
#define gGerudoPurpleFabricFoldTex_WIDTH 16
#define gGerudoPurpleFabricFoldTex_HEIGHT 16
extern u64 gGerudoPurpleFabricFoldTex[TEX_LEN(u64, gGerudoPurpleFabricFoldTex_WIDTH, gGerudoPurpleFabricFoldTex_HEIGHT, 8)];
//#define gGerudoPurple2TLUT_TLUT_COUNT 216
extern u64 gGerudoPurple2TLUT[];
#define gGerudoPurpleSkinEdgeTex_WIDTH 8
#define gGerudoPurpleSkinEdgeTex_HEIGHT 8
extern u64 gGerudoPurpleSkinEdgeTex[TEX_LEN(u64, gGerudoPurpleSkinEdgeTex_WIDTH, gGerudoPurpleSkinEdgeTex_HEIGHT, 8)];
#define gGerudoPurpleEarTex_WIDTH 8
#define gGerudoPurpleEarTex_HEIGHT 16
extern u64 gGerudoPurpleEarTex[TEX_LEN(u64, gGerudoPurpleEarTex_WIDTH, gGerudoPurpleEarTex_HEIGHT, 8)];
#define gGerudoPurpleEyeOpenTex_WIDTH 32
#define gGerudoPurpleEyeOpenTex_HEIGHT 32
extern u64 gGerudoPurpleEyeOpenTex[TEX_LEN(u64, gGerudoPurpleEyeOpenTex_WIDTH, gGerudoPurpleEyeOpenTex_HEIGHT, 8)];
#define gGerudoPurpleGlaiveGuard_WIDTH 8
#define gGerudoPurpleGlaiveGuard_HEIGHT 8
extern u64 gGerudoPurpleGlaiveGuard[TEX_LEN(u64, gGerudoPurpleGlaiveGuard_WIDTH, gGerudoPurpleGlaiveGuard_HEIGHT, 8)];
#define gGerudoPurpleGlaiveBladeFabricPatternTex_WIDTH 16
#define gGerudoPurpleGlaiveBladeFabricPatternTex_HEIGHT 16
extern u64 gGerudoPurpleGlaiveBladeFabricPatternTex[TEX_LEN(u64, gGerudoPurpleGlaiveBladeFabricPatternTex_WIDTH, gGerudoPurpleGlaiveBladeFabricPatternTex_HEIGHT, 8)];
#define gGerudoPurpleShoeUpperTex_WIDTH 8
#define gGerudoPurpleShoeUpperTex_HEIGHT 16
extern u64 gGerudoPurpleShoeUpperTex[TEX_LEN(u64, gGerudoPurpleShoeUpperTex_WIDTH, gGerudoPurpleShoeUpperTex_HEIGHT, 8)];
#define gGerudoPurpleGlaiveHaftShoeSoleTex_WIDTH 8
#define gGerudoPurpleGlaiveHaftShoeSoleTex_HEIGHT 8
extern u64 gGerudoPurpleGlaiveHaftShoeSoleTex[TEX_LEN(u64, gGerudoPurpleGlaiveHaftShoeSoleTex_WIDTH, gGerudoPurpleGlaiveHaftShoeSoleTex_HEIGHT, 8)];
#define gGerudoPurpleEyeHalfTex_WIDTH 32
#define gGerudoPurpleEyeHalfTex_HEIGHT 32
extern u64 gGerudoPurpleEyeHalfTex[TEX_LEN(u64, gGerudoPurpleEyeHalfTex_WIDTH, gGerudoPurpleEyeHalfTex_HEIGHT, 8)];
#define gGerudoPurpleMetalTex_WIDTH 8
#define gGerudoPurpleMetalTex_HEIGHT 16
extern u64 gGerudoPurpleMetalTex[TEX_LEN(u64, gGerudoPurpleMetalTex_WIDTH, gGerudoPurpleMetalTex_HEIGHT, 8)];
#define gGerudoPurpleHairTex_WIDTH 16
#define gGerudoPurpleHairTex_HEIGHT 16
extern u64 gGerudoPurpleHairTex[TEX_LEN(u64, gGerudoPurpleHairTex_WIDTH, gGerudoPurpleHairTex_HEIGHT, 8)];
#define gGerudoPurpleLipsFingersTex_WIDTH 16
#define gGerudoPurpleLipsFingersTex_HEIGHT 16
extern u64 gGerudoPurpleLipsFingersTex[TEX_LEN(u64, gGerudoPurpleLipsFingersTex_WIDTH, gGerudoPurpleLipsFingersTex_HEIGHT, 8)];
#define gGerudoPurpleEyeClosedTex_WIDTH 32
#define gGerudoPurpleEyeClosedTex_HEIGHT 32
extern u64 gGerudoPurpleEyeClosedTex[TEX_LEN(u64, gGerudoPurpleEyeClosedTex_WIDTH, gGerudoPurpleEyeClosedTex_HEIGHT, 8)];
extern Vtx gGerudoPurpleLeftFootVtx[];
extern Vtx gGerudoPurpleRightFootVtx[];
extern Vtx gGerudoPurpleLeftHandVtx[];
extern Vtx gGerudoPurpleRightHandVtx[];
extern Vtx gGerudoPurpleGlaiveVtx[];
extern Vtx gGerudoPurpleVeilVtx[];
extern Vtx gGerudoPurplePonytailVtx[];
extern Vtx gGerudoPurpleHeadVtx[];
extern Gfx gGerudoPurpleLeftFootDL[56];
extern Gfx gGerudoPurpleRightFootDL[56];
extern Gfx gGerudoPurpleLeftHandDL[45];
extern Gfx gGerudoPurpleRightHandDL[45];
extern Gfx gGerudoPurpleGlaiveDL[62];
extern Gfx gGerudoPurpleVeilDL[23];
extern Gfx gGerudoPurplePonytailDL[30];
extern Gfx gGerudoPurpleHeadDL[151];
extern StandardLimb gGerudoPurpleRootLimb;
extern StandardLimb gGerudoPurpleTorsoLimb;
extern StandardLimb gGerudoPurpleNeckLimb;
extern StandardLimb gGerudoPurplePonytailLimb;
extern StandardLimb gGerudoPurpleVeilLimb;
extern StandardLimb gGerudoPurpleHeadLimb;
extern StandardLimb gGerudoPurpleRightUpperArmLimb;
extern StandardLimb gGerudoPurpleRightForearmLimb;
extern StandardLimb gGerudoPurpleRightWristLimb;
extern StandardLimb gGerudoPurpleRightHandLimb;
extern StandardLimb gGerudoPurpleGlaiveLimb;
extern StandardLimb gGerudoPurpleLeftUpperArmLimb;
extern StandardLimb gGerudoPurpleLeftForearmLimb;
extern StandardLimb gGerudoPurpleLeftHandLimb;
extern StandardLimb gGerudoPurpleLeftThighLimb;
extern StandardLimb gGerudoPurpleLeftShinLimb;
extern StandardLimb gGerudoPurpleLeftFootLimb;
extern StandardLimb gGerudoPurpleRightThighLimb;
extern StandardLimb gGerudoPurpleRightShinLimb;
extern StandardLimb gGerudoPurpleRightFootLimb;
extern StandardLimb gGerudoPurpleWaistLimb;
extern void* gGerudoPurpleLimbs[];
typedef enum gGerudoPurpleSkelLimb {
    /*  0 */ LIMB_OBJECT_GLA_008968_NONE,
    /*  1 */ LIMB_OBJECT_GLA_008818,
    /*  2 */ LIMB_OBJECT_GLA_008824,
    /*  3 */ LIMB_OBJECT_GLA_008830,
    /*  4 */ LIMB_OBJECT_GLA_00883C,
    /*  5 */ LIMB_OBJECT_GLA_008848,
    /*  6 */ LIMB_OBJECT_GLA_008854,
    /*  7 */ LIMB_OBJECT_GLA_008860,
    /*  8 */ LIMB_OBJECT_GLA_00886C,
    /*  9 */ LIMB_OBJECT_GLA_008878,
    /* 10 */ LIMB_OBJECT_GLA_008884,
    /* 11 */ LIMB_OBJECT_GLA_008890,
    /* 12 */ LIMB_OBJECT_GLA_00889C,
    /* 13 */ LIMB_OBJECT_GLA_0088A8,
    /* 14 */ LIMB_OBJECT_GLA_0088B4,
    /* 15 */ LIMB_OBJECT_GLA_0088C0,
    /* 16 */ LIMB_OBJECT_GLA_0088CC,
    /* 17 */ LIMB_OBJECT_GLA_0088D8,
    /* 18 */ LIMB_OBJECT_GLA_0088E4,
    /* 19 */ LIMB_OBJECT_GLA_0088F0,
    /* 20 */ LIMB_OBJECT_GLA_0088FC,
    /* 21 */ LIMB_OBJECT_GLA_008908,
    /* 22 */ LIMB_OBJECT_GLA_008968_MAX
} gGerudoPurpleSkelLimb;
extern FlexSkeletonHeader gGerudoPurpleSkel;
extern s16 gGerudoPurpleChargingFrameData[];
extern JointIndex gGerudoPurpleChargingJointIndices[];
extern AnimationHeader gGerudoPurpleChargingAnim;
extern s16 gGerudoPurpleLookingAboutFrameData[];
extern JointIndex gGerudoPurpleLookingAboutJointIndices[];
extern AnimationHeader gGerudoPurpleLookingAboutAnim;
extern s16 gGerudoPurpleWalkingFrameData[];
extern JointIndex gGerudoPurpleWalkingJointIndices[];
extern AnimationHeader gGerudoPurpleWalkingAnim;

#endif
