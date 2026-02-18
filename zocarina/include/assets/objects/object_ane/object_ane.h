#ifndef OBJECT_ANE_H
#define OBJECT_ANE_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern StandardLimb gCuccoLadyRootLimb;
extern StandardLimb gCuccoLadyLimb_00C;
extern StandardLimb gCuccoLadyLimb_018;
extern StandardLimb gCuccoLadyLimb_024;
extern StandardLimb gCuccoLadyLimb_030;
extern StandardLimb gCuccoLadyLimb_03C;
extern StandardLimb gCuccoLadyLimb_048;
extern StandardLimb gCuccoLadyTorsoLimb;
extern StandardLimb gCuccoLadyLimb_060;
extern StandardLimb gCuccoLadyLimb_06C;
extern StandardLimb gCuccoLadyLimb_078;
extern StandardLimb gCuccoLadyLimb_084;
extern StandardLimb gCuccoLadyLimb_090;
extern StandardLimb gCuccoLadyLimb_09C;
extern StandardLimb gCuccoLadyHeadLimb;
extern void* gCuccoLadyLimbs[];
typedef enum gCuccoLadySkelLimb {
    /*  0 */ LIMB_OBJECT_ANE_0000F0_NONE,
    /*  1 */ LIMB_OBJECT_ANE_000000,
    /*  2 */ LIMB_OBJECT_ANE_00000C,
    /*  3 */ LIMB_OBJECT_ANE_000018,
    /*  4 */ LIMB_OBJECT_ANE_000024,
    /*  5 */ LIMB_OBJECT_ANE_000030,
    /*  6 */ LIMB_OBJECT_ANE_00003C,
    /*  7 */ LIMB_OBJECT_ANE_000048,
    /*  8 */ LIMB_OBJECT_ANE_000054,
    /*  9 */ LIMB_OBJECT_ANE_000060,
    /* 10 */ LIMB_OBJECT_ANE_00006C,
    /* 11 */ LIMB_OBJECT_ANE_000078,
    /* 12 */ LIMB_OBJECT_ANE_000084,
    /* 13 */ LIMB_OBJECT_ANE_000090,
    /* 14 */ LIMB_OBJECT_ANE_00009C,
    /* 15 */ LIMB_OBJECT_ANE_0000A8,
    /* 16 */ LIMB_OBJECT_ANE_0000F0_MAX
} gCuccoLadySkelLimb;
extern FlexSkeletonHeader gCuccoLadySkel;
//#define gCuccoLadyTLUT_TLUT_COUNT 256
extern u64 gCuccoLadyTLUT[];
#define gCuccoLadyHairTex_WIDTH 8
#define gCuccoLadyHairTex_HEIGHT 16
extern u64 gCuccoLadyHairTex[TEX_LEN(u64, gCuccoLadyHairTex_WIDTH, gCuccoLadyHairTex_HEIGHT, 8)];
#define gCuccoLadyTex_0388_WIDTH 8
#define gCuccoLadyTex_0388_HEIGHT 8
extern u64 gCuccoLadyTex_0388[TEX_LEN(u64, gCuccoLadyTex_0388_WIDTH, gCuccoLadyTex_0388_HEIGHT, 8)];
#define gCuccoLadyEarTex_WIDTH 16
#define gCuccoLadyEarTex_HEIGHT 16
extern u64 gCuccoLadyEarTex[TEX_LEN(u64, gCuccoLadyEarTex_WIDTH, gCuccoLadyEarTex_HEIGHT, 8)];
#define gCuccoLadyMouthTex_WIDTH 32
#define gCuccoLadyMouthTex_HEIGHT 16
extern u64 gCuccoLadyMouthTex[TEX_LEN(u64, gCuccoLadyMouthTex_WIDTH, gCuccoLadyMouthTex_HEIGHT, 16)];
#define gCuccoLadyEyeOpenTex_WIDTH 32
#define gCuccoLadyEyeOpenTex_HEIGHT 32
extern u64 gCuccoLadyEyeOpenTex[TEX_LEN(u64, gCuccoLadyEyeOpenTex_WIDTH, gCuccoLadyEyeOpenTex_HEIGHT, 16)];
#define gCuccoLadyEyeHalfTex_WIDTH 32
#define gCuccoLadyEyeHalfTex_HEIGHT 32
extern u64 gCuccoLadyEyeHalfTex[TEX_LEN(u64, gCuccoLadyEyeHalfTex_WIDTH, gCuccoLadyEyeHalfTex_HEIGHT, 16)];
#define gCuccoLadyEyeClosedTex_WIDTH 32
#define gCuccoLadyEyeClosedTex_HEIGHT 32
extern u64 gCuccoLadyEyeClosedTex[TEX_LEN(u64, gCuccoLadyEyeClosedTex_WIDTH, gCuccoLadyEyeClosedTex_HEIGHT, 16)];
#define gCuccoLadyBackOfHandTex_WIDTH 16
#define gCuccoLadyBackOfHandTex_HEIGHT 16
extern u64 gCuccoLadyBackOfHandTex[TEX_LEN(u64, gCuccoLadyBackOfHandTex_WIDTH, gCuccoLadyBackOfHandTex_HEIGHT, 8)];
#define gCuccoLadySleeveTex_WIDTH 8
#define gCuccoLadySleeveTex_HEIGHT 16
extern u64 gCuccoLadySleeveTex[TEX_LEN(u64, gCuccoLadySleeveTex_WIDTH, gCuccoLadySleeveTex_HEIGHT, 8)];
#define gCuccoLadyShirtButtonTex_WIDTH 8
#define gCuccoLadyShirtButtonTex_HEIGHT 8
extern u64 gCuccoLadyShirtButtonTex[TEX_LEN(u64, gCuccoLadyShirtButtonTex_WIDTH, gCuccoLadyShirtButtonTex_HEIGHT, 8)];
#define gCuccoLadyWaistTex_WIDTH 16
#define gCuccoLadyWaistTex_HEIGHT 16
extern u64 gCuccoLadyWaistTex[TEX_LEN(u64, gCuccoLadyWaistTex_WIDTH, gCuccoLadyWaistTex_HEIGHT, 8)];
#define gCuccoLadySkirtTex_WIDTH 32
#define gCuccoLadySkirtTex_HEIGHT 32
extern u64 gCuccoLadySkirtTex[TEX_LEN(u64, gCuccoLadySkirtTex_WIDTH, gCuccoLadySkirtTex_HEIGHT, 8)];
extern Vtx gCuccoLadyHeadVtx[];
extern Vtx object_ane_Vtx_003628[];
extern Vtx object_ane_Vtx_0038B8[];
extern Vtx object_ane_Vtx_003A38[];
extern Vtx object_ane_Vtx_003C08[];
extern Vtx object_ane_Vtx_003E98[];
extern Vtx object_ane_Vtx_004018[];
extern Vtx gCuccoLadyTorsoVtx[];
extern Vtx gCuccoLadyShoe2Vtx[];
extern Vtx object_ane_Vtx_004BE8[];
extern Vtx object_ane_Vtx_004C68[];
extern Vtx gCuccoLadyShoe1Vtx[];
extern Vtx object_ane_Vtx_004FE8[];
extern Vtx object_ane_Vtx_005068[];
extern Vtx gCuccoLadyDressVtx[];
extern Gfx gCuccoLadyHeadDL[159];
extern Gfx gCuccoLadyDL_59D0[62];
extern Gfx gCuccoLadyDL_5BC0[38];
extern Gfx gCuccoLadyDL_5CF0[39];
extern Gfx gCuccoLadyDL_5E28[62];
extern Gfx gCuccoLadyDL_6018[38];
extern Gfx gCuccoLadyDL_6148[39];
extern Gfx gCuccoLadyTorsoDL[94];
extern Gfx gCuccoLadyShoe2DL[81];
extern Gfx gCuccoLadyDL_67F8[29];
extern Gfx gCuccoLadyDL_68E0[26];
extern Gfx gCuccoLadyShoe1DL[81];
extern Gfx gCuccoLadyDL_6C38[29];
extern Gfx gCuccoLadyDL_6D20[26];
extern Gfx gCuccoLadyDressDL[55];

#endif
