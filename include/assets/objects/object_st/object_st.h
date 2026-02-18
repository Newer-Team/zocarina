#ifndef OBJECT_ST_H
#define OBJECT_ST_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 object_st_Anim_000304_06000000_FrameData[];
extern JointIndex object_st_Anim_000304_06000250_JointIndices[];
extern AnimationHeader object_st_Anim_000304;
#define object_st_Tex_000320_WIDTH 16
#define object_st_Tex_000320_HEIGHT 8
extern u64 object_st_Tex_000320[TEX_LEN(u64, object_st_Tex_000320_WIDTH, object_st_Tex_000320_HEIGHT, 4)];
#define object_st_Tex_000360_WIDTH 16
#define object_st_Tex_000360_HEIGHT 8
extern u64 object_st_Tex_000360[TEX_LEN(u64, object_st_Tex_000360_WIDTH, object_st_Tex_000360_HEIGHT, 16)];
#define object_st_Tex_000460_WIDTH 8
#define object_st_Tex_000460_HEIGHT 8
extern u64 object_st_Tex_000460[TEX_LEN(u64, object_st_Tex_000460_WIDTH, object_st_Tex_000460_HEIGHT, 16)];
#define object_st_Tex_0004E0_WIDTH 16
#define object_st_Tex_0004E0_HEIGHT 16
extern u64 object_st_Tex_0004E0[TEX_LEN(u64, object_st_Tex_0004E0_WIDTH, object_st_Tex_0004E0_HEIGHT, 4)];
#define object_st_Tex_000560_WIDTH 16
#define object_st_Tex_000560_HEIGHT 16
extern u64 object_st_Tex_000560[TEX_LEN(u64, object_st_Tex_000560_WIDTH, object_st_Tex_000560_HEIGHT, 16)];
#define object_st_Tex_000760_WIDTH 8
#define object_st_Tex_000760_HEIGHT 8
extern u64 object_st_Tex_000760[TEX_LEN(u64, object_st_Tex_000760_WIDTH, object_st_Tex_000760_HEIGHT, 16)];
#define object_st_Tex_0007E0_WIDTH 8
#define object_st_Tex_0007E0_HEIGHT 8
extern u64 object_st_Tex_0007E0[TEX_LEN(u64, object_st_Tex_0007E0_WIDTH, object_st_Tex_0007E0_HEIGHT, 16)];
extern Vtx object_st_Vtx_000860[];
extern Vtx object_st_Vtx_000B60[];
extern Vtx object_st_Vtx_001480[];
extern Vtx object_st_Vtx_001540[];
extern Vtx object_st_Vtx_001600[];
extern Vtx object_st_Vtx_0016A0[];
extern Vtx object_st_Vtx_001760[];
extern Vtx object_st_Vtx_001820[];
extern Vtx object_st_Vtx_0018E0[];
extern Vtx object_st_Vtx_001980[];
extern Gfx object_st_DL_001A40[62];
extern Gfx object_st_DL_001C30[116];
extern Gfx object_st_DL_001FD0[19];
extern Gfx object_st_DL_002068[19];
extern Gfx object_st_DL_002100[19];
extern Gfx object_st_DL_002198[19];
extern Gfx object_st_DL_002230[19];
extern Gfx object_st_DL_0022C8[19];
extern Gfx object_st_DL_002360[19];
extern Gfx object_st_DL_0023F8[19];
#define object_st_Tex_002490_WIDTH 8
#define object_st_Tex_002490_HEIGHT 8
extern u64 object_st_Tex_002490[TEX_LEN(u64, object_st_Tex_002490_WIDTH, object_st_Tex_002490_HEIGHT, 8)];
#define object_st_Tex_0024D0_WIDTH 16
#define object_st_Tex_0024D0_HEIGHT 8
extern u64 object_st_Tex_0024D0[TEX_LEN(u64, object_st_Tex_0024D0_WIDTH, object_st_Tex_0024D0_HEIGHT, 16)];
#define object_st_Tex_0025D0_WIDTH 16
#define object_st_Tex_0025D0_HEIGHT 16
extern u64 object_st_Tex_0025D0[TEX_LEN(u64, object_st_Tex_0025D0_WIDTH, object_st_Tex_0025D0_HEIGHT, 4)];
#define object_st_Tex_002650_WIDTH 8
#define object_st_Tex_002650_HEIGHT 8
extern u64 object_st_Tex_002650[TEX_LEN(u64, object_st_Tex_002650_WIDTH, object_st_Tex_002650_HEIGHT, 16)];
extern Vtx object_st_Vtx_0026D0[];
extern Gfx object_st_DL_003FB0[133];
extern Gfx object_st_DL_0043D8[61];
extern Gfx object_st_DL_0045C0[19];
extern Gfx object_st_DL_004658[19];
extern Gfx object_st_DL_0046F0[19];
extern Gfx object_st_DL_004788[19];
extern Gfx object_st_DL_004820[19];
extern Gfx object_st_DL_0048B8[19];
extern Gfx object_st_DL_004950[19];
extern Gfx object_st_DL_0049E8[19];
extern Vtx gSkulltulaTokenVtx[];
extern Vtx gSkulltulaTokenFlameVtx[];
extern Gfx gSkulltulaTokenDL[33];
extern Gfx gSkulltulaTokenFlameDL[66];
extern StandardLimb object_st_Limb_0050C8;
extern StandardLimb object_st_Limb_0050D4;
extern StandardLimb object_st_Limb_0050E0;
extern StandardLimb object_st_Limb_0050EC;
extern StandardLimb object_st_Limb_0050F8;
extern StandardLimb object_st_Limb_005104;
extern StandardLimb object_st_Limb_005110;
extern StandardLimb object_st_Limb_00511C;
extern StandardLimb object_st_Limb_005128;
extern StandardLimb object_st_Limb_005134;
extern StandardLimb object_st_Limb_005140;
extern StandardLimb object_st_Limb_00514C;
extern StandardLimb object_st_Limb_005158;
extern StandardLimb object_st_Limb_005164;
extern StandardLimb object_st_Limb_005170;
extern StandardLimb object_st_Limb_00517C;
extern StandardLimb object_st_Limb_005188;
extern StandardLimb object_st_Limb_005194;
extern StandardLimb object_st_Limb_0051A0;
extern StandardLimb object_st_Limb_0051AC;
extern StandardLimb object_st_Limb_0051B8;
extern StandardLimb object_st_Limb_0051C4;
extern StandardLimb object_st_Limb_0051D0;
extern StandardLimb object_st_Limb_0051DC;
extern StandardLimb object_st_Limb_0051E8;
extern StandardLimb object_st_Limb_0051F4;
extern StandardLimb object_st_Limb_005200;
extern StandardLimb object_st_Limb_00520C;
extern StandardLimb object_st_Limb_005218;
extern void* object_st_Skel_005298_06005224_Limbs[];
typedef enum object_st_Skel_005298Limb {
    /*  0 */ LIMB_OBJECT_ST_005298_NONE,
    /*  1 */ LIMB_OBJECT_ST_0050C8,
    /*  2 */ LIMB_OBJECT_ST_0050D4,
    /*  3 */ LIMB_OBJECT_ST_0050E0,
    /*  4 */ LIMB_OBJECT_ST_0050EC,
    /*  5 */ LIMB_OBJECT_ST_0050F8,
    /*  6 */ LIMB_OBJECT_ST_005104,
    /*  7 */ LIMB_OBJECT_ST_005110,
    /*  8 */ LIMB_OBJECT_ST_00511C,
    /*  9 */ LIMB_OBJECT_ST_005128,
    /* 10 */ LIMB_OBJECT_ST_005134,
    /* 11 */ LIMB_OBJECT_ST_005140,
    /* 12 */ LIMB_OBJECT_ST_00514C,
    /* 13 */ LIMB_OBJECT_ST_005158,
    /* 14 */ LIMB_OBJECT_ST_005164,
    /* 15 */ LIMB_OBJECT_ST_005170,
    /* 16 */ LIMB_OBJECT_ST_00517C,
    /* 17 */ LIMB_OBJECT_ST_005188,
    /* 18 */ LIMB_OBJECT_ST_005194,
    /* 19 */ LIMB_OBJECT_ST_0051A0,
    /* 20 */ LIMB_OBJECT_ST_0051AC,
    /* 21 */ LIMB_OBJECT_ST_0051B8,
    /* 22 */ LIMB_OBJECT_ST_0051C4,
    /* 23 */ LIMB_OBJECT_ST_0051D0,
    /* 24 */ LIMB_OBJECT_ST_0051DC,
    /* 25 */ LIMB_OBJECT_ST_0051E8,
    /* 26 */ LIMB_OBJECT_ST_0051F4,
    /* 27 */ LIMB_OBJECT_ST_005200,
    /* 28 */ LIMB_OBJECT_ST_00520C,
    /* 29 */ LIMB_OBJECT_ST_005218,
    /* 30 */ LIMB_OBJECT_ST_005298_MAX
} object_st_Skel_005298Limb;
extern SkeletonHeader object_st_Skel_005298;
extern s16 object_st_Anim_0055A8_060052A0_FrameData[];
extern JointIndex object_st_Anim_0055A8_060054F4_JointIndices[];
extern AnimationHeader object_st_Anim_0055A8;
extern s16 object_st_Anim_005B98_060055C0_FrameData[];
extern JointIndex object_st_Anim_005B98_06005AE4_JointIndices[];
extern AnimationHeader object_st_Anim_005B98;

#endif
