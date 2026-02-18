#ifndef OBJECT_KW1_H
#define OBJECT_KW1_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern StandardLimb gKw1SkelLimb_000000;
extern StandardLimb gKw1SkelLimb_00000C;
extern StandardLimb gKw1SkelLimb_000018;
extern StandardLimb gKw1SkelLimb_000024;
extern StandardLimb gKw1SkelLimb_000030;
extern StandardLimb gKw1SkelLimb_00003C;
extern StandardLimb gKw1SkelLimb_000048;
extern StandardLimb gKw1SkelLimb_000054;
extern StandardLimb gKw1SkelLimb_000060;
extern StandardLimb gKw1SkelLimb_00006C;
extern StandardLimb gKw1SkelLimb_000078;
extern StandardLimb gKw1SkelLimb_000084;
extern StandardLimb gKw1SkelLimb_000090;
extern StandardLimb gKw1SkelLimb_00009C;
extern StandardLimb gKw1SkelLimb_0000A8;
extern void* gKw1Limbs[];
typedef enum gKw1SkelLimb {
    /*  0 */ LIMB_OBJECT_KW1_0000F0_NONE,
    /*  1 */ LIMB_OBJECT_KW1_000000,
    /*  2 */ LIMB_OBJECT_KW1_00000C,
    /*  3 */ LIMB_OBJECT_KW1_000018,
    /*  4 */ LIMB_OBJECT_KW1_000024,
    /*  5 */ LIMB_OBJECT_KW1_000030,
    /*  6 */ LIMB_OBJECT_KW1_00003C,
    /*  7 */ LIMB_OBJECT_KW1_000048,
    /*  8 */ LIMB_OBJECT_KW1_000054,
    /*  9 */ LIMB_OBJECT_KW1_000060,
    /* 10 */ LIMB_OBJECT_KW1_00006C,
    /* 11 */ LIMB_OBJECT_KW1_000078,
    /* 12 */ LIMB_OBJECT_KW1_000084,
    /* 13 */ LIMB_OBJECT_KW1_000090,
    /* 14 */ LIMB_OBJECT_KW1_00009C,
    /* 15 */ LIMB_OBJECT_KW1_0000A8,
    /* 16 */ LIMB_OBJECT_KW1_0000F0_MAX
} gKw1SkelLimb;
extern FlexSkeletonHeader gKw1Skel;
//#define object_kw1_TLUT_0000FC_TLUT_COUNT 256
extern u32 object_kw1_TLUT_0000FC[];
#define gKw1BootsTex_WIDTH 16
#define gKw1BootsTex_HEIGHT 16
extern u32 gKw1BootsTex[TEX_LEN(u32, gKw1BootsTex_WIDTH, gKw1BootsTex_HEIGHT, 8)];
#define gKw1Skin1Tex_WIDTH 8
#define gKw1Skin1Tex_HEIGHT 8
extern u32 gKw1Skin1Tex[TEX_LEN(u32, gKw1Skin1Tex_WIDTH, gKw1Skin1Tex_HEIGHT, 8)];
#define gKw1TunicTex_WIDTH 8
#define gKw1TunicTex_HEIGHT 8
extern u32 gKw1TunicTex[TEX_LEN(u32, gKw1TunicTex_WIDTH, gKw1TunicTex_HEIGHT, 8)];
#define object_kw1_Tex_00047C_WIDTH 8
#define object_kw1_Tex_00047C_HEIGHT 8
extern u32 object_kw1_Tex_00047C[TEX_LEN(u32, object_kw1_Tex_00047C_WIDTH, object_kw1_Tex_00047C_HEIGHT, 8)];
#define gKw1UnusedEyeOpenTex_WIDTH 32
#define gKw1UnusedEyeOpenTex_HEIGHT 32
extern u32 gKw1UnusedEyeOpenTex[TEX_LEN(u32, gKw1UnusedEyeOpenTex_WIDTH, gKw1UnusedEyeOpenTex_HEIGHT, 16)];
#define gKw1HandTex_WIDTH 8
#define gKw1HandTex_HEIGHT 8
extern u32 gKw1HandTex[TEX_LEN(u32, gKw1HandTex_WIDTH, gKw1HandTex_HEIGHT, 8)];
#define gKw1BeltBuckleTex_WIDTH 8
#define gKw1BeltBuckleTex_HEIGHT 8
extern u32 gKw1BeltBuckleTex[TEX_LEN(u32, gKw1BeltBuckleTex_WIDTH, gKw1BeltBuckleTex_HEIGHT, 8)];
//#define object_kw1_TLUT_000D3C_TLUT_COUNT 232
extern u32 object_kw1_TLUT_000D3C[];
#define gKw1EarTex_WIDTH 8
#define gKw1EarTex_HEIGHT 8
extern u32 gKw1EarTex[TEX_LEN(u32, gKw1EarTex_WIDTH, gKw1EarTex_HEIGHT, 8)];
#define gKw1EyeOpenTex_WIDTH 32
#define gKw1EyeOpenTex_HEIGHT 32
extern u32 gKw1EyeOpenTex[TEX_LEN(u32, gKw1EyeOpenTex_WIDTH, gKw1EyeOpenTex_HEIGHT, 8)];
#define gKw1HairTex_WIDTH 16
#define gKw1HairTex_HEIGHT 32
extern u32 gKw1HairTex[TEX_LEN(u32, gKw1HairTex_WIDTH, gKw1HairTex_HEIGHT, 8)];
#define gKw1Skin2Tex_WIDTH 8
#define gKw1Skin2Tex_HEIGHT 8
extern u32 gKw1Skin2Tex[TEX_LEN(u32, gKw1Skin2Tex_WIDTH, gKw1Skin2Tex_HEIGHT, 8)];
#define gKw1HairlineTex_WIDTH 16
#define gKw1HairlineTex_HEIGHT 8
extern u32 gKw1HairlineTex[TEX_LEN(u32, gKw1HairlineTex_WIDTH, gKw1HairlineTex_HEIGHT, 8)];
#define gKw1MouthTex_WIDTH 32
#define gKw1MouthTex_HEIGHT 32
extern u32 gKw1MouthTex[TEX_LEN(u32, gKw1MouthTex_WIDTH, gKw1MouthTex_HEIGHT, 8)];
#define gKw1EyeHalfTex_WIDTH 32
#define gKw1EyeHalfTex_HEIGHT 32
extern u32 gKw1EyeHalfTex[TEX_LEN(u32, gKw1EyeHalfTex_WIDTH, gKw1EyeHalfTex_HEIGHT, 8)];
#define gKw1EyeClosedTex_WIDTH 32
#define gKw1EyeClosedTex_HEIGHT 32
extern u32 gKw1EyeClosedTex[TEX_LEN(u32, gKw1EyeClosedTex_WIDTH, gKw1EyeClosedTex_HEIGHT, 8)];
extern Vtx object_kw1_Vtx_002210[];
extern Gfx object_kw1_DL_002C10[263];
extern Vtx object_kw1_Vtx_003448[];
extern Vtx object_kw1_Vtx_003658[];
extern Vtx object_kw1_Vtx_003858[];
extern Vtx object_kw1_Vtx_003A28[];
extern Vtx object_kw1_Vtx_003C38[];
extern Vtx object_kw1_Vtx_003E38[];
extern Vtx object_kw1_Vtx_004008[];
extern Vtx object_kw1_Vtx_004278[];
extern Vtx object_kw1_Vtx_0043E8[];
extern Vtx object_kw1_Vtx_004578[];
extern Vtx object_kw1_Vtx_0047E8[];
extern Vtx object_kw1_Vtx_004958[];
extern Vtx object_kw1_Vtx_004AE8[];
extern Vtx object_kw1_Vtx_005108[];
extern Gfx object_kw1_DL_0053F8[78];
extern Gfx object_kw1_DL_005668[40];
extern Gfx object_kw1_DL_0057A8[38];
extern Gfx object_kw1_DL_0058D8[49];
extern Gfx object_kw1_DL_005A60[40];
extern Gfx object_kw1_DL_005BA0[38];
extern Gfx object_kw1_DL_005CD0[49];
extern Gfx object_kw1_DL_005E58[56];
extern Gfx object_kw1_DL_006018[53];
extern Gfx object_kw1_DL_0061C0[52];
extern Gfx object_kw1_DL_006360[35];
extern Gfx object_kw1_DL_006478[53];
extern Gfx object_kw1_DL_006620[52];
extern Gfx object_kw1_DL_0067C0[35];

#endif
