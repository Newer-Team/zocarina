#ifndef OBJECT_SSH_H
#define OBJECT_SSH_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 object_ssh_Anim_000304_06000000_FrameData[];
extern JointIndex object_ssh_Anim_000304_06000250_JointIndices[];
extern AnimationHeader object_ssh_Anim_000304;
//#define object_ssh_TLUT_000320_TLUT_COUNT 256
extern u64 object_ssh_TLUT_000320[];
#define object_ssh_Tex_000520_WIDTH 8
#define object_ssh_Tex_000520_HEIGHT 8
extern u64 object_ssh_Tex_000520[TEX_LEN(u64, object_ssh_Tex_000520_WIDTH, object_ssh_Tex_000520_HEIGHT, 8)];
#define object_ssh_Tex_000560_WIDTH 16
#define object_ssh_Tex_000560_HEIGHT 8
extern u64 object_ssh_Tex_000560[TEX_LEN(u64, object_ssh_Tex_000560_WIDTH, object_ssh_Tex_000560_HEIGHT, 8)];
#define object_ssh_Tex_0005E0_WIDTH 8
#define object_ssh_Tex_0005E0_HEIGHT 8
extern u64 object_ssh_Tex_0005E0[TEX_LEN(u64, object_ssh_Tex_0005E0_WIDTH, object_ssh_Tex_0005E0_HEIGHT, 8)];
#define object_ssh_Tex_000620_WIDTH 16
#define object_ssh_Tex_000620_HEIGHT 16
extern u64 object_ssh_Tex_000620[TEX_LEN(u64, object_ssh_Tex_000620_WIDTH, object_ssh_Tex_000620_HEIGHT, 8)];
#define object_ssh_Tex_000720_WIDTH 8
#define object_ssh_Tex_000720_HEIGHT 16
extern u64 object_ssh_Tex_000720[TEX_LEN(u64, object_ssh_Tex_000720_WIDTH, object_ssh_Tex_000720_HEIGHT, 8)];
#define object_ssh_Tex_0007A0_WIDTH 8
#define object_ssh_Tex_0007A0_HEIGHT 8
extern u64 object_ssh_Tex_0007A0[TEX_LEN(u64, object_ssh_Tex_0007A0_WIDTH, object_ssh_Tex_0007A0_HEIGHT, 8)];
#define object_ssh_Tex_0007E0_WIDTH 32
#define object_ssh_Tex_0007E0_HEIGHT 32
extern u64 object_ssh_Tex_0007E0[TEX_LEN(u64, object_ssh_Tex_0007E0_WIDTH, object_ssh_Tex_0007E0_HEIGHT, 8)];
#define object_ssh_Tex_000BE0_WIDTH 8
#define object_ssh_Tex_000BE0_HEIGHT 16
extern u64 object_ssh_Tex_000BE0[TEX_LEN(u64, object_ssh_Tex_000BE0_WIDTH, object_ssh_Tex_000BE0_HEIGHT, 8)];
#define object_ssh_Tex_000C60_WIDTH 32
#define object_ssh_Tex_000C60_HEIGHT 32
extern u64 object_ssh_Tex_000C60[TEX_LEN(u64, object_ssh_Tex_000C60_WIDTH, object_ssh_Tex_000C60_HEIGHT, 8)];
#define object_ssh_Tex_001060_WIDTH 32
#define object_ssh_Tex_001060_HEIGHT 32
extern u64 object_ssh_Tex_001060[TEX_LEN(u64, object_ssh_Tex_001060_WIDTH, object_ssh_Tex_001060_HEIGHT, 8)];
extern Vtx object_ssh_Vtx_001460[];
extern Vtx object_ssh_Vtx_001F70[];
extern Vtx object_ssh_Vtx_002DD0[];
extern Vtx object_ssh_Vtx_003040[];
extern Vtx object_ssh_Vtx_003220[];
extern Vtx object_ssh_Vtx_0032E0[];
extern Vtx object_ssh_Vtx_0033A0[];
extern Vtx object_ssh_Vtx_003430[];
extern Vtx object_ssh_Vtx_0034F0[];
extern Vtx object_ssh_Vtx_0035B0[];
extern Vtx object_ssh_Vtx_003650[];
extern Vtx object_ssh_Vtx_0036B0[];
extern Vtx object_ssh_Vtx_003C10[];
extern Gfx object_ssh_DL_003CD0[118];
extern Gfx object_ssh_DL_004080[146];
extern Gfx object_ssh_DL_004510[54];
extern Gfx object_ssh_DL_0046C0[55];
extern Gfx object_ssh_DL_004878[25];
extern Gfx object_ssh_DL_004940[25];
extern Gfx object_ssh_DL_004A08[25];
extern Gfx object_ssh_DL_004AD0[25];
extern Gfx object_ssh_DL_004B98[25];
extern Gfx object_ssh_DL_004C60[25];
extern Gfx object_ssh_DL_004D28[24];
extern Gfx object_ssh_DL_004DE8[76];
extern Gfx object_ssh_DL_005048[25];
extern StandardLimb object_ssh_Limb_005110;
extern StandardLimb object_ssh_Limb_00511C;
extern StandardLimb object_ssh_Limb_005128;
extern StandardLimb object_ssh_Limb_005134;
extern StandardLimb object_ssh_Limb_005140;
extern StandardLimb object_ssh_Limb_00514C;
extern StandardLimb object_ssh_Limb_005158;
extern StandardLimb object_ssh_Limb_005164;
extern StandardLimb object_ssh_Limb_005170;
extern StandardLimb object_ssh_Limb_00517C;
extern StandardLimb object_ssh_Limb_005188;
extern StandardLimb object_ssh_Limb_005194;
extern StandardLimb object_ssh_Limb_0051A0;
extern StandardLimb object_ssh_Limb_0051AC;
extern StandardLimb object_ssh_Limb_0051B8;
extern StandardLimb object_ssh_Limb_0051C4;
extern StandardLimb object_ssh_Limb_0051D0;
extern StandardLimb object_ssh_Limb_0051DC;
extern StandardLimb object_ssh_Limb_0051E8;
extern StandardLimb object_ssh_Limb_0051F4;
extern StandardLimb object_ssh_Limb_005200;
extern StandardLimb object_ssh_Limb_00520C;
extern StandardLimb object_ssh_Limb_005218;
extern StandardLimb object_ssh_Limb_005224;
extern StandardLimb object_ssh_Limb_005230;
extern StandardLimb object_ssh_Limb_00523C;
extern StandardLimb object_ssh_Limb_005248;
extern StandardLimb object_ssh_Limb_005254;
extern StandardLimb object_ssh_Limb_005260;
extern void* object_ssh_Skel_0052E0_0600526C_Limbs[];
typedef enum object_ssh_Skel_0052E0Limb {
    /*  0 */ LIMB_OBJECT_SSH_0052E0_NONE,
    /*  1 */ LIMB_OBJECT_SSH_005110,
    /*  2 */ LIMB_OBJECT_SSH_00511C,
    /*  3 */ LIMB_OBJECT_SSH_005128,
    /*  4 */ LIMB_OBJECT_SSH_005134,
    /*  5 */ LIMB_OBJECT_SSH_005140,
    /*  6 */ LIMB_OBJECT_SSH_00514C,
    /*  7 */ LIMB_OBJECT_SSH_005158,
    /*  8 */ LIMB_OBJECT_SSH_005164,
    /*  9 */ LIMB_OBJECT_SSH_005170,
    /* 10 */ LIMB_OBJECT_SSH_00517C,
    /* 11 */ LIMB_OBJECT_SSH_005188,
    /* 12 */ LIMB_OBJECT_SSH_005194,
    /* 13 */ LIMB_OBJECT_SSH_0051A0,
    /* 14 */ LIMB_OBJECT_SSH_0051AC,
    /* 15 */ LIMB_OBJECT_SSH_0051B8,
    /* 16 */ LIMB_OBJECT_SSH_0051C4,
    /* 17 */ LIMB_OBJECT_SSH_0051D0,
    /* 18 */ LIMB_OBJECT_SSH_0051DC,
    /* 19 */ LIMB_OBJECT_SSH_0051E8,
    /* 20 */ LIMB_OBJECT_SSH_0051F4,
    /* 21 */ LIMB_OBJECT_SSH_005200,
    /* 22 */ LIMB_OBJECT_SSH_00520C,
    /* 23 */ LIMB_OBJECT_SSH_005218,
    /* 24 */ LIMB_OBJECT_SSH_005224,
    /* 25 */ LIMB_OBJECT_SSH_005230,
    /* 26 */ LIMB_OBJECT_SSH_00523C,
    /* 27 */ LIMB_OBJECT_SSH_005248,
    /* 28 */ LIMB_OBJECT_SSH_005254,
    /* 29 */ LIMB_OBJECT_SSH_005260,
    /* 30 */ LIMB_OBJECT_SSH_0052E0_MAX
} object_ssh_Skel_0052E0Limb;
extern SkeletonHeader object_ssh_Skel_0052E0;
extern s16 object_ssh_Anim_0055F8_060052F0_FrameData[];
extern JointIndex object_ssh_Anim_0055F8_06005544_JointIndices[];
extern AnimationHeader object_ssh_Anim_0055F8;
extern s16 object_ssh_Anim_005BE8_06005610_FrameData[];
extern JointIndex object_ssh_Anim_005BE8_06005B34_JointIndices[];
extern AnimationHeader object_ssh_Anim_005BE8;

#endif
