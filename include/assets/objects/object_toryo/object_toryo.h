#ifndef OBJECT_TORYO_H
#define OBJECT_TORYO_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 object_toryo_Anim_000E50_06000000_FrameData[];
extern JointIndex object_toryo_Anim_000E50_06000DE8_JointIndices[];
extern AnimationHeader object_toryo_Anim_000E50;
//#define object_toryo_TLUT_000E60_TLUT_COUNT 256
extern u64 object_toryo_TLUT_000E60[];
#define object_toryo_Tex_001060_WIDTH 16
#define object_toryo_Tex_001060_HEIGHT 16
extern u64 object_toryo_Tex_001060[TEX_LEN(u64, object_toryo_Tex_001060_WIDTH, object_toryo_Tex_001060_HEIGHT, 8)];
#define object_toryo_Tex_001160_WIDTH 8
#define object_toryo_Tex_001160_HEIGHT 4
extern u64 object_toryo_Tex_001160[TEX_LEN(u64, object_toryo_Tex_001160_WIDTH, object_toryo_Tex_001160_HEIGHT, 8)];
#define object_toryo_Tex_001180_WIDTH 8
#define object_toryo_Tex_001180_HEIGHT 8
extern u64 object_toryo_Tex_001180[TEX_LEN(u64, object_toryo_Tex_001180_WIDTH, object_toryo_Tex_001180_HEIGHT, 8)];
#define object_toryo_Tex_0011C0_WIDTH 8
#define object_toryo_Tex_0011C0_HEIGHT 8
extern u64 object_toryo_Tex_0011C0[TEX_LEN(u64, object_toryo_Tex_0011C0_WIDTH, object_toryo_Tex_0011C0_HEIGHT, 8)];
#define object_toryo_Tex_001200_WIDTH 8
#define object_toryo_Tex_001200_HEIGHT 8
extern u64 object_toryo_Tex_001200[TEX_LEN(u64, object_toryo_Tex_001200_WIDTH, object_toryo_Tex_001200_HEIGHT, 8)];
#define object_toryo_Tex_001240_WIDTH 8
#define object_toryo_Tex_001240_HEIGHT 16
extern u64 object_toryo_Tex_001240[TEX_LEN(u64, object_toryo_Tex_001240_WIDTH, object_toryo_Tex_001240_HEIGHT, 8)];
#define object_toryo_Tex_0012C0_WIDTH 32
#define object_toryo_Tex_0012C0_HEIGHT 16
extern u64 object_toryo_Tex_0012C0[TEX_LEN(u64, object_toryo_Tex_0012C0_WIDTH, object_toryo_Tex_0012C0_HEIGHT, 16)];
#define object_toryo_Tex_0016C0_WIDTH 16
#define object_toryo_Tex_0016C0_HEIGHT 16
extern u64 object_toryo_Tex_0016C0[TEX_LEN(u64, object_toryo_Tex_0016C0_WIDTH, object_toryo_Tex_0016C0_HEIGHT, 8)];
#define object_toryo_Tex_0017C0_WIDTH 16
#define object_toryo_Tex_0017C0_HEIGHT 16
extern u64 object_toryo_Tex_0017C0[TEX_LEN(u64, object_toryo_Tex_0017C0_WIDTH, object_toryo_Tex_0017C0_HEIGHT, 8)];
#define object_toryo_Tex_0018C0_WIDTH 16
#define object_toryo_Tex_0018C0_HEIGHT 16
extern u64 object_toryo_Tex_0018C0[TEX_LEN(u64, object_toryo_Tex_0018C0_WIDTH, object_toryo_Tex_0018C0_HEIGHT, 8)];
#define object_toryo_Tex_0019C0_WIDTH 8
#define object_toryo_Tex_0019C0_HEIGHT 8
extern u64 object_toryo_Tex_0019C0[TEX_LEN(u64, object_toryo_Tex_0019C0_WIDTH, object_toryo_Tex_0019C0_HEIGHT, 8)];
#define object_toryo_Tex_001A00_WIDTH 8
#define object_toryo_Tex_001A00_HEIGHT 16
extern u64 object_toryo_Tex_001A00[TEX_LEN(u64, object_toryo_Tex_001A00_WIDTH, object_toryo_Tex_001A00_HEIGHT, 8)];
#define object_toryo_Tex_001A80_WIDTH 16
#define object_toryo_Tex_001A80_HEIGHT 16
extern u64 object_toryo_Tex_001A80[TEX_LEN(u64, object_toryo_Tex_001A80_WIDTH, object_toryo_Tex_001A80_HEIGHT, 8)];
#define object_toryo_Tex_001B80_WIDTH 16
#define object_toryo_Tex_001B80_HEIGHT 16
extern u64 object_toryo_Tex_001B80[TEX_LEN(u64, object_toryo_Tex_001B80_WIDTH, object_toryo_Tex_001B80_HEIGHT, 8)];
extern Vtx object_toryo_Vtx_001C80[];
extern Vtx object_toryo_Vtx_001FD0[];
extern Vtx object_toryo_Vtx_002790[];
extern Vtx object_toryo_Vtx_002A70[];
extern Vtx object_toryo_Vtx_002C00[];
extern Vtx object_toryo_Vtx_002E10[];
extern Vtx object_toryo_Vtx_0030F0[];
extern Vtx object_toryo_Vtx_003280[];
extern Vtx object_toryo_Vtx_003490[];
extern Vtx object_toryo_Vtx_003A10[];
extern Vtx object_toryo_Vtx_003C50[];
extern Vtx object_toryo_Vtx_003D80[];
extern Vtx object_toryo_Vtx_004130[];
extern Vtx object_toryo_Vtx_004370[];
extern Vtx object_toryo_Vtx_0044A0[];
extern Vtx object_toryo_Vtx_004850[];
extern Gfx object_toryo_DL_004B20[128];
extern Gfx object_toryo_DL_004F20[163];
extern Gfx object_toryo_DL_005438[93];
extern Gfx object_toryo_DL_005720[71];
extern Gfx object_toryo_DL_005958[73];
extern Gfx object_toryo_DL_005BA0[46];
extern Gfx object_toryo_DL_005D10[55];
extern Gfx object_toryo_DL_005EC8[73];
extern Gfx object_toryo_DL_006110[46];
extern Gfx object_toryo_DL_006280[71];
extern Gfx object_toryo_DL_0064B8[101];
extern Gfx object_toryo_DL_0067E0[33];
extern Gfx object_toryo_DL_0068E8[52];
extern Gfx object_toryo_DL_006A88[100];
extern Gfx object_toryo_DL_006DA8[33];
extern Gfx object_toryo_DL_006EB0[52];
extern StandardLimb object_toryo_Limb_007050;
extern StandardLimb object_toryo_Limb_00705C;
extern StandardLimb object_toryo_Limb_007068;
extern StandardLimb object_toryo_Limb_007074;
extern StandardLimb object_toryo_Limb_007080;
extern StandardLimb object_toryo_Limb_00708C;
extern StandardLimb object_toryo_Limb_007098;
extern StandardLimb object_toryo_Limb_0070A4;
extern StandardLimb object_toryo_Limb_0070B0;
extern StandardLimb object_toryo_Limb_0070BC;
extern StandardLimb object_toryo_Limb_0070C8;
extern StandardLimb object_toryo_Limb_0070D4;
extern StandardLimb object_toryo_Limb_0070E0;
extern StandardLimb object_toryo_Limb_0070EC;
extern StandardLimb object_toryo_Limb_0070F8;
extern StandardLimb object_toryo_Limb_007104;
extern void* object_toryo_Skel_007150_06007110_Limbs[];
typedef enum object_toryo_Skel_007150Limb {
    /*  0 */ LIMB_OBJECT_TORYO_007150_NONE,
    /*  1 */ LIMB_OBJECT_TORYO_007050,
    /*  2 */ LIMB_OBJECT_TORYO_00705C,
    /*  3 */ LIMB_OBJECT_TORYO_007068,
    /*  4 */ LIMB_OBJECT_TORYO_007074,
    /*  5 */ LIMB_OBJECT_TORYO_007080,
    /*  6 */ LIMB_OBJECT_TORYO_00708C,
    /*  7 */ LIMB_OBJECT_TORYO_007098,
    /*  8 */ LIMB_OBJECT_TORYO_0070A4,
    /*  9 */ LIMB_OBJECT_TORYO_0070B0,
    /* 10 */ LIMB_OBJECT_TORYO_0070BC,
    /* 11 */ LIMB_OBJECT_TORYO_0070C8,
    /* 12 */ LIMB_OBJECT_TORYO_0070D4,
    /* 13 */ LIMB_OBJECT_TORYO_0070E0,
    /* 14 */ LIMB_OBJECT_TORYO_0070EC,
    /* 15 */ LIMB_OBJECT_TORYO_0070F8,
    /* 16 */ LIMB_OBJECT_TORYO_007104,
    /* 17 */ LIMB_OBJECT_TORYO_007150_MAX
} object_toryo_Skel_007150Limb;
extern FlexSkeletonHeader object_toryo_Skel_007150;

#endif
