#ifndef OBJECT_SB_H
#define OBJECT_SB_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 object_sb_Anim_00004C_06000000_FrameData[];
extern JointIndex object_sb_Anim_00004C_06000014_JointIndices[];
extern AnimationHeader object_sb_Anim_00004C;
extern s16 object_sb_Anim_0000B4_06000060_FrameData[];
extern JointIndex object_sb_Anim_0000B4_0600007C_JointIndices[];
extern AnimationHeader object_sb_Anim_0000B4;
extern s16 object_sb_Anim_000124_060000D0_FrameData[];
extern JointIndex object_sb_Anim_000124_060000EC_JointIndices[];
extern AnimationHeader object_sb_Anim_000124;
extern s16 object_sb_Anim_000194_06000140_FrameData[];
extern JointIndex object_sb_Anim_000194_0600015C_JointIndices[];
extern AnimationHeader object_sb_Anim_000194;
extern Vtx object_sb_Vtx_0001B0[];
extern Gfx object_sb_DL_000D80[30];
extern Gfx object_sb_DL_000E70[54];
#define object_sb_Tex_001020_WIDTH 32
#define object_sb_Tex_001020_HEIGHT 32
extern u64 object_sb_Tex_001020[TEX_LEN(u64, object_sb_Tex_001020_WIDTH, object_sb_Tex_001020_HEIGHT, 16)];
#define object_sb_Tex_001820_WIDTH 8
#define object_sb_Tex_001820_HEIGHT 16
extern u64 object_sb_Tex_001820[TEX_LEN(u64, object_sb_Tex_001820_WIDTH, object_sb_Tex_001820_HEIGHT, 16)];
#define object_sb_Tex_001920_WIDTH 8
#define object_sb_Tex_001920_HEIGHT 8
extern u64 object_sb_Tex_001920[TEX_LEN(u64, object_sb_Tex_001920_WIDTH, object_sb_Tex_001920_HEIGHT, 16)];
#define object_sb_Tex_0019A0_WIDTH 8
#define object_sb_Tex_0019A0_HEIGHT 8
extern u64 object_sb_Tex_0019A0[TEX_LEN(u64, object_sb_Tex_0019A0_WIDTH, object_sb_Tex_0019A0_HEIGHT, 16)];
#define object_sb_Tex_001A20_WIDTH 8
#define object_sb_Tex_001A20_HEIGHT 8
extern u64 object_sb_Tex_001A20[TEX_LEN(u64, object_sb_Tex_001A20_WIDTH, object_sb_Tex_001A20_HEIGHT, 16)];
extern Vtx object_sb_Vtx_001AA0[];
extern Vtx object_sb_Vtx_001FF0[];
extern Gfx object_sb_DL_0025B0[85];
extern Gfx object_sb_DL_002858[83];
#define object_sb_Tex_002AF0_WIDTH 8
#define object_sb_Tex_002AF0_HEIGHT 8
extern u64 object_sb_Tex_002AF0[TEX_LEN(u64, object_sb_Tex_002AF0_WIDTH, object_sb_Tex_002AF0_HEIGHT, 16)];
extern StandardLimb object_sb_Limb_002B70;
extern StandardLimb object_sb_Limb_002B7C;
extern StandardLimb object_sb_Limb_002B88;
extern StandardLimb object_sb_Limb_002B94;
extern StandardLimb object_sb_Limb_002BA0;
extern StandardLimb object_sb_Limb_002BAC;
extern StandardLimb object_sb_Limb_002BB8;
extern StandardLimb object_sb_Limb_002BC4;
extern void* object_sb_Skel_002BF0_06002BD0_Limbs[];
typedef enum object_sb_Skel_002BF0Limb {
    /*  0 */ LIMB_OBJECT_SB_002BF0_NONE,
    /*  1 */ LIMB_OBJECT_SB_002B70,
    /*  2 */ LIMB_OBJECT_SB_002B7C,
    /*  3 */ LIMB_OBJECT_SB_002B88,
    /*  4 */ LIMB_OBJECT_SB_002B94,
    /*  5 */ LIMB_OBJECT_SB_002BA0,
    /*  6 */ LIMB_OBJECT_SB_002BAC,
    /*  7 */ LIMB_OBJECT_SB_002BB8,
    /*  8 */ LIMB_OBJECT_SB_002BC4,
    /*  9 */ LIMB_OBJECT_SB_002BF0_MAX
} object_sb_Skel_002BF0Limb;
extern FlexSkeletonHeader object_sb_Skel_002BF0;
extern s16 object_sb_Anim_002C8C_06002C00_FrameData[];
extern JointIndex object_sb_Anim_002C8C_06002C54_JointIndices[];
extern AnimationHeader object_sb_Anim_002C8C;

#endif
