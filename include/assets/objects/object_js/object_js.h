#ifndef OBJECT_JS_H
#define OBJECT_JS_H

#include "animation.h"
#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern s16 gCarpetMerchantIdleFrameData[];
extern JointIndex gCarpetMerchantIdleJointIndices[];
extern AnimationHeader gCarpetMerchantIdleAnim;
extern s16 gCarpetMerchantSlappingKneeFrameData[];
extern JointIndex gCarpetMerchantSlappingKneeJointIndices[];
extern AnimationHeader gCarpetMerchantSlappingKneeAnim;
extern Vtx gCarpetMerchantBlanketAndLowerBodyVtx[];
extern Vtx gCarpetMerchantHeadVtx[];
extern Vtx gCarpetMerchantLeftHandVtx[];
extern Vtx gCarpetMerchantForearmLeftVtx[];
extern Vtx gCarpetMerchantUpperArmLeftVtx[];
extern Vtx gCarpetMerchantRightHandVtx[];
extern Vtx gCarpetMerchantForearmRightVtx[];
extern Vtx gCarpetMerchantUpperArmRightVtx[];
extern Vtx gCarpetMerchantTorsoVtx[];
extern Vtx gCarpetMerchantUpperHairVtx[];
extern Vtx gCarpetMerchantLowerHairVtx[];
extern Gfx gCarpetMerchantBlanketAndLowerBodyDL[188];
extern Gfx gCarpetMerchantUpperHairDL[47];
extern Gfx gCarpetMerchantLowerHairDL[60];
extern Gfx gCarpetMerchantTorsoDL[95];
extern Gfx gCarpetMerchantHeadDL[104];
extern Gfx gCarpetMerchantUpperArmRightDL[38];
extern Gfx gCarpetMerchantForearmRightDL[53];
extern Gfx gCarpetMerchantRightHandDL[44];
extern Gfx gCarpetMerchantUpperArmLeftDL[38];
extern Gfx gCarpetMerchantForearmLeftDL[53];
extern Gfx gCarpetMerchantLeftHandDL[44];
//#define gCarpetMerchantTLUT_TLUT_COUNT 256
extern u64 gCarpetMerchantTLUT[];
#define gCarpetMerchantPantsTex_WIDTH 8
#define gCarpetMerchantPantsTex_HEIGHT 16
extern u64 gCarpetMerchantPantsTex[TEX_LEN(u64, gCarpetMerchantPantsTex_WIDTH, gCarpetMerchantPantsTex_HEIGHT, 8)];
#define gCarpetMerchantHairTex_WIDTH 16
#define gCarpetMerchantHairTex_HEIGHT 16
extern u64 gCarpetMerchantHairTex[TEX_LEN(u64, gCarpetMerchantHairTex_WIDTH, gCarpetMerchantHairTex_HEIGHT, 8)];
#define gCarpetMerchantFootTex_WIDTH 32
#define gCarpetMerchantFootTex_HEIGHT 16
extern u64 gCarpetMerchantFootTex[TEX_LEN(u64, gCarpetMerchantFootTex_WIDTH, gCarpetMerchantFootTex_HEIGHT, 8)];
#define gCarpetMerchantSkinGradientTex_WIDTH 8
#define gCarpetMerchantSkinGradientTex_HEIGHT 8
extern u64 gCarpetMerchantSkinGradientTex[TEX_LEN(u64, gCarpetMerchantSkinGradientTex_WIDTH, gCarpetMerchantSkinGradientTex_HEIGHT, 8)];
#define gCarpetMerchantFootSoleTex_WIDTH 32
#define gCarpetMerchantFootSoleTex_HEIGHT 32
extern u64 gCarpetMerchantFootSoleTex[TEX_LEN(u64, gCarpetMerchantFootSoleTex_WIDTH, gCarpetMerchantFootSoleTex_HEIGHT, 8)];
#define gCarpetMerchantHandTex_WIDTH 16
#define gCarpetMerchantHandTex_HEIGHT 16
extern u64 gCarpetMerchantHandTex[TEX_LEN(u64, gCarpetMerchantHandTex_WIDTH, gCarpetMerchantHandTex_HEIGHT, 8)];
#define gCarpetMerchantBraceletTex_WIDTH 16
#define gCarpetMerchantBraceletTex_HEIGHT 32
extern u64 gCarpetMerchantBraceletTex[TEX_LEN(u64, gCarpetMerchantBraceletTex_WIDTH, gCarpetMerchantBraceletTex_HEIGHT, 8)];
#define gCarpetMerchantShirtTex_WIDTH 16
#define gCarpetMerchantShirtTex_HEIGHT 32
extern u64 gCarpetMerchantShirtTex[TEX_LEN(u64, gCarpetMerchantShirtTex_WIDTH, gCarpetMerchantShirtTex_HEIGHT, 8)];
#define gCarpetMerchantChestTex_WIDTH 16
#define gCarpetMerchantChestTex_HEIGHT 32
extern u64 gCarpetMerchantChestTex[TEX_LEN(u64, gCarpetMerchantChestTex_WIDTH, gCarpetMerchantChestTex_HEIGHT, 8)];
#define gCarpetMerchantHatTex_WIDTH 16
#define gCarpetMerchantHatTex_HEIGHT 16
extern u64 gCarpetMerchantHatTex[TEX_LEN(u64, gCarpetMerchantHatTex_WIDTH, gCarpetMerchantHatTex_HEIGHT, 8)];
extern StandardLimb gCarpetMerchantRootLimb;
extern StandardLimb gCarpetMerchantTopRootLimb;
extern StandardLimb gCarpetMerchantLowerHairLimb;
extern StandardLimb gCarpetMerchantUpperHairLimb;
extern StandardLimb gCarpetMerchantTorsoLimb;
extern StandardLimb gCarpetMerchantUpperArmLeftLimb;
extern StandardLimb gCarpetMerchantForearmLeftLimb;
extern StandardLimb gCarpetMerchantLeftHandLimb;
extern StandardLimb gCarpetMerchantUpperArmRightLimb;
extern StandardLimb gCarpetMerchantForearmRightLimb;
extern StandardLimb gCarpetMerchantRightHandLimb;
extern StandardLimb gCarpetMerchantHeadLimb;
extern void* gCarpetMerchantLimbs[];
typedef enum gCarpetMerchantSkelLimb {
    /*  0 */ LIMB_OBJECT_JS_005EA0_NONE,
    /*  1 */ LIMB_OBJECT_JS_005DE0,
    /*  2 */ LIMB_OBJECT_JS_005DEC,
    /*  3 */ LIMB_OBJECT_JS_005DF8,
    /*  4 */ LIMB_OBJECT_JS_005E04,
    /*  5 */ LIMB_OBJECT_JS_005E10,
    /*  6 */ LIMB_OBJECT_JS_005E1C,
    /*  7 */ LIMB_OBJECT_JS_005E28,
    /*  8 */ LIMB_OBJECT_JS_005E34,
    /*  9 */ LIMB_OBJECT_JS_005E40,
    /* 10 */ LIMB_OBJECT_JS_005E4C,
    /* 11 */ LIMB_OBJECT_JS_005E58,
    /* 12 */ LIMB_OBJECT_JS_005E64,
    /* 13 */ LIMB_OBJECT_JS_005EA0_MAX
} gCarpetMerchantSkelLimb;
extern FlexSkeletonHeader gCarpetMerchantSkel;
extern BgCamInfo gCarpetMerchantBgCamList[];
extern SurfaceType gCarpetMerchantSurfaceTypes[];
extern CollisionPoly gCarpetMerchantPolyList[];
extern Vec3s gCarpetMerchantVtxList[];
extern CollisionHeader gCarpetMerchantCol;

#endif
