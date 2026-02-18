#ifndef OBJECT_TS_H
#define OBJECT_TS_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 object_ts_Anim_000498_06000000_FrameData[];
extern JointIndex object_ts_Anim_000498_0600045C_JointIndices[];
extern AnimationHeader object_ts_Anim_000498;
//#define object_ts_TLUT_0004B0_TLUT_COUNT 256
extern u64 object_ts_TLUT_0004B0[];
#define object_ts_Tex_0006B0_WIDTH 8
#define object_ts_Tex_0006B0_HEIGHT 8
extern u64 object_ts_Tex_0006B0[TEX_LEN(u64, object_ts_Tex_0006B0_WIDTH, object_ts_Tex_0006B0_HEIGHT, 8)];
#define object_ts_Tex_0006F0_WIDTH 16
#define object_ts_Tex_0006F0_HEIGHT 16
extern u64 object_ts_Tex_0006F0[TEX_LEN(u64, object_ts_Tex_0006F0_WIDTH, object_ts_Tex_0006F0_HEIGHT, 8)];
#define object_ts_Tex_0007F0_WIDTH 8
#define object_ts_Tex_0007F0_HEIGHT 8
extern u64 object_ts_Tex_0007F0[TEX_LEN(u64, object_ts_Tex_0007F0_WIDTH, object_ts_Tex_0007F0_HEIGHT, 8)];
#define object_ts_Tex_000830_WIDTH 16
#define object_ts_Tex_000830_HEIGHT 16
extern u64 object_ts_Tex_000830[TEX_LEN(u64, object_ts_Tex_000830_WIDTH, object_ts_Tex_000830_HEIGHT, 8)];
#define object_ts_Tex_000930_WIDTH 8
#define object_ts_Tex_000930_HEIGHT 8
extern u64 object_ts_Tex_000930[TEX_LEN(u64, object_ts_Tex_000930_WIDTH, object_ts_Tex_000930_HEIGHT, 8)];
#define object_ts_Tex_000970_WIDTH 32
#define object_ts_Tex_000970_HEIGHT 32
extern u64 object_ts_Tex_000970[TEX_LEN(u64, object_ts_Tex_000970_WIDTH, object_ts_Tex_000970_HEIGHT, 8)];
#define object_ts_Tex_000D70_WIDTH 32
#define object_ts_Tex_000D70_HEIGHT 32
extern u64 object_ts_Tex_000D70[TEX_LEN(u64, object_ts_Tex_000D70_WIDTH, object_ts_Tex_000D70_HEIGHT, 8)];
#define object_ts_Tex_001170_WIDTH 16
#define object_ts_Tex_001170_HEIGHT 16
extern u64 object_ts_Tex_001170[TEX_LEN(u64, object_ts_Tex_001170_WIDTH, object_ts_Tex_001170_HEIGHT, 8)];
#define object_ts_Tex_001270_WIDTH 32
#define object_ts_Tex_001270_HEIGHT 64
extern u64 object_ts_Tex_001270[TEX_LEN(u64, object_ts_Tex_001270_WIDTH, object_ts_Tex_001270_HEIGHT, 8)];
extern Vtx object_ts_Vtx_001A70[];
extern Vtx object_ts_Vtx_001F10[];
extern Vtx object_ts_Vtx_0026D0[];
extern Vtx object_ts_Vtx_0029A0[];
extern Vtx object_ts_Vtx_002BC0[];
extern Vtx object_ts_Vtx_002F40[];
extern Vtx object_ts_Vtx_003210[];
extern Vtx object_ts_Vtx_003430[];
extern Vtx object_ts_Vtx_0037B0[];
extern Gfx object_ts_DL_003CD0[65];
extern Gfx object_ts_DL_003ED8[148];
extern Gfx object_ts_DL_004378[101];
extern Gfx object_ts_DL_0046A0[47];
extern Gfx object_ts_DL_004818[44];
extern Gfx object_ts_DL_004978[48];
extern Gfx object_ts_DL_004AF8[47];
extern Gfx object_ts_DL_004C70[44];
extern Gfx object_ts_DL_004DD0[48];
extern StandardLimb object_ts_Limb_004F50;
extern StandardLimb object_ts_Limb_004F5C;
extern StandardLimb object_ts_Limb_004F68;
extern StandardLimb object_ts_Limb_004F74;
extern StandardLimb object_ts_Limb_004F80;
extern StandardLimb object_ts_Limb_004F8C;
extern StandardLimb object_ts_Limb_004F98;
extern StandardLimb object_ts_Limb_004FA4;
extern StandardLimb object_ts_Limb_004FB0;
extern void* object_ts_Skel_004FE0_06004FBC_Limbs[];
typedef enum object_ts_Skel_004FE0Limb {
    /*  0 */ LIMB_OBJECT_TS_004FE0_NONE,
    /*  1 */ LIMB_OBJECT_TS_004F50,
    /*  2 */ LIMB_OBJECT_TS_004F5C,
    /*  3 */ LIMB_OBJECT_TS_004F68,
    /*  4 */ LIMB_OBJECT_TS_004F74,
    /*  5 */ LIMB_OBJECT_TS_004F80,
    /*  6 */ LIMB_OBJECT_TS_004F8C,
    /*  7 */ LIMB_OBJECT_TS_004F98,
    /*  8 */ LIMB_OBJECT_TS_004FA4,
    /*  9 */ LIMB_OBJECT_TS_004FB0,
    /* 10 */ LIMB_OBJECT_TS_004FE0_MAX
} object_ts_Skel_004FE0Limb;
extern FlexSkeletonHeader object_ts_Skel_004FE0;

#endif
