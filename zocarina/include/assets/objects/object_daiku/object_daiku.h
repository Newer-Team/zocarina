#ifndef OBJECT_DAIKU_H
#define OBJECT_DAIKU_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 object_daiku_Anim_000600_06000000_FrameData[];
extern JointIndex object_daiku_Anim_000600_06000598_JointIndices[];
extern AnimationHeader object_daiku_Anim_000600;
extern s16 object_daiku_Anim_000C44_06000610_FrameData[];
extern JointIndex object_daiku_Anim_000C44_06000BDC_JointIndices[];
extern AnimationHeader object_daiku_Anim_000C44;
extern s16 object_daiku_Anim_001AB0_06000C60_FrameData[];
extern JointIndex object_daiku_Anim_001AB0_06001A48_JointIndices[];
extern AnimationHeader object_daiku_Anim_001AB0;
//#define object_daiku_TLUT_001AC0_TLUT_COUNT 256
extern u64 object_daiku_TLUT_001AC0[];
#define object_daiku_Tex_001CC0_WIDTH 8
#define object_daiku_Tex_001CC0_HEIGHT 8
extern u64 object_daiku_Tex_001CC0[TEX_LEN(u64, object_daiku_Tex_001CC0_WIDTH, object_daiku_Tex_001CC0_HEIGHT, 8)];
#define object_daiku_Tex_001D00_WIDTH 16
#define object_daiku_Tex_001D00_HEIGHT 16
extern u64 object_daiku_Tex_001D00[TEX_LEN(u64, object_daiku_Tex_001D00_WIDTH, object_daiku_Tex_001D00_HEIGHT, 8)];
#define object_daiku_Tex_001E00_WIDTH 4
#define object_daiku_Tex_001E00_HEIGHT 4
extern u64 object_daiku_Tex_001E00[TEX_LEN(u64, object_daiku_Tex_001E00_WIDTH, object_daiku_Tex_001E00_HEIGHT, 16)];
#define object_daiku_Tex_001E20_WIDTH 8
#define object_daiku_Tex_001E20_HEIGHT 16
extern u64 object_daiku_Tex_001E20[TEX_LEN(u64, object_daiku_Tex_001E20_WIDTH, object_daiku_Tex_001E20_HEIGHT, 8)];
#define object_daiku_Tex_001EA0_WIDTH 8
#define object_daiku_Tex_001EA0_HEIGHT 8
extern u64 object_daiku_Tex_001EA0[TEX_LEN(u64, object_daiku_Tex_001EA0_WIDTH, object_daiku_Tex_001EA0_HEIGHT, 8)];
#define object_daiku_Tex_001EE0_WIDTH 16
#define object_daiku_Tex_001EE0_HEIGHT 16
extern u64 object_daiku_Tex_001EE0[TEX_LEN(u64, object_daiku_Tex_001EE0_WIDTH, object_daiku_Tex_001EE0_HEIGHT, 8)];
#define object_daiku_Tex_001FE0_WIDTH 8
#define object_daiku_Tex_001FE0_HEIGHT 8
extern u64 object_daiku_Tex_001FE0[TEX_LEN(u64, object_daiku_Tex_001FE0_WIDTH, object_daiku_Tex_001FE0_HEIGHT, 8)];
#define object_daiku_Tex_002020_WIDTH 32
#define object_daiku_Tex_002020_HEIGHT 32
extern u64 object_daiku_Tex_002020[TEX_LEN(u64, object_daiku_Tex_002020_WIDTH, object_daiku_Tex_002020_HEIGHT, 16)];
#define object_daiku_Tex_002820_WIDTH 16
#define object_daiku_Tex_002820_HEIGHT 16
extern u64 object_daiku_Tex_002820[TEX_LEN(u64, object_daiku_Tex_002820_WIDTH, object_daiku_Tex_002820_HEIGHT, 8)];
#define object_daiku_Tex_002920_WIDTH 8
#define object_daiku_Tex_002920_HEIGHT 8
extern u64 object_daiku_Tex_002920[TEX_LEN(u64, object_daiku_Tex_002920_WIDTH, object_daiku_Tex_002920_HEIGHT, 8)];
#define object_daiku_Tex_002960_WIDTH 8
#define object_daiku_Tex_002960_HEIGHT 8
extern u64 object_daiku_Tex_002960[TEX_LEN(u64, object_daiku_Tex_002960_WIDTH, object_daiku_Tex_002960_HEIGHT, 8)];
#define object_daiku_Tex_0029A0_WIDTH 8
#define object_daiku_Tex_0029A0_HEIGHT 8
extern u64 object_daiku_Tex_0029A0[TEX_LEN(u64, object_daiku_Tex_0029A0_WIDTH, object_daiku_Tex_0029A0_HEIGHT, 8)];
extern Vtx object_daiku_Vtx_0029E0[];
extern Vtx object_daiku_Vtx_002D20[];
extern Vtx object_daiku_Vtx_002E60[];
extern Vtx object_daiku_Vtx_002FC0[];
extern Vtx object_daiku_Vtx_0030D0[];
extern Vtx object_daiku_Vtx_0031D0[];
extern Vtx object_daiku_Vtx_003850[];
extern Vtx object_daiku_Vtx_003B00[];
extern Vtx object_daiku_Vtx_003C80[];
extern Vtx object_daiku_Vtx_003E00[];
extern Vtx object_daiku_Vtx_0040B0[];
extern Vtx object_daiku_Vtx_004230[];
extern Vtx object_daiku_Vtx_0043B0[];
extern Vtx object_daiku_Vtx_004930[];
extern Vtx object_daiku_Vtx_004A70[];
extern Vtx object_daiku_Vtx_004BA0[];
extern Vtx object_daiku_Vtx_004DB0[];
extern Vtx object_daiku_Vtx_004EF0[];
extern Vtx object_daiku_Vtx_005020[];
extern Vtx object_daiku_Vtx_005230[];
extern Gfx object_daiku_DL_005490[126];
extern Gfx object_daiku_DL_005880[34];
extern Gfx object_daiku_DL_005990[38];
extern Gfx object_daiku_DL_005AC0[34];
extern Gfx object_daiku_DL_005BD0[36];
extern Gfx object_daiku_DL_005CF0[164];
extern Gfx object_daiku_DL_006210[98];
extern Gfx object_daiku_DL_006520[38];
extern Gfx object_daiku_DL_006650[38];
extern Gfx object_daiku_DL_006780[46];
extern Gfx object_daiku_DL_0068F0[38];
extern Gfx object_daiku_DL_006A20[38];
extern Gfx object_daiku_DL_006B50[46];
extern Gfx object_daiku_DL_006CC0[62];
extern Gfx object_daiku_DL_006EB0[85];
extern Gfx object_daiku_DL_007158[34];
extern Gfx object_daiku_DL_007268[35];
extern Gfx object_daiku_DL_007380[86];
extern Gfx object_daiku_DL_007630[34];
extern Gfx object_daiku_DL_007740[35];
extern StandardLimb object_daiku_Limb_007858;
extern StandardLimb object_daiku_Limb_007864;
extern StandardLimb object_daiku_Limb_007870;
extern StandardLimb object_daiku_Limb_00787C;
extern StandardLimb object_daiku_Limb_007888;
extern StandardLimb object_daiku_Limb_007894;
extern StandardLimb object_daiku_Limb_0078A0;
extern StandardLimb object_daiku_Limb_0078AC;
extern StandardLimb object_daiku_Limb_0078B8;
extern StandardLimb object_daiku_Limb_0078C4;
extern StandardLimb object_daiku_Limb_0078D0;
extern StandardLimb object_daiku_Limb_0078DC;
extern StandardLimb object_daiku_Limb_0078E8;
extern StandardLimb object_daiku_Limb_0078F4;
extern StandardLimb object_daiku_Limb_007900;
extern StandardLimb object_daiku_Limb_00790C;
extern void* object_daiku_Skel_007958_06007918_Limbs[];
typedef enum object_daiku_Skel_007958Limb {
    /*  0 */ LIMB_OBJECT_DAIKU_007958_NONE,
    /*  1 */ LIMB_OBJECT_DAIKU_007858,
    /*  2 */ LIMB_OBJECT_DAIKU_007864,
    /*  3 */ LIMB_OBJECT_DAIKU_007870,
    /*  4 */ LIMB_OBJECT_DAIKU_00787C,
    /*  5 */ LIMB_OBJECT_DAIKU_007888,
    /*  6 */ LIMB_OBJECT_DAIKU_007894,
    /*  7 */ LIMB_OBJECT_DAIKU_0078A0,
    /*  8 */ LIMB_OBJECT_DAIKU_0078AC,
    /*  9 */ LIMB_OBJECT_DAIKU_0078B8,
    /* 10 */ LIMB_OBJECT_DAIKU_0078C4,
    /* 11 */ LIMB_OBJECT_DAIKU_0078D0,
    /* 12 */ LIMB_OBJECT_DAIKU_0078DC,
    /* 13 */ LIMB_OBJECT_DAIKU_0078E8,
    /* 14 */ LIMB_OBJECT_DAIKU_0078F4,
    /* 15 */ LIMB_OBJECT_DAIKU_007900,
    /* 16 */ LIMB_OBJECT_DAIKU_00790C,
    /* 17 */ LIMB_OBJECT_DAIKU_007958_MAX
} object_daiku_Skel_007958Limb;
extern FlexSkeletonHeader object_daiku_Skel_007958;
extern s16 object_daiku_Anim_007DE0_06007970_FrameData[];
extern JointIndex object_daiku_Anim_007DE0_06007D78_JointIndices[];
extern AnimationHeader object_daiku_Anim_007DE0;
extern s16 object_daiku_Anim_008164_06007DF0_FrameData[];
extern JointIndex object_daiku_Anim_008164_060080FC_JointIndices[];
extern AnimationHeader object_daiku_Anim_008164;
extern s16 object_daiku_Anim_00885C_06008180_FrameData[];
extern JointIndex object_daiku_Anim_00885C_060087F4_JointIndices[];
extern AnimationHeader object_daiku_Anim_00885C;

#endif
