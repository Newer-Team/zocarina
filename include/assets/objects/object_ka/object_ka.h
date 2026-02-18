#ifndef OBJECT_KA_H
#define OBJECT_KA_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 object_ka_Anim_000214_06000000_FrameData[];
extern JointIndex object_ka_Anim_000214_0600016C_JointIndices[];
extern AnimationHeader object_ka_Anim_000214;
extern Vtx object_ka_Vtx_000230[];
extern Vtx object_ka_Vtx_000270[];
extern Vtx object_ka_Vtx_0002B0[];
extern Vtx object_ka_Vtx_0002F0[];
extern Vtx object_ka_Vtx_000330[];
extern Vtx object_ka_Vtx_000370[];
extern Vtx object_ka_Vtx_000420[];
extern Vtx object_ka_Vtx_0007B0[];
extern Vtx object_ka_Vtx_000920[];
extern Vtx object_ka_Vtx_000960[];
extern Vtx object_ka_Vtx_0009A0[];
extern Vtx object_ka_Vtx_0009E0[];
extern Vtx object_ka_Vtx_000B10[];
extern Vtx object_ka_Vtx_000C80[];
extern Vtx object_ka_Vtx_000CC0[];
extern Vtx object_ka_Vtx_000D00[];
extern Vtx object_ka_Vtx_000D40[];
extern Vtx object_ka_Vtx_000E70[];
extern Vtx object_ka_Vtx_0011F0[];
extern Vtx object_ka_Vtx_0013F0[];
extern Vtx object_ka_Vtx_001430[];
extern Vtx object_ka_Vtx_001470[];
extern Vtx object_ka_Vtx_0014B0[];
extern Gfx object_ka_DL_001550[22];
extern Gfx object_ka_DL_001600[59];
extern Gfx object_ka_DL_0017D8[20];
extern Gfx object_ka_DL_001878[20];
extern Gfx object_ka_DL_001918[20];
extern Gfx object_ka_DL_0019B8[100];
extern Gfx object_ka_DL_001CD8[82];
extern Gfx object_ka_DL_001F68[23];
extern Gfx object_ka_DL_002020[20];
extern Gfx object_ka_DL_0020C0[20];
extern Gfx object_ka_DL_002160[20];
extern Gfx object_ka_DL_002200[20];
extern Gfx object_ka_DL_0022A0[20];
extern Gfx object_ka_DL_002340[30];
extern Gfx object_ka_DL_002430[20];
extern Gfx object_ka_DL_0024D0[20];
extern Gfx object_ka_DL_002570[20];
extern Gfx object_ka_DL_002610[50];
extern Gfx object_ka_DL_0027A0[30];
extern Gfx object_ka_DL_002890[20];
extern Gfx object_ka_DL_002930[20];
extern Gfx object_ka_DL_0029D0[20];
extern Gfx object_ka_DL_002A70[50];
#define object_ka_Tex_002C00_WIDTH 32
#define object_ka_Tex_002C00_HEIGHT 32
extern u64 object_ka_Tex_002C00[TEX_LEN(u64, object_ka_Tex_002C00_WIDTH, object_ka_Tex_002C00_HEIGHT, 16)];
#define object_ka_Tex_003400_WIDTH 32
#define object_ka_Tex_003400_HEIGHT 32
extern u64 object_ka_Tex_003400[TEX_LEN(u64, object_ka_Tex_003400_WIDTH, object_ka_Tex_003400_HEIGHT, 16)];
#define object_ka_Tex_003C00_WIDTH 32
#define object_ka_Tex_003C00_HEIGHT 32
extern u64 object_ka_Tex_003C00[TEX_LEN(u64, object_ka_Tex_003C00_WIDTH, object_ka_Tex_003C00_HEIGHT, 16)];
#define object_ka_Tex_004400_WIDTH 32
#define object_ka_Tex_004400_HEIGHT 32
extern u64 object_ka_Tex_004400[TEX_LEN(u64, object_ka_Tex_004400_WIDTH, object_ka_Tex_004400_HEIGHT, 16)];
#define object_ka_Tex_004C00_WIDTH 32
#define object_ka_Tex_004C00_HEIGHT 32
extern u64 object_ka_Tex_004C00[TEX_LEN(u64, object_ka_Tex_004C00_WIDTH, object_ka_Tex_004C00_HEIGHT, 16)];
#define object_ka_Tex_005400_WIDTH 32
#define object_ka_Tex_005400_HEIGHT 32
extern u64 object_ka_Tex_005400[TEX_LEN(u64, object_ka_Tex_005400_WIDTH, object_ka_Tex_005400_HEIGHT, 16)];
#define object_ka_Tex_005C00_WIDTH 32
#define object_ka_Tex_005C00_HEIGHT 32
extern u64 object_ka_Tex_005C00[TEX_LEN(u64, object_ka_Tex_005C00_WIDTH, object_ka_Tex_005C00_HEIGHT, 16)];
extern StandardLimb object_ka_Limb_006400;
extern StandardLimb object_ka_Limb_00640C;
extern StandardLimb object_ka_Limb_006418;
extern StandardLimb object_ka_Limb_006424;
extern StandardLimb object_ka_Limb_006430;
extern StandardLimb object_ka_Limb_00643C;
extern StandardLimb object_ka_Limb_006448;
extern StandardLimb object_ka_Limb_006454;
extern StandardLimb object_ka_Limb_006460;
extern StandardLimb object_ka_Limb_00646C;
extern StandardLimb object_ka_Limb_006478;
extern StandardLimb object_ka_Limb_006484;
extern StandardLimb object_ka_Limb_006490;
extern StandardLimb object_ka_Limb_00649C;
extern StandardLimb object_ka_Limb_0064A8;
extern StandardLimb object_ka_Limb_0064B4;
extern StandardLimb object_ka_Limb_0064C0;
extern StandardLimb object_ka_Limb_0064CC;
extern StandardLimb object_ka_Limb_0064D8;
extern StandardLimb object_ka_Limb_0064E4;
extern StandardLimb object_ka_Limb_0064F0;
extern StandardLimb object_ka_Limb_0064FC;
extern StandardLimb object_ka_Limb_006508;
extern StandardLimb object_ka_Limb_006514;
extern StandardLimb object_ka_Limb_006520;
extern StandardLimb object_ka_Limb_00652C;
extern StandardLimb object_ka_Limb_006538;
extern void* object_ka_Skel_0065B0_06006544_Limbs[];
typedef enum object_ka_Skel_0065B0Limb {
    /*  0 */ LIMB_OBJECT_KA_0065B0_NONE,
    /*  1 */ LIMB_OBJECT_KA_006400,
    /*  2 */ LIMB_OBJECT_KA_00640C,
    /*  3 */ LIMB_OBJECT_KA_006418,
    /*  4 */ LIMB_OBJECT_KA_006424,
    /*  5 */ LIMB_OBJECT_KA_006430,
    /*  6 */ LIMB_OBJECT_KA_00643C,
    /*  7 */ LIMB_OBJECT_KA_006448,
    /*  8 */ LIMB_OBJECT_KA_006454,
    /*  9 */ LIMB_OBJECT_KA_006460,
    /* 10 */ LIMB_OBJECT_KA_00646C,
    /* 11 */ LIMB_OBJECT_KA_006478,
    /* 12 */ LIMB_OBJECT_KA_006484,
    /* 13 */ LIMB_OBJECT_KA_006490,
    /* 14 */ LIMB_OBJECT_KA_00649C,
    /* 15 */ LIMB_OBJECT_KA_0064A8,
    /* 16 */ LIMB_OBJECT_KA_0064B4,
    /* 17 */ LIMB_OBJECT_KA_0064C0,
    /* 18 */ LIMB_OBJECT_KA_0064CC,
    /* 19 */ LIMB_OBJECT_KA_0064D8,
    /* 20 */ LIMB_OBJECT_KA_0064E4,
    /* 21 */ LIMB_OBJECT_KA_0064F0,
    /* 22 */ LIMB_OBJECT_KA_0064FC,
    /* 23 */ LIMB_OBJECT_KA_006508,
    /* 24 */ LIMB_OBJECT_KA_006514,
    /* 25 */ LIMB_OBJECT_KA_006520,
    /* 26 */ LIMB_OBJECT_KA_00652C,
    /* 27 */ LIMB_OBJECT_KA_006538,
    /* 28 */ LIMB_OBJECT_KA_0065B0_MAX
} object_ka_Skel_0065B0Limb;
extern FlexSkeletonHeader object_ka_Skel_0065B0;
extern s16 object_ka_Anim_0067AC_060065C0_FrameData[];
extern JointIndex object_ka_Anim_0067AC_06006704_JointIndices[];
extern AnimationHeader object_ka_Anim_0067AC;

#endif
