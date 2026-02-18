#ifndef OBJECT_KM1_H
#define OBJECT_KM1_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern StandardLimb gKm1SkelLimb_000000;
extern StandardLimb gKm1SkelLimb_00000C;
extern StandardLimb gKm1SkelLimb_000018;
extern StandardLimb gKm1SkelLimb_000024;
extern StandardLimb gKm1SkelLimb_000030;
extern StandardLimb gKm1SkelLimb_00003C;
extern StandardLimb gKm1SkelLimb_000048;
extern StandardLimb gKm1SkelLimb_000054;
extern StandardLimb gKm1SkelLimb_000060;
extern StandardLimb gKm1SkelLimb_00006C;
extern StandardLimb gKm1SkelLimb_000078;
extern StandardLimb gKm1SkelLimb_000084;
extern StandardLimb gKm1SkelLimb_000090;
extern StandardLimb gKm1SkelLimb_00009C;
extern StandardLimb gKm1SkelLimb_0000A8;
extern void* gKm1Limbs[];
typedef enum gKm1SkelLimb {
    /*  0 */ LIMB_OBJECT_KM1_0000F0_NONE,
    /*  1 */ LIMB_OBJECT_KM1_000000,
    /*  2 */ LIMB_OBJECT_KM1_00000C,
    /*  3 */ LIMB_OBJECT_KM1_000018,
    /*  4 */ LIMB_OBJECT_KM1_000024,
    /*  5 */ LIMB_OBJECT_KM1_000030,
    /*  6 */ LIMB_OBJECT_KM1_00003C,
    /*  7 */ LIMB_OBJECT_KM1_000048,
    /*  8 */ LIMB_OBJECT_KM1_000054,
    /*  9 */ LIMB_OBJECT_KM1_000060,
    /* 10 */ LIMB_OBJECT_KM1_00006C,
    /* 11 */ LIMB_OBJECT_KM1_000078,
    /* 12 */ LIMB_OBJECT_KM1_000084,
    /* 13 */ LIMB_OBJECT_KM1_000090,
    /* 14 */ LIMB_OBJECT_KM1_00009C,
    /* 15 */ LIMB_OBJECT_KM1_0000A8,
    /* 16 */ LIMB_OBJECT_KM1_0000F0_MAX
} gKm1SkelLimb;
extern FlexSkeletonHeader gKm1Skel;
//#define gKm1TLUT_0000FC_TLUT_COUNT 256
extern u32 gKm1TLUT_0000FC[];
#define gKm1TunicTex_WIDTH 8
#define gKm1TunicTex_HEIGHT 8
extern u32 gKm1TunicTex[TEX_LEN(u32, gKm1TunicTex_WIDTH, gKm1TunicTex_HEIGHT, 8)];
#define gKm1BootWrinkleTex_WIDTH 8
#define gKm1BootWrinkleTex_HEIGHT 8
extern u32 gKm1BootWrinkleTex[TEX_LEN(u32, gKm1BootWrinkleTex_WIDTH, gKm1BootWrinkleTex_HEIGHT, 8)];
#define gKm1Skin1Tex_WIDTH 8
#define gKm1Skin1Tex_HEIGHT 8
extern u32 gKm1Skin1Tex[TEX_LEN(u32, gKm1Skin1Tex_WIDTH, gKm1Skin1Tex_HEIGHT, 8)];
#define gKm1TunicFringeTex_WIDTH 16
#define gKm1TunicFringeTex_HEIGHT 16
extern u32 gKm1TunicFringeTex[TEX_LEN(u32, gKm1TunicFringeTex_WIDTH, gKm1TunicFringeTex_HEIGHT, 16)];
#define gKm1UnusedHairTex_WIDTH 16
#define gKm1UnusedHairTex_HEIGHT 32
extern u32 gKm1UnusedHairTex[TEX_LEN(u32, gKm1UnusedHairTex_WIDTH, gKm1UnusedHairTex_HEIGHT, 8)];
#define gKm1Ear1Tex_WIDTH 8
#define gKm1Ear1Tex_HEIGHT 8
extern u32 gKm1Ear1Tex[TEX_LEN(u32, gKm1Ear1Tex_WIDTH, gKm1Ear1Tex_HEIGHT, 8)];
#define gKm1HandTex_WIDTH 8
#define gKm1HandTex_HEIGHT 8
extern u32 gKm1HandTex[TEX_LEN(u32, gKm1HandTex_WIDTH, gKm1HandTex_HEIGHT, 8)];
//#define gKm1TLUT_00083C_TLUT_COUNT 96
extern u32 gKm1TLUT_00083C[];
#define gKm1Ear2Tex_WIDTH 8
#define gKm1Ear2Tex_HEIGHT 8
extern u32 gKm1Ear2Tex[TEX_LEN(u32, gKm1Ear2Tex_WIDTH, gKm1Ear2Tex_HEIGHT, 8)];
#define gKm1Skin2Tex_WIDTH 8
#define gKm1Skin2Tex_HEIGHT 8
extern u32 gKm1Skin2Tex[TEX_LEN(u32, gKm1Skin2Tex_WIDTH, gKm1Skin2Tex_HEIGHT, 8)];
#define gKm1HairTex_WIDTH 16
#define gKm1HairTex_HEIGHT 32
extern u32 gKm1HairTex[TEX_LEN(u32, gKm1HairTex_WIDTH, gKm1HairTex_HEIGHT, 8)];
extern Vtx gKm1Vtx[];
extern Gfx gKm1DL[167];
extern Vtx object_km1_Vtx_001DC8[];
extern Vtx object_km1_Vtx_001F68[];
extern Vtx object_km1_Vtx_002188[];
extern Vtx object_km1_Vtx_002428[];
extern Vtx object_km1_Vtx_0025C8[];
extern Vtx object_km1_Vtx_0027E8[];
extern Vtx object_km1_Vtx_002A88[];
extern Vtx object_km1_Vtx_002DA8[];
extern Vtx object_km1_Vtx_002F28[];
extern Vtx object_km1_Vtx_0031B8[];
extern Vtx object_km1_Vtx_0034D8[];
extern Vtx object_km1_Vtx_003658[];
extern Vtx object_km1_Vtx_0038E8[];
extern Vtx object_km1_Vtx_003D18[];
extern Gfx gKm1SkelLimb_000054_06003F08_DL[70];
extern Gfx gKm1SkelLimb_000084_06004138_DL[71];
extern Gfx gKm1SkelLimb_000090_06004370_DL[39];
extern Gfx gKm1SkelLimb_00009C_060044A8_DL[95];
extern Gfx gKm1SkelLimb_000060_060047A0_DL[71];
extern Gfx gKm1SkelLimb_00006C_060049D8_DL[39];
extern Gfx gKm1SkelLimb_000078_06004B10_DL[80];
extern Gfx gKm1SkelLimb_000000_06004D90_DL[33];
extern Gfx gKm1SkelLimb_000030_06004E98_DL[72];
extern Gfx gKm1SkelLimb_00003C_060050D8_DL[73];
extern Gfx gKm1SkelLimb_000048_06005320_DL[33];
extern Gfx gKm1SkelLimb_00000C_06005428_DL[72];
extern Gfx gKm1SkelLimb_000018_06005668_DL[73];
extern Gfx gKm1SkelLimb_000024_060058B0_DL[33];

#endif
