#ifndef OBJECT_DODOJR_H
#define OBJECT_DODOJR_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 object_dodojr_Anim_0004A0_06000000_FrameData[];
extern JointIndex object_dodojr_Anim_0004A0_06000444_JointIndices[];
extern AnimationHeader object_dodojr_Anim_0004A0;
extern s16 object_dodojr_Anim_0005F0_060004B0_FrameData[];
extern JointIndex object_dodojr_Anim_0005F0_06000594_JointIndices[];
extern AnimationHeader object_dodojr_Anim_0005F0;
extern s16 object_dodojr_Anim_000724_06000600_FrameData[];
extern JointIndex object_dodojr_Anim_000724_060006C8_JointIndices[];
extern AnimationHeader object_dodojr_Anim_000724;
extern s16 object_dodojr_Anim_000860_06000740_FrameData[];
extern JointIndex object_dodojr_Anim_000860_06000804_JointIndices[];
extern AnimationHeader object_dodojr_Anim_000860;
extern s16 object_dodojr_Anim_0009D4_06000870_FrameData[];
extern JointIndex object_dodojr_Anim_0009D4_06000978_JointIndices[];
extern AnimationHeader object_dodojr_Anim_0009D4;
extern Vtx object_dodojr_Vtx_0009F0[];
extern Vtx object_dodojr_Vtx_000C10[];
extern Vtx object_dodojr_Vtx_000D00[];
extern Vtx object_dodojr_Vtx_000F50[];
extern Vtx object_dodojr_Vtx_0010C0[];
extern Gfx object_dodojr_DL_001180[44];
extern Gfx object_dodojr_DL_0012E0[33];
extern Gfx object_dodojr_DL_0013E8[36];
extern Gfx object_dodojr_DL_001508[34];
extern Gfx object_dodojr_DL_001618[29];
#define object_dodojr_Tex_001700_WIDTH 16
#define object_dodojr_Tex_001700_HEIGHT 16
extern u64 object_dodojr_Tex_001700[TEX_LEN(u64, object_dodojr_Tex_001700_WIDTH, object_dodojr_Tex_001700_HEIGHT, 16)];
#define object_dodojr_Tex_001900_WIDTH 8
#define object_dodojr_Tex_001900_HEIGHT 16
extern u64 object_dodojr_Tex_001900[TEX_LEN(u64, object_dodojr_Tex_001900_WIDTH, object_dodojr_Tex_001900_HEIGHT, 16)];
#define object_dodojr_Tex_001A00_WIDTH 32
#define object_dodojr_Tex_001A00_HEIGHT 8
extern u64 object_dodojr_Tex_001A00[TEX_LEN(u64, object_dodojr_Tex_001A00_WIDTH, object_dodojr_Tex_001A00_HEIGHT, 16)];
#define object_dodojr_Tex_001C00_WIDTH 16
#define object_dodojr_Tex_001C00_HEIGHT 32
extern u64 object_dodojr_Tex_001C00[TEX_LEN(u64, object_dodojr_Tex_001C00_WIDTH, object_dodojr_Tex_001C00_HEIGHT, 16)];
extern StandardLimb object_dodojr_Limb_002000;
extern StandardLimb object_dodojr_Limb_00200C;
extern StandardLimb object_dodojr_Limb_002018;
extern StandardLimb object_dodojr_Limb_002024;
extern StandardLimb object_dodojr_Limb_002030;
extern StandardLimb object_dodojr_Limb_00203C;
extern StandardLimb object_dodojr_Limb_002048;
extern StandardLimb object_dodojr_Limb_002054;
extern StandardLimb object_dodojr_Limb_002060;
extern StandardLimb object_dodojr_Limb_00206C;
extern StandardLimb object_dodojr_Limb_002078;
extern StandardLimb object_dodojr_Limb_002084;
extern StandardLimb object_dodojr_Limb_002090;
extern StandardLimb object_dodojr_Limb_00209C;
extern void* object_dodojr_Skel_0020E0_060020A8_Limbs[];
typedef enum object_dodojr_Skel_0020E0Limb {
    /*  0 */ LIMB_OBJECT_DODOJR_0020E0_NONE,
    /*  1 */ LIMB_OBJECT_DODOJR_002000,
    /*  2 */ LIMB_OBJECT_DODOJR_00200C,
    /*  3 */ LIMB_OBJECT_DODOJR_002018,
    /*  4 */ LIMB_OBJECT_DODOJR_002024,
    /*  5 */ LIMB_OBJECT_DODOJR_002030,
    /*  6 */ LIMB_OBJECT_DODOJR_00203C,
    /*  7 */ LIMB_OBJECT_DODOJR_002048,
    /*  8 */ LIMB_OBJECT_DODOJR_002054,
    /*  9 */ LIMB_OBJECT_DODOJR_002060,
    /* 10 */ LIMB_OBJECT_DODOJR_00206C,
    /* 11 */ LIMB_OBJECT_DODOJR_002078,
    /* 12 */ LIMB_OBJECT_DODOJR_002084,
    /* 13 */ LIMB_OBJECT_DODOJR_002090,
    /* 14 */ LIMB_OBJECT_DODOJR_00209C,
    /* 15 */ LIMB_OBJECT_DODOJR_0020E0_MAX
} object_dodojr_Skel_0020E0Limb;
extern SkeletonHeader object_dodojr_Skel_0020E0;

#endif
