#ifndef OBJECT_MB_H
#define OBJECT_MB_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gEnMbSpearFallFaceDownFrameData[];
extern JointIndex gEnMbSpearFallFaceDownJointIndices[];
extern AnimationHeader gEnMbSpearFallFaceDownAnim;
extern s16 gEnMbSpearDamagedFromBehindFrameData[];
extern JointIndex gEnMbSpearDamagedFromBehindJointIndices[];
extern AnimationHeader gEnMbSpearDamagedFromBehindAnim;
extern s16 gEnMbSpearDamagedUngrabSpearFrameData[];
extern JointIndex gEnMbSpearDamagedUngrabSpearJointIndices[];
extern AnimationHeader gEnMbSpearDamagedUngrabSpearAnim;
extern s16 gEnMbSpearFallOnItsBackFrameData[];
extern JointIndex gEnMbSpearFallOnItsBackJointIndices[];
extern AnimationHeader gEnMbSpearFallOnItsBackAnim;
extern s16 gEnMbSpearDamagedFromFrontFrameData[];
extern JointIndex gEnMbSpearDamagedFromFrontJointIndices[];
extern AnimationHeader gEnMbSpearDamagedFromFrontAnim;
extern s16 gEnMbSpearStandStillFrameData[];
extern JointIndex gEnMbSpearStandStillJointIndices[];
extern AnimationHeader gEnMbSpearStandStillAnim;
extern s16 gEnMbSpearPrepareChargeFrameData[];
extern JointIndex gEnMbSpearPrepareChargeJointIndices[];
extern AnimationHeader gEnMbSpearPrepareChargeAnim;
extern s16 gEnMbSpearChargeFrameData[];
extern JointIndex gEnMbSpearChargeJointIndices[];
extern AnimationHeader gEnMbSpearChargeAnim;
extern s16 gEnMbSpearLookLeftAndRightFrameData[];
extern JointIndex gEnMbSpearLookLeftAndRightJointIndices[];
extern AnimationHeader gEnMbSpearLookLeftAndRightAnim;
extern Vtx object_mb_Vtx_0041C0[];
extern Vtx object_mb_Vtx_004410[];
extern Vtx object_mb_Vtx_004620[];
extern Vtx object_mb_Vtx_004840[];
extern Vtx object_mb_Vtx_004A90[];
extern Vtx object_mb_Vtx_004CA0[];
extern Vtx object_mb_Vtx_004EC0[];
extern Vtx object_mb_Vtx_0053E0[];
extern Vtx object_mb_Vtx_005790[];
extern Vtx object_mb_Vtx_0059D0[];
extern Vtx object_mb_Vtx_005C20[];
extern Vtx object_mb_Vtx_005ED0[];
extern Vtx object_mb_Vtx_006110[];
extern Vtx object_mb_Vtx_006360[];
extern Vtx object_mb_Vtx_0067D0[];
extern Gfx gEnMbDL_006930[29];
extern Gfx gEnMbDL_006A18[33];
extern Gfx gEnMbDL_006B20[54];
extern Gfx gEnMbDL_006CD0[33];
extern Gfx gEnMbDL_006DD8[33];
extern Gfx gEnMbDL_006EE0[54];
extern Gfx gEnMbDL_007090[33];
extern Gfx gEnMbDL_007198[75];
extern Gfx gEnMbDL_0073F0[34];
extern Gfx gEnMbDL_007500[57];
extern Gfx gEnMbDL_0076C8[38];
extern Gfx gEnMbDL_0077F8[34];
extern Gfx object_mb_007908_DL[57];
extern Gfx gEnMbDL_007AD0[116];
extern Gfx gEnMbDL_007E70[87];
#define object_mb_008128_Tex_WIDTH 16
#define object_mb_008128_Tex_HEIGHT 16
extern u64 object_mb_008128_Tex[TEX_LEN(u64, object_mb_008128_Tex_WIDTH, object_mb_008128_Tex_HEIGHT, 16)];
#define object_mb_008328_Tex_WIDTH 8
#define object_mb_008328_Tex_HEIGHT 32
extern u64 object_mb_008328_Tex[TEX_LEN(u64, object_mb_008328_Tex_WIDTH, object_mb_008328_Tex_HEIGHT, 16)];
#define gEnMbFaceTex_WIDTH 16
#define gEnMbFaceTex_HEIGHT 32
extern u64 gEnMbFaceTex[TEX_LEN(u64, gEnMbFaceTex_WIDTH, gEnMbFaceTex_HEIGHT, 16)];
#define object_mb_008928_Tex_WIDTH 8
#define object_mb_008928_Tex_HEIGHT 16
extern u64 object_mb_008928_Tex[TEX_LEN(u64, object_mb_008928_Tex_WIDTH, object_mb_008928_Tex_HEIGHT, 16)];
#define object_mb_008A28_Tex_WIDTH 4
#define object_mb_008A28_Tex_HEIGHT 4
extern u64 object_mb_008A28_Tex[TEX_LEN(u64, object_mb_008A28_Tex_WIDTH, object_mb_008A28_Tex_HEIGHT, 16)];
#define object_mb_008A48_Tex_WIDTH 8
#define object_mb_008A48_Tex_HEIGHT 24
extern u64 object_mb_008A48_Tex[TEX_LEN(u64, object_mb_008A48_Tex_WIDTH, object_mb_008A48_Tex_HEIGHT, 16)];
#define object_mb_008BC8_Tex_WIDTH 4
#define object_mb_008BC8_Tex_HEIGHT 16
extern u64 object_mb_008BC8_Tex[TEX_LEN(u64, object_mb_008BC8_Tex_WIDTH, object_mb_008BC8_Tex_HEIGHT, 16)];
#define object_mb_008C48_Tex_WIDTH 4
#define object_mb_008C48_Tex_HEIGHT 8
extern u64 object_mb_008C48_Tex[TEX_LEN(u64, object_mb_008C48_Tex_WIDTH, object_mb_008C48_Tex_HEIGHT, 16)];
#define object_mb_008C88_Tex_WIDTH 8
#define object_mb_008C88_Tex_HEIGHT 16
extern u64 object_mb_008C88_Tex[TEX_LEN(u64, object_mb_008C88_Tex_WIDTH, object_mb_008C88_Tex_HEIGHT, 16)];
extern StandardLimb object_mb_008D88_Limb;
extern StandardLimb object_mb_008D94_Limb;
extern StandardLimb object_mb_008DA0_Limb;
extern StandardLimb object_mb_008DAC_Limb;
extern StandardLimb object_mb_008DB8_Limb;
extern StandardLimb object_mb_008DC4_Limb;
extern StandardLimb object_mb_008DD0_Limb;
extern StandardLimb object_mb_008DDC_Limb;
extern StandardLimb object_mb_008DE8_Limb;
extern StandardLimb object_mb_008DF4_Limb;
extern StandardLimb object_mb_008E00_Limb;
extern StandardLimb object_mb_008E0C_Limb;
extern StandardLimb object_mb_008E18_Limb;
extern StandardLimb object_mb_008E24_Limb;
extern StandardLimb object_mb_008E30_Limb;
extern StandardLimb object_mb_008E3C_Limb;
extern StandardLimb object_mb_008E48_Limb;
extern StandardLimb object_mb_008E54_Limb;
extern StandardLimb object_mb_008E60_Limb;
extern StandardLimb object_mb_008E6C_Limb;
extern StandardLimb object_mb_008E78_Limb;
extern StandardLimb object_mb_008E84_Limb;
extern StandardLimb object_mb_008E90_Limb;
extern StandardLimb object_mb_008E9C_Limb;
extern StandardLimb object_mb_008EA8_Limb;
extern StandardLimb object_mb_008EB4_Limb;
extern StandardLimb object_mb_008EC0_Limb;
extern void* gEnMbSpearLimbs[];
typedef enum gEnMbSpearSkelLimb {
    /*  0 */ LIMB_OBJECT_MB_008F38_NONE,
    /*  1 */ LIMB_OBJECT_MB_008D88,
    /*  2 */ LIMB_OBJECT_MB_008D94,
    /*  3 */ LIMB_OBJECT_MB_008DA0,
    /*  4 */ LIMB_OBJECT_MB_008DAC,
    /*  5 */ LIMB_OBJECT_MB_008DB8,
    /*  6 */ LIMB_OBJECT_MB_008DC4,
    /*  7 */ LIMB_OBJECT_MB_008DD0,
    /*  8 */ LIMB_OBJECT_MB_008DDC,
    /*  9 */ LIMB_OBJECT_MB_008DE8,
    /* 10 */ LIMB_OBJECT_MB_008DF4,
    /* 11 */ LIMB_OBJECT_MB_008E00,
    /* 12 */ LIMB_OBJECT_MB_008E0C,
    /* 13 */ LIMB_OBJECT_MB_008E18,
    /* 14 */ LIMB_OBJECT_MB_008E24,
    /* 15 */ LIMB_OBJECT_MB_008E30,
    /* 16 */ LIMB_OBJECT_MB_008E3C,
    /* 17 */ LIMB_OBJECT_MB_008E48,
    /* 18 */ LIMB_OBJECT_MB_008E54,
    /* 19 */ LIMB_OBJECT_MB_008E60,
    /* 20 */ LIMB_OBJECT_MB_008E6C,
    /* 21 */ LIMB_OBJECT_MB_008E78,
    /* 22 */ LIMB_OBJECT_MB_008E84,
    /* 23 */ LIMB_OBJECT_MB_008E90,
    /* 24 */ LIMB_OBJECT_MB_008E9C,
    /* 25 */ LIMB_OBJECT_MB_008EA8,
    /* 26 */ LIMB_OBJECT_MB_008EB4,
    /* 27 */ LIMB_OBJECT_MB_008EC0,
    /* 28 */ LIMB_OBJECT_MB_008F38_MAX
} gEnMbSpearSkelLimb;
extern FlexSkeletonHeader gEnMbSpearSkel;
extern s16 gEnMbSpearSlowDownFrameData[];
extern JointIndex gEnMbSpearSlowDownJointIndices[];
extern AnimationHeader gEnMbSpearSlowDownAnim;
extern s16 gEnMbSpearLookLeftFrameData[];
extern JointIndex gEnMbSpearLookLeftJointIndices[];
extern AnimationHeader gEnMbSpearLookLeftAnim;
extern s16 gEnMbSpearWalkFrameData[];
extern JointIndex gEnMbSpearWalkJointIndices[];
extern AnimationHeader gEnMbSpearWalkAnim;
extern s16 gEnMbSpearUngrabSpearFrameData[];
extern JointIndex gEnMbSpearUngrabSpearJointIndices[];
extern AnimationHeader gEnMbSpearUngrabSpearAnim;
extern s16 gEnMbSpearGrabSpearFrameData[];
extern JointIndex gEnMbSpearGrabSpearJointIndices[];
extern AnimationHeader gEnMbSpearGrabSpearAnim;
extern s16 gEnMbClubStrikeDownFrameData[];
extern JointIndex gEnMbClubStrikeDownJointIndices[];
extern AnimationHeader gEnMbClubStrikeDownAnim;
extern s16 gEnMbClubLiftClubFrameData[];
extern JointIndex gEnMbClubLiftClubJointIndices[];
extern AnimationHeader gEnMbClubLiftClubAnim;
extern s16 gEnMbClubFallOnItsBackFrameData[];
extern JointIndex gEnMbClubFallOnItsBackJointIndices[];
extern AnimationHeader gEnMbClubFallOnItsBackAnim;
extern s16 gEnMbClubDamagedKneelFrameData[];
extern JointIndex gEnMbClubDamagedKneelJointIndices[];
extern AnimationHeader gEnMbClubDamagedKneelAnim;
extern s16 gEnMbClubStandStillClubUpFrameData[];
extern JointIndex gEnMbClubStandStillClubUpJointIndices[];
extern AnimationHeader gEnMbClubStandStillClubUpAnim;
extern s16 gEnMbClubKneelingFrameData[];
extern JointIndex gEnMbClubKneelingJointIndices[];
extern AnimationHeader gEnMbClubKneelingAnim;
extern s16 gEnMbClubBeatenKneelingFrameData[];
extern JointIndex gEnMbClubBeatenKneelingJointIndices[];
extern AnimationHeader gEnMbClubBeatenKneelingAnim;
extern s16 gEnMbClubStandUpFrameData[];
extern JointIndex gEnMbClubStandUpJointIndices[];
extern AnimationHeader gEnMbClubStandUpAnim;
extern s16 gEnMbClubStandStillClubDownFrameData[];
extern JointIndex gEnMbClubStandStillClubDownJointIndices[];
extern AnimationHeader gEnMbClubStandStillClubDownAnim;
#define object_mb_00EC00_Tex_WIDTH 16
#define object_mb_00EC00_Tex_HEIGHT 16
extern u64 object_mb_00EC00_Tex[TEX_LEN(u64, object_mb_00EC00_Tex_WIDTH, object_mb_00EC00_Tex_HEIGHT, 16)];
#define object_mb_00EE00_Tex_WIDTH 8
#define object_mb_00EE00_Tex_HEIGHT 16
extern u64 object_mb_00EE00_Tex[TEX_LEN(u64, object_mb_00EE00_Tex_WIDTH, object_mb_00EE00_Tex_HEIGHT, 16)];
#define object_mb_00EF00_Tex_WIDTH 8
#define object_mb_00EF00_Tex_HEIGHT 16
extern u64 object_mb_00EF00_Tex[TEX_LEN(u64, object_mb_00EF00_Tex_WIDTH, object_mb_00EF00_Tex_HEIGHT, 16)];
#define object_mb_00F000_Tex_WIDTH 16
#define object_mb_00F000_Tex_HEIGHT 16
extern u64 object_mb_00F000_Tex[TEX_LEN(u64, object_mb_00F000_Tex_WIDTH, object_mb_00F000_Tex_HEIGHT, 16)];
#define object_mb_00F200_Tex_WIDTH 4
#define object_mb_00F200_Tex_HEIGHT 16
extern u64 object_mb_00F200_Tex[TEX_LEN(u64, object_mb_00F200_Tex_WIDTH, object_mb_00F200_Tex_HEIGHT, 16)];
#define object_mb_00F280_Tex_WIDTH 4
#define object_mb_00F280_Tex_HEIGHT 16
extern u64 object_mb_00F280_Tex[TEX_LEN(u64, object_mb_00F280_Tex_WIDTH, object_mb_00F280_Tex_HEIGHT, 16)];
extern Vtx object_mb_Vtx_00F300[];
extern Vtx object_mb_Vtx_00F550[];
extern Vtx object_mb_Vtx_00F870[];
extern Vtx object_mb_Vtx_00FAB0[];
extern Vtx object_mb_Vtx_00FD00[];
extern Vtx object_mb_Vtx_010020[];
extern Vtx object_mb_Vtx_010260[];
extern Vtx object_mb_Vtx_010810[];
extern Vtx object_mb_Vtx_010BD0[];
extern Vtx object_mb_Vtx_010F30[];
extern Vtx object_mb_Vtx_011330[];
extern Vtx object_mb_Vtx_0115E0[];
extern Vtx object_mb_Vtx_011940[];
extern Vtx object_mb_Vtx_011D40[];
extern Vtx object_mb_Vtx_0122E0[];
extern Gfx gEnMbDL_012580[35];
extern Gfx gEnMbDL_012698[58];
extern Gfx gEnMbDL_012868[54];
extern Gfx gEnMbDL_012A18[33];
extern Gfx gEnMbDL_012B20[58];
extern Gfx gEnMbDL_012CF0[54];
extern Gfx gEnMbDL_012EA0[33];
extern Gfx gEnMbDL_012FA8[38];
extern Gfx gEnMbDL_0130D8[42];
extern Gfx gEnMbDL_013228[67];
extern Gfx gEnMbDL_013440[81];
extern Gfx gEnMbDL_0136C8[42];
extern Gfx gEnMbDL_013818[67];
extern Gfx gEnMbDL_013A30[120];
extern Gfx gEnMbDL_013DF0[62];
extern StandardLimb object_mb_013FE0_Limb;
extern StandardLimb object_mb_013FEC_Limb;
extern StandardLimb object_mb_013FF8_Limb;
extern StandardLimb object_mb_014004_Limb;
extern StandardLimb object_mb_014010_Limb;
extern StandardLimb object_mb_01401C_Limb;
extern StandardLimb object_mb_014028_Limb;
extern StandardLimb object_mb_014034_Limb;
extern StandardLimb object_mb_014040_Limb;
extern StandardLimb object_mb_01404C_Limb;
extern StandardLimb object_mb_014058_Limb;
extern StandardLimb object_mb_014064_Limb;
extern StandardLimb object_mb_014070_Limb;
extern StandardLimb object_mb_01407C_Limb;
extern StandardLimb object_mb_014088_Limb;
extern StandardLimb object_mb_014094_Limb;
extern StandardLimb object_mb_0140A0_Limb;
extern StandardLimb object_mb_0140AC_Limb;
extern StandardLimb object_mb_0140B8_Limb;
extern StandardLimb object_mb_0140C4_Limb;
extern StandardLimb object_mb_0140D0_Limb;
extern StandardLimb object_mb_0140DC_Limb;
extern StandardLimb object_mb_0140E8_Limb;
extern StandardLimb object_mb_0140F4_Limb;
extern StandardLimb object_mb_014100_Limb;
extern StandardLimb object_mb_01410C_Limb;
extern StandardLimb object_mb_014118_Limb;
extern void* gEnMbClubLimbs[];
typedef enum gEnMbClubSkelLimb {
    /*  0 */ LIMB_OBJECT_MB_014190_NONE,
    /*  1 */ LIMB_OBJECT_MB_013FE0,
    /*  2 */ LIMB_OBJECT_MB_013FEC,
    /*  3 */ LIMB_OBJECT_MB_013FF8,
    /*  4 */ LIMB_OBJECT_MB_014004,
    /*  5 */ LIMB_OBJECT_MB_014010,
    /*  6 */ LIMB_OBJECT_MB_01401C,
    /*  7 */ LIMB_OBJECT_MB_014028,
    /*  8 */ LIMB_OBJECT_MB_014034,
    /*  9 */ LIMB_OBJECT_MB_014040,
    /* 10 */ LIMB_OBJECT_MB_01404C,
    /* 11 */ LIMB_OBJECT_MB_014058,
    /* 12 */ LIMB_OBJECT_MB_014064,
    /* 13 */ LIMB_OBJECT_MB_014070,
    /* 14 */ LIMB_OBJECT_MB_01407C,
    /* 15 */ LIMB_OBJECT_MB_014088,
    /* 16 */ LIMB_OBJECT_MB_014094,
    /* 17 */ LIMB_OBJECT_MB_0140A0,
    /* 18 */ LIMB_OBJECT_MB_0140AC,
    /* 19 */ LIMB_OBJECT_MB_0140B8,
    /* 20 */ LIMB_OBJECT_MB_0140C4,
    /* 21 */ LIMB_OBJECT_MB_0140D0,
    /* 22 */ LIMB_OBJECT_MB_0140DC,
    /* 23 */ LIMB_OBJECT_MB_0140E8,
    /* 24 */ LIMB_OBJECT_MB_0140F4,
    /* 25 */ LIMB_OBJECT_MB_014100,
    /* 26 */ LIMB_OBJECT_MB_01410C,
    /* 27 */ LIMB_OBJECT_MB_014118,
    /* 28 */ LIMB_OBJECT_MB_014190_MAX
} gEnMbClubSkelLimb;
extern FlexSkeletonHeader gEnMbClubSkel;

#endif
