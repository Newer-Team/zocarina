#ifndef OBJECT_MU_H
#define OBJECT_MU_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 object_mu_Anim_0003F4_06000000_FrameData[];
extern JointIndex object_mu_Anim_0003F4_06000394_JointIndices[];
extern AnimationHeader object_mu_Anim_0003F4;
//#define object_mu_TLUT_000410_TLUT_COUNT 256
extern u64 object_mu_TLUT_000410[];
#define object_mu_Tex_000610_WIDTH 8
#define object_mu_Tex_000610_HEIGHT 8
extern u64 object_mu_Tex_000610[TEX_LEN(u64, object_mu_Tex_000610_WIDTH, object_mu_Tex_000610_HEIGHT, 8)];
#define object_mu_Tex_000650_WIDTH 8
#define object_mu_Tex_000650_HEIGHT 8
extern u64 object_mu_Tex_000650[TEX_LEN(u64, object_mu_Tex_000650_WIDTH, object_mu_Tex_000650_HEIGHT, 8)];
#define object_mu_Tex_000690_WIDTH 8
#define object_mu_Tex_000690_HEIGHT 8
extern u64 object_mu_Tex_000690[TEX_LEN(u64, object_mu_Tex_000690_WIDTH, object_mu_Tex_000690_HEIGHT, 8)];
#define object_mu_Tex_0006D0_WIDTH 8
#define object_mu_Tex_0006D0_HEIGHT 8
extern u64 object_mu_Tex_0006D0[TEX_LEN(u64, object_mu_Tex_0006D0_WIDTH, object_mu_Tex_0006D0_HEIGHT, 8)];
#define object_mu_Tex_000710_WIDTH 8
#define object_mu_Tex_000710_HEIGHT 16
extern u64 object_mu_Tex_000710[TEX_LEN(u64, object_mu_Tex_000710_WIDTH, object_mu_Tex_000710_HEIGHT, 8)];
#define object_mu_Tex_000790_WIDTH 8
#define object_mu_Tex_000790_HEIGHT 8
extern u64 object_mu_Tex_000790[TEX_LEN(u64, object_mu_Tex_000790_WIDTH, object_mu_Tex_000790_HEIGHT, 8)];
#define object_mu_Tex_0007D0_WIDTH 8
#define object_mu_Tex_0007D0_HEIGHT 8
extern u64 object_mu_Tex_0007D0[TEX_LEN(u64, object_mu_Tex_0007D0_WIDTH, object_mu_Tex_0007D0_HEIGHT, 8)];
#define object_mu_Tex_000810_WIDTH 8
#define object_mu_Tex_000810_HEIGHT 8
extern u64 object_mu_Tex_000810[TEX_LEN(u64, object_mu_Tex_000810_WIDTH, object_mu_Tex_000810_HEIGHT, 8)];
#define object_mu_Tex_000850_WIDTH 8
#define object_mu_Tex_000850_HEIGHT 8
extern u64 object_mu_Tex_000850[TEX_LEN(u64, object_mu_Tex_000850_WIDTH, object_mu_Tex_000850_HEIGHT, 8)];
#define object_mu_Tex_000890_WIDTH 8
#define object_mu_Tex_000890_HEIGHT 8
extern u64 object_mu_Tex_000890[TEX_LEN(u64, object_mu_Tex_000890_WIDTH, object_mu_Tex_000890_HEIGHT, 8)];
extern Vtx object_mu_Vtx_0008D0[];
extern Vtx object_mu_Vtx_001360[];
extern Vtx object_mu_Vtx_001650[];
extern Vtx object_mu_Vtx_0017B0[];
extern Vtx object_mu_Vtx_001820[];
extern Vtx object_mu_Vtx_001AF0[];
extern Vtx object_mu_Vtx_001FC0[];
extern Vtx object_mu_Vtx_0024E0[];
extern Vtx object_mu_Vtx_0027A0[];
extern Vtx object_mu_Vtx_002880[];
extern Vtx object_mu_Vtx_002990[];
extern Vtx object_mu_Vtx_002D20[];
extern Vtx object_mu_Vtx_002F10[];
extern Gfx object_mu_DL_003110[155];
extern Gfx object_mu_DL_0035E8[57];
extern Gfx object_mu_DL_0037B0[107];
extern Gfx object_mu_DL_003B08[85];
extern Gfx object_mu_DL_003DB0[107];
extern Gfx object_mu_DL_004108[91];
extern Gfx object_mu_DL_0043E0[29];
extern Gfx object_mu_DL_0044C8[37];
extern Gfx object_mu_DL_0045F0[53];
extern Gfx object_mu_DL_004798[56];
extern Gfx object_mu_DL_004958[98];
extern Gfx object_mu_DL_004C68[35];
extern Gfx object_mu_DL_004D80[32];
extern StandardLimb object_mu_Limb_004E80;
extern StandardLimb object_mu_Limb_004E8C;
extern StandardLimb object_mu_Limb_004E98;
extern StandardLimb object_mu_Limb_004EA4;
extern StandardLimb object_mu_Limb_004EB0;
extern StandardLimb object_mu_Limb_004EBC;
extern StandardLimb object_mu_Limb_004EC8;
extern StandardLimb object_mu_Limb_004ED4;
extern StandardLimb object_mu_Limb_004EE0;
extern StandardLimb object_mu_Limb_004EEC;
extern StandardLimb object_mu_Limb_004EF8;
extern StandardLimb object_mu_Limb_004F04;
extern StandardLimb object_mu_Limb_004F10;
extern StandardLimb object_mu_Limb_004F1C;
extern StandardLimb object_mu_Limb_004F28;
extern void* object_mu_Skel_004F70_06004F34_Limbs[];
typedef enum object_mu_Skel_004F70Limb {
    /*  0 */ LIMB_OBJECT_MU_004F70_NONE,
    /*  1 */ LIMB_OBJECT_MU_004E80,
    /*  2 */ LIMB_OBJECT_MU_004E8C,
    /*  3 */ LIMB_OBJECT_MU_004E98,
    /*  4 */ LIMB_OBJECT_MU_004EA4,
    /*  5 */ LIMB_OBJECT_MU_004EB0,
    /*  6 */ LIMB_OBJECT_MU_004EBC,
    /*  7 */ LIMB_OBJECT_MU_004EC8,
    /*  8 */ LIMB_OBJECT_MU_004ED4,
    /*  9 */ LIMB_OBJECT_MU_004EE0,
    /* 10 */ LIMB_OBJECT_MU_004EEC,
    /* 11 */ LIMB_OBJECT_MU_004EF8,
    /* 12 */ LIMB_OBJECT_MU_004F04,
    /* 13 */ LIMB_OBJECT_MU_004F10,
    /* 14 */ LIMB_OBJECT_MU_004F1C,
    /* 15 */ LIMB_OBJECT_MU_004F28,
    /* 16 */ LIMB_OBJECT_MU_004F70_MAX
} object_mu_Skel_004F70Limb;
extern FlexSkeletonHeader object_mu_Skel_004F70;
extern s16 gDancingCoupleFrameData[];
extern JointIndex gDancingCoupleJointIndices[];
extern AnimationHeader gDancingCoupleAnim;
//#define object_mu_TLUT_005050_TLUT_COUNT 256
extern u64 object_mu_TLUT_005050[];
#define object_mu_Tex_005250_WIDTH 16
#define object_mu_Tex_005250_HEIGHT 16
extern u64 object_mu_Tex_005250[TEX_LEN(u64, object_mu_Tex_005250_WIDTH, object_mu_Tex_005250_HEIGHT, 8)];
#define object_mu_Tex_005350_WIDTH 16
#define object_mu_Tex_005350_HEIGHT 16
extern u64 object_mu_Tex_005350[TEX_LEN(u64, object_mu_Tex_005350_WIDTH, object_mu_Tex_005350_HEIGHT, 8)];
#define object_mu_Tex_005450_WIDTH 8
#define object_mu_Tex_005450_HEIGHT 8
extern u64 object_mu_Tex_005450[TEX_LEN(u64, object_mu_Tex_005450_WIDTH, object_mu_Tex_005450_HEIGHT, 8)];
#define object_mu_Tex_005490_WIDTH 8
#define object_mu_Tex_005490_HEIGHT 8
extern u64 object_mu_Tex_005490[TEX_LEN(u64, object_mu_Tex_005490_WIDTH, object_mu_Tex_005490_HEIGHT, 8)];
#define object_mu_Tex_0054D0_WIDTH 16
#define object_mu_Tex_0054D0_HEIGHT 16
extern u64 object_mu_Tex_0054D0[TEX_LEN(u64, object_mu_Tex_0054D0_WIDTH, object_mu_Tex_0054D0_HEIGHT, 8)];
#define object_mu_Tex_0055D0_WIDTH 8
#define object_mu_Tex_0055D0_HEIGHT 8
extern u64 object_mu_Tex_0055D0[TEX_LEN(u64, object_mu_Tex_0055D0_WIDTH, object_mu_Tex_0055D0_HEIGHT, 8)];
#define object_mu_Tex_005610_WIDTH 32
#define object_mu_Tex_005610_HEIGHT 16
extern u64 object_mu_Tex_005610[TEX_LEN(u64, object_mu_Tex_005610_WIDTH, object_mu_Tex_005610_HEIGHT, 8)];
#define object_mu_Tex_005810_WIDTH 32
#define object_mu_Tex_005810_HEIGHT 32
extern u64 object_mu_Tex_005810[TEX_LEN(u64, object_mu_Tex_005810_WIDTH, object_mu_Tex_005810_HEIGHT, 8)];
#define object_mu_Tex_005C10_WIDTH 8
#define object_mu_Tex_005C10_HEIGHT 8
extern u64 object_mu_Tex_005C10[TEX_LEN(u64, object_mu_Tex_005C10_WIDTH, object_mu_Tex_005C10_HEIGHT, 8)];
#define object_mu_Tex_005C50_WIDTH 8
#define object_mu_Tex_005C50_HEIGHT 16
extern u64 object_mu_Tex_005C50[TEX_LEN(u64, object_mu_Tex_005C50_WIDTH, object_mu_Tex_005C50_HEIGHT, 8)];
#define object_mu_Tex_005CD0_WIDTH 32
#define object_mu_Tex_005CD0_HEIGHT 32
extern u64 object_mu_Tex_005CD0[TEX_LEN(u64, object_mu_Tex_005CD0_WIDTH, object_mu_Tex_005CD0_HEIGHT, 8)];
extern Vtx object_mu_Vtx_0060D0[];
extern Vtx object_mu_Vtx_0069D0[];
extern Vtx object_mu_Vtx_007130[];
extern Vtx object_mu_Vtx_0072F0[];
extern Vtx object_mu_Vtx_007440[];
extern Vtx object_mu_Vtx_0075B0[];
extern Vtx object_mu_Vtx_007770[];
extern Vtx object_mu_Vtx_0078C0[];
extern Vtx object_mu_Vtx_007A30[];
extern Vtx object_mu_Vtx_007CB0[];
extern Vtx object_mu_Vtx_008280[];
extern Vtx object_mu_Vtx_008500[];
extern Vtx object_mu_Vtx_008650[];
extern Vtx object_mu_Vtx_0087C0[];
extern Vtx object_mu_Vtx_008A40[];
extern Vtx object_mu_Vtx_008B90[];
extern Vtx object_mu_Vtx_008D00[];
extern Gfx object_mu_DL_008FD0[107];
extern Gfx object_mu_DL_009328[160];
extern Gfx object_mu_DL_009828[41];
extern Gfx object_mu_DL_009970[32];
extern Gfx object_mu_DL_009A70[32];
extern Gfx object_mu_DL_009B70[41];
extern Gfx object_mu_DL_009CB8[32];
extern Gfx object_mu_DL_009DB8[32];
extern Gfx object_mu_DL_009EB8[46];
extern Gfx object_mu_DL_00A028[41];
extern Gfx object_mu_DL_00A170[160];
extern Gfx object_mu_DL_00A670[32];
extern Gfx object_mu_DL_00A770[32];
extern Gfx object_mu_DL_00A870[41];
extern Gfx object_mu_DL_00A9B8[32];
extern Gfx object_mu_DL_00AAB8[32];
extern Gfx object_mu_DL_00ABB8[41];
extern StandardLimb object_mu_Limb_00AD00;
extern StandardLimb object_mu_Limb_00AD0C;
extern StandardLimb object_mu_Limb_00AD18;
extern StandardLimb object_mu_Limb_00AD24;
extern StandardLimb object_mu_Limb_00AD30;
extern StandardLimb object_mu_Limb_00AD3C;
extern StandardLimb object_mu_Limb_00AD48;
extern StandardLimb object_mu_Limb_00AD54;
extern StandardLimb object_mu_Limb_00AD60;
extern StandardLimb object_mu_Limb_00AD6C;
extern StandardLimb object_mu_Limb_00AD78;
extern StandardLimb object_mu_Limb_00AD84;
extern StandardLimb object_mu_Limb_00AD90;
extern StandardLimb object_mu_Limb_00AD9C;
extern StandardLimb object_mu_Limb_00ADA8;
extern StandardLimb object_mu_Limb_00ADB4;
extern StandardLimb object_mu_Limb_00ADC0;
extern StandardLimb object_mu_Limb_00ADCC;
extern StandardLimb object_mu_Limb_00ADD8;
extern StandardLimb object_mu_Limb_00ADE4;
extern void* gDancingCoupleLimbs[];
typedef enum gDancingCoupleSkelLimb {
    /*  0 */ LIMB_OBJECT_MU_00AE40_NONE,
    /*  1 */ LIMB_OBJECT_MU_00AD00,
    /*  2 */ LIMB_OBJECT_MU_00AD0C,
    /*  3 */ LIMB_OBJECT_MU_00AD18,
    /*  4 */ LIMB_OBJECT_MU_00AD24,
    /*  5 */ LIMB_OBJECT_MU_00AD30,
    /*  6 */ LIMB_OBJECT_MU_00AD3C,
    /*  7 */ LIMB_OBJECT_MU_00AD48,
    /*  8 */ LIMB_OBJECT_MU_00AD54,
    /*  9 */ LIMB_OBJECT_MU_00AD60,
    /* 10 */ LIMB_OBJECT_MU_00AD6C,
    /* 11 */ LIMB_OBJECT_MU_00AD78,
    /* 12 */ LIMB_OBJECT_MU_00AD84,
    /* 13 */ LIMB_OBJECT_MU_00AD90,
    /* 14 */ LIMB_OBJECT_MU_00AD9C,
    /* 15 */ LIMB_OBJECT_MU_00ADA8,
    /* 16 */ LIMB_OBJECT_MU_00ADB4,
    /* 17 */ LIMB_OBJECT_MU_00ADC0,
    /* 18 */ LIMB_OBJECT_MU_00ADCC,
    /* 19 */ LIMB_OBJECT_MU_00ADD8,
    /* 20 */ LIMB_OBJECT_MU_00ADE4,
    /* 21 */ LIMB_OBJECT_MU_00AE40_MAX
} gDancingCoupleSkelLimb;
extern FlexSkeletonHeader gDancingCoupleSkel;

#endif
