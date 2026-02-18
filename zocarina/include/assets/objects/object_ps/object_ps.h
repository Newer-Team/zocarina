#ifndef OBJECT_PS_H
#define OBJECT_PS_H

#include "animation.h"
#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern s16 gPoeSellerIdleFrameData[];
extern JointIndex gPoeSellerIdleJointIndices[];
extern AnimationHeader gPoeSellerIdleAnim;
//#define object_ps_0004B0_Tex_TLUT_COUNT 132
extern u64 object_ps_0004B0_Tex[];
#define object_ps_0005B8_Tex_WIDTH 32
#define object_ps_0005B8_Tex_HEIGHT 64
extern u64 object_ps_0005B8_Tex[TEX_LEN(u64, object_ps_0005B8_Tex_WIDTH, object_ps_0005B8_Tex_HEIGHT, 16)];
#define object_ps_0015B8_Tex_WIDTH 8
#define object_ps_0015B8_Tex_HEIGHT 8
extern u64 object_ps_0015B8_Tex[TEX_LEN(u64, object_ps_0015B8_Tex_WIDTH, object_ps_0015B8_Tex_HEIGHT, 8)];
#define object_ps_0015F8_Tex_WIDTH 16
#define object_ps_0015F8_Tex_HEIGHT 16
extern u64 object_ps_0015F8_Tex[TEX_LEN(u64, object_ps_0015F8_Tex_WIDTH, object_ps_0015F8_Tex_HEIGHT, 16)];
#define object_ps_0017F8_Tex_WIDTH 8
#define object_ps_0017F8_Tex_HEIGHT 8
extern u64 object_ps_0017F8_Tex[TEX_LEN(u64, object_ps_0017F8_Tex_WIDTH, object_ps_0017F8_Tex_HEIGHT, 8)];
#define object_ps_001838_Tex_WIDTH 32
#define object_ps_001838_Tex_HEIGHT 32
extern u64 object_ps_001838_Tex[TEX_LEN(u64, object_ps_001838_Tex_WIDTH, object_ps_001838_Tex_HEIGHT, 8)];
#define object_ps_001C38_Tex_WIDTH 16
#define object_ps_001C38_Tex_HEIGHT 16
extern u64 object_ps_001C38_Tex[TEX_LEN(u64, object_ps_001C38_Tex_WIDTH, object_ps_001C38_Tex_HEIGHT, 8)];
#define object_ps_001D38_Tex_WIDTH 8
#define object_ps_001D38_Tex_HEIGHT 8
extern u64 object_ps_001D38_Tex[TEX_LEN(u64, object_ps_001D38_Tex_WIDTH, object_ps_001D38_Tex_HEIGHT, 8)];
#define object_ps_001D78_Tex_WIDTH 16
#define object_ps_001D78_Tex_HEIGHT 16
extern u64 object_ps_001D78_Tex[TEX_LEN(u64, object_ps_001D78_Tex_WIDTH, object_ps_001D78_Tex_HEIGHT, 8)];
#define object_ps_001E78_Tex_WIDTH 16
#define object_ps_001E78_Tex_HEIGHT 16
extern u64 object_ps_001E78_Tex[TEX_LEN(u64, object_ps_001E78_Tex_WIDTH, object_ps_001E78_Tex_HEIGHT, 8)];
#define object_ps_001F78_Tex_WIDTH 16
#define object_ps_001F78_Tex_HEIGHT 16
extern u64 object_ps_001F78_Tex[TEX_LEN(u64, object_ps_001F78_Tex_WIDTH, object_ps_001F78_Tex_HEIGHT, 16)];
#define object_ps_002178_Tex_WIDTH 16
#define object_ps_002178_Tex_HEIGHT 16
extern u64 object_ps_002178_Tex[TEX_LEN(u64, object_ps_002178_Tex_WIDTH, object_ps_002178_Tex_HEIGHT, 16)];
#define object_ps_002378_Tex_WIDTH 32
#define object_ps_002378_Tex_HEIGHT 32
extern u64 object_ps_002378_Tex[TEX_LEN(u64, object_ps_002378_Tex_WIDTH, object_ps_002378_Tex_HEIGHT, 4)];
#define object_ps_002578_Tex_WIDTH 32
#define object_ps_002578_Tex_HEIGHT 32
extern u64 object_ps_002578_Tex[TEX_LEN(u64, object_ps_002578_Tex_WIDTH, object_ps_002578_Tex_HEIGHT, 8)];
#define object_ps_002978_Tex_WIDTH 8
#define object_ps_002978_Tex_HEIGHT 16
extern u64 object_ps_002978_Tex[TEX_LEN(u64, object_ps_002978_Tex_WIDTH, object_ps_002978_Tex_HEIGHT, 16)];
extern Vtx object_ps_Vtx_002A78[];
extern Gfx object_ps_004838_DL[521];
//#define object_ps_005880_Tex_TLUT_COUNT 184
extern u64 object_ps_005880_Tex[];
extern u8 object_ps_0059F0_Blob[];
#define gPoeSellerMetalFrameTex_WIDTH 8
#define gPoeSellerMetalFrameTex_HEIGHT 8
extern u64 gPoeSellerMetalFrameTex[TEX_LEN(u64, gPoeSellerMetalFrameTex_WIDTH, gPoeSellerMetalFrameTex_HEIGHT, 16)];
#define gPoeSellerMattressTex_WIDTH 8
#define gPoeSellerMattressTex_HEIGHT 8
extern u64 gPoeSellerMattressTex[TEX_LEN(u64, gPoeSellerMattressTex_WIDTH, gPoeSellerMattressTex_HEIGHT, 16)];
#define gPoeSellerClothTex_WIDTH 32
#define gPoeSellerClothTex_HEIGHT 32
extern u64 gPoeSellerClothTex[TEX_LEN(u64, gPoeSellerClothTex_WIDTH, gPoeSellerClothTex_HEIGHT, 16)];
#define gPoeSellerCarpetTex_WIDTH 16
#define gPoeSellerCarpetTex_HEIGHT 16
extern u64 gPoeSellerCarpetTex[TEX_LEN(u64, gPoeSellerCarpetTex_WIDTH, gPoeSellerCarpetTex_HEIGHT, 16)];
#define gPoeSellerBottleLabelTex_WIDTH 16
#define gPoeSellerBottleLabelTex_HEIGHT 16
extern u64 gPoeSellerBottleLabelTex[TEX_LEN(u64, gPoeSellerBottleLabelTex_WIDTH, gPoeSellerBottleLabelTex_HEIGHT, 16)];
#define gPoeSellerWoodenPanelTex_WIDTH 32
#define gPoeSellerWoodenPanelTex_HEIGHT 32
extern u64 gPoeSellerWoodenPanelTex[TEX_LEN(u64, gPoeSellerWoodenPanelTex_WIDTH, gPoeSellerWoodenPanelTex_HEIGHT, 16)];
#define gPoeSellerLanternTex_WIDTH 16
#define gPoeSellerLanternTex_HEIGHT 16
extern u64 gPoeSellerLanternTex[TEX_LEN(u64, gPoeSellerLanternTex_WIDTH, gPoeSellerLanternTex_HEIGHT, 16)];
#define object_ps_007180_Tex_WIDTH 8
#define object_ps_007180_Tex_HEIGHT 8
extern u64 object_ps_007180_Tex[TEX_LEN(u64, object_ps_007180_Tex_WIDTH, object_ps_007180_Tex_HEIGHT, 8)];
#define object_ps_0071C0_Tex_WIDTH 32
#define object_ps_0071C0_Tex_HEIGHT 32
extern u64 object_ps_0071C0_Tex[TEX_LEN(u64, object_ps_0071C0_Tex_WIDTH, object_ps_0071C0_Tex_HEIGHT, 8)];
#define object_ps_0075C0_Tex_WIDTH 8
#define object_ps_0075C0_Tex_HEIGHT 8
extern u64 object_ps_0075C0_Tex[TEX_LEN(u64, object_ps_0075C0_Tex_WIDTH, object_ps_0075C0_Tex_HEIGHT, 8)];
#define object_ps_007600_Tex_WIDTH 8
#define object_ps_007600_Tex_HEIGHT 8
extern u64 object_ps_007600_Tex[TEX_LEN(u64, object_ps_007600_Tex_WIDTH, object_ps_007600_Tex_HEIGHT, 8)];
#define object_ps_007640_Tex_WIDTH 32
#define object_ps_007640_Tex_HEIGHT 32
extern u64 object_ps_007640_Tex[TEX_LEN(u64, object_ps_007640_Tex_WIDTH, object_ps_007640_Tex_HEIGHT, 8)];
#define object_ps_007A40_Tex_WIDTH 16
#define object_ps_007A40_Tex_HEIGHT 16
extern u64 object_ps_007A40_Tex[TEX_LEN(u64, object_ps_007A40_Tex_WIDTH, object_ps_007A40_Tex_HEIGHT, 16)];
#define object_ps_007C40_Tex_WIDTH 32
#define object_ps_007C40_Tex_HEIGHT 32
extern u64 object_ps_007C40_Tex[TEX_LEN(u64, object_ps_007C40_Tex_WIDTH, object_ps_007C40_Tex_HEIGHT, 8)];
extern Vtx object_ps_Vtx_008040[];
extern Vtx object_ps_Vtx_0083B0[];
extern Vtx object_ps_Vtx_008430[];
extern Vtx object_ps_Vtx_0085B0[];
extern Vtx object_ps_Vtx_008C20[];
extern Vtx object_ps_Vtx_008E00[];
extern Vtx object_ps_Vtx_008EE0[];
extern Vtx object_ps_Vtx_0090C0[];
extern Vtx object_ps_Vtx_0091A0[];
extern Gfx object_ps_0096C0_DL[133];
extern Gfx object_ps_009AE8_DL[156];
extern Gfx object_ps_009FC8_DL[38];
extern Gfx object_ps_00A0F8_DL[28];
extern Gfx object_ps_00A1D8_DL[69];
extern Gfx object_ps_00A400_DL[34];
extern Gfx object_ps_00A510_DL[37];
extern Gfx object_ps_00A638_DL[34];
extern Gfx object_ps_00A748_DL[37];
#define gPoeSellerAngrySoulTex_WIDTH 32
#define gPoeSellerAngrySoulTex_HEIGHT 64
extern u64 gPoeSellerAngrySoulTex[TEX_LEN(u64, gPoeSellerAngrySoulTex_WIDTH, gPoeSellerAngrySoulTex_HEIGHT, 8)];
#define gPoeSellerHappySoulTex_WIDTH 32
#define gPoeSellerHappySoulTex_HEIGHT 64
extern u64 gPoeSellerHappySoulTex[TEX_LEN(u64, gPoeSellerHappySoulTex_WIDTH, gPoeSellerHappySoulTex_HEIGHT, 8)];
#define gPoeSellerSadSoulTex_WIDTH 32
#define gPoeSellerSadSoulTex_HEIGHT 64
extern u64 gPoeSellerSadSoulTex[TEX_LEN(u64, gPoeSellerSadSoulTex_WIDTH, gPoeSellerSadSoulTex_HEIGHT, 8)];
extern Vtx gPoeSellerCagedSoulVtx[];
extern Gfx gPoeSellerCagedSoulDL[24];
extern StandardLimb object_ps_00C170_Limb;
extern StandardLimb object_ps_00C17C_Limb;
extern StandardLimb object_ps_00C188_Limb;
extern StandardLimb object_ps_00C194_Limb;
extern StandardLimb object_ps_00C1A0_Limb;
extern StandardLimb object_ps_00C1AC_Limb;
extern StandardLimb object_ps_00C1B8_Limb;
extern StandardLimb object_ps_00C1C4_Limb;
extern StandardLimb object_ps_00C1D0_Limb;
extern StandardLimb object_ps_00C1DC_Limb;
extern StandardLimb object_ps_00C1E8_Limb;
extern void* gPoeSellerLimbs[];
typedef enum gPoeSellerSkelLimb {
    /*  0 */ LIMB_OBJECT_PS_00C220_NONE,
    /*  1 */ LIMB_OBJECT_PS_00C170,
    /*  2 */ LIMB_OBJECT_PS_00C17C,
    /*  3 */ LIMB_OBJECT_PS_00C188,
    /*  4 */ LIMB_OBJECT_PS_00C194,
    /*  5 */ LIMB_OBJECT_PS_00C1A0,
    /*  6 */ LIMB_OBJECT_PS_00C1AC,
    /*  7 */ LIMB_OBJECT_PS_00C1B8,
    /*  8 */ LIMB_OBJECT_PS_00C1C4,
    /*  9 */ LIMB_OBJECT_PS_00C1D0,
    /* 10 */ LIMB_OBJECT_PS_00C1DC,
    /* 11 */ LIMB_OBJECT_PS_00C1E8,
    /* 12 */ LIMB_OBJECT_PS_00C220_MAX
} gPoeSellerSkelLimb;
extern FlexSkeletonHeader gPoeSellerSkel;
extern BgCamInfo gPoeSellerBgCamList[];
extern SurfaceType gPoeSellerSurfaceTypes[];
extern CollisionPoly gPoeSellerPolyList[];
extern Vec3s gPoeSellerVtxList[];
extern CollisionHeader gPoeSellerCol;
extern s16 gPoeSellerSwingStickFrameData[];
extern JointIndex gPoeSellerSwingStickJointIndices[];
extern AnimationHeader gPoeSellerSwingStickAnim;

#endif
