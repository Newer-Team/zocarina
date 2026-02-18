#ifndef OBJECT_OWL_H
#define OBJECT_OWL_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gOwlTakeoffFrameData[];
extern JointIndex gOwlTakeoffJointIndices[];
extern AnimationHeader gOwlTakeoffAnim;
extern s16 gOwlFlyFrameData[];
extern JointIndex gOwlFlyJointIndices[];
extern AnimationHeader gOwlFlyAnim;
extern Vtx gOwlHeadVtx[];
extern Vtx gOwlRightEyebrowVtx[];
extern Vtx gOwlLeftEyebrowVtx[];
extern Vtx gOwlNeckVtx[];
extern Vtx gOwlTorsoVtx[];
extern Vtx gOwlUpperLeftWingVtx[];
extern Vtx gOwlMiddleLeftWing2Vtx[];
extern Vtx gOwlMiddleLeftWing1Vtx[];
extern Vtx gOwlLowerLeftWingVtx[];
extern Vtx gOwlUpperRightWingVtx[];
extern Vtx gOwlMiddleRightWing2Vtx[];
extern Vtx gOwlMiddleRightWing1Vtx[];
extern Vtx gOwlLowerRightWingVtx[];
extern Vtx gOwlRightClawVtx[];
extern Vtx gOwlLowerRightLegVtx[];
extern Vtx gOwlUpperRightLegVtx[];
extern Vtx gOwlLeftClawVtx[];
extern Vtx gOwlLowerLeftLegVtx[];
extern Vtx gOwlUpperLeftLegVtx[];
extern Vtx gOwlTailVtx[];
extern Gfx gOwlTorsoDL[47];
extern Gfx gOwlNeckDL[37];
extern Gfx gOwlHeadDL[144];
extern Gfx gOwlLeftEyebrowDL[23];
extern Gfx gOwlRightEyebrowDL[23];
extern Gfx gOwlUpperRightLegDL[25];
extern Gfx gOwlLowerRightLegDL[30];
extern Gfx gOwlRightClawDL[51];
extern Gfx gOwlLowerLeftWingDL[72];
extern Gfx gOwlMiddleLeftWing1DL[75];
extern Gfx gOwlMiddleLeftWing2DL[70];
extern Gfx gOwlUpperLeftWingDL[80];
extern Gfx gOwlLowerRightWingDL[72];
extern Gfx gOwlMiddleRightWing1DL[75];
extern Gfx gOwlMiddleRightWing2DL[70];
extern Gfx gOwlUpperRightWingDL[80];
extern Gfx gOwlTailDL[21];
extern Gfx gOwlUpperLeftLegDL[25];
extern Gfx gOwlLowerLeftLegDL[30];
extern Gfx gOwlLeftClawDL[51];
//#define object_owl_TLUT_006DA8_TLUT_COUNT 256
extern u64 object_owl_TLUT_006DA8[];
//#define object_owl_TLUT_006FA8_TLUT_COUNT 256
extern u64 object_owl_TLUT_006FA8[];
#define object_owl_0071A8_Tex_WIDTH 32
#define object_owl_0071A8_Tex_HEIGHT 32
extern u64 object_owl_0071A8_Tex[TEX_LEN(u64, object_owl_0071A8_Tex_WIDTH, object_owl_0071A8_Tex_HEIGHT, 16)];
#define object_owl_0079A8_Tex_WIDTH 32
#define object_owl_0079A8_Tex_HEIGHT 32
extern u64 object_owl_0079A8_Tex[TEX_LEN(u64, object_owl_0079A8_Tex_WIDTH, object_owl_0079A8_Tex_HEIGHT, 16)];
#define object_owl_0081A8_Tex_WIDTH 32
#define object_owl_0081A8_Tex_HEIGHT 32
extern u64 object_owl_0081A8_Tex[TEX_LEN(u64, object_owl_0081A8_Tex_WIDTH, object_owl_0081A8_Tex_HEIGHT, 16)];
#define gObjOwlEyeOpenTex_WIDTH 32
#define gObjOwlEyeOpenTex_HEIGHT 32
extern u64 gObjOwlEyeOpenTex[TEX_LEN(u64, gObjOwlEyeOpenTex_WIDTH, gObjOwlEyeOpenTex_HEIGHT, 8)];
#define gObjOwlEyeHalfTex_WIDTH 32
#define gObjOwlEyeHalfTex_HEIGHT 32
extern u64 gObjOwlEyeHalfTex[TEX_LEN(u64, gObjOwlEyeHalfTex_WIDTH, gObjOwlEyeHalfTex_HEIGHT, 8)];
#define gObjOwlEyeClosedTex_WIDTH 32
#define gObjOwlEyeClosedTex_HEIGHT 32
extern u64 gObjOwlEyeClosedTex[TEX_LEN(u64, gObjOwlEyeClosedTex_WIDTH, gObjOwlEyeClosedTex_HEIGHT, 8)];
#define object_owl_0095A8_Tex_WIDTH 32
#define object_owl_0095A8_Tex_HEIGHT 32
extern u64 object_owl_0095A8_Tex[TEX_LEN(u64, object_owl_0095A8_Tex_WIDTH, object_owl_0095A8_Tex_HEIGHT, 16)];
#define object_owl_009DA8_Tex_WIDTH 16
#define object_owl_009DA8_Tex_HEIGHT 16
extern u64 object_owl_009DA8_Tex[TEX_LEN(u64, object_owl_009DA8_Tex_WIDTH, object_owl_009DA8_Tex_HEIGHT, 16)];
#define object_owl_009FA8_Tex_WIDTH 64
#define object_owl_009FA8_Tex_HEIGHT 32
extern u64 object_owl_009FA8_Tex[TEX_LEN(u64, object_owl_009FA8_Tex_WIDTH, object_owl_009FA8_Tex_HEIGHT, 16)];
#define object_owl_00AFA8_Tex_WIDTH 32
#define object_owl_00AFA8_Tex_HEIGHT 32
extern u64 object_owl_00AFA8_Tex[TEX_LEN(u64, object_owl_00AFA8_Tex_WIDTH, object_owl_00AFA8_Tex_HEIGHT, 16)];
#define object_owl_00B7A8_Tex_WIDTH 32
#define object_owl_00B7A8_Tex_HEIGHT 32
extern u64 object_owl_00B7A8_Tex[TEX_LEN(u64, object_owl_00B7A8_Tex_WIDTH, object_owl_00B7A8_Tex_HEIGHT, 16)];
extern StandardLimb gOwlRootLimb;
extern StandardLimb gOwlNeckLimb;
extern StandardLimb gOwlHeadLimb;
extern StandardLimb gOwlRightEyebrowLimb;
extern StandardLimb gOwlLeftEyebrowLimb;
extern StandardLimb gOwlLowerLeftWingLimb;
extern StandardLimb gOwlMiddleLeftWing1Limb;
extern StandardLimb gOwlMiddleLeftWing2Limb;
extern StandardLimb gOwlUpperLeftWingLimb;
extern StandardLimb gOwlLowerRightWingLimb;
extern StandardLimb gOwlMiddleRightWing1Limb;
extern StandardLimb gOwlMiddleRightWing2Limb;
extern StandardLimb gOwlUpperRightWingLimb;
extern StandardLimb gOwlUpperRightLegLimb;
extern StandardLimb gOwlLowerRightLegLimb;
extern StandardLimb gOwlRightClawLimb;
extern StandardLimb gOwlUpperLeftLegLimb;
extern StandardLimb gOwlLowerLeftLegLimb;
extern StandardLimb gOwlLeftClawLimb;
extern StandardLimb gOwlTailLimb;
extern void* gOwlFlyingLimbs[];
typedef enum gOwlFlyingSkelLimb {
    /*  0 */ LIMB_OBJECT_OWL_00C0E8_NONE,
    /*  1 */ LIMB_OBJECT_OWL_00BFA8,
    /*  2 */ LIMB_OBJECT_OWL_00BFB4,
    /*  3 */ LIMB_OBJECT_OWL_00BFC0,
    /*  4 */ LIMB_OBJECT_OWL_00BFCC,
    /*  5 */ LIMB_OBJECT_OWL_00BFD8,
    /*  6 */ LIMB_OBJECT_OWL_00BFE4,
    /*  7 */ LIMB_OBJECT_OWL_00BFF0,
    /*  8 */ LIMB_OBJECT_OWL_00BFFC,
    /*  9 */ LIMB_OBJECT_OWL_00C008,
    /* 10 */ LIMB_OBJECT_OWL_00C014,
    /* 11 */ LIMB_OBJECT_OWL_00C020,
    /* 12 */ LIMB_OBJECT_OWL_00C02C,
    /* 13 */ LIMB_OBJECT_OWL_00C038,
    /* 14 */ LIMB_OBJECT_OWL_00C044,
    /* 15 */ LIMB_OBJECT_OWL_00C050,
    /* 16 */ LIMB_OBJECT_OWL_00C05C,
    /* 17 */ LIMB_OBJECT_OWL_00C068,
    /* 18 */ LIMB_OBJECT_OWL_00C074,
    /* 19 */ LIMB_OBJECT_OWL_00C080,
    /* 20 */ LIMB_OBJECT_OWL_00C08C,
    /* 21 */ LIMB_OBJECT_OWL_00C0E8_MAX
} gOwlFlyingSkelLimb;
extern FlexSkeletonHeader gOwlFlyingSkel;
extern s16 gOwlGlideFrameData[];
extern JointIndex gOwlGlideJointIndices[];
extern AnimationHeader gOwlGlideAnim;
extern s16 gOwlUnfoldWingsFrameData[];
extern JointIndex gOwlUnfoldWingsJointIndices[];
extern AnimationHeader gOwlUnfoldWingsAnim;
extern s16 gOwlPerchFrameData[];
extern JointIndex gOwlPerchJointIndices[];
extern AnimationHeader gOwlPerchAnim;
extern Vtx object_owl_Vtx_00C8B0[];
extern Vtx object_owl_Vtx_00C970[];
extern Vtx object_owl_Vtx_00CA30[];
extern Vtx object_owl_Vtx_00D3E0[];
extern Vtx object_owl_Vtx_00D7A0[];
extern Vtx object_owl_Vtx_00D8B0[];
extern Vtx object_owl_Vtx_00DB20[];
extern Vtx object_owl_Vtx_00DD90[];
extern Vtx object_owl_Vtx_00E320[];
extern Vtx object_owl_Vtx_00E470[];
extern Vtx object_owl_Vtx_00E520[];
extern Vtx object_owl_Vtx_00EAB0[];
extern Vtx object_owl_Vtx_00EC00[];
extern Vtx object_owl_Vtx_00ECB0[];
extern Gfx object_owl_00ED10_DL[50];
extern Gfx object_owl_00EEA0_DL[50];
extern Gfx object_owl_00F030_DL[21];
extern Gfx object_owl_00F0D8_DL[29];
extern Gfx object_owl_00F1C0_DL[46];
extern Gfx object_owl_00F330_DL[144];
extern Gfx object_owl_00F7B0_DL[23];
extern Gfx object_owl_00F868_DL[23];
extern Gfx object_owl_00F920_DL[25];
extern Gfx object_owl_00F9E8_DL[30];
extern Gfx object_owl_00FAD8_DL[51];
extern Gfx object_owl_00FC70_DL[25];
extern Gfx object_owl_00FD38_DL[30];
extern Gfx object_owl_00FE28_DL[51];
extern StandardLimb object_owl_00FFC0_Limb;
extern StandardLimb object_owl_00FFCC_Limb;
extern StandardLimb object_owl_00FFD8_Limb;
extern StandardLimb object_owl_00FFE4_Limb;
extern StandardLimb object_owl_00FFF0_Limb;
extern StandardLimb object_owl_00FFFC_Limb;
extern StandardLimb object_owl_010008_Limb;
extern StandardLimb object_owl_010014_Limb;
extern StandardLimb object_owl_010020_Limb;
extern StandardLimb object_owl_01002C_Limb;
extern StandardLimb object_owl_010038_Limb;
extern StandardLimb object_owl_010044_Limb;
extern StandardLimb object_owl_010050_Limb;
extern StandardLimb object_owl_01005C_Limb;
extern StandardLimb object_owl_010068_Limb;
extern void* gOwlPerchingLimbs[];
typedef enum gOwlPerchingSkelLimb {
    /*  0 */ LIMB_OBJECT_OWL_0100B0_NONE,
    /*  1 */ LIMB_OBJECT_OWL_00FFC0,
    /*  2 */ LIMB_OBJECT_OWL_00FFCC,
    /*  3 */ LIMB_OBJECT_OWL_00FFD8,
    /*  4 */ LIMB_OBJECT_OWL_00FFE4,
    /*  5 */ LIMB_OBJECT_OWL_00FFF0,
    /*  6 */ LIMB_OBJECT_OWL_00FFFC,
    /*  7 */ LIMB_OBJECT_OWL_010008,
    /*  8 */ LIMB_OBJECT_OWL_010014,
    /*  9 */ LIMB_OBJECT_OWL_010020,
    /* 10 */ LIMB_OBJECT_OWL_01002C,
    /* 11 */ LIMB_OBJECT_OWL_010038,
    /* 12 */ LIMB_OBJECT_OWL_010044,
    /* 13 */ LIMB_OBJECT_OWL_010050,
    /* 14 */ LIMB_OBJECT_OWL_01005C,
    /* 15 */ LIMB_OBJECT_OWL_010068,
    /* 16 */ LIMB_OBJECT_OWL_0100B0_MAX
} gOwlPerchingSkelLimb;
extern FlexSkeletonHeader gOwlPerchingSkel;

#endif
