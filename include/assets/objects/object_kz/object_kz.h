#ifndef OBJECT_KZ_H
#define OBJECT_KZ_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gKzMweepFrameData[];
extern JointIndex gKzMweepJointIndices[];
extern AnimationHeader gKzMweepAnim;
extern s16 gKzIdleFrameData[];
extern JointIndex gKzIdleJointIndices[];
extern AnimationHeader gKzIdleAnim;
//#define gKzTLUT_TLUT_COUNT 256
extern u64 gKzTLUT[];
//#define gKzEyeTLUT_TLUT_COUNT 256
extern u64 gKzEyeTLUT[];
#define gKzFaceScalesTex_WIDTH 32
#define gKzFaceScalesTex_HEIGHT 32
extern u64 gKzFaceScalesTex[TEX_LEN(u64, gKzFaceScalesTex_WIDTH, gKzFaceScalesTex_HEIGHT, 8)];
#define gKzSkinGradient1Tex_WIDTH 8
#define gKzSkinGradient1Tex_HEIGHT 16
extern u64 gKzSkinGradient1Tex[TEX_LEN(u64, gKzSkinGradient1Tex_WIDTH, gKzSkinGradient1Tex_HEIGHT, 8)];
#define gKzCrownTex_WIDTH 32
#define gKzCrownTex_HEIGHT 32
extern u64 gKzCrownTex[TEX_LEN(u64, gKzCrownTex_WIDTH, gKzCrownTex_HEIGHT, 8)];
#define gKzSkinGradient2Tex_WIDTH 8
#define gKzSkinGradient2Tex_HEIGHT 8
extern u64 gKzSkinGradient2Tex[TEX_LEN(u64, gKzSkinGradient2Tex_WIDTH, gKzSkinGradient2Tex_HEIGHT, 8)];
#define object_kz_Tex_001430_WIDTH 8
#define object_kz_Tex_001430_HEIGHT 8
extern u64 object_kz_Tex_001430[TEX_LEN(u64, object_kz_Tex_001430_WIDTH, object_kz_Tex_001430_HEIGHT, 8)];
#define gKzEyeOpenTex_WIDTH 32
#define gKzEyeOpenTex_HEIGHT 32
extern u64 gKzEyeOpenTex[TEX_LEN(u64, gKzEyeOpenTex_WIDTH, gKzEyeOpenTex_HEIGHT, 8)];
#define gKzEyeHalfTex_WIDTH 32
#define gKzEyeHalfTex_HEIGHT 32
extern u64 gKzEyeHalfTex[TEX_LEN(u64, gKzEyeHalfTex_WIDTH, gKzEyeHalfTex_HEIGHT, 8)];
#define gKzEyeClosedTex_WIDTH 32
#define gKzEyeClosedTex_HEIGHT 32
extern u64 gKzEyeClosedTex[TEX_LEN(u64, gKzEyeClosedTex_WIDTH, gKzEyeClosedTex_HEIGHT, 8)];
#define gKzEyeOpen2Tex_WIDTH 32
#define gKzEyeOpen2Tex_HEIGHT 32
extern u64 gKzEyeOpen2Tex[TEX_LEN(u64, gKzEyeOpen2Tex_WIDTH, gKzEyeOpen2Tex_HEIGHT, 8)];
#define gKzHandAndFootTex_WIDTH 16
#define gKzHandAndFootTex_HEIGHT 16
extern u64 gKzHandAndFootTex[TEX_LEN(u64, gKzHandAndFootTex_WIDTH, gKzHandAndFootTex_HEIGHT, 8)];
#define object_kz_Tex_002570_WIDTH 16
#define object_kz_Tex_002570_HEIGHT 16
extern u64 object_kz_Tex_002570[TEX_LEN(u64, object_kz_Tex_002570_WIDTH, object_kz_Tex_002570_HEIGHT, 8)];
#define gKzCloakOutlineTex_WIDTH 32
#define gKzCloakOutlineTex_HEIGHT 32
extern u64 gKzCloakOutlineTex[TEX_LEN(u64, gKzCloakOutlineTex_WIDTH, gKzCloakOutlineTex_HEIGHT, 8)];
extern Vtx gKzHeadVtx[];
extern Vtx gKzLeftHandVtx[];
extern Vtx gKzRightHandVtx[];
extern Vtx gKzCloakAndTorsoVtx[];
extern Vtx gKzLeftFootVtx[];
extern Vtx gKzLeftLegVtx[];
extern Vtx gKzLeftThighVtx[];
extern Vtx gKzRightFootVtx[];
extern Vtx gKzRightLegVtx[];
extern Vtx gKzRightThighVtx[];
extern Vtx gKzPelvisVtx[];
extern Gfx gKzCloakAndTorsoDL[352];
extern Gfx gKzHeadDL[463];
extern Gfx gKzRightHandDL[67];
extern Gfx gKzLeftHandDL[67];
extern Gfx gKzPelvisDL[99];
extern Gfx gKzRightThighDL[68];
extern Gfx gKzRightLegDL[40];
extern Gfx gKzRightFootDL[88];
extern Gfx gKzLeftThighDL[68];
extern Gfx gKzLeftLegDL[40];
extern Gfx gKzLeftFootDL[88];
extern StandardLimb gKzPelvisLimb;
extern StandardLimb gKzLeftThighLimb;
extern StandardLimb gKzLeftLegLimb;
extern StandardLimb gKzLeftFootLimb;
extern StandardLimb gKzRightThighLimb;
extern StandardLimb gKzRightLegLimb;
extern StandardLimb gKzRightFootLimb;
extern StandardLimb object_kz_Limb_008674;
extern StandardLimb gKzLeftHandLimb;
extern StandardLimb gKzRightHandLimb;
extern StandardLimb gKzHeadLimb;
extern void* gKzLimbs[];
typedef enum gKzSkelLimb {
    /*  0 */ LIMB_OBJECT_KZ_0086D0_NONE,
    /*  1 */ LIMB_OBJECT_KZ_008620,
    /*  2 */ LIMB_OBJECT_KZ_00862C,
    /*  3 */ LIMB_OBJECT_KZ_008638,
    /*  4 */ LIMB_OBJECT_KZ_008644,
    /*  5 */ LIMB_OBJECT_KZ_008650,
    /*  6 */ LIMB_OBJECT_KZ_00865C,
    /*  7 */ LIMB_OBJECT_KZ_008668,
    /*  8 */ LIMB_OBJECT_KZ_008674,
    /*  9 */ LIMB_OBJECT_KZ_008680,
    /* 10 */ LIMB_OBJECT_KZ_00868C,
    /* 11 */ LIMB_OBJECT_KZ_008698,
    /* 12 */ LIMB_OBJECT_KZ_0086D0_MAX
} gKzSkelLimb;
extern FlexSkeletonHeader gKzSkel;

#endif
