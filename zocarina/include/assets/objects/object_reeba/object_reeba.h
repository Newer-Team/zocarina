#ifndef OBJECT_REEBA_H
#define OBJECT_REEBA_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 object_reeba_Anim_0001E4_06000000_FrameData[];
extern JointIndex object_reeba_Anim_0001E4_06000178_JointIndices[];
extern AnimationHeader object_reeba_Anim_0001E4;
extern Gfx object_reeba_DL_000200[26];
extern Gfx object_reeba_DL_0002D0[2];
extern Gfx object_reeba_DL_0002E0[2];
extern Vtx object_reeba_Vtx_0002F0[];
extern Gfx object_reeba_DL_000430[40];
extern Gfx object_reeba_DL_000570[2];
extern Gfx object_reeba_DL_000580[2];
extern Vtx object_reeba_Vtx_000590[];
extern Gfx object_reeba_DL_000760[19];
extern Gfx object_reeba_DL_0007F8[2];
extern Gfx object_reeba_DL_000808[2];
extern Vtx object_reeba_Vtx_000818[];
extern Gfx object_reeba_DL_0008B8[19];
extern Gfx object_reeba_DL_000950[2];
extern Gfx object_reeba_DL_000960[2];
extern Vtx object_reeba_Vtx_000970[];
extern Gfx object_reeba_DL_000A10[20];
extern Gfx object_reeba_DL_000AB0[2];
extern Gfx object_reeba_DL_000AC0[2];
extern Vtx object_reeba_Vtx_000AD0[];
extern Gfx object_reeba_DL_000B80[19];
extern Gfx object_reeba_DL_000C18[2];
extern Gfx object_reeba_DL_000C28[2];
extern Vtx object_reeba_Vtx_000C38[];
#define object_reeba_Tex_000CD8_WIDTH 8
#define object_reeba_Tex_000CD8_HEIGHT 16
extern u64 object_reeba_Tex_000CD8[TEX_LEN(u64, object_reeba_Tex_000CD8_WIDTH, object_reeba_Tex_000CD8_HEIGHT, 16)];
#define object_reeba_Tex_000DD8_WIDTH 32
#define object_reeba_Tex_000DD8_HEIGHT 32
extern u64 object_reeba_Tex_000DD8[TEX_LEN(u64, object_reeba_Tex_000DD8_WIDTH, object_reeba_Tex_000DD8_HEIGHT, 16)];
#define object_reeba_Tex_0015D8_WIDTH 32
#define object_reeba_Tex_0015D8_HEIGHT 32
extern u64 object_reeba_Tex_0015D8[TEX_LEN(u64, object_reeba_Tex_0015D8_WIDTH, object_reeba_Tex_0015D8_HEIGHT, 16)];
extern StandardLimb object_reeba_001DD8_Limb;
extern StandardLimb object_reeba_001DE4_Limb;
extern StandardLimb object_reeba_001DF0_Limb;
extern StandardLimb object_reeba_001DFC_Limb;
extern StandardLimb object_reeba_001E08_Limb;
extern StandardLimb object_reeba_001E14_Limb;
extern StandardLimb object_reeba_001E20_Limb;
extern StandardLimb object_reeba_001E2C_Limb;
extern StandardLimb object_reeba_001E38_Limb;
extern StandardLimb object_reeba_001E44_Limb;
extern StandardLimb object_reeba_001E50_Limb;
extern StandardLimb object_reeba_001E5C_Limb;
extern StandardLimb object_reeba_001E68_Limb;
extern StandardLimb object_reeba_001E74_Limb;
extern StandardLimb object_reeba_001E80_Limb;
extern StandardLimb object_reeba_001E8C_Limb;
extern StandardLimb object_reeba_001E98_Limb;
extern void* object_reeba_Skel_001EE8_06001EA4_Limbs[];
typedef enum object_reeba_Skel_001EE8Limb {
    /*  0 */ LIMB_OBJECT_REEBA_001EE8_NONE,
    /*  1 */ LIMB_OBJECT_REEBA_001DD8,
    /*  2 */ LIMB_OBJECT_REEBA_001DE4,
    /*  3 */ LIMB_OBJECT_REEBA_001DF0,
    /*  4 */ LIMB_OBJECT_REEBA_001DFC,
    /*  5 */ LIMB_OBJECT_REEBA_001E08,
    /*  6 */ LIMB_OBJECT_REEBA_001E14,
    /*  7 */ LIMB_OBJECT_REEBA_001E20,
    /*  8 */ LIMB_OBJECT_REEBA_001E2C,
    /*  9 */ LIMB_OBJECT_REEBA_001E38,
    /* 10 */ LIMB_OBJECT_REEBA_001E44,
    /* 11 */ LIMB_OBJECT_REEBA_001E50,
    /* 12 */ LIMB_OBJECT_REEBA_001E5C,
    /* 13 */ LIMB_OBJECT_REEBA_001E68,
    /* 14 */ LIMB_OBJECT_REEBA_001E74,
    /* 15 */ LIMB_OBJECT_REEBA_001E80,
    /* 16 */ LIMB_OBJECT_REEBA_001E8C,
    /* 17 */ LIMB_OBJECT_REEBA_001E98,
    /* 18 */ LIMB_OBJECT_REEBA_001EE8_MAX
} object_reeba_Skel_001EE8Limb;
extern SkeletonHeader object_reeba_Skel_001EE8;

#endif
