#ifndef OBJECT_MK_H
#define OBJECT_MK_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 object_mk_Anim_000368_06000000_FrameData[];
extern JointIndex object_mk_Anim_000368_06000318_JointIndices[];
extern AnimationHeader object_mk_Anim_000368;
extern s16 object_mk_Anim_000724_06000380_FrameData[];
extern JointIndex object_mk_Anim_000724_060006D4_JointIndices[];
extern AnimationHeader object_mk_Anim_000724;
extern s16 object_mk_Anim_000AC0_06000740_FrameData[];
extern JointIndex object_mk_Anim_000AC0_06000A70_JointIndices[];
extern AnimationHeader object_mk_Anim_000AC0;
extern s16 object_mk_Anim_000D88_06000AD0_FrameData[];
extern JointIndex object_mk_Anim_000D88_06000D38_JointIndices[];
extern AnimationHeader object_mk_Anim_000D88;
extern Vtx object_mk_Vtx_000DA0[];
extern Vtx object_mk_Vtx_001100[];
extern Vtx object_mk_Vtx_001F70[];
extern Vtx object_mk_Vtx_0020B0[];
extern Vtx object_mk_Vtx_0023B0[];
extern Vtx object_mk_Vtx_002620[];
extern Vtx object_mk_Vtx_0027D0[];
extern Vtx object_mk_Vtx_002980[];
extern Vtx object_mk_Vtx_002BF0[];
extern Vtx object_mk_Vtx_002DA0[];
extern Vtx object_mk_Vtx_002F50[];
extern Vtx object_mk_Vtx_003360[];
extern Gfx object_mk_DL_003470[94];
extern Gfx object_mk_DL_003760[106];
extern Gfx object_mk_DL_003AB0[35];
extern Gfx object_mk_DL_003BC8[225];
extern Gfx object_mk_DL_0042D0[112];
extern Gfx object_mk_DL_004650[38];
extern Gfx object_mk_DL_004780[38];
extern Gfx object_mk_DL_0048B0[42];
extern Gfx object_mk_DL_004A00[38];
extern Gfx object_mk_DL_004B30[38];
extern Gfx object_mk_DL_004C60[42];
extern Gfx object_mk_DL_004DB0[48];
//#define object_mk_TLUT_004F30_TLUT_COUNT 256
extern u64 object_mk_TLUT_004F30[];
#define object_mk_Tex_005130_WIDTH 8
#define object_mk_Tex_005130_HEIGHT 8
extern u64 object_mk_Tex_005130[TEX_LEN(u64, object_mk_Tex_005130_WIDTH, object_mk_Tex_005130_HEIGHT, 8)];
#define object_mk_Tex_005170_WIDTH 16
#define object_mk_Tex_005170_HEIGHT 16
extern u64 object_mk_Tex_005170[TEX_LEN(u64, object_mk_Tex_005170_WIDTH, object_mk_Tex_005170_HEIGHT, 8)];
#define object_mk_Tex_005270_WIDTH 8
#define object_mk_Tex_005270_HEIGHT 8
extern u64 object_mk_Tex_005270[TEX_LEN(u64, object_mk_Tex_005270_WIDTH, object_mk_Tex_005270_HEIGHT, 8)];
#define object_mk_Tex_0052B0_WIDTH 8
#define object_mk_Tex_0052B0_HEIGHT 8
extern u64 object_mk_Tex_0052B0[TEX_LEN(u64, object_mk_Tex_0052B0_WIDTH, object_mk_Tex_0052B0_HEIGHT, 8)];
#define object_mk_Tex_0052F0_WIDTH 8
#define object_mk_Tex_0052F0_HEIGHT 16
extern u64 object_mk_Tex_0052F0[TEX_LEN(u64, object_mk_Tex_0052F0_WIDTH, object_mk_Tex_0052F0_HEIGHT, 8)];
#define object_mk_Tex_005370_WIDTH 32
#define object_mk_Tex_005370_HEIGHT 32
extern u64 object_mk_Tex_005370[TEX_LEN(u64, object_mk_Tex_005370_WIDTH, object_mk_Tex_005370_HEIGHT, 16)];
#define object_mk_Tex_005B70_WIDTH 8
#define object_mk_Tex_005B70_HEIGHT 8
extern u64 object_mk_Tex_005B70[TEX_LEN(u64, object_mk_Tex_005B70_WIDTH, object_mk_Tex_005B70_HEIGHT, 8)];
#define object_mk_Tex_005BB0_WIDTH 8
#define object_mk_Tex_005BB0_HEIGHT 8
extern u64 object_mk_Tex_005BB0[TEX_LEN(u64, object_mk_Tex_005BB0_WIDTH, object_mk_Tex_005BB0_HEIGHT, 8)];
#define object_mk_Tex_005BF0_WIDTH 8
#define object_mk_Tex_005BF0_HEIGHT 8
extern u64 object_mk_Tex_005BF0[TEX_LEN(u64, object_mk_Tex_005BF0_WIDTH, object_mk_Tex_005BF0_HEIGHT, 8)];
#define object_mk_Tex_005C30_WIDTH 16
#define object_mk_Tex_005C30_HEIGHT 16
extern u64 object_mk_Tex_005C30[TEX_LEN(u64, object_mk_Tex_005C30_WIDTH, object_mk_Tex_005C30_HEIGHT, 8)];
extern StandardLimb object_mk_Limb_005D30;
extern StandardLimb object_mk_Limb_005D3C;
extern StandardLimb object_mk_Limb_005D48;
extern StandardLimb object_mk_Limb_005D54;
extern StandardLimb object_mk_Limb_005D60;
extern StandardLimb object_mk_Limb_005D6C;
extern StandardLimb object_mk_Limb_005D78;
extern StandardLimb object_mk_Limb_005D84;
extern StandardLimb object_mk_Limb_005D90;
extern StandardLimb object_mk_Limb_005D9C;
extern StandardLimb object_mk_Limb_005DA8;
extern StandardLimb object_mk_Limb_005DB4;
extern void* object_mk_Skel_005DF0_06005DC0_Limbs[];
typedef enum object_mk_Skel_005DF0Limb {
    /*  0 */ LIMB_OBJECT_MK_005DF0_NONE,
    /*  1 */ LIMB_OBJECT_MK_005D30,
    /*  2 */ LIMB_OBJECT_MK_005D3C,
    /*  3 */ LIMB_OBJECT_MK_005D48,
    /*  4 */ LIMB_OBJECT_MK_005D54,
    /*  5 */ LIMB_OBJECT_MK_005D60,
    /*  6 */ LIMB_OBJECT_MK_005D6C,
    /*  7 */ LIMB_OBJECT_MK_005D78,
    /*  8 */ LIMB_OBJECT_MK_005D84,
    /*  9 */ LIMB_OBJECT_MK_005D90,
    /* 10 */ LIMB_OBJECT_MK_005D9C,
    /* 11 */ LIMB_OBJECT_MK_005DA8,
    /* 12 */ LIMB_OBJECT_MK_005DB4,
    /* 13 */ LIMB_OBJECT_MK_005DF0_MAX
} object_mk_Skel_005DF0Limb;
extern FlexSkeletonHeader object_mk_Skel_005DF0;

#endif
