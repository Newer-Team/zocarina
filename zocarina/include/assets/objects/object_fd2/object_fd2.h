#ifndef OBJECT_FD2_H
#define OBJECT_FD2_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern Vtx object_fd2_Vtx_000000[];
extern Vtx object_fd2_Vtx_000430[];
extern Vtx object_fd2_Vtx_0005A0[];
extern Vtx object_fd2_Vtx_0007A0[];
extern Vtx object_fd2_Vtx_0008E0[];
extern Vtx object_fd2_Vtx_000A20[];
extern Vtx object_fd2_Vtx_000AE0[];
extern Vtx object_fd2_Vtx_000B60[];
extern Vtx object_fd2_Vtx_000BB0[];
extern Vtx object_fd2_Vtx_000C30[];
extern Vtx object_fd2_Vtx_000CB0[];
extern Vtx object_fd2_Vtx_000D30[];
extern Vtx object_fd2_Vtx_000DC0[];
extern Vtx object_fd2_Vtx_000E40[];
extern Vtx object_fd2_Vtx_000E90[];
extern Vtx object_fd2_Vtx_000F10[];
extern Vtx object_fd2_Vtx_000F90[];
extern Gfx object_fd2_001010_DL[95];
extern Gfx object_fd2_001308_DL[27];
extern Gfx object_fd2_0013E0_DL[59];
extern Gfx object_fd2_0015B8_DL[25];
extern Gfx object_fd2_001680_DL[25];
extern Gfx object_fd2_001748_DL[50];
extern Gfx object_fd2_0018D8_DL[31];
extern Gfx object_fd2_0019D0_DL[28];
extern Gfx object_fd2_001AB0_DL[40];
extern Gfx object_fd2_001BF0_DL[40];
extern Gfx object_fd2_001D30_DL[40];
extern Gfx object_fd2_001E70_DL[32];
extern Gfx object_fd2_001F70_DL[31];
extern Gfx object_fd2_002068_DL[28];
extern Gfx object_fd2_002148_DL[40];
extern Gfx object_fd2_002288_DL[40];
extern Gfx object_fd2_0023C8_DL[40];
//#define gHoleVolvagiaEyeTLUT_TLUT_COUNT 256
extern u64 gHoleVolvagiaEyeTLUT[];
#define gHoleVolvagiaEyeHalfTex_WIDTH 32
#define gHoleVolvagiaEyeHalfTex_HEIGHT 32
extern u64 gHoleVolvagiaEyeHalfTex[TEX_LEN(u64, gHoleVolvagiaEyeHalfTex_WIDTH, gHoleVolvagiaEyeHalfTex_HEIGHT, 8)];
#define gHoleVolvagiaEyeOpenTex_WIDTH 32
#define gHoleVolvagiaEyeOpenTex_HEIGHT 32
extern u64 gHoleVolvagiaEyeOpenTex[TEX_LEN(u64, gHoleVolvagiaEyeOpenTex_WIDTH, gHoleVolvagiaEyeOpenTex_HEIGHT, 8)];
#define gHoleVolvagiaEyeClosedTex_WIDTH 32
#define gHoleVolvagiaEyeClosedTex_HEIGHT 32
extern u64 gHoleVolvagiaEyeClosedTex[TEX_LEN(u64, gHoleVolvagiaEyeClosedTex_WIDTH, gHoleVolvagiaEyeClosedTex_HEIGHT, 8)];
#define object_fd2_003308_Tex_WIDTH 32
#define object_fd2_003308_Tex_HEIGHT 32
extern u64 object_fd2_003308_Tex[TEX_LEN(u64, object_fd2_003308_Tex_WIDTH, object_fd2_003308_Tex_HEIGHT, 16)];
#define object_fd2_003B08_Tex_WIDTH 32
#define object_fd2_003B08_Tex_HEIGHT 32
extern u64 object_fd2_003B08_Tex[TEX_LEN(u64, object_fd2_003B08_Tex_WIDTH, object_fd2_003B08_Tex_HEIGHT, 16)];
#define object_fd2_004308_Tex_WIDTH 16
#define object_fd2_004308_Tex_HEIGHT 16
extern u64 object_fd2_004308_Tex[TEX_LEN(u64, object_fd2_004308_Tex_WIDTH, object_fd2_004308_Tex_HEIGHT, 16)];
#define object_fd2_004508_Tex_WIDTH 16
#define object_fd2_004508_Tex_HEIGHT 16
extern u64 object_fd2_004508_Tex[TEX_LEN(u64, object_fd2_004508_Tex_WIDTH, object_fd2_004508_Tex_HEIGHT, 16)];
#define object_fd2_004708_Tex_WIDTH 16
#define object_fd2_004708_Tex_HEIGHT 16
extern u64 object_fd2_004708_Tex[TEX_LEN(u64, object_fd2_004708_Tex_WIDTH, object_fd2_004708_Tex_HEIGHT, 16)];
#define object_fd2_004908_Tex_WIDTH 16
#define object_fd2_004908_Tex_HEIGHT 16
extern u64 object_fd2_004908_Tex[TEX_LEN(u64, object_fd2_004908_Tex_WIDTH, object_fd2_004908_Tex_HEIGHT, 16)];
extern Vtx gHoleVolvagiaManeModelVtx[];
extern Gfx gHoleVolvagiaManeMaterialDL[16];
extern Gfx gHoleVolvagiaManeModelDL[4];
#define object_fd2_004BE8_Tex_WIDTH 16
#define object_fd2_004BE8_Tex_HEIGHT 16
extern u64 object_fd2_004BE8_Tex[TEX_LEN(u64, object_fd2_004BE8_Tex_WIDTH, object_fd2_004BE8_Tex_HEIGHT, 8)];
extern Vtx gHoleVolvagiaBrokenFaceVtx[];
extern Gfx gHoleVolvagiaBrokenFaceDL[45];
#define object_fd2_004FA0_Tex_WIDTH 16
#define object_fd2_004FA0_Tex_HEIGHT 16
extern u64 object_fd2_004FA0_Tex[TEX_LEN(u64, object_fd2_004FA0_Tex_WIDTH, object_fd2_004FA0_Tex_HEIGHT, 16)];
#define object_fd2_0051A0_Tex_WIDTH 16
#define object_fd2_0051A0_Tex_HEIGHT 16
extern u64 object_fd2_0051A0_Tex[TEX_LEN(u64, object_fd2_0051A0_Tex_WIDTH, object_fd2_0051A0_Tex_HEIGHT, 16)];
#define object_fd2_0053A0_Tex_WIDTH 16
#define object_fd2_0053A0_Tex_HEIGHT 16
extern u64 object_fd2_0053A0_Tex[TEX_LEN(u64, object_fd2_0053A0_Tex_WIDTH, object_fd2_0053A0_Tex_HEIGHT, 16)];
extern s16 gHoleVolvagiaBreatheFireFrameData[];
extern JointIndex gHoleVolvagiaBreatheFireJointIndices[];
extern AnimationHeader gHoleVolvagiaBreatheFireAnim;
extern s16 gHoleVolvagiaHitFrameData[];
extern JointIndex gHoleVolvagiaHitJointIndices[];
extern AnimationHeader gHoleVolvagiaHitAnim;
extern s16 gHoleVolvagiaDamagedFrameData[];
extern JointIndex gHoleVolvagiaDamagedJointIndices[];
extern AnimationHeader gHoleVolvagiaDamagedAnim;
extern s16 gHoleVolvagiaBurrowFrameData[];
extern JointIndex gHoleVolvagiaBurrowJointIndices[];
extern AnimationHeader gHoleVolvagiaBurrowAnim;
extern s16 gHoleVolvagiaKnockoutFrameData[];
extern JointIndex gHoleVolvagiaKnockoutJointIndices[];
extern AnimationHeader gHoleVolvagiaKnockoutAnim;
extern s16 gHoleVolvagiaVulnerableFrameData[];
extern JointIndex gHoleVolvagiaVulnerableJointIndices[];
extern AnimationHeader gHoleVolvagiaVulnerableAnim;
extern s16 gHoleVolvagiaTurnFrameData[];
extern JointIndex gHoleVolvagiaTurnJointIndices[];
extern AnimationHeader gHoleVolvagiaTurnAnim;
extern s16 gHoleVolvagiaClawSwipeFrameData[];
extern JointIndex gHoleVolvagiaClawSwipeJointIndices[];
extern AnimationHeader gHoleVolvagiaClawSwipeAnim;
extern s16 gHoleVolvagiaEmergeFrameData[];
extern JointIndex gHoleVolvagiaEmergeJointIndices[];
extern AnimationHeader gHoleVolvagiaEmergeAnim;
extern s16 gHoleVolvagiaIdleFrameData[];
extern JointIndex gHoleVolvagiaIdleJointIndices[];
extern AnimationHeader gHoleVolvagiaIdleAnim;
extern s16 gHoleVolvagiaAnim_00CDAC_0600C900_FrameData[];
extern JointIndex gHoleVolvagiaAnim_00CDAC_0600CCCC_JointIndices[];
extern AnimationHeader gHoleVolvagiaAnim_00CDAC;
extern Vtx object_fd2_Vtx_00CDC0[];
extern Vtx gHoleVolvagiaVtx_00D000[];
extern Vtx object_fd2_Vtx_00D960[];
extern Vtx gHoleVolvagiaVtx_00DD80[];
extern Vtx object_fd2_Vtx_00E720[];
extern Vtx object_fd2_Vtx_00E8B0[];
extern Vtx object_fd2_Vtx_00EA40[];
extern Vtx object_fd2_Vtx_00EBD0[];
extern Vtx object_fd2_Vtx_00ED70[];
extern Vtx object_fd2_Vtx_00EF00[];
extern Vtx object_fd2_Vtx_00F090[];
extern Vtx object_fd2_Vtx_00F220[];
extern Vtx object_fd2_Vtx_00F360[];
extern Vtx object_fd2_Vtx_00F4F0[];
extern Vtx object_fd2_Vtx_00F690[];
extern Vtx object_fd2_Vtx_00F7D0[];
extern Vtx object_fd2_Vtx_00F920[];
extern Vtx object_fd2_Vtx_00FAB0[];
extern Vtx object_fd2_Vtx_00FC50[];
extern Vtx object_fd2_Vtx_00FDE0[];
extern Gfx object_fd2_00FF70_DL[32];
extern Gfx object_fd2_010070_DL[44];
extern Gfx object_fd2_0101D0_DL[44];
extern Gfx object_fd2_010330_DL[44];
extern Gfx object_fd2_010490_DL[45];
extern Gfx object_fd2_0105F8_DL[44];
extern Gfx object_fd2_010758_DL[43];
extern Gfx object_fd2_0108B0_DL[44];
extern Gfx object_fd2_010A10_DL[55];
extern Gfx object_fd2_010BC8_DL[47];
extern Gfx object_fd2_010D40_DL[43];
extern Gfx object_fd2_010E98_DL[44];
extern Gfx object_fd2_010FF8_DL[45];
extern Gfx object_fd2_011160_DL[44];
extern Gfx object_fd2_0112C0_DL[42];
extern Gfx object_fd2_011410_DL[42];
extern Gfx object_fd2_011560_DL[43];
extern Gfx object_fd2_0116B8_DL[48];
extern StandardLimb object_fd2_011838_Limb;
extern StandardLimb object_fd2_011844_Limb;
extern StandardLimb object_fd2_011850_Limb;
extern StandardLimb object_fd2_01185C_Limb;
extern StandardLimb object_fd2_011868_Limb;
extern StandardLimb object_fd2_011874_Limb;
extern StandardLimb object_fd2_011880_Limb;
extern StandardLimb object_fd2_01188C_Limb;
extern StandardLimb object_fd2_011898_Limb;
extern StandardLimb object_fd2_0118A4_Limb;
extern StandardLimb object_fd2_0118B0_Limb;
extern StandardLimb object_fd2_0118BC_Limb;
extern StandardLimb object_fd2_0118C8_Limb;
extern StandardLimb object_fd2_0118D4_Limb;
extern StandardLimb object_fd2_0118E0_Limb;
extern StandardLimb object_fd2_0118EC_Limb;
extern StandardLimb object_fd2_0118F8_Limb;
extern StandardLimb object_fd2_011904_Limb;
extern StandardLimb object_fd2_011910_Limb;
extern StandardLimb object_fd2_01191C_Limb;
extern StandardLimb object_fd2_011928_Limb;
extern StandardLimb object_fd2_011934_Limb;
extern StandardLimb object_fd2_011940_Limb;
extern StandardLimb object_fd2_01194C_Limb;
extern StandardLimb object_fd2_011958_Limb;
extern StandardLimb object_fd2_011964_Limb;
extern StandardLimb object_fd2_011970_Limb;
extern StandardLimb object_fd2_01197C_Limb;
extern StandardLimb object_fd2_011988_Limb;
extern StandardLimb object_fd2_011994_Limb;
extern StandardLimb object_fd2_0119A0_Limb;
extern StandardLimb object_fd2_0119AC_Limb;
extern StandardLimb object_fd2_0119B8_Limb;
extern StandardLimb object_fd2_0119C4_Limb;
extern StandardLimb object_fd2_0119D0_Limb;
extern StandardLimb object_fd2_0119DC_Limb;
extern void* gHoleVolvagiaLimbs[];
typedef enum gHoleVolvagiaSkelLimb {
    /*  0 */ LIMB_OBJECT_FD2_011A78_NONE,
    /*  1 */ LIMB_OBJECT_FD2_011838,
    /*  2 */ LIMB_OBJECT_FD2_011844,
    /*  3 */ LIMB_OBJECT_FD2_011850,
    /*  4 */ LIMB_OBJECT_FD2_01185C,
    /*  5 */ LIMB_OBJECT_FD2_011868,
    /*  6 */ LIMB_OBJECT_FD2_011874,
    /*  7 */ LIMB_OBJECT_FD2_011880,
    /*  8 */ LIMB_OBJECT_FD2_01188C,
    /*  9 */ LIMB_OBJECT_FD2_011898,
    /* 10 */ LIMB_OBJECT_FD2_0118A4,
    /* 11 */ LIMB_OBJECT_FD2_0118B0,
    /* 12 */ LIMB_OBJECT_FD2_0118BC,
    /* 13 */ LIMB_OBJECT_FD2_0118C8,
    /* 14 */ LIMB_OBJECT_FD2_0118D4,
    /* 15 */ LIMB_OBJECT_FD2_0118E0,
    /* 16 */ LIMB_OBJECT_FD2_0118EC,
    /* 17 */ LIMB_OBJECT_FD2_0118F8,
    /* 18 */ LIMB_OBJECT_FD2_011904,
    /* 19 */ LIMB_OBJECT_FD2_011910,
    /* 20 */ LIMB_OBJECT_FD2_01191C,
    /* 21 */ LIMB_OBJECT_FD2_011928,
    /* 22 */ LIMB_OBJECT_FD2_011934,
    /* 23 */ LIMB_OBJECT_FD2_011940,
    /* 24 */ LIMB_OBJECT_FD2_01194C,
    /* 25 */ LIMB_OBJECT_FD2_011958,
    /* 26 */ LIMB_OBJECT_FD2_011964,
    /* 27 */ LIMB_OBJECT_FD2_011970,
    /* 28 */ LIMB_OBJECT_FD2_01197C,
    /* 29 */ LIMB_OBJECT_FD2_011988,
    /* 30 */ LIMB_OBJECT_FD2_011994,
    /* 31 */ LIMB_OBJECT_FD2_0119A0,
    /* 32 */ LIMB_OBJECT_FD2_0119AC,
    /* 33 */ LIMB_OBJECT_FD2_0119B8,
    /* 34 */ LIMB_OBJECT_FD2_0119C4,
    /* 35 */ LIMB_OBJECT_FD2_0119D0,
    /* 36 */ LIMB_OBJECT_FD2_0119DC,
    /* 37 */ LIMB_OBJECT_FD2_011A78_MAX
} gHoleVolvagiaSkelLimb;
extern FlexSkeletonHeader gHoleVolvagiaSkel;

#endif
