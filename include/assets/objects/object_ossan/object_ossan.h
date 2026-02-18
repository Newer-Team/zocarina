#ifndef OBJECT_OSSAN_H
#define OBJECT_OSSAN_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gObjectOssanAnim_000338_06000000_FrameData[];
extern JointIndex gObjectOssanAnim_000338_06000300_JointIndices[];
extern AnimationHeader gObjectOssanAnim_000338;
extern Vtx gObjectOssanUnusedVtx[];
extern Vtx object_ossan_Vtx_000960[];
extern Vtx object_ossan_Vtx_0010B0[];
extern Vtx object_ossan_Vtx_001350[];
extern Vtx object_ossan_Vtx_001720[];
extern Vtx object_ossan_Vtx_001E70[];
extern Vtx object_ossan_Vtx_002110[];
extern Vtx object_ossan_Vtx_0024E0[];
extern Gfx object_ossan_002E30_DL[96];
extern Gfx object_ossan_003130_DL[61];
extern Gfx object_ossan_003318_DL[126];
extern Gfx object_ossan_003708_DL[133];
extern Gfx object_ossan_003B30_DL[61];
extern Gfx object_ossan_003D18_DL[126];
extern Gfx object_ossan_004108_DL[133];
//#define gOssanEyesTLUT_TLUT_COUNT 252
extern u64 gOssanEyesTLUT[];
//#define gOssanTLUT_TLUT_COUNT 168
extern u64 gOssanTLUT[];
#define gOssanEyeOpenTex_WIDTH 32
#define gOssanEyeOpenTex_HEIGHT 32
extern u64 gOssanEyeOpenTex[TEX_LEN(u64, gOssanEyeOpenTex_WIDTH, gOssanEyeOpenTex_HEIGHT, 8)];
#define gOssanBeardTex_WIDTH 32
#define gOssanBeardTex_HEIGHT 32
extern u64 gOssanBeardTex[TEX_LEN(u64, gOssanBeardTex_WIDTH, gOssanBeardTex_HEIGHT, 8)];
#define object_ossan_005078_Tex_WIDTH 16
#define object_ossan_005078_Tex_HEIGHT 16
extern u64 object_ossan_005078_Tex[TEX_LEN(u64, object_ossan_005078_Tex_WIDTH, object_ossan_005078_Tex_HEIGHT, 8)];
#define object_ossan_005178_Tex_WIDTH 16
#define object_ossan_005178_Tex_HEIGHT 16
extern u64 object_ossan_005178_Tex[TEX_LEN(u64, object_ossan_005178_Tex_WIDTH, object_ossan_005178_Tex_HEIGHT, 8)];
#define object_ossan_005278_Tex_WIDTH 8
#define object_ossan_005278_Tex_HEIGHT 8
extern u64 object_ossan_005278_Tex[TEX_LEN(u64, object_ossan_005278_Tex_WIDTH, object_ossan_005278_Tex_HEIGHT, 8)];
#define gOssanEyeHalfTex_WIDTH 32
#define gOssanEyeHalfTex_HEIGHT 32
extern u64 gOssanEyeHalfTex[TEX_LEN(u64, gOssanEyeHalfTex_WIDTH, gOssanEyeHalfTex_HEIGHT, 8)];
#define gOssanEyeClosedTex_WIDTH 32
#define gOssanEyeClosedTex_HEIGHT 32
extern u64 gOssanEyeClosedTex[TEX_LEN(u64, gOssanEyeClosedTex_WIDTH, gOssanEyeClosedTex_HEIGHT, 8)];
#define object_ossan_005AB8_Tex_WIDTH 8
#define object_ossan_005AB8_Tex_HEIGHT 8
extern u64 object_ossan_005AB8_Tex[TEX_LEN(u64, object_ossan_005AB8_Tex_WIDTH, object_ossan_005AB8_Tex_HEIGHT, 8)];
extern Vtx object_ossan_Vtx_005AF8[];
extern Vtx object_ossan_Vtx_006588[];
extern Gfx object_ossan_007428_DL[320];
extern Gfx gObjectOssanEnSyatekiManDL_007E28[386];
#define object_ossan_008A38_Tex_WIDTH 8
#define object_ossan_008A38_Tex_HEIGHT 8
extern u64 object_ossan_008A38_Tex[TEX_LEN(u64, object_ossan_008A38_Tex_WIDTH, object_ossan_008A38_Tex_HEIGHT, 16)];
#define object_ossan_008AB8_Tex_WIDTH 16
#define object_ossan_008AB8_Tex_HEIGHT 16
extern u64 object_ossan_008AB8_Tex[TEX_LEN(u64, object_ossan_008AB8_Tex_WIDTH, object_ossan_008AB8_Tex_HEIGHT, 16)];
#define object_ossan_008CB8_Tex_WIDTH 16
#define object_ossan_008CB8_Tex_HEIGHT 16
extern u64 object_ossan_008CB8_Tex[TEX_LEN(u64, object_ossan_008CB8_Tex_WIDTH, object_ossan_008CB8_Tex_HEIGHT, 16)];
#define object_ossan_008EB8_Tex_WIDTH 32
#define object_ossan_008EB8_Tex_HEIGHT 32
extern u64 object_ossan_008EB8_Tex[TEX_LEN(u64, object_ossan_008EB8_Tex_WIDTH, object_ossan_008EB8_Tex_HEIGHT, 16)];
#define object_ossan_0096B8_Tex_WIDTH 16
#define object_ossan_0096B8_Tex_HEIGHT 16
extern u64 object_ossan_0096B8_Tex[TEX_LEN(u64, object_ossan_0096B8_Tex_WIDTH, object_ossan_0096B8_Tex_HEIGHT, 16)];
#define object_ossan_0098B8_Tex_WIDTH 16
#define object_ossan_0098B8_Tex_HEIGHT 16
extern u64 object_ossan_0098B8_Tex[TEX_LEN(u64, object_ossan_0098B8_Tex_WIDTH, object_ossan_0098B8_Tex_HEIGHT, 16)];
extern StandardLimb object_ossan_009AB8_Limb;
extern StandardLimb object_ossan_009AC4_Limb;
extern StandardLimb object_ossan_009AD0_Limb;
extern StandardLimb object_ossan_009ADC_Limb;
extern StandardLimb object_ossan_009AE8_Limb;
extern StandardLimb object_ossan_009AF4_Limb;
extern StandardLimb object_ossan_009B00_Limb;
extern StandardLimb object_ossan_009B0C_Limb;
extern void* gObjectOssanLimbs[];
typedef enum gObjectOssanSkelLimb {
    /*  0 */ LIMB_OBJECT_OSSAN_009B38_NONE,
    /*  1 */ LIMB_OBJECT_OSSAN_009AB8,
    /*  2 */ LIMB_OBJECT_OSSAN_009AC4,
    /*  3 */ LIMB_OBJECT_OSSAN_009AD0,
    /*  4 */ LIMB_OBJECT_OSSAN_009ADC,
    /*  5 */ LIMB_OBJECT_OSSAN_009AE8,
    /*  6 */ LIMB_OBJECT_OSSAN_009AF4,
    /*  7 */ LIMB_OBJECT_OSSAN_009B00,
    /*  8 */ LIMB_OBJECT_OSSAN_009B0C,
    /*  9 */ LIMB_OBJECT_OSSAN_009B38_MAX
} gObjectOssanSkelLimb;
extern FlexSkeletonHeader gObjectOssanSkel;

#endif
