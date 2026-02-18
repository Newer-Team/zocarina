#ifndef OBJECT_DODONGO_H
#define OBJECT_DODONGO_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gDodongoDieFrameData[];
extern JointIndex gDodongoDieJointIndices[];
extern AnimationHeader gDodongoDieAnim;
extern s16 gDodongoTwitchFrameData[];
extern JointIndex gDodongoTwitchJointIndices[];
extern AnimationHeader gDodongoTwitchAnim;
extern s16 gDodongoDamageFrameData[];
extern JointIndex gDodongoDamageJointIndices[];
extern AnimationHeader gDodongoDamageAnim;
extern s16 gDodongoGetUpFrameData[];
extern JointIndex gDodongoGetUpJointIndices[];
extern AnimationHeader gDodongoGetUpAnim;
extern s16 gDodongoBreatheFireFrameData[];
extern JointIndex gDodongoBreatheFireJointIndices[];
extern AnimationHeader gDodongoBreatheFireAnim;
extern s16 gDodongoAfterBreatheFireFrameData[];
extern JointIndex gDodongoAfterBreatheFireJointIndices[];
extern AnimationHeader gDodongoAfterBreatheFireAnim;
extern s16 gDodongoLowerTailFrameData[];
extern JointIndex gDodongoLowerTailJointIndices[];
extern AnimationHeader gDodongoLowerTailAnim;
extern s16 gDodongoSweepTailRightFrameData[];
extern JointIndex gDodongoSweepTailRightJointIndices[];
extern AnimationHeader gDodongoSweepTailRightAnim;
extern s16 gDodongoSweepTailLeftFrameData[];
extern JointIndex gDodongoSweepTailLeftJointIndices[];
extern AnimationHeader gDodongoSweepTailLeftAnim;
extern s16 gDodongoWaitFrameData[];
extern JointIndex gDodongoWaitJointIndices[];
extern AnimationHeader gDodongoWaitAnim;
extern Vtx object_dodongo_Vtx_004C30[];
extern Vtx object_dodongo_Vtx_004E10[];
extern Vtx object_dodongo_Vtx_004FE0[];
extern Vtx object_dodongo_Vtx_005110[];
extern Vtx object_dodongo_Vtx_0054A0[];
extern Vtx object_dodongo_Vtx_005650[];
extern Vtx object_dodongo_Vtx_005780[];
extern Vtx object_dodongo_Vtx_005840[];
extern Vtx object_dodongo_Vtx_005C80[];
extern Vtx object_dodongo_Vtx_006160[];
extern Vtx object_dodongo_Vtx_006290[];
extern Vtx object_dodongo_Vtx_006460[];
extern Gfx object_dodongo_006640_DL[34];
extern Gfx object_dodongo_006750_DL[34];
extern Gfx object_dodongo_006860_DL[32];
extern Gfx object_dodongo_006960_DL[40];
extern Gfx object_dodongo_006AA0_DL[33];
extern Gfx object_dodongo_006BA8_DL[32];
extern Gfx object_dodongo_006CA8_DL[28];
extern Gfx object_dodongo_006D88_DL[74];
extern Gfx object_dodongo_006FD8_DL[56];
extern Gfx object_dodongo_007198_DL[32];
extern Gfx object_dodongo_007298_DL[34];
extern Gfx object_dodongo_0073A8_DL[34];
#define gDodongoSpikeTex_WIDTH 16
#define gDodongoSpikeTex_HEIGHT 16
extern u64 gDodongoSpikeTex[TEX_LEN(u64, gDodongoSpikeTex_WIDTH, gDodongoSpikeTex_HEIGHT, 16)];
#define gDodongoRoughSkinTex_WIDTH 8
#define gDodongoRoughSkinTex_HEIGHT 16
extern u64 gDodongoRoughSkinTex[TEX_LEN(u64, gDodongoRoughSkinTex_WIDTH, gDodongoRoughSkinTex_HEIGHT, 16)];
#define gDodongoSkinTex_WIDTH 8
#define gDodongoSkinTex_HEIGHT 16
extern u64 gDodongoSkinTex[TEX_LEN(u64, gDodongoSkinTex_WIDTH, gDodongoSkinTex_HEIGHT, 16)];
#define gDodongoFaceTex_WIDTH 32
#define gDodongoFaceTex_HEIGHT 16
extern u64 gDodongoFaceTex[TEX_LEN(u64, gDodongoFaceTex_WIDTH, gDodongoFaceTex_HEIGHT, 16)];
#define gDodongoInsideMouthTex_WIDTH 16
#define gDodongoInsideMouthTex_HEIGHT 32
extern u64 gDodongoInsideMouthTex[TEX_LEN(u64, gDodongoInsideMouthTex_WIDTH, gDodongoInsideMouthTex_HEIGHT, 16)];
#define gDodongoToothTex_WIDTH 8
#define gDodongoToothTex_HEIGHT 8
extern u64 gDodongoToothTex[TEX_LEN(u64, gDodongoToothTex_WIDTH, gDodongoToothTex_HEIGHT, 16)];
extern StandardLimb object_dodongo_008138_Limb;
extern StandardLimb object_dodongo_008144_Limb;
extern StandardLimb object_dodongo_008150_Limb;
extern StandardLimb object_dodongo_00815C_Limb;
extern StandardLimb object_dodongo_008168_Limb;
extern StandardLimb object_dodongo_008174_Limb;
extern StandardLimb object_dodongo_008180_Limb;
extern StandardLimb object_dodongo_00818C_Limb;
extern StandardLimb object_dodongo_008198_Limb;
extern StandardLimb object_dodongo_0081A4_Limb;
extern StandardLimb object_dodongo_0081B0_Limb;
extern StandardLimb object_dodongo_0081BC_Limb;
extern StandardLimb object_dodongo_0081C8_Limb;
extern StandardLimb object_dodongo_0081D4_Limb;
extern StandardLimb object_dodongo_0081E0_Limb;
extern StandardLimb object_dodongo_0081EC_Limb;
extern StandardLimb object_dodongo_0081F8_Limb;
extern StandardLimb object_dodongo_008204_Limb;
extern StandardLimb object_dodongo_008210_Limb;
extern StandardLimb object_dodongo_00821C_Limb;
extern StandardLimb object_dodongo_008228_Limb;
extern StandardLimb object_dodongo_008234_Limb;
extern StandardLimb object_dodongo_008240_Limb;
extern StandardLimb object_dodongo_00824C_Limb;
extern StandardLimb object_dodongo_008258_Limb;
extern StandardLimb object_dodongo_008264_Limb;
extern StandardLimb object_dodongo_008270_Limb;
extern StandardLimb object_dodongo_00827C_Limb;
extern StandardLimb object_dodongo_008288_Limb;
extern StandardLimb object_dodongo_008294_Limb;
extern void* gDodongoLimbs[];
typedef enum gDodongoSkelLimb {
    /*  0 */ LIMB_OBJECT_DODONGO_008318_NONE,
    /*  1 */ LIMB_OBJECT_DODONGO_008138,
    /*  2 */ LIMB_OBJECT_DODONGO_008144,
    /*  3 */ LIMB_OBJECT_DODONGO_008150,
    /*  4 */ LIMB_OBJECT_DODONGO_00815C,
    /*  5 */ LIMB_OBJECT_DODONGO_008168,
    /*  6 */ LIMB_OBJECT_DODONGO_008174,
    /*  7 */ LIMB_OBJECT_DODONGO_008180,
    /*  8 */ LIMB_OBJECT_DODONGO_00818C,
    /*  9 */ LIMB_OBJECT_DODONGO_008198,
    /* 10 */ LIMB_OBJECT_DODONGO_0081A4,
    /* 11 */ LIMB_OBJECT_DODONGO_0081B0,
    /* 12 */ LIMB_OBJECT_DODONGO_0081BC,
    /* 13 */ LIMB_OBJECT_DODONGO_0081C8,
    /* 14 */ LIMB_OBJECT_DODONGO_0081D4,
    /* 15 */ LIMB_OBJECT_DODONGO_0081E0,
    /* 16 */ LIMB_OBJECT_DODONGO_0081EC,
    /* 17 */ LIMB_OBJECT_DODONGO_0081F8,
    /* 18 */ LIMB_OBJECT_DODONGO_008204,
    /* 19 */ LIMB_OBJECT_DODONGO_008210,
    /* 20 */ LIMB_OBJECT_DODONGO_00821C,
    /* 21 */ LIMB_OBJECT_DODONGO_008228,
    /* 22 */ LIMB_OBJECT_DODONGO_008234,
    /* 23 */ LIMB_OBJECT_DODONGO_008240,
    /* 24 */ LIMB_OBJECT_DODONGO_00824C,
    /* 25 */ LIMB_OBJECT_DODONGO_008258,
    /* 26 */ LIMB_OBJECT_DODONGO_008264,
    /* 27 */ LIMB_OBJECT_DODONGO_008270,
    /* 28 */ LIMB_OBJECT_DODONGO_00827C,
    /* 29 */ LIMB_OBJECT_DODONGO_008288,
    /* 30 */ LIMB_OBJECT_DODONGO_008294,
    /* 31 */ LIMB_OBJECT_DODONGO_008318_MAX
} gDodongoSkelLimb;
extern SkeletonHeader gDodongoSkel;
extern s16 gDodongoWalkFrameData[];
extern JointIndex gDodongoWalkJointIndices[];
extern AnimationHeader gDodongoWalkAnim;
extern s16 gDodongoRightStepFrameData[];
extern JointIndex gDodongoRightStepJointIndices[];
extern AnimationHeader gDodongoRightStepAnim;
extern s16 gDodongoLeftStepFrameData[];
extern JointIndex gDodongoLeftStepJointIndices[];
extern AnimationHeader gDodongoLeftStepAnim;
#define gDodongoFire0Tex_WIDTH 32
#define gDodongoFire0Tex_HEIGHT 32
extern u64 gDodongoFire0Tex[TEX_LEN(u64, gDodongoFire0Tex_WIDTH, gDodongoFire0Tex_HEIGHT, 4)];
#define gDodongoFire1Tex_WIDTH 32
#define gDodongoFire1Tex_HEIGHT 32
extern u64 gDodongoFire1Tex[TEX_LEN(u64, gDodongoFire1Tex_WIDTH, gDodongoFire1Tex_HEIGHT, 4)];
#define gDodongoFire2Tex_WIDTH 32
#define gDodongoFire2Tex_HEIGHT 32
extern u64 gDodongoFire2Tex[TEX_LEN(u64, gDodongoFire2Tex_WIDTH, gDodongoFire2Tex_HEIGHT, 4)];
#define gDodongoFire3Tex_WIDTH 32
#define gDodongoFire3Tex_HEIGHT 32
extern u64 gDodongoFire3Tex[TEX_LEN(u64, gDodongoFire3Tex_WIDTH, gDodongoFire3Tex_HEIGHT, 4)];
extern Gfx gDodongoFireDL[12];
extern Vtx gDodongoFireVtx[];

#endif
