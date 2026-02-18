#ifndef OBJECT_RL_H
#define OBJECT_RL_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 object_rl_Anim_00040C_06000000_FrameData[];
extern JointIndex object_rl_Anim_00040C_060003C8_JointIndices[];
extern AnimationHeader object_rl_Anim_00040C;
extern s16 object_rl_Anim_000830_06000420_FrameData[];
extern JointIndex object_rl_Anim_000830_060007EC_JointIndices[];
extern AnimationHeader object_rl_Anim_000830;
extern s16 object_rl_Anim_000A3C_06000840_FrameData[];
extern JointIndex object_rl_Anim_000A3C_060009F8_JointIndices[];
extern AnimationHeader object_rl_Anim_000A3C;
extern Vtx object_rl_Vtx_000A50[];
extern Vtx object_rl_Vtx_000D20[];
extern Vtx object_rl_Vtx_000ED0[];
extern Vtx object_rl_Vtx_000F90[];
extern Vtx object_rl_Vtx_001260[];
extern Vtx object_rl_Vtx_001410[];
extern Vtx object_rl_Vtx_0014D0[];
extern Vtx object_rl_Vtx_0020C0[];
extern Gfx object_rl_DL_002230[53];
extern Gfx object_rl_DL_0023D8[185];
extern Gfx object_rl_DL_0029A0[32];
extern Gfx object_rl_DL_002AA0[39];
extern Gfx object_rl_DL_002BD8[73];
extern Gfx object_rl_DL_002E20[32];
extern Gfx object_rl_DL_002F20[39];
extern Gfx object_rl_DL_003058[73];
//#define object_rl_TLUT_0032A0_TLUT_COUNT 160
extern u64 object_rl_TLUT_0032A0[];
#define object_rl_0033E0_Tex_WIDTH 8
#define object_rl_0033E0_Tex_HEIGHT 8
extern u64 object_rl_0033E0_Tex[TEX_LEN(u64, object_rl_0033E0_Tex_WIDTH, object_rl_0033E0_Tex_HEIGHT, 8)];
#define object_rl_003420_Tex_WIDTH 16
#define object_rl_003420_Tex_HEIGHT 16
extern u64 object_rl_003420_Tex[TEX_LEN(u64, object_rl_003420_Tex_WIDTH, object_rl_003420_Tex_HEIGHT, 8)];
#define object_rl_Tex_003520_WIDTH 16
#define object_rl_Tex_003520_HEIGHT 16
extern u64 object_rl_Tex_003520[TEX_LEN(u64, object_rl_Tex_003520_WIDTH, object_rl_Tex_003520_HEIGHT, 8)];
#define object_rl_Tex_003620_WIDTH 32
#define object_rl_Tex_003620_HEIGHT 16
extern u64 object_rl_Tex_003620[TEX_LEN(u64, object_rl_Tex_003620_WIDTH, object_rl_Tex_003620_HEIGHT, 8)];
#define object_rl_Tex_003820_WIDTH 16
#define object_rl_Tex_003820_HEIGHT 16
extern u64 object_rl_Tex_003820[TEX_LEN(u64, object_rl_Tex_003820_WIDTH, object_rl_Tex_003820_HEIGHT, 8)];
#define object_rl_Tex_003920_WIDTH 8
#define object_rl_Tex_003920_HEIGHT 8
extern u64 object_rl_Tex_003920[TEX_LEN(u64, object_rl_Tex_003920_WIDTH, object_rl_Tex_003920_HEIGHT, 8)];
#define object_rl_Tex_003960_WIDTH 32
#define object_rl_Tex_003960_HEIGHT 16
extern u64 object_rl_Tex_003960[TEX_LEN(u64, object_rl_Tex_003960_WIDTH, object_rl_Tex_003960_HEIGHT, 8)];
#define object_rl_Tex_003B60_WIDTH 32
#define object_rl_Tex_003B60_HEIGHT 16
extern u64 object_rl_Tex_003B60[TEX_LEN(u64, object_rl_Tex_003B60_WIDTH, object_rl_Tex_003B60_HEIGHT, 8)];
#define object_rl_Tex_003D60_WIDTH 8
#define object_rl_Tex_003D60_HEIGHT 8
extern u64 object_rl_Tex_003D60[TEX_LEN(u64, object_rl_Tex_003D60_WIDTH, object_rl_Tex_003D60_HEIGHT, 8)];
#define object_rl_Tex_003DA0_WIDTH 16
#define object_rl_Tex_003DA0_HEIGHT 16
extern u64 object_rl_Tex_003DA0[TEX_LEN(u64, object_rl_Tex_003DA0_WIDTH, object_rl_Tex_003DA0_HEIGHT, 8)];
extern Vtx object_rl_Vtx_003EA0[];
extern Gfx object_rl_DL_005220[543];
//#define object_rl_TLUT_006318_TLUT_COUNT 256
extern u64 object_rl_TLUT_006318[];
#define object_rl_Tex_006518_WIDTH 16
#define object_rl_Tex_006518_HEIGHT 16
extern u64 object_rl_Tex_006518[TEX_LEN(u64, object_rl_Tex_006518_WIDTH, object_rl_Tex_006518_HEIGHT, 8)];
#define object_rl_Tex_006618_WIDTH 8
#define object_rl_Tex_006618_HEIGHT 8
extern u64 object_rl_Tex_006618[TEX_LEN(u64, object_rl_Tex_006618_WIDTH, object_rl_Tex_006618_HEIGHT, 8)];
#define object_rl_Tex_006658_WIDTH 16
#define object_rl_Tex_006658_HEIGHT 16
extern u64 object_rl_Tex_006658[TEX_LEN(u64, object_rl_Tex_006658_WIDTH, object_rl_Tex_006658_HEIGHT, 8)];
#define object_rl_Tex_006758_WIDTH 8
#define object_rl_Tex_006758_HEIGHT 8
extern u64 object_rl_Tex_006758[TEX_LEN(u64, object_rl_Tex_006758_WIDTH, object_rl_Tex_006758_HEIGHT, 8)];
#define object_rl_Tex_006798_WIDTH 32
#define object_rl_Tex_006798_HEIGHT 32
extern u64 object_rl_Tex_006798[TEX_LEN(u64, object_rl_Tex_006798_WIDTH, object_rl_Tex_006798_HEIGHT, 8)];
#define object_rl_Tex_006B98_WIDTH 32
#define object_rl_Tex_006B98_HEIGHT 32
extern u64 object_rl_Tex_006B98[TEX_LEN(u64, object_rl_Tex_006B98_WIDTH, object_rl_Tex_006B98_HEIGHT, 8)];
#define object_rl_Tex_006F98_WIDTH 16
#define object_rl_Tex_006F98_HEIGHT 32
extern u64 object_rl_Tex_006F98[TEX_LEN(u64, object_rl_Tex_006F98_WIDTH, object_rl_Tex_006F98_HEIGHT, 8)];
#define object_rl_Tex_007198_WIDTH 32
#define object_rl_Tex_007198_HEIGHT 32
extern u64 object_rl_Tex_007198[TEX_LEN(u64, object_rl_Tex_007198_WIDTH, object_rl_Tex_007198_HEIGHT, 8)];
#define object_rl_Tex_007598_WIDTH 32
#define object_rl_Tex_007598_HEIGHT 32
extern u64 object_rl_Tex_007598[TEX_LEN(u64, object_rl_Tex_007598_WIDTH, object_rl_Tex_007598_HEIGHT, 8)];
#define object_rl_Tex_007998_WIDTH 16
#define object_rl_Tex_007998_HEIGHT 16
extern u64 object_rl_Tex_007998[TEX_LEN(u64, object_rl_Tex_007998_WIDTH, object_rl_Tex_007998_HEIGHT, 8)];
extern StandardLimb object_rl_Limb_007A98;
extern StandardLimb object_rl_Limb_007AA4;
extern StandardLimb object_rl_Limb_007AB0;
extern StandardLimb object_rl_Limb_007ABC;
extern StandardLimb object_rl_Limb_007AC8;
extern StandardLimb object_rl_Limb_007AD4;
extern StandardLimb object_rl_Limb_007AE0;
extern StandardLimb object_rl_Limb_007AEC;
extern StandardLimb object_rl_Limb_007AF8;
extern StandardLimb object_rl_Limb_007B04;
extern void* object_rl_Skel_007B38_06007B10_Limbs[];
typedef enum object_rl_Skel_007B38Limb {
    /*  0 */ LIMB_OBJECT_RL_007B38_NONE,
    /*  1 */ LIMB_OBJECT_RL_007A98,
    /*  2 */ LIMB_OBJECT_RL_007AA4,
    /*  3 */ LIMB_OBJECT_RL_007AB0,
    /*  4 */ LIMB_OBJECT_RL_007ABC,
    /*  5 */ LIMB_OBJECT_RL_007AC8,
    /*  6 */ LIMB_OBJECT_RL_007AD4,
    /*  7 */ LIMB_OBJECT_RL_007AE0,
    /*  8 */ LIMB_OBJECT_RL_007AEC,
    /*  9 */ LIMB_OBJECT_RL_007AF8,
    /* 10 */ LIMB_OBJECT_RL_007B04,
    /* 11 */ LIMB_OBJECT_RL_007B38_MAX
} object_rl_Skel_007B38Limb;
extern FlexSkeletonHeader object_rl_Skel_007B38;

#endif
