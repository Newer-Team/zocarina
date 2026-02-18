#ifndef OBJECT_ANI_H
#define OBJECT_ANI_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern StandardLimb gRoofManRootLimb;
extern StandardLimb gRoofManLeftThighLimb;
extern StandardLimb gRoofManLeftLegLimb;
extern StandardLimb gRoofManLeftFootLimb;
extern StandardLimb gRoofManRightThighLimb;
extern StandardLimb gRoofManRightLegLimb;
extern StandardLimb gRoofManRightFootLimb;
extern StandardLimb gRoofManTorsoLimb;
extern StandardLimb gRoofManLeftUpperArmLimb;
extern StandardLimb gRoofManLeftForearmLimb;
extern StandardLimb gRoofManLeftHandLimb;
extern StandardLimb gRoofManRightUpperArmLimb;
extern StandardLimb gRoofManRightForearmLimb;
extern StandardLimb gRoofManRightHandLimb;
extern StandardLimb gRoofManHeadLimb;
extern void* gRoofManLimbs[];
typedef enum gRoofManSkelLimb {
    /*  0 */ LIMB_OBJECT_ANI_0000F0_NONE,
    /*  1 */ LIMB_OBJECT_ANI_000000,
    /*  2 */ LIMB_OBJECT_ANI_00000C,
    /*  3 */ LIMB_OBJECT_ANI_000018,
    /*  4 */ LIMB_OBJECT_ANI_000024,
    /*  5 */ LIMB_OBJECT_ANI_000030,
    /*  6 */ LIMB_OBJECT_ANI_00003C,
    /*  7 */ LIMB_OBJECT_ANI_000048,
    /*  8 */ LIMB_OBJECT_ANI_000054,
    /*  9 */ LIMB_OBJECT_ANI_000060,
    /* 10 */ LIMB_OBJECT_ANI_00006C,
    /* 11 */ LIMB_OBJECT_ANI_000078,
    /* 12 */ LIMB_OBJECT_ANI_000084,
    /* 13 */ LIMB_OBJECT_ANI_000090,
    /* 14 */ LIMB_OBJECT_ANI_00009C,
    /* 15 */ LIMB_OBJECT_ANI_0000A8,
    /* 16 */ LIMB_OBJECT_ANI_0000F0_MAX
} gRoofManSkelLimb;
extern FlexSkeletonHeader gRoofManSkel;
//#define gRoofMan1TLUT_TLUT_COUNT 256
extern u64 gRoofMan1TLUT[];
#define gRoofManUnusedTex_WIDTH 16
#define gRoofManUnusedTex_HEIGHT 16
extern u64 gRoofManUnusedTex[TEX_LEN(u64, gRoofManUnusedTex_WIDTH, gRoofManUnusedTex_HEIGHT, 8)];
#define gRoofManEyeOpenTex_WIDTH 32
#define gRoofManEyeOpenTex_HEIGHT 32
extern u64 gRoofManEyeOpenTex[TEX_LEN(u64, gRoofManEyeOpenTex_WIDTH, gRoofManEyeOpenTex_HEIGHT, 16)];
#define gRoofManHandBackTex_WIDTH 16
#define gRoofManHandBackTex_HEIGHT 16
extern u64 gRoofManHandBackTex[TEX_LEN(u64, gRoofManHandBackTex_WIDTH, gRoofManHandBackTex_HEIGHT, 8)];
#define gRoofManForearmGradientTex_WIDTH 8
#define gRoofManForearmGradientTex_HEIGHT 8
extern u64 gRoofManForearmGradientTex[TEX_LEN(u64, gRoofManForearmGradientTex_WIDTH, gRoofManForearmGradientTex_HEIGHT, 8)];
#define gRoofManThighGradientTex_WIDTH 8
#define gRoofManThighGradientTex_HEIGHT 8
extern u64 gRoofManThighGradientTex[TEX_LEN(u64, gRoofManThighGradientTex_WIDTH, gRoofManThighGradientTex_HEIGHT, 8)];
#define gRoofManSandalBuckleTex_WIDTH 16
#define gRoofManSandalBuckleTex_HEIGHT 16
extern u64 gRoofManSandalBuckleTex[TEX_LEN(u64, gRoofManSandalBuckleTex_WIDTH, gRoofManSandalBuckleTex_HEIGHT, 8)];
#define gRoofManTrouserPatternTex_WIDTH 16
#define gRoofManTrouserPatternTex_HEIGHT 16
extern u64 gRoofManTrouserPatternTex[TEX_LEN(u64, gRoofManTrouserPatternTex_WIDTH, gRoofManTrouserPatternTex_HEIGHT, 16)];
//#define gRoofMan2TLUT_TLUT_COUNT 168
extern u64 gRoofMan2TLUT[];
#define object_ani_0011D8_Tex_WIDTH 16
#define object_ani_0011D8_Tex_HEIGHT 16
extern u64 object_ani_0011D8_Tex[TEX_LEN(u64, object_ani_0011D8_Tex_WIDTH, object_ani_0011D8_Tex_HEIGHT, 8)];
#define gRoofManSkinGradientTex_WIDTH 8
#define gRoofManSkinGradientTex_HEIGHT 8
extern u64 gRoofManSkinGradientTex[TEX_LEN(u64, gRoofManSkinGradientTex_WIDTH, gRoofManSkinGradientTex_HEIGHT, 8)];
#define gRoofManEarTex_WIDTH 16
#define gRoofManEarTex_HEIGHT 16
extern u64 gRoofManEarTex[TEX_LEN(u64, gRoofManEarTex_WIDTH, gRoofManEarTex_HEIGHT, 8)];
#define gRoofManHairTex_WIDTH 16
#define gRoofManHairTex_HEIGHT 16
extern u64 gRoofManHairTex[TEX_LEN(u64, gRoofManHairTex_WIDTH, gRoofManHairTex_HEIGHT, 8)];
#define gRoofManEyeHalfTex_WIDTH 32
#define gRoofManEyeHalfTex_HEIGHT 32
extern u64 gRoofManEyeHalfTex[TEX_LEN(u64, gRoofManEyeHalfTex_WIDTH, gRoofManEyeHalfTex_HEIGHT, 16)];
#define gRoofManEyeClosedTex_WIDTH 32
#define gRoofManEyeClosedTex_HEIGHT 32
extern u64 gRoofManEyeClosedTex[TEX_LEN(u64, gRoofManEyeClosedTex_WIDTH, gRoofManEyeClosedTex_HEIGHT, 16)];
extern Vtx gRoofManHeadVtx[];
extern Gfx gRoofManHeadDL[90];
extern Vtx gRoofManLeftHandVtx[];
extern Vtx gRoofManLeftForearmVtx[];
extern Vtx gRoofManLeftUpperArmVtx[];
extern Vtx gRoofManRightHandVtx[];
extern Vtx gRoofManRightForearmVtx[];
extern Vtx gRoofManRightUpperArmVtx[];
extern Vtx gRoofManTorsoVtx[];
extern Vtx gRoofManLeftFootVtx[];
extern Vtx gRoofManLeftLegVtx[];
extern Vtx gRoofManLeftThighVtx[];
extern Vtx gRoofManRightFootVtx[];
extern Vtx gRoofManRightLegVtx[];
extern Vtx gRoofManRightThighVtx[];
extern Vtx gRoofManWaistVtx[];
extern Gfx gRoofManRightHandDL[51];
extern Gfx gRoofManRightForearmDL[46];
extern Gfx gRoofManRightUpperArmDL[42];
extern Gfx gRoofManLeftHandDL[51];
extern Gfx gRoofManLeftForearmDL[46];
extern Gfx gRoofManLeftUpperArmDL[42];
extern Gfx gRoofManTorsoDL[95];
extern Gfx gRoofManRightFootDL[60];
extern Gfx gRoofManRightLegDL[77];
extern Gfx gRoofManRightThighDL[37];
extern Gfx gRoofManLeftFootDL[59];
extern Gfx gRoofManLeftLegDL[105];
extern Gfx gRoofManLeftThighDL[37];
extern Gfx gRoofManWaistDL[28];
extern s16 gRoofManKnockbackFrameData[];
extern JointIndex gRoofManKnockbackJointIndices[];
extern AnimationHeader gRoofManKnockbackAnim;
extern s16 gRoofManGettingUpAfterKnockbackFrameData[];
extern JointIndex gRoofManGettingUpAfterKnockbackJointIndices[];
extern AnimationHeader gRoofManGettingUpAfterKnockbackAnim;
extern s16 gRoofManIdleFrameData[];
extern JointIndex gRoofManIdleJointIndices[];
extern AnimationHeader gRoofManIdleAnim;

#endif
