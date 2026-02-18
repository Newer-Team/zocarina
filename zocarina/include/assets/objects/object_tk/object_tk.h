#ifndef OBJECT_TK_H
#define OBJECT_TK_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gDampeDigFrameData[];
extern JointIndex gDampeDigJointIndices[];
extern AnimationHeader gDampeDigAnim;
extern s16 gDampeWalkFrameData[];
extern JointIndex gDampeWalkJointIndices[];
extern AnimationHeader gDampeWalkAnim;
extern s16 gDampeRestFrameData[];
extern JointIndex gDampeRestJointIndices[];
extern AnimationHeader gDampeRestAnim;
extern s16 gDampeFloatFrameData[];
extern JointIndex gDampeFloatJointIndices[];
extern AnimationHeader gDampeFloatAnim;
//#define gDampeUnkTLUT_TLUT_COUNT 204
extern u64 gDampeUnkTLUT[];
extern u8 object_tk_003918_Blob[];
#define object_tk_003980_Tex_WIDTH 8
#define object_tk_003980_Tex_HEIGHT 8
extern u64 object_tk_003980_Tex[TEX_LEN(u64, object_tk_003980_Tex_WIDTH, object_tk_003980_Tex_HEIGHT, 8)];
#define object_tk_0039C0_Tex_WIDTH 8
#define object_tk_0039C0_Tex_HEIGHT 8
extern u64 object_tk_0039C0_Tex[TEX_LEN(u64, object_tk_0039C0_Tex_WIDTH, object_tk_0039C0_Tex_HEIGHT, 8)];
#define object_tk_003A00_Tex_WIDTH 8
#define object_tk_003A00_Tex_HEIGHT 8
extern u64 object_tk_003A00_Tex[TEX_LEN(u64, object_tk_003A00_Tex_WIDTH, object_tk_003A00_Tex_HEIGHT, 8)];
#define object_tk_003A40_Tex_WIDTH 16
#define object_tk_003A40_Tex_HEIGHT 16
extern u64 object_tk_003A40_Tex[TEX_LEN(u64, object_tk_003A40_Tex_WIDTH, object_tk_003A40_Tex_HEIGHT, 8)];
#define gDampeEyeOpenTex_WIDTH 32
#define gDampeEyeOpenTex_HEIGHT 32
extern u64 gDampeEyeOpenTex[TEX_LEN(u64, gDampeEyeOpenTex_WIDTH, gDampeEyeOpenTex_HEIGHT, 16)];
#define gDampeEyeHalfTex_WIDTH 32
#define gDampeEyeHalfTex_HEIGHT 32
extern u64 gDampeEyeHalfTex[TEX_LEN(u64, gDampeEyeHalfTex_WIDTH, gDampeEyeHalfTex_HEIGHT, 16)];
#define gDampeEyeClosedTex_WIDTH 32
#define gDampeEyeClosedTex_HEIGHT 32
extern u64 gDampeEyeClosedTex[TEX_LEN(u64, gDampeEyeClosedTex_WIDTH, gDampeEyeClosedTex_HEIGHT, 16)];
#define object_tk_005340_Tex_WIDTH 16
#define object_tk_005340_Tex_HEIGHT 16
extern u64 object_tk_005340_Tex[TEX_LEN(u64, object_tk_005340_Tex_WIDTH, object_tk_005340_Tex_HEIGHT, 8)];
#define object_tk_005440_Tex_WIDTH 16
#define object_tk_005440_Tex_HEIGHT 16
extern u64 object_tk_005440_Tex[TEX_LEN(u64, object_tk_005440_Tex_WIDTH, object_tk_005440_Tex_HEIGHT, 8)];
#define gDampeUnused1Tex_WIDTH 16
#define gDampeUnused1Tex_HEIGHT 16
extern u64 gDampeUnused1Tex[TEX_LEN(u64, gDampeUnused1Tex_WIDTH, gDampeUnused1Tex_HEIGHT, 8)];
#define gDampeUnused2Tex_WIDTH 8
#define gDampeUnused2Tex_HEIGHT 16
extern u64 gDampeUnused2Tex[TEX_LEN(u64, gDampeUnused2Tex_WIDTH, gDampeUnused2Tex_HEIGHT, 8)];
#define object_tk_0056C0_Tex_WIDTH 16
#define object_tk_0056C0_Tex_HEIGHT 16
extern u64 object_tk_0056C0_Tex[TEX_LEN(u64, object_tk_0056C0_Tex_WIDTH, object_tk_0056C0_Tex_HEIGHT, 8)];
extern Vtx object_tk_Vtx_0057C0[];
extern Vtx object_tk_Vtx_005A20[];
extern Vtx object_tk_Vtx_006230[];
extern Vtx object_tk_Vtx_0063F0[];
extern Vtx object_tk_Vtx_006780[];
extern Vtx object_tk_Vtx_006900[];
extern Vtx object_tk_Vtx_006AB0[];
extern Vtx object_tk_Vtx_006E40[];
extern Vtx object_tk_Vtx_006FC0[];
extern Vtx object_tk_Vtx_007170[];
extern Vtx object_tk_Vtx_0076E0[];
extern Vtx object_tk_Vtx_007740[];
extern Vtx object_tk_Vtx_007950[];
extern Vtx object_tk_Vtx_0079B0[];
extern Vtx object_tk_Vtx_007BC0[];
extern Gfx object_tk_008020_DL[40];
extern Gfx object_tk_008160_DL[50];
extern Gfx object_tk_0082F0_DL[36];
extern Gfx object_tk_008410_DL[169];
extern Gfx object_tk_008958_DL[105];
extern Gfx object_tk_008CA0_DL[38];
extern Gfx object_tk_008DD0_DL[38];
extern Gfx object_tk_008F00_DL[66];
extern Gfx object_tk_009110_DL[38];
extern Gfx object_tk_009240_DL[38];
extern Gfx object_tk_009370_DL[66];
extern Gfx object_tk_009580_DL[55];
extern Gfx object_tk_009738_DL[28];
extern Gfx object_tk_009818_DL[55];
extern Gfx object_tk_0099D0_DL[28];
//#define object_tk_009AB0_Tex_TLUT_COUNT 40
extern u64 object_tk_009AB0_Tex[];
#define object_tk_009B00_Tex_WIDTH 16
#define object_tk_009B00_Tex_HEIGHT 16
extern u64 object_tk_009B00_Tex[TEX_LEN(u64, object_tk_009B00_Tex_WIDTH, object_tk_009B00_Tex_HEIGHT, 8)];
#define object_tk_009C00_Tex_WIDTH 8
#define object_tk_009C00_Tex_HEIGHT 16
extern u64 object_tk_009C00_Tex[TEX_LEN(u64, object_tk_009C00_Tex_WIDTH, object_tk_009C00_Tex_HEIGHT, 8)];
#define object_tk_009C80_Tex_WIDTH 8
#define object_tk_009C80_Tex_HEIGHT 8
extern u64 object_tk_009C80_Tex[TEX_LEN(u64, object_tk_009C80_Tex_WIDTH, object_tk_009C80_Tex_HEIGHT, 8)];
#define object_tk_009CC0_Tex_WIDTH 8
#define object_tk_009CC0_Tex_HEIGHT 8
extern u64 object_tk_009CC0_Tex[TEX_LEN(u64, object_tk_009CC0_Tex_WIDTH, object_tk_009CC0_Tex_HEIGHT, 16)];
#define object_tk_009D40_Tex_WIDTH 16
#define object_tk_009D40_Tex_HEIGHT 32
extern u64 object_tk_009D40_Tex[TEX_LEN(u64, object_tk_009D40_Tex_WIDTH, object_tk_009D40_Tex_HEIGHT, 4)];
extern Vtx object_tk_Vtx_009E40[];
extern Vtx object_tk_Vtx_00A0F0[];
extern Vtx gDampeShovelVtx[];
extern Gfx object_tk_00AA10_DL[45];
extern Gfx object_tk_00AB78_DL[45];
extern Gfx gDampeShovelDL[117];
#define object_tk_00B088_Tex_WIDTH 16
#define object_tk_00B088_Tex_HEIGHT 16
extern u64 object_tk_00B088_Tex[TEX_LEN(u64, object_tk_00B088_Tex_WIDTH, object_tk_00B088_Tex_HEIGHT, 16)];
#define object_tk_00B288_Tex_WIDTH 16
#define object_tk_00B288_Tex_HEIGHT 16
extern u64 object_tk_00B288_Tex[TEX_LEN(u64, object_tk_00B288_Tex_WIDTH, object_tk_00B288_Tex_HEIGHT, 16)];
#define object_tk_00B488_Tex_WIDTH 16
#define object_tk_00B488_Tex_HEIGHT 16
extern u64 object_tk_00B488_Tex[TEX_LEN(u64, object_tk_00B488_Tex_WIDTH, object_tk_00B488_Tex_HEIGHT, 16)];
extern Vtx gDampeLanternVtx[];
extern Gfx gDampeLanternDL[49];
extern Vtx gDampeHaloVtx[];
extern Gfx gDampeHaloDL[30];
extern Gfx gDampeEff1DL[2];
extern Gfx gDampeEff2DL[10];
extern Vtx gDampeEff2Vtx[];
extern StandardLimb object_tk_00BD30_Limb;
extern StandardLimb object_tk_00BD3C_Limb;
extern StandardLimb object_tk_00BD48_Limb;
extern StandardLimb object_tk_00BD54_Limb;
extern StandardLimb object_tk_00BD60_Limb;
extern StandardLimb object_tk_00BD6C_Limb;
extern StandardLimb object_tk_00BD78_Limb;
extern StandardLimb object_tk_00BD84_Limb;
extern StandardLimb object_tk_00BD90_Limb;
extern StandardLimb object_tk_00BD9C_Limb;
extern StandardLimb object_tk_00BDA8_Limb;
extern StandardLimb object_tk_00BDB4_Limb;
extern StandardLimb object_tk_00BDC0_Limb;
extern StandardLimb object_tk_00BDCC_Limb;
extern StandardLimb object_tk_00BDD8_Limb;
extern StandardLimb object_tk_00BDE4_Limb;
extern StandardLimb object_tk_00BDF0_Limb;
extern void* gDampeLimbs[];
typedef enum gDampeSkelLimb {
    /*  0 */ LIMB_OBJECT_TK_00BE40_NONE,
    /*  1 */ LIMB_OBJECT_TK_00BD30,
    /*  2 */ LIMB_OBJECT_TK_00BD3C,
    /*  3 */ LIMB_OBJECT_TK_00BD48,
    /*  4 */ LIMB_OBJECT_TK_00BD54,
    /*  5 */ LIMB_OBJECT_TK_00BD60,
    /*  6 */ LIMB_OBJECT_TK_00BD6C,
    /*  7 */ LIMB_OBJECT_TK_00BD78,
    /*  8 */ LIMB_OBJECT_TK_00BD84,
    /*  9 */ LIMB_OBJECT_TK_00BD90,
    /* 10 */ LIMB_OBJECT_TK_00BD9C,
    /* 11 */ LIMB_OBJECT_TK_00BDA8,
    /* 12 */ LIMB_OBJECT_TK_00BDB4,
    /* 13 */ LIMB_OBJECT_TK_00BDC0,
    /* 14 */ LIMB_OBJECT_TK_00BDCC,
    /* 15 */ LIMB_OBJECT_TK_00BDD8,
    /* 16 */ LIMB_OBJECT_TK_00BDE4,
    /* 17 */ LIMB_OBJECT_TK_00BDF0,
    /* 18 */ LIMB_OBJECT_TK_00BE40_MAX
} gDampeSkelLimb;
extern FlexSkeletonHeader gDampeSkel;

#endif
