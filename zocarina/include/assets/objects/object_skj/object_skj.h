#ifndef OBJECT_SKJ_H
#define OBJECT_SKJ_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gSkullKidBackflipFrameData[];
extern JointIndex gSkullKidBackflipJointIndices[];
extern AnimationHeader gSkullKidBackflipAnim;
extern u8 object_skj_zeroes_Blob_52C[];
extern s16 gSkullKidShootNeedleFrameData[];
extern JointIndex gSkullKidShootNeedleJointIndices[];
extern AnimationHeader gSkullKidShootNeedleAnim;
extern s16 gSkullKidPlayFluteFrameData[];
extern JointIndex gSkullKidPlayFluteJointIndices[];
extern AnimationHeader gSkullKidPlayFluteAnim;
extern u8 object_skj_zeroes_Blob_E20[];
extern Vtx gSkullKidNeedleVtx[];
extern Gfx gSkullKidNeedleDL[11];
#define gSkullKidSkullMaskTex_WIDTH 16
#define gSkullKidSkullMaskTex_HEIGHT 16
extern u64 gSkullKidSkullMaskTex[TEX_LEN(u64, gSkullKidSkullMaskTex_WIDTH, gSkullKidSkullMaskTex_HEIGHT, 16)];
#define gSkullKidSkullMaskTeethTex_WIDTH 8
#define gSkullKidSkullMaskTeethTex_HEIGHT 8
extern u64 gSkullKidSkullMaskTeethTex[TEX_LEN(u64, gSkullKidSkullMaskTeethTex_WIDTH, gSkullKidSkullMaskTeethTex_HEIGHT, 16)];
#define gSkullKidSkullMaskNoseTex_WIDTH 8
#define gSkullKidSkullMaskNoseTex_HEIGHT 8
extern u64 gSkullKidSkullMaskNoseTex[TEX_LEN(u64, gSkullKidSkullMaskNoseTex_WIDTH, gSkullKidSkullMaskNoseTex_HEIGHT, 16)];
extern Vtx gSkullKidSkullMaskVtx[];
extern Gfx gSkullKidSkullMaskDL[83];
extern Vtx gSkullKidLeftLowerLegVtx[];
extern Vtx gSkullKidLeftUpperLegVtx[];
extern Vtx object_skj_Vtx_001A20[];
extern Vtx gSkullKidRightLowerLegVtx[];
extern Vtx gSkullKidRightUpperLegVtx[];
extern Vtx gSkullKidLeftFootVtx[];
extern Vtx object_skj_Vtx_0020A0[];
extern Vtx gSKullKidHeadAndFaceVtx[];
extern Vtx gSkullKidNeckVtx[];
extern Vtx gSkullKidChestAndClothesVtx[];
extern Vtx gSkullKidLeftArmVtx[];
extern Vtx gSkullKidLeftShoulderVtx[];
extern Vtx gSkullKidUpperHatVtx[];
extern Vtx gSkullKidRightArmVtx[];
extern Vtx gSkullKidRightShoulderVtx[];
extern Vtx gSkullKidLeftHandAndFluteVtx[];
extern Vtx gSkullKidRightFootVtx[];
extern Gfx object_skj_0036A0_DL[26];
extern Gfx gSkullKidRightUpperLegDL[31];
extern Gfx gSkullKidRightLowerLegDL[56];
extern Gfx gSkullKidLeftFootDL[45];
extern Gfx gSkullKidLeftUpperLegDL[31];
extern Gfx gSkullKidLeftLowerLegDL[56];
extern Gfx object_skj_003E48_DL[56];
extern Gfx gSkullKidChestAndClothesDL[28];
extern Gfx gSkullKidNeckDL[124];
extern Gfx gSKullKidHeadAndFaceDL[45];
extern Gfx gSkullKidRightFootDL[60];
extern Gfx gSkullKidRightArmDL[52];
extern Gfx gSkullKidRightShoulderDL[47];
extern Gfx gSkullKidLeftHandAndFluteDL[58];
extern Gfx gSkullKidLeftArmDL[88];
extern Gfx gSkullKidLeftShoulderDL[47];
extern Gfx gSkullKidUpperHatDL[58];
#define object_skj_005300_Tex_WIDTH 16
#define object_skj_005300_Tex_HEIGHT 16
extern u64 object_skj_005300_Tex[TEX_LEN(u64, object_skj_005300_Tex_WIDTH, object_skj_005300_Tex_HEIGHT, 16)];
#define object_skj_005500_Tex_WIDTH 16
#define object_skj_005500_Tex_HEIGHT 16
extern u64 object_skj_005500_Tex[TEX_LEN(u64, object_skj_005500_Tex_WIDTH, object_skj_005500_Tex_HEIGHT, 16)];
#define object_skj_005700_Tex_WIDTH 16
#define object_skj_005700_Tex_HEIGHT 16
extern u64 object_skj_005700_Tex[TEX_LEN(u64, object_skj_005700_Tex_WIDTH, object_skj_005700_Tex_HEIGHT, 16)];
#define object_skj_005900_Tex_WIDTH 16
#define object_skj_005900_Tex_HEIGHT 16
extern u64 object_skj_005900_Tex[TEX_LEN(u64, object_skj_005900_Tex_WIDTH, object_skj_005900_Tex_HEIGHT, 16)];
#define object_skj_005B00_Tex_WIDTH 8
#define object_skj_005B00_Tex_HEIGHT 8
extern u64 object_skj_005B00_Tex[TEX_LEN(u64, object_skj_005B00_Tex_WIDTH, object_skj_005B00_Tex_HEIGHT, 16)];
#define object_skj_005B80_Tex_WIDTH 16
#define object_skj_005B80_Tex_HEIGHT 16
extern u64 object_skj_005B80_Tex[TEX_LEN(u64, object_skj_005B80_Tex_WIDTH, object_skj_005B80_Tex_HEIGHT, 16)];
#define object_skj_005D80_Tex_WIDTH 4
#define object_skj_005D80_Tex_HEIGHT 4
extern u64 object_skj_005D80_Tex[TEX_LEN(u64, object_skj_005D80_Tex_WIDTH, object_skj_005D80_Tex_HEIGHT, 16)];
#define object_skj_005DA0_Tex_WIDTH 8
#define object_skj_005DA0_Tex_HEIGHT 8
extern u64 object_skj_005DA0_Tex[TEX_LEN(u64, object_skj_005DA0_Tex_WIDTH, object_skj_005DA0_Tex_HEIGHT, 16)];
extern StandardLimb gSkullKidUnkLimb_5E20;
extern StandardLimb gSkullKidUnkLimb_5E2C;
extern StandardLimb gSkullKidUnkLimb_5E38;
extern StandardLimb gSkullKidLeftUpperLegLimb;
extern StandardLimb gSkullKidLeftLowerLegLimb;
extern StandardLimb gSkullKidLeftFootLimb;
extern StandardLimb gSkullKidRightUpperLegLimb;
extern StandardLimb gSkullKidRightLowerLegLimb;
extern StandardLimb gSkullKidRightFootLimb;
extern StandardLimb gSkullKidChestAndClothesLimb;
extern StandardLimb gSkullKidNeckLimb;
extern StandardLimb gSkullKidHeadAndFaceLimb;
extern StandardLimb gSkullKidUpperHatLimb;
extern StandardLimb gSkullKidLeftShoulderLimb;
extern StandardLimb gSkullKidLeftArmLimb;
extern StandardLimb gSkullKidLeftHandAndFluteLimb;
extern StandardLimb gSkullKidRightShoulderLimb;
extern StandardLimb gSkullKidRightArmLimb;
extern void* gSkullKidLimbs[];
typedef enum gSkullKidSkelLimb {
    /*  0 */ LIMB_OBJECT_SKJ_005F40_NONE,
    /*  1 */ LIMB_OBJECT_SKJ_005E20,
    /*  2 */ LIMB_OBJECT_SKJ_005E2C,
    /*  3 */ LIMB_OBJECT_SKJ_005E38,
    /*  4 */ LIMB_OBJECT_SKJ_005E44,
    /*  5 */ LIMB_OBJECT_SKJ_005E50,
    /*  6 */ LIMB_OBJECT_SKJ_005E5C,
    /*  7 */ LIMB_OBJECT_SKJ_005E68,
    /*  8 */ LIMB_OBJECT_SKJ_005E74,
    /*  9 */ LIMB_OBJECT_SKJ_005E80,
    /* 10 */ LIMB_OBJECT_SKJ_005E8C,
    /* 11 */ LIMB_OBJECT_SKJ_005E98,
    /* 12 */ LIMB_OBJECT_SKJ_005EA4,
    /* 13 */ LIMB_OBJECT_SKJ_005EB0,
    /* 14 */ LIMB_OBJECT_SKJ_005EBC,
    /* 15 */ LIMB_OBJECT_SKJ_005EC8,
    /* 16 */ LIMB_OBJECT_SKJ_005ED4,
    /* 17 */ LIMB_OBJECT_SKJ_005EE0,
    /* 18 */ LIMB_OBJECT_SKJ_005EEC,
    /* 19 */ LIMB_OBJECT_SKJ_005F40_MAX
} gSkullKidSkelLimb;
extern FlexSkeletonHeader gSkullKidSkel;
extern s16 gSkullKidDieFrameData[];
extern JointIndex gSkullKidDieJointIndices[];
extern AnimationHeader gSkullKidDieAnim;
extern u8 object_skj_zeroes_Blob_EAA8[];
extern s16 gSkullKidHitFrameData[];
extern JointIndex gSkullKidHitJointIndices[];
extern AnimationHeader gSkullKidHitAnim;
extern u8 object_skj_zeroes_Blob_ED94[];
extern s16 gSkullKidLandFrameData[];
extern JointIndex gSkullKidLandJointIndices[];
extern AnimationHeader gSkullKidLandAnim;
extern u8 object_skj_zeroes_Blob_7138[];
extern s16 gSkullKidLookLeftAndRightFrameData[];
extern JointIndex gSkullKidLookLeftAndRightJointIndices[];
extern AnimationHeader gSkullKidLookLeftAndRightAnim;
extern u8 object_skj_zeroes_Blob_8184[];
extern s16 gSkullKidFightingStanceFrameData[];
extern JointIndex gSkullKidFightingStanceJointIndices[];
extern AnimationHeader gSkullKidFightingStanceAnim;
extern s16 gSkullKidWaitFrameData[];
extern JointIndex gSkullKidWaitJointIndices[];
extern AnimationHeader gSkullKidWaitAnim;
extern u8 object_skj_zeroes_Blob_8BAC[];
extern s16 gSkullKidWalkToPlayerFrameData[];
extern JointIndex gSkullKidWalkToPlayerJointIndices[];
extern AnimationHeader gSkullKidWalkToPlayerAnim;

#endif
