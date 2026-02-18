#ifndef OBJECT_IM_H
#define OBJECT_IM_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gImpaRaiseArmsFrameData[];
extern JointIndex gImpaRaiseArmsJointIndices[];
extern AnimationHeader gImpaRaiseArmsAnim;
extern s16 gImpaPresentShadowMedallionFrameData[];
extern JointIndex gImpaPresentShadowMedallionJointIndices[];
extern AnimationHeader gImpaPresentShadowMedallionAnim;
extern s16 gImpaThrowDekuNutFrameData[];
extern JointIndex gImpaThrowDekuNutJointIndices[];
extern AnimationHeader gImpaThrowDekuNutAnim;
extern s16 gImpaIdleFrameData[];
extern JointIndex gImpaIdleJointIndices[];
extern AnimationHeader gImpaIdleAnim;
//#define object_im_TLUT_001880_TLUT_COUNT 256
extern u64 object_im_TLUT_001880[];
#define gImpaBrownGradientTex_WIDTH 8
#define gImpaBrownGradientTex_HEIGHT 8
extern u64 gImpaBrownGradientTex[TEX_LEN(u64, gImpaBrownGradientTex_WIDTH, gImpaBrownGradientTex_HEIGHT, 8)];
#define gImpaSkinAndArmGuardTex_WIDTH 16
#define gImpaSkinAndArmGuardTex_HEIGHT 32
extern u64 gImpaSkinAndArmGuardTex[TEX_LEN(u64, gImpaSkinAndArmGuardTex_WIDTH, gImpaSkinAndArmGuardTex_HEIGHT, 8)];
#define gImpaElbowTex_WIDTH 16
#define gImpaElbowTex_HEIGHT 16
extern u64 gImpaElbowTex[TEX_LEN(u64, gImpaElbowTex_WIDTH, gImpaElbowTex_HEIGHT, 8)];
#define gImpaShoulderPadBottomEdgeTex_WIDTH 8
#define gImpaShoulderPadBottomEdgeTex_HEIGHT 8
extern u64 gImpaShoulderPadBottomEdgeTex[TEX_LEN(u64, gImpaShoulderPadBottomEdgeTex_WIDTH, gImpaShoulderPadBottomEdgeTex_HEIGHT, 8)];
#define gImpaShoulderSkinTex_WIDTH 8
#define gImpaShoulderSkinTex_HEIGHT 16
extern u64 gImpaShoulderSkinTex[TEX_LEN(u64, gImpaShoulderSkinTex_WIDTH, gImpaShoulderSkinTex_HEIGHT, 8)];
#define gImpaChestPlateTex_WIDTH 8
#define gImpaChestPlateTex_HEIGHT 16
extern u64 gImpaChestPlateTex[TEX_LEN(u64, gImpaChestPlateTex_WIDTH, gImpaChestPlateTex_HEIGHT, 8)];
#define gImpaEmblemTex_WIDTH 16
#define gImpaEmblemTex_HEIGHT 32
extern u64 gImpaEmblemTex[TEX_LEN(u64, gImpaEmblemTex_WIDTH, gImpaEmblemTex_HEIGHT, 8)];
#define gImpaSpearEmblemTex_WIDTH 16
#define gImpaSpearEmblemTex_HEIGHT 32
extern u64 gImpaSpearEmblemTex[TEX_LEN(u64, gImpaSpearEmblemTex_WIDTH, gImpaSpearEmblemTex_HEIGHT, 8)];
#define gImpaChestPlateStrapTex_WIDTH 16
#define gImpaChestPlateStrapTex_HEIGHT 16
extern u64 gImpaChestPlateStrapTex[TEX_LEN(u64, gImpaChestPlateStrapTex_WIDTH, gImpaChestPlateStrapTex_HEIGHT, 8)];
#define gImpaChestPlateEdgeTex_WIDTH 8
#define gImpaChestPlateEdgeTex_HEIGHT 16
extern u64 gImpaChestPlateEdgeTex[TEX_LEN(u64, gImpaChestPlateEdgeTex_WIDTH, gImpaChestPlateEdgeTex_HEIGHT, 8)];
#define gImpaNeckTex_WIDTH 32
#define gImpaNeckTex_HEIGHT 32
extern u64 gImpaNeckTex[TEX_LEN(u64, gImpaNeckTex_WIDTH, gImpaNeckTex_HEIGHT, 8)];
#define gImpaSwordHandleTex_WIDTH 8
#define gImpaSwordHandleTex_HEIGHT 16
extern u64 gImpaSwordHandleTex[TEX_LEN(u64, gImpaSwordHandleTex_WIDTH, gImpaSwordHandleTex_HEIGHT, 16)];
#define gImpaPantsAndSkinTex_WIDTH 16
#define gImpaPantsAndSkinTex_HEIGHT 32
extern u64 gImpaPantsAndSkinTex[TEX_LEN(u64, gImpaPantsAndSkinTex_WIDTH, gImpaPantsAndSkinTex_HEIGHT, 16)];
#define gImpaBlackTex_WIDTH 8
#define gImpaBlackTex_HEIGHT 8
extern u64 gImpaBlackTex[TEX_LEN(u64, gImpaBlackTex_WIDTH, gImpaBlackTex_HEIGHT, 8)];
extern Vtx gImpaLeftArmVtx[];
extern Vtx gImpaLeftShoulderVtx[];
extern Vtx gImpaRightArmVtx[];
extern Vtx gImpaRightShoulderVtx[];
extern Vtx gImpaChestVtx[];
extern Vtx gImpaLeftLegVtx[];
extern Vtx gImpaLeftThighVtx[];
extern Vtx gImpaRightLegVtx[];
extern Vtx gImpaRightThighVtx[];
extern Vtx gImpaTorsoVtx[];
extern Gfx gImpaChestDL[420];
extern Gfx gImpaRightShoulderDL[93];
extern Gfx gImpaRightArmDL[55];
extern Gfx gImpaLeftShoulderDL[93];
extern Gfx gImpaLeftArmDL[71];
extern Gfx gImpaTorsoDL[44];
extern Gfx gImpaRightThighDL[45];
extern Gfx gImpaRightLegDL[58];
extern Gfx gImpaLeftThighDL[55];
extern Gfx gImpaLeftLegDL[58];
//#define gImpaEyesTLUT_TLUT_COUNT 256
extern u64 gImpaEyesTLUT[];
//#define object_im_TLUT_007140_TLUT_COUNT 104
extern u64 object_im_TLUT_007140[];
#define gImpaEyeOpenTex_WIDTH 32
#define gImpaEyeOpenTex_HEIGHT 32
extern u64 gImpaEyeOpenTex[TEX_LEN(u64, gImpaEyeOpenTex_WIDTH, gImpaEyeOpenTex_HEIGHT, 8)];
#define gImpaEarTex_WIDTH 16
#define gImpaEarTex_HEIGHT 16
extern u64 gImpaEarTex[TEX_LEN(u64, gImpaEarTex_WIDTH, gImpaEarTex_HEIGHT, 8)];
#define gImpaHeadGradientTex_WIDTH 8
#define gImpaHeadGradientTex_HEIGHT 8
extern u64 gImpaHeadGradientTex[TEX_LEN(u64, gImpaHeadGradientTex_WIDTH, gImpaHeadGradientTex_HEIGHT, 8)];
#define object_im_Tex_007750_WIDTH 8
#define object_im_Tex_007750_HEIGHT 8
extern u64 object_im_Tex_007750[TEX_LEN(u64, object_im_Tex_007750_WIDTH, object_im_Tex_007750_HEIGHT, 16)];
#define gImpaHair2Tex_WIDTH 16
#define gImpaHair2Tex_HEIGHT 16
extern u64 gImpaHair2Tex[TEX_LEN(u64, gImpaHair2Tex_WIDTH, gImpaHair2Tex_HEIGHT, 16)];
#define object_im_Tex_0079D0_WIDTH 8
#define object_im_Tex_0079D0_HEIGHT 8
extern u64 object_im_Tex_0079D0[TEX_LEN(u64, object_im_Tex_0079D0_WIDTH, object_im_Tex_0079D0_HEIGHT, 8)];
#define gImpaShoulderPadTopTex_WIDTH 8
#define gImpaShoulderPadTopTex_HEIGHT 16
extern u64 gImpaShoulderPadTopTex[TEX_LEN(u64, gImpaShoulderPadTopTex_WIDTH, gImpaShoulderPadTopTex_HEIGHT, 16)];
#define object_im_Tex_007B10_WIDTH 8
#define object_im_Tex_007B10_HEIGHT 8
extern u64 object_im_Tex_007B10[TEX_LEN(u64, object_im_Tex_007B10_WIDTH, object_im_Tex_007B10_HEIGHT, 8)];
#define object_im_Tex_007B50_WIDTH 16
#define object_im_Tex_007B50_HEIGHT 16
extern u64 object_im_Tex_007B50[TEX_LEN(u64, object_im_Tex_007B50_WIDTH, object_im_Tex_007B50_HEIGHT, 8)];
#define gImpaFingers2Tex_WIDTH 16
#define gImpaFingers2Tex_HEIGHT 16
extern u64 gImpaFingers2Tex[TEX_LEN(u64, gImpaFingers2Tex_WIDTH, gImpaFingers2Tex_HEIGHT, 8)];
#define gImpaEyeHalfTex_WIDTH 32
#define gImpaEyeHalfTex_HEIGHT 32
extern u64 gImpaEyeHalfTex[TEX_LEN(u64, gImpaEyeHalfTex_WIDTH, gImpaEyeHalfTex_HEIGHT, 8)];
#define gImpaEyeClosedTex_WIDTH 32
#define gImpaEyeClosedTex_HEIGHT 32
extern u64 gImpaEyeClosedTex[TEX_LEN(u64, gImpaEyeClosedTex_WIDTH, gImpaEyeClosedTex_HEIGHT, 8)];
extern Vtx gImpaHeadUnmaskedVtx[];
extern Vtx gImpaHeadMaskedVtx[];
extern Vtx gImpaLeftFootVtx[];
extern Vtx gImpaLeftHandVtx[];
extern Vtx gImpaRightFootVtx[];
extern Vtx gImpaRightHandVtx[];
extern Vtx gImpaHandPointingVtx[];
extern Gfx gImpaHeadUnmaskedDL[611];
extern Gfx gImpaHeadMaskedDL[412];
extern Gfx gImpaLeftFootDL[103];
extern Gfx gImpaLeftHandDL[156];
extern Gfx gImpaRightFootDL[103];
extern Gfx gImpaRightHandDL[156];
extern Gfx gImpaHandPointingDL[276];
extern StandardLimb gImpaRootLimb;
extern StandardLimb gImpaTorsoLimb;
extern StandardLimb gImpaLeftThighLimb;
extern StandardLimb gImpaLeftLegLimb;
extern StandardLimb gImpaLeftFootLimb;
extern StandardLimb gImpaRightThighLimb;
extern StandardLimb gImpaRightLegLimb;
extern StandardLimb gImpaRightFootLimb;
extern StandardLimb gImpaChestLimb;
extern StandardLimb gImpaLeftShoulderLimb;
extern StandardLimb gImpaLeftArmLimb;
extern StandardLimb gImpaLeftHandLimb;
extern StandardLimb gImpaRightShoulderLimb;
extern StandardLimb gImpaRightArmLimb;
extern StandardLimb gImpaRightHandLimb;
extern StandardLimb gImpaHeadLimb;
extern void* gImpaLimbs[];
typedef enum ImpaLimb {
    /*  0 */ IMPA_LIMB_NONE,
    /*  1 */ IMPA_LIMB_ROOT,
    /*  2 */ IMPA_LIMB_TORSO,
    /*  3 */ IMPA_LIMB_LEFT_THIGH,
    /*  4 */ IMPA_LIMB_LEFT_LEG,
    /*  5 */ IMPA_LIMB_LEFT_FOOT,
    /*  6 */ IMPA_LIMB_RIGHT_THIGH,
    /*  7 */ IMPA_LIMB_RIGHT_LEG,
    /*  8 */ IMPA_LIMB_RIGHT_FOOT,
    /*  9 */ IMPA_LIMB_CHEST,
    /* 10 */ IMPA_LIMB_LEFT_SHOULDER,
    /* 11 */ IMPA_LIMB_LEFT_ARM,
    /* 12 */ IMPA_LIMB_LEFT_HAND,
    /* 13 */ IMPA_LIMB_RIGHT_SHOULDER,
    /* 14 */ IMPA_LIMB_RIGHT_ARM,
    /* 15 */ IMPA_LIMB_RIGHT_HAND,
    /* 16 */ IMPA_LIMB_HEAD,
    /* 17 */ IMPA_LIMB_MAX
} ImpaLimb;
extern FlexSkeletonHeader gImpaSkel;
extern s16 object_im_Anim_00FB10_0600F7A0_FrameData[];
extern JointIndex object_im_Anim_00FB10_0600FAA8_JointIndices[];
extern AnimationHeader object_im_Anim_00FB10;
extern s16 object_im_Anim_0101C8_0600FB20_FrameData[];
extern JointIndex object_im_Anim_0101C8_06010160_JointIndices[];
extern AnimationHeader object_im_Anim_0101C8;
extern s16 gImpaStartWhistlingFrameData[];
extern JointIndex gImpaStartWhistlingJointIndices[];
extern AnimationHeader gImpaStartWhistlingAnim;
extern s16 gImpaWhistlingFrameData[];
extern JointIndex gImpaWhistlingJointIndices[];
extern AnimationHeader gImpaWhistlingAnim;
extern s16 gImpaPrepareSealGanonFrameData[];
extern JointIndex gImpaPrepareSealGanonJointIndices[];
extern AnimationHeader gImpaPrepareSealGanonAnim;
extern s16 gImpaSealGanonFrameData[];
extern JointIndex gImpaSealGanonJointIndices[];
extern AnimationHeader gImpaSealGanonAnim;

#endif
