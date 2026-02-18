#ifndef OBJECT_BB_H
#define OBJECT_BB_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 object_Bb_Anim_000184_06000000_FrameData[];
extern JointIndex object_Bb_Anim_000184_06000124_JointIndices[];
extern AnimationHeader object_Bb_Anim_000184;
extern s16 object_Bb_Anim_0002AC_060001A0_FrameData[];
extern JointIndex object_Bb_Anim_0002AC_0600024C_JointIndices[];
extern AnimationHeader object_Bb_Anim_0002AC;
extern s16 object_Bb_Anim_000444_060002C0_FrameData[];
extern JointIndex object_Bb_Anim_000444_060003E4_JointIndices[];
extern AnimationHeader object_Bb_Anim_000444;
extern Vtx object_Bb_Vtx_000460[];
extern Vtx object_Bb_Vtx_0004C0[];
extern Vtx object_Bb_Vtx_0004F0[];
extern Vtx object_Bb_Vtx_000700[];
extern Vtx object_Bb_Vtx_000B90[];
extern Vtx object_Bb_Vtx_000BC0[];
extern Gfx object_Bb_DL_000C20[18];
extern Gfx object_Bb_DL_000CB0[18];
extern Gfx object_Bb_DL_000D40[25];
extern Gfx object_Bb_DL_000E08[95];
extern Gfx object_Bb_DL_001100[18];
extern Gfx object_Bb_DL_001190[18];
#define object_Bb_Tex_001220_WIDTH 16
#define object_Bb_Tex_001220_HEIGHT 16
extern u64 object_Bb_Tex_001220[TEX_LEN(u64, object_Bb_Tex_001220_WIDTH, object_Bb_Tex_001220_HEIGHT, 16)];
#define object_Bb_Tex_001420_WIDTH 8
#define object_Bb_Tex_001420_HEIGHT 8
extern u64 object_Bb_Tex_001420[TEX_LEN(u64, object_Bb_Tex_001420_WIDTH, object_Bb_Tex_001420_HEIGHT, 16)];
#define object_Bb_Tex_0014A0_WIDTH 4
#define object_Bb_Tex_0014A0_HEIGHT 4
extern u64 object_Bb_Tex_0014A0[TEX_LEN(u64, object_Bb_Tex_0014A0_WIDTH, object_Bb_Tex_0014A0_HEIGHT, 16)];
#define object_Bb_Tex_0014C0_WIDTH 8
#define object_Bb_Tex_0014C0_HEIGHT 8
extern u64 object_Bb_Tex_0014C0[TEX_LEN(u64, object_Bb_Tex_0014C0_WIDTH, object_Bb_Tex_0014C0_HEIGHT, 16)];
#define object_Bb_Tex_001540_WIDTH 8
#define object_Bb_Tex_001540_HEIGHT 8
extern u64 object_Bb_Tex_001540[TEX_LEN(u64, object_Bb_Tex_001540_WIDTH, object_Bb_Tex_001540_HEIGHT, 16)];
#define object_Bb_Tex_0015C0_WIDTH 8
#define object_Bb_Tex_0015C0_HEIGHT 8
extern u64 object_Bb_Tex_0015C0[TEX_LEN(u64, object_Bb_Tex_0015C0_WIDTH, object_Bb_Tex_0015C0_HEIGHT, 16)];
#define object_Bb_Tex_001640_WIDTH 16
#define object_Bb_Tex_001640_HEIGHT 8
extern u64 object_Bb_Tex_001640[TEX_LEN(u64, object_Bb_Tex_001640_WIDTH, object_Bb_Tex_001640_HEIGHT, 16)];
#define object_Bb_Tex_001740_WIDTH 16
#define object_Bb_Tex_001740_HEIGHT 16
extern u64 object_Bb_Tex_001740[TEX_LEN(u64, object_Bb_Tex_001740_WIDTH, object_Bb_Tex_001740_HEIGHT, 16)];
extern StandardLimb object_Bb_Limb_001940;
extern StandardLimb object_Bb_Limb_00194C;
extern StandardLimb object_Bb_Limb_001958;
extern StandardLimb object_Bb_Limb_001964;
extern StandardLimb object_Bb_Limb_001970;
extern StandardLimb object_Bb_Limb_00197C;
extern StandardLimb object_Bb_Limb_001988;
extern StandardLimb object_Bb_Limb_001994;
extern StandardLimb object_Bb_Limb_0019A0;
extern StandardLimb object_Bb_Limb_0019AC;
extern StandardLimb object_Bb_Limb_0019B8;
extern StandardLimb object_Bb_Limb_0019C4;
extern StandardLimb object_Bb_Limb_0019D0;
extern StandardLimb object_Bb_Limb_0019DC;
extern StandardLimb object_Bb_Limb_0019E8;
extern void* object_Bb_Skel_001A30_060019F4_Limbs[];
typedef enum object_Bb_Skel_001A30Limb {
    /*  0 */ LIMB_OBJECT_BB_001A30_NONE,
    /*  1 */ LIMB_OBJECT_BB_001940,
    /*  2 */ LIMB_OBJECT_BB_00194C,
    /*  3 */ LIMB_OBJECT_BB_001958,
    /*  4 */ LIMB_OBJECT_BB_001964,
    /*  5 */ LIMB_OBJECT_BB_001970,
    /*  6 */ LIMB_OBJECT_BB_00197C,
    /*  7 */ LIMB_OBJECT_BB_001988,
    /*  8 */ LIMB_OBJECT_BB_001994,
    /*  9 */ LIMB_OBJECT_BB_0019A0,
    /* 10 */ LIMB_OBJECT_BB_0019AC,
    /* 11 */ LIMB_OBJECT_BB_0019B8,
    /* 12 */ LIMB_OBJECT_BB_0019C4,
    /* 13 */ LIMB_OBJECT_BB_0019D0,
    /* 14 */ LIMB_OBJECT_BB_0019DC,
    /* 15 */ LIMB_OBJECT_BB_0019E8,
    /* 16 */ LIMB_OBJECT_BB_001A30_MAX
} object_Bb_Skel_001A30Limb;
extern SkeletonHeader object_Bb_Skel_001A30;

#endif
