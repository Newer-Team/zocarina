#ifndef OBJECT_MM_H
#define OBJECT_MM_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gRunningManSprintFrameData[];
extern JointIndex gRunningManSprintJointIndices[];
extern AnimationHeader gRunningManSprintAnim;
extern s16 gRunningManRunFrameData[];
extern JointIndex gRunningManRunJointIndices[];
extern AnimationHeader gRunningManRunAnim;
//#define gRunningManTLUT_TLUT_COUNT 256
extern u64 gRunningManTLUT[];
#define object_mm_000930_Tex_WIDTH 8
#define object_mm_000930_Tex_HEIGHT 8
extern u64 object_mm_000930_Tex[TEX_LEN(u64, object_mm_000930_Tex_WIDTH, object_mm_000930_Tex_HEIGHT, 8)];
#define object_mm_000970_Tex_WIDTH 8
#define object_mm_000970_Tex_HEIGHT 8
extern u64 object_mm_000970_Tex[TEX_LEN(u64, object_mm_000970_Tex_WIDTH, object_mm_000970_Tex_HEIGHT, 8)];
#define object_mm_0009B0_Tex_WIDTH 8
#define object_mm_0009B0_Tex_HEIGHT 8
extern u64 object_mm_0009B0_Tex[TEX_LEN(u64, object_mm_0009B0_Tex_WIDTH, object_mm_0009B0_Tex_HEIGHT, 8)];
#define object_mm_0009F0_Tex_WIDTH 8
#define object_mm_0009F0_Tex_HEIGHT 8
extern u64 object_mm_0009F0_Tex[TEX_LEN(u64, object_mm_0009F0_Tex_WIDTH, object_mm_0009F0_Tex_HEIGHT, 8)];
#define object_mm_000A30_Tex_WIDTH 16
#define object_mm_000A30_Tex_HEIGHT 16
extern u64 object_mm_000A30_Tex[TEX_LEN(u64, object_mm_000A30_Tex_WIDTH, object_mm_000A30_Tex_HEIGHT, 8)];
#define object_mm_000B30_Tex_WIDTH 16
#define object_mm_000B30_Tex_HEIGHT 16
extern u64 object_mm_000B30_Tex[TEX_LEN(u64, object_mm_000B30_Tex_WIDTH, object_mm_000B30_Tex_HEIGHT, 8)];
#define gRunningManMouthClosedTex_WIDTH 32
#define gRunningManMouthClosedTex_HEIGHT 16
extern u64 gRunningManMouthClosedTex[TEX_LEN(u64, gRunningManMouthClosedTex_WIDTH, gRunningManMouthClosedTex_HEIGHT, 8)];
#define gRunningManMouthOpenTex_WIDTH 32
#define gRunningManMouthOpenTex_HEIGHT 16
extern u64 gRunningManMouthOpenTex[TEX_LEN(u64, gRunningManMouthOpenTex_WIDTH, gRunningManMouthOpenTex_HEIGHT, 8)];
#define object_mm_001030_Tex_WIDTH 16
#define object_mm_001030_Tex_HEIGHT 16
extern u64 object_mm_001030_Tex[TEX_LEN(u64, object_mm_001030_Tex_WIDTH, object_mm_001030_Tex_HEIGHT, 8)];
#define object_mm_001130_Tex_WIDTH 32
#define object_mm_001130_Tex_HEIGHT 16
extern u64 object_mm_001130_Tex[TEX_LEN(u64, object_mm_001130_Tex_WIDTH, object_mm_001130_Tex_HEIGHT, 8)];
#define object_mm_001330_Tex_WIDTH 16
#define object_mm_001330_Tex_HEIGHT 16
extern u64 object_mm_001330_Tex[TEX_LEN(u64, object_mm_001330_Tex_WIDTH, object_mm_001330_Tex_HEIGHT, 8)];
extern Vtx object_mm_Vtx_001430[];
extern Vtx object_mm_Vtx_001E10[];
extern Vtx object_mm_Vtx_0020D0[];
extern Vtx object_mm_Vtx_002310[];
extern Vtx object_mm_Vtx_0024B0[];
extern Vtx object_mm_Vtx_002770[];
extern Vtx object_mm_Vtx_0029B0[];
extern Vtx object_mm_Vtx_002B50[];
extern Vtx object_mm_Vtx_002FD0[];
extern Vtx object_mm_Vtx_003230[];
extern Vtx object_mm_Vtx_003520[];
extern Vtx object_mm_Vtx_003770[];
extern Vtx object_mm_Vtx_0039D0[];
extern Vtx object_mm_Vtx_003CC0[];
extern Vtx object_mm_Vtx_003F10[];
extern Gfx object_mm_004010_DL[103];
extern Gfx object_mm_004348_DL[228];
extern Gfx object_mm_004A68_DL[38];
extern Gfx object_mm_004B98_DL[38];
extern Gfx object_mm_004CC8_DL[64];
extern Gfx object_mm_004EC8_DL[38];
extern Gfx object_mm_004FF8_DL[38];
extern Gfx object_mm_005128_DL[64];
extern Gfx object_mm_005328_DL[19];
extern Gfx object_mm_0053C0_DL[76];
extern Gfx object_mm_005620_DL[45];
extern Gfx object_mm_005788_DL[38];
extern Gfx object_mm_0058B8_DL[59];
extern Gfx object_mm_005A90_DL[45];
extern Gfx object_mm_005BF8_DL[38];
extern StandardLimb object_mm_005D28_Limb;
extern StandardLimb object_mm_005D34_Limb;
extern StandardLimb object_mm_005D40_Limb;
extern StandardLimb object_mm_005D4C_Limb;
extern StandardLimb object_mm_005D58_Limb;
extern StandardLimb object_mm_005D64_Limb;
extern StandardLimb object_mm_005D70_Limb;
extern StandardLimb object_mm_005D7C_Limb;
extern StandardLimb object_mm_005D88_Limb;
extern StandardLimb object_mm_005D94_Limb;
extern StandardLimb object_mm_005DA0_Limb;
extern StandardLimb object_mm_005DAC_Limb;
extern StandardLimb object_mm_005DB8_Limb;
extern StandardLimb object_mm_005DC4_Limb;
extern StandardLimb object_mm_005DD0_Limb;
extern void* gRunningManLimbs[];
typedef enum gRunningManSkelLimb {
    /*  0 */ LIMB_OBJECT_MM_005E18_NONE,
    /*  1 */ LIMB_OBJECT_MM_005D28,
    /*  2 */ LIMB_OBJECT_MM_005D34,
    /*  3 */ LIMB_OBJECT_MM_005D40,
    /*  4 */ LIMB_OBJECT_MM_005D4C,
    /*  5 */ LIMB_OBJECT_MM_005D58,
    /*  6 */ LIMB_OBJECT_MM_005D64,
    /*  7 */ LIMB_OBJECT_MM_005D70,
    /*  8 */ LIMB_OBJECT_MM_005D7C,
    /*  9 */ LIMB_OBJECT_MM_005D88,
    /* 10 */ LIMB_OBJECT_MM_005D94,
    /* 11 */ LIMB_OBJECT_MM_005DA0,
    /* 12 */ LIMB_OBJECT_MM_005DAC,
    /* 13 */ LIMB_OBJECT_MM_005DB8,
    /* 14 */ LIMB_OBJECT_MM_005DC4,
    /* 15 */ LIMB_OBJECT_MM_005DD0,
    /* 16 */ LIMB_OBJECT_MM_005E18_MAX
} gRunningManSkelLimb;
extern FlexSkeletonHeader gRunningManSkel;
extern s16 gRunningManSitStandFrameData[];
extern JointIndex gRunningManSitStandJointIndices[];
extern AnimationHeader gRunningManSitStandAnim;
extern s16 gRunningManSitWaitFrameData[];
extern JointIndex gRunningManSitWaitJointIndices[];
extern AnimationHeader gRunningManSitWaitAnim;
extern s16 gRunningManExcitedFrameData[];
extern JointIndex gRunningManExcitedJointIndices[];
extern AnimationHeader gRunningManExcitedAnim;
extern s16 gRunningManHappyFrameData[];
extern JointIndex gRunningManHappyJointIndices[];
extern AnimationHeader gRunningManHappyAnim;

#endif
