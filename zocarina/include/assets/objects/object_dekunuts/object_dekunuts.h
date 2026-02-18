#ifndef OBJECT_DEKUNUTS_H
#define OBJECT_DEKUNUTS_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gDekuNutsSpitFrameData[];
extern JointIndex gDekuNutsSpitJointIndices[];
extern AnimationHeader gDekuNutsSpitAnim;
extern s16 gDekuNutsDamageFrameData[];
extern JointIndex gDekuNutsDamageJointIndices[];
extern AnimationHeader gDekuNutsDamageAnim;
extern s16 gDekuNutsBurrowFrameData[];
extern JointIndex gDekuNutsBurrowJointIndices[];
extern AnimationHeader gDekuNutsBurrowAnim;
extern s16 gDekuNutsDieFrameData[];
extern JointIndex gDekuNutsDieJointIndices[];
extern AnimationHeader gDekuNutsDieAnim;
extern s16 gDekuNutsUnburrowFrameData[];
extern JointIndex gDekuNutsUnburrowJointIndices[];
extern AnimationHeader gDekuNutsUnburrowAnim;
extern s16 gDekuNutsLookAroundFrameData[];
extern JointIndex gDekuNutsLookAroundJointIndices[];
extern AnimationHeader gDekuNutsLookAroundAnim;
extern s16 gDekuNutsUpFrameData[];
extern JointIndex gDekuNutsUpJointIndices[];
extern AnimationHeader gDekuNutsUpAnim;
extern s16 gDekuNutsStandFrameData[];
extern JointIndex gDekuNutsStandJointIndices[];
extern AnimationHeader gDekuNutsStandAnim;
extern s16 gDekuNutsGaspFrameData[];
extern JointIndex gDekuNutsGaspJointIndices[];
extern AnimationHeader gDekuNutsGaspAnim;
extern Vtx object_dekunuts_Vtx_001040[];
extern Vtx object_dekunuts_Vtx_0011C0[];
extern Vtx object_dekunuts_Vtx_001230[];
extern Vtx object_dekunuts_Vtx_001280[];
extern Vtx object_dekunuts_Vtx_0012E0[];
extern Vtx object_dekunuts_Vtx_0013D0[];
extern Vtx object_dekunuts_Vtx_001420[];
extern Vtx object_dekunuts_Vtx_001490[];
extern Vtx object_dekunuts_Vtx_001740[];
extern Gfx object_dekunuts_0018C0_DL[39];
extern Gfx object_dekunuts_0019F8_DL[22];
extern Gfx object_dekunuts_001AA8_DL[20];
extern Gfx object_dekunuts_001B48_DL[21];
extern Gfx object_dekunuts_001BF0_DL[35];
extern Gfx object_dekunuts_001D08_DL[20];
extern Gfx object_dekunuts_001DA8_DL[22];
extern Gfx object_dekunuts_001E58_DL[31];
extern Gfx object_dekunuts_001F50_DL[21];
extern Vtx gDekuNutsDekuNutVtx[];
extern Gfx gDekuNutsDekuNutDL[18];
extern Vtx gDekuNutsFlowerVtx[];
extern Gfx gDekuNutsFlowerDL[26];
#define gDekuNutsLeafTex_WIDTH 32
#define gDekuNutsLeafTex_HEIGHT 32
extern u64 gDekuNutsLeafTex[TEX_LEN(u64, gDekuNutsLeafTex_WIDTH, gDekuNutsLeafTex_HEIGHT, 16)];
#define gDekuNutsBodyTex_WIDTH 16
#define gDekuNutsBodyTex_HEIGHT 16
extern u64 gDekuNutsBodyTex[TEX_LEN(u64, gDekuNutsBodyTex_WIDTH, gDekuNutsBodyTex_HEIGHT, 16)];
#define gDekuNutsEyeTex_WIDTH 8
#define gDekuNutsEyeTex_HEIGHT 8
extern u64 gDekuNutsEyeTex[TEX_LEN(u64, gDekuNutsEyeTex_WIDTH, gDekuNutsEyeTex_HEIGHT, 16)];
#define gDekuNutsSnoutTex_WIDTH 8
#define gDekuNutsSnoutTex_HEIGHT 8
extern u64 gDekuNutsSnoutTex[TEX_LEN(u64, gDekuNutsSnoutTex_WIDTH, gDekuNutsSnoutTex_HEIGHT, 16)];
#define gDekuNutsMouthTex_WIDTH 8
#define gDekuNutsMouthTex_HEIGHT 8
extern u64 gDekuNutsMouthTex[TEX_LEN(u64, gDekuNutsMouthTex_WIDTH, gDekuNutsMouthTex_HEIGHT, 16)];
#define gDekuNutsDekuNutTex_WIDTH 16
#define gDekuNutsDekuNutTex_HEIGHT 16
extern u64 gDekuNutsDekuNutTex[TEX_LEN(u64, gDekuNutsDekuNutTex_WIDTH, gDekuNutsDekuNutTex_HEIGHT, 16)];
extern StandardLimb object_dekunuts_0030E8_Limb;
extern StandardLimb object_dekunuts_0030F4_Limb;
extern StandardLimb object_dekunuts_003100_Limb;
extern StandardLimb object_dekunuts_00310C_Limb;
extern StandardLimb object_dekunuts_003118_Limb;
extern StandardLimb object_dekunuts_003124_Limb;
extern StandardLimb object_dekunuts_003130_Limb;
extern StandardLimb object_dekunuts_00313C_Limb;
extern StandardLimb object_dekunuts_003148_Limb;
extern StandardLimb object_dekunuts_003154_Limb;
extern StandardLimb object_dekunuts_003160_Limb;
extern StandardLimb object_dekunuts_00316C_Limb;
extern StandardLimb object_dekunuts_003178_Limb;
extern StandardLimb object_dekunuts_003184_Limb;
extern StandardLimb object_dekunuts_003190_Limb;
extern StandardLimb object_dekunuts_00319C_Limb;
extern StandardLimb object_dekunuts_0031A8_Limb;
extern StandardLimb object_dekunuts_0031B4_Limb;
extern StandardLimb object_dekunuts_0031C0_Limb;
extern StandardLimb object_dekunuts_0031CC_Limb;
extern StandardLimb object_dekunuts_0031D8_Limb;
extern StandardLimb object_dekunuts_0031E4_Limb;
extern StandardLimb object_dekunuts_0031F0_Limb;
extern StandardLimb object_dekunuts_0031FC_Limb;
extern void* gDekuNutsLimbs[];
typedef enum gDekuNutsSkelLimb {
    /*  0 */ LIMB_OBJECT_DEKUNUTS_003268_NONE,
    /*  1 */ LIMB_OBJECT_DEKUNUTS_0030E8,
    /*  2 */ LIMB_OBJECT_DEKUNUTS_0030F4,
    /*  3 */ LIMB_OBJECT_DEKUNUTS_003100,
    /*  4 */ LIMB_OBJECT_DEKUNUTS_00310C,
    /*  5 */ LIMB_OBJECT_DEKUNUTS_003118,
    /*  6 */ LIMB_OBJECT_DEKUNUTS_003124,
    /*  7 */ LIMB_OBJECT_DEKUNUTS_003130,
    /*  8 */ LIMB_OBJECT_DEKUNUTS_00313C,
    /*  9 */ LIMB_OBJECT_DEKUNUTS_003148,
    /* 10 */ LIMB_OBJECT_DEKUNUTS_003154,
    /* 11 */ LIMB_OBJECT_DEKUNUTS_003160,
    /* 12 */ LIMB_OBJECT_DEKUNUTS_00316C,
    /* 13 */ LIMB_OBJECT_DEKUNUTS_003178,
    /* 14 */ LIMB_OBJECT_DEKUNUTS_003184,
    /* 15 */ LIMB_OBJECT_DEKUNUTS_003190,
    /* 16 */ LIMB_OBJECT_DEKUNUTS_00319C,
    /* 17 */ LIMB_OBJECT_DEKUNUTS_0031A8,
    /* 18 */ LIMB_OBJECT_DEKUNUTS_0031B4,
    /* 19 */ LIMB_OBJECT_DEKUNUTS_0031C0,
    /* 20 */ LIMB_OBJECT_DEKUNUTS_0031CC,
    /* 21 */ LIMB_OBJECT_DEKUNUTS_0031D8,
    /* 22 */ LIMB_OBJECT_DEKUNUTS_0031E4,
    /* 23 */ LIMB_OBJECT_DEKUNUTS_0031F0,
    /* 24 */ LIMB_OBJECT_DEKUNUTS_0031FC,
    /* 25 */ LIMB_OBJECT_DEKUNUTS_003268_MAX
} gDekuNutsSkelLimb;
extern SkeletonHeader gDekuNutsSkel;
extern s16 gDekuNutsRunFrameData[];
extern JointIndex gDekuNutsRunJointIndices[];
extern AnimationHeader gDekuNutsRunAnim;

#endif
