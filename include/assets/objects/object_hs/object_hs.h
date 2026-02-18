#ifndef OBJECT_HS_H
#define OBJECT_HS_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 object_hs_Anim_000304_06000000_FrameData[];
extern JointIndex object_hs_Anim_000304_060002A4_JointIndices[];
extern AnimationHeader object_hs_Anim_000304;
extern s16 object_hs_Anim_000528_06000320_FrameData[];
extern JointIndex object_hs_Anim_000528_060004C8_JointIndices[];
extern AnimationHeader object_hs_Anim_000528;
extern s16 object_hs_Anim_0005C0_06000540_FrameData[];
extern JointIndex object_hs_Anim_0005C0_06000560_JointIndices[];
extern AnimationHeader object_hs_Anim_0005C0;
extern Vtx object_hs_Vtx_0005D0[];
extern Vtx object_hs_Vtx_000DE0[];
extern Vtx object_hs_Vtx_000F00[];
extern Vtx object_hs_Vtx_001250[];
extern Vtx object_hs_Vtx_0014F0[];
extern Vtx object_hs_Vtx_001670[];
extern Vtx object_hs_Vtx_0018E0[];
extern Vtx object_hs_Vtx_001B80[];
extern Vtx object_hs_Vtx_001D00[];
extern Vtx object_hs_Vtx_001F70[];
extern Vtx object_hs_Vtx_002B80[];
extern Gfx object_hs_DL_003760[106];
extern Gfx object_hs_DL_003AB0[210];
extern Gfx object_hs_DL_004140[44];
extern Gfx object_hs_DL_0042A0[28];
extern Gfx object_hs_DL_004380[117];
extern Gfx object_hs_DL_004728[39];
extern Gfx object_hs_DL_004860[32];
extern Gfx object_hs_DL_004960[43];
extern Gfx object_hs_DL_004AB8[39];
extern Gfx object_hs_DL_004BF0[32];
extern Gfx object_hs_DL_004CF0[1];
extern Gfx object_hs_DL_004CF8[43];
//#define object_hs_TLUT_004E50_TLUT_COUNT 256
extern u64 object_hs_TLUT_004E50[];
#define object_hs_Tex_005050_WIDTH 16
#define object_hs_Tex_005050_HEIGHT 32
extern u64 object_hs_Tex_005050[TEX_LEN(u64, object_hs_Tex_005050_WIDTH, object_hs_Tex_005050_HEIGHT, 8)];
#define object_hs_Tex_005250_WIDTH 8
#define object_hs_Tex_005250_HEIGHT 8
extern u64 object_hs_Tex_005250[TEX_LEN(u64, object_hs_Tex_005250_WIDTH, object_hs_Tex_005250_HEIGHT, 8)];
#define object_hs_Tex_005290_WIDTH 32
#define object_hs_Tex_005290_HEIGHT 16
extern u64 object_hs_Tex_005290[TEX_LEN(u64, object_hs_Tex_005290_WIDTH, object_hs_Tex_005290_HEIGHT, 8)];
#define object_hs_Tex_005490_WIDTH 32
#define object_hs_Tex_005490_HEIGHT 16
extern u64 object_hs_Tex_005490[TEX_LEN(u64, object_hs_Tex_005490_WIDTH, object_hs_Tex_005490_HEIGHT, 16)];
#define object_hs_Tex_005890_WIDTH 16
#define object_hs_Tex_005890_HEIGHT 16
extern u64 object_hs_Tex_005890[TEX_LEN(u64, object_hs_Tex_005890_WIDTH, object_hs_Tex_005890_HEIGHT, 8)];
#define object_hs_Tex_005990_WIDTH 16
#define object_hs_Tex_005990_HEIGHT 16
extern u64 object_hs_Tex_005990[TEX_LEN(u64, object_hs_Tex_005990_WIDTH, object_hs_Tex_005990_HEIGHT, 8)];
#define object_hs_Tex_005A90_WIDTH 4
#define object_hs_Tex_005A90_HEIGHT 4
extern u64 object_hs_Tex_005A90[TEX_LEN(u64, object_hs_Tex_005A90_WIDTH, object_hs_Tex_005A90_HEIGHT, 16)];
#define object_hs_Tex_005AB0_WIDTH 8
#define object_hs_Tex_005AB0_HEIGHT 8
extern u64 object_hs_Tex_005AB0[TEX_LEN(u64, object_hs_Tex_005AB0_WIDTH, object_hs_Tex_005AB0_HEIGHT, 8)];
#define object_hs_Tex_005AF0_WIDTH 32
#define object_hs_Tex_005AF0_HEIGHT 32
extern u64 object_hs_Tex_005AF0[TEX_LEN(u64, object_hs_Tex_005AF0_WIDTH, object_hs_Tex_005AF0_HEIGHT, 8)];
#define object_hs_Tex_005EF0_WIDTH 8
#define object_hs_Tex_005EF0_HEIGHT 16
extern u64 object_hs_Tex_005EF0[TEX_LEN(u64, object_hs_Tex_005EF0_WIDTH, object_hs_Tex_005EF0_HEIGHT, 8)];
#define object_hs_Tex_005F70_WIDTH 16
#define object_hs_Tex_005F70_HEIGHT 32
extern u64 object_hs_Tex_005F70[TEX_LEN(u64, object_hs_Tex_005F70_WIDTH, object_hs_Tex_005F70_HEIGHT, 8)];
extern StandardLimb object_hs_Limb_006170;
extern StandardLimb object_hs_Limb_00617C;
extern StandardLimb object_hs_Limb_006188;
extern StandardLimb object_hs_Limb_006194;
extern StandardLimb object_hs_Limb_0061A0;
extern StandardLimb object_hs_Limb_0061AC;
extern StandardLimb object_hs_Limb_0061B8;
extern StandardLimb object_hs_Limb_0061C4;
extern StandardLimb object_hs_Limb_0061D0;
extern StandardLimb object_hs_Limb_0061DC;
extern StandardLimb object_hs_Limb_0061E8;
extern StandardLimb object_hs_Limb_0061F4;
extern StandardLimb object_hs_Limb_006200;
extern StandardLimb object_hs_Limb_00620C;
extern StandardLimb object_hs_Limb_006218;
extern void* object_hs_Skel_006260_06006224_Limbs[];
typedef enum object_hs_Skel_006260Limb {
    /*  0 */ LIMB_OBJECT_HS_006260_NONE,
    /*  1 */ LIMB_OBJECT_HS_006170,
    /*  2 */ LIMB_OBJECT_HS_00617C,
    /*  3 */ LIMB_OBJECT_HS_006188,
    /*  4 */ LIMB_OBJECT_HS_006194,
    /*  5 */ LIMB_OBJECT_HS_0061A0,
    /*  6 */ LIMB_OBJECT_HS_0061AC,
    /*  7 */ LIMB_OBJECT_HS_0061B8,
    /*  8 */ LIMB_OBJECT_HS_0061C4,
    /*  9 */ LIMB_OBJECT_HS_0061D0,
    /* 10 */ LIMB_OBJECT_HS_0061DC,
    /* 11 */ LIMB_OBJECT_HS_0061E8,
    /* 12 */ LIMB_OBJECT_HS_0061F4,
    /* 13 */ LIMB_OBJECT_HS_006200,
    /* 14 */ LIMB_OBJECT_HS_00620C,
    /* 15 */ LIMB_OBJECT_HS_006218,
    /* 16 */ LIMB_OBJECT_HS_006260_MAX
} object_hs_Skel_006260Limb;
extern FlexSkeletonHeader object_hs_Skel_006260;

#endif
