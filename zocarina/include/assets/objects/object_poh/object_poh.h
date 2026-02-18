#ifndef OBJECT_POH_H
#define OBJECT_POH_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gPoeAttackFrameData[];
extern JointIndex gPoeAttackJointIndices[];
extern AnimationHeader gPoeAttackAnim;
extern s16 gPoeDamagedFrameData[];
extern JointIndex gPoeDamagedJointIndices[];
extern AnimationHeader gPoeDamagedAnim;
extern s16 gPoeFleeFrameData[];
extern JointIndex gPoeFleeJointIndices[];
extern AnimationHeader gPoeFleeAnim;
extern s16 gPoeFloatFrameData[];
extern JointIndex gPoeFloatJointIndices[];
extern AnimationHeader gPoeFloatAnim;
extern s16 gPoeAppearFrameData[];
extern JointIndex gPoeAppearJointIndices[];
extern AnimationHeader gPoeAppearAnim;
extern s16 gPoeDisappearFrameData[];
extern JointIndex gPoeDisappearJointIndices[];
extern AnimationHeader gPoeDisappearAnim;
extern Vtx object_poh_Vtx_0015C0[];
extern Gfx object_poh_001620_DL[19];
extern Vtx object_poh_Vtx_0016B8[];
extern Gfx object_poh_001898_DL[48];
extern Vtx object_poh_Vtx_001A18[];
extern Gfx object_poh_001A78_DL[19];
extern Vtx object_poh_Vtx_001B10[];
extern Gfx object_poh_001B70_DL[19];
extern Vtx object_poh_Vtx_001C08[];
extern Gfx object_poh_001C68_DL[15];
extern Vtx object_poh_Vtx_001CE0[];
extern Gfx object_poh_001FB0_DL[53];
extern Vtx gPoeBurnVtx[];
extern Gfx gPoeBurnDL[55];
extern Vtx object_poh_Vtx_0027C0[];
extern Gfx object_poh_002910_DL[25];
extern Vtx gPoeLanternVtx[];
extern Gfx gPoeLanternDL[50];
extern Vtx object_poh_Vtx_002EB8[];
extern Gfx object_poh_002F58_DL[23];
#define object_poh_003010_Tex_WIDTH 32
#define object_poh_003010_Tex_HEIGHT 64
extern u64 object_poh_003010_Tex[TEX_LEN(u64, object_poh_003010_Tex_WIDTH, object_poh_003010_Tex_HEIGHT, 8)];
extern Vtx gPoeSoulVtx[];
extern Gfx gPoeSoulDL[24];
#define object_poh_003910_Tex_WIDTH 32
#define object_poh_003910_Tex_HEIGHT 16
extern u64 object_poh_003910_Tex[TEX_LEN(u64, object_poh_003910_Tex_WIDTH, object_poh_003910_Tex_HEIGHT, 16)];
#define object_poh_003D10_Tex_WIDTH 32
#define object_poh_003D10_Tex_HEIGHT 32
extern u64 object_poh_003D10_Tex[TEX_LEN(u64, object_poh_003D10_Tex_WIDTH, object_poh_003D10_Tex_HEIGHT, 16)];
#define object_poh_004510_Tex_WIDTH 16
#define object_poh_004510_Tex_HEIGHT 16
extern u64 object_poh_004510_Tex[TEX_LEN(u64, object_poh_004510_Tex_WIDTH, object_poh_004510_Tex_HEIGHT, 16)];
#define object_poh_004710_Tex_WIDTH 8
#define object_poh_004710_Tex_HEIGHT 8
extern u64 object_poh_004710_Tex[TEX_LEN(u64, object_poh_004710_Tex_WIDTH, object_poh_004710_Tex_HEIGHT, 16)];
#define object_poh_004790_Tex_WIDTH 16
#define object_poh_004790_Tex_HEIGHT 16
extern u64 object_poh_004790_Tex[TEX_LEN(u64, object_poh_004790_Tex_WIDTH, object_poh_004790_Tex_HEIGHT, 16)];
#define object_poh_004990_Tex_WIDTH 8
#define object_poh_004990_Tex_HEIGHT 8
extern u64 object_poh_004990_Tex[TEX_LEN(u64, object_poh_004990_Tex_WIDTH, object_poh_004990_Tex_HEIGHT, 16)];
#define object_poh_004A10_Tex_WIDTH 8
#define object_poh_004A10_Tex_HEIGHT 16
extern u64 object_poh_004A10_Tex[TEX_LEN(u64, object_poh_004A10_Tex_WIDTH, object_poh_004A10_Tex_HEIGHT, 16)];
#define object_poh_004B10_Tex_WIDTH 16
#define object_poh_004B10_Tex_HEIGHT 16
extern u64 object_poh_004B10_Tex[TEX_LEN(u64, object_poh_004B10_Tex_WIDTH, object_poh_004B10_Tex_HEIGHT, 16)];
#define object_poh_004D10_Tex_WIDTH 16
#define object_poh_004D10_Tex_HEIGHT 16
extern u64 object_poh_004D10_Tex[TEX_LEN(u64, object_poh_004D10_Tex_WIDTH, object_poh_004D10_Tex_HEIGHT, 16)];
#define object_poh_004F10_Tex_WIDTH 8
#define object_poh_004F10_Tex_HEIGHT 8
extern u64 object_poh_004F10_Tex[TEX_LEN(u64, object_poh_004F10_Tex_WIDTH, object_poh_004F10_Tex_HEIGHT, 16)];
extern StandardLimb object_poh_004F90_Limb;
extern StandardLimb object_poh_004F9C_Limb;
extern StandardLimb object_poh_004FA8_Limb;
extern StandardLimb object_poh_004FB4_Limb;
extern StandardLimb object_poh_004FC0_Limb;
extern StandardLimb object_poh_004FCC_Limb;
extern StandardLimb object_poh_004FD8_Limb;
extern StandardLimb object_poh_004FE4_Limb;
extern StandardLimb object_poh_004FF0_Limb;
extern StandardLimb object_poh_004FFC_Limb;
extern StandardLimb object_poh_005008_Limb;
extern StandardLimb object_poh_005014_Limb;
extern StandardLimb object_poh_005020_Limb;
extern StandardLimb object_poh_00502C_Limb;
extern StandardLimb object_poh_005038_Limb;
extern StandardLimb object_poh_005044_Limb;
extern StandardLimb object_poh_005050_Limb;
extern StandardLimb object_poh_00505C_Limb;
extern StandardLimb object_poh_005068_Limb;
extern StandardLimb object_poh_005074_Limb;
extern void* gPoeLimbs[];
typedef enum gPoeSkelLimb {
    /*  0 */ LIMB_OBJECT_POH_0050D0_NONE,
    /*  1 */ LIMB_OBJECT_POH_004F90,
    /*  2 */ LIMB_OBJECT_POH_004F9C,
    /*  3 */ LIMB_OBJECT_POH_004FA8,
    /*  4 */ LIMB_OBJECT_POH_004FB4,
    /*  5 */ LIMB_OBJECT_POH_004FC0,
    /*  6 */ LIMB_OBJECT_POH_004FCC,
    /*  7 */ LIMB_OBJECT_POH_004FD8,
    /*  8 */ LIMB_OBJECT_POH_004FE4,
    /*  9 */ LIMB_OBJECT_POH_004FF0,
    /* 10 */ LIMB_OBJECT_POH_004FFC,
    /* 11 */ LIMB_OBJECT_POH_005008,
    /* 12 */ LIMB_OBJECT_POH_005014,
    /* 13 */ LIMB_OBJECT_POH_005020,
    /* 14 */ LIMB_OBJECT_POH_00502C,
    /* 15 */ LIMB_OBJECT_POH_005038,
    /* 16 */ LIMB_OBJECT_POH_005044,
    /* 17 */ LIMB_OBJECT_POH_005050,
    /* 18 */ LIMB_OBJECT_POH_00505C,
    /* 19 */ LIMB_OBJECT_POH_005068,
    /* 20 */ LIMB_OBJECT_POH_005074,
    /* 21 */ LIMB_OBJECT_POH_0050D0_MAX
} gPoeSkelLimb;
extern SkeletonHeader gPoeSkel;

#endif
