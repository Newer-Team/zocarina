#ifndef OBJECT_DH_H
#define OBJECT_DH_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern Vtx object_dh_Vtx_000000[];
extern Vtx object_dh_Vtx_0005E0[];
extern Vtx object_dh_Vtx_000700[];
extern Gfx object_dh_DL_000760[21];
extern Gfx object_dh_DL_000808[33];
extern Gfx object_dh_DL_000910[83];
extern StandardLimb object_dh_Limb_000BA8;
extern StandardLimb object_dh_Limb_000BB4;
extern StandardLimb object_dh_Limb_000BC0;
extern void* object_dh_Skel_000BD8_06000BCC_Limbs[];
typedef enum object_dh_Skel_000BD8Limb {
    /*  0 */ LIMB_OBJECT_DH_000BD8_NONE,
    /*  1 */ LIMB_OBJECT_DH_000BA8,
    /*  2 */ LIMB_OBJECT_DH_000BB4,
    /*  3 */ LIMB_OBJECT_DH_000BC0,
    /*  4 */ LIMB_OBJECT_DH_000BD8_MAX
} object_dh_Skel_000BD8Limb;
extern FlexSkeletonHeader object_dh_Skel_000BD8;
#define object_dh_Tex_000BF0_WIDTH 16
#define object_dh_Tex_000BF0_HEIGHT 32
extern u64 object_dh_Tex_000BF0[TEX_LEN(u64, object_dh_Tex_000BF0_WIDTH, object_dh_Tex_000BF0_HEIGHT, 16)];
#define object_dh_Tex_000FF0_WIDTH 32
#define object_dh_Tex_000FF0_HEIGHT 16
extern u64 object_dh_Tex_000FF0[TEX_LEN(u64, object_dh_Tex_000FF0_WIDTH, object_dh_Tex_000FF0_HEIGHT, 16)];
extern s16 object_dh_Anim_0015B0_060013F0_FrameData[];
extern JointIndex object_dh_Anim_0015B0_06001598_JointIndices[];
extern AnimationHeader object_dh_Anim_0015B0;
extern s16 object_dh_Anim_001A3C_060015C0_FrameData[];
extern JointIndex object_dh_Anim_001A3C_060019DC_JointIndices[];
extern AnimationHeader object_dh_Anim_001A3C;
extern s16 object_dh_Anim_002148_06001A50_FrameData[];
extern JointIndex object_dh_Anim_002148_060020E8_JointIndices[];
extern AnimationHeader object_dh_Anim_002148;
extern s16 object_dh_Anim_0032BC_06002160_FrameData[];
extern JointIndex object_dh_Anim_0032BC_0600325C_JointIndices[];
extern AnimationHeader object_dh_Anim_0032BC;
extern s16 object_dh_Anim_00375C_060032D0_FrameData[];
extern JointIndex object_dh_Anim_00375C_060036FC_JointIndices[];
extern AnimationHeader object_dh_Anim_00375C;
extern s16 object_dh_Anim_003A8C_06003770_FrameData[];
extern JointIndex object_dh_Anim_003A8C_06003A2C_JointIndices[];
extern AnimationHeader object_dh_Anim_003A8C;
extern s16 object_dh_Anim_003D6C_06003AA0_FrameData[];
extern JointIndex object_dh_Anim_003D6C_06003D0C_JointIndices[];
extern AnimationHeader object_dh_Anim_003D6C;
extern s16 object_dh_Anim_004658_06003D80_FrameData[];
extern JointIndex object_dh_Anim_004658_060045F8_JointIndices[];
extern AnimationHeader object_dh_Anim_004658;
#define object_dh_Tex_004670_WIDTH 16
#define object_dh_Tex_004670_HEIGHT 32
extern u64 object_dh_Tex_004670[TEX_LEN(u64, object_dh_Tex_004670_WIDTH, object_dh_Tex_004670_HEIGHT, 16)];
#define object_dh_Tex_004A70_WIDTH 16
#define object_dh_Tex_004A70_HEIGHT 32
extern u64 object_dh_Tex_004A70[TEX_LEN(u64, object_dh_Tex_004A70_WIDTH, object_dh_Tex_004A70_HEIGHT, 16)];
#define object_dh_Tex_004E70_WIDTH 16
#define object_dh_Tex_004E70_HEIGHT 16
extern u64 object_dh_Tex_004E70[TEX_LEN(u64, object_dh_Tex_004E70_WIDTH, object_dh_Tex_004E70_HEIGHT, 16)];
#define object_dh_Tex_005070_WIDTH 16
#define object_dh_Tex_005070_HEIGHT 16
extern u64 object_dh_Tex_005070[TEX_LEN(u64, object_dh_Tex_005070_WIDTH, object_dh_Tex_005070_HEIGHT, 16)];
extern s16 object_dh_Anim_005880_06005270_FrameData[];
extern JointIndex object_dh_Anim_005880_06005820_JointIndices[];
extern AnimationHeader object_dh_Anim_005880;
extern Vtx object_dh_Vtx_005890[];
extern Vtx object_dh_Vtx_005930[];
extern Vtx object_dh_Vtx_005AB0[];
extern Vtx object_dh_Vtx_005C40[];
extern Vtx object_dh_Vtx_005CE0[];
extern Vtx object_dh_Vtx_005E60[];
extern Vtx object_dh_Vtx_005FF0[];
extern Vtx object_dh_Vtx_0061F0[];
extern Vtx object_dh_Vtx_0066A0[];
extern Vtx object_dh_Vtx_006740[];
extern Vtx object_dh_Vtx_0067E0[];
extern Vtx object_dh_Vtx_0069B0[];
extern Vtx object_dh_Vtx_006A70[];
extern Vtx object_dh_Vtx_006C30[];
extern Gfx object_dh_DL_006D10[25];
extern Gfx object_dh_DL_006DD8[36];
extern Gfx object_dh_DL_006EF8[29];
extern Gfx object_dh_DL_006FE0[37];
extern Gfx object_dh_DL_007108[36];
extern Gfx object_dh_DL_007228[34];
extern Gfx object_dh_DL_007338[29];
extern Gfx object_dh_DL_007420[36];
extern Gfx object_dh_DL_007540[34];
extern Gfx object_dh_DL_007650[29];
extern Gfx object_dh_DL_007738[28];
extern Gfx object_dh_DL_007818[28];
extern Gfx object_dh_DL_0078F8[86];
extern Gfx object_dh_DL_007BA8[62];
extern StandardLimb object_dh_Limb_007D98;
extern StandardLimb object_dh_Limb_007DA4;
extern StandardLimb object_dh_Limb_007DB0;
extern StandardLimb object_dh_Limb_007DBC;
extern StandardLimb object_dh_Limb_007DC8;
extern StandardLimb object_dh_Limb_007DD4;
extern StandardLimb object_dh_Limb_007DE0;
extern StandardLimb object_dh_Limb_007DEC;
extern StandardLimb object_dh_Limb_007DF8;
extern StandardLimb object_dh_Limb_007E04;
extern StandardLimb object_dh_Limb_007E10;
extern StandardLimb object_dh_Limb_007E1C;
extern StandardLimb object_dh_Limb_007E28;
extern StandardLimb object_dh_Limb_007E34;
extern StandardLimb object_dh_Limb_007E40;
extern void* object_dh_Skel_007E88_06007E4C_Limbs[];
typedef enum object_dh_Skel_007E88Limb {
    /*  0 */ LIMB_OBJECT_DH_007E88_NONE,
    /*  1 */ LIMB_OBJECT_DH_007D98,
    /*  2 */ LIMB_OBJECT_DH_007DA4,
    /*  3 */ LIMB_OBJECT_DH_007DB0,
    /*  4 */ LIMB_OBJECT_DH_007DBC,
    /*  5 */ LIMB_OBJECT_DH_007DC8,
    /*  6 */ LIMB_OBJECT_DH_007DD4,
    /*  7 */ LIMB_OBJECT_DH_007DE0,
    /*  8 */ LIMB_OBJECT_DH_007DEC,
    /*  9 */ LIMB_OBJECT_DH_007DF8,
    /* 10 */ LIMB_OBJECT_DH_007E04,
    /* 11 */ LIMB_OBJECT_DH_007E10,
    /* 12 */ LIMB_OBJECT_DH_007E1C,
    /* 13 */ LIMB_OBJECT_DH_007E28,
    /* 14 */ LIMB_OBJECT_DH_007E34,
    /* 15 */ LIMB_OBJECT_DH_007E40,
    /* 16 */ LIMB_OBJECT_DH_007E88_MAX
} object_dh_Skel_007E88Limb;
extern FlexSkeletonHeader object_dh_Skel_007E88;
extern Vtx object_dh_Vtx_007EA0[];
extern Gfx object_dh_DL_007FC0[32];
#define object_dh_Tex_0080C0_WIDTH 32
#define object_dh_Tex_0080C0_HEIGHT 64
extern u64 object_dh_Tex_0080C0[TEX_LEN(u64, object_dh_Tex_0080C0_WIDTH, object_dh_Tex_0080C0_HEIGHT, 8)];
#define object_dh_Tex_0088C0_WIDTH 32
#define object_dh_Tex_0088C0_HEIGHT 64
extern u64 object_dh_Tex_0088C0[TEX_LEN(u64, object_dh_Tex_0088C0_WIDTH, object_dh_Tex_0088C0_HEIGHT, 8)];

#endif
