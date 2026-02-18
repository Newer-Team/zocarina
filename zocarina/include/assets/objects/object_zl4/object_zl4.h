#ifndef OBJECT_ZL4_H
#define OBJECT_ZL4_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gChildZeldaAnim_000654_06000000_FrameData[];
extern JointIndex gChildZeldaAnim_000654_060005E8_JointIndices[];
extern AnimationHeader gChildZeldaAnim_000654;
//#define object_zl4_000670_TLUT_TLUT_COUNT 256
extern u64 object_zl4_000670_TLUT[];
//#define gChildZeldaEyeTLUT_TLUT_COUNT 256
extern u64 gChildZeldaEyeTLUT[];
//#define gChildZeldaMouthTLUT_TLUT_COUNT 256
extern u64 gChildZeldaMouthTLUT[];
#define object_zl4_000C70_Tex_WIDTH 8
#define object_zl4_000C70_Tex_HEIGHT 8
extern u64 object_zl4_000C70_Tex[TEX_LEN(u64, object_zl4_000C70_Tex_WIDTH, object_zl4_000C70_Tex_HEIGHT, 8)];
#define object_zl4_000CB0_Tex_WIDTH 16
#define object_zl4_000CB0_Tex_HEIGHT 16
extern u64 object_zl4_000CB0_Tex[TEX_LEN(u64, object_zl4_000CB0_Tex_WIDTH, object_zl4_000CB0_Tex_HEIGHT, 8)];
#define object_zl4_000DB0_Tex_WIDTH 32
#define object_zl4_000DB0_Tex_HEIGHT 64
extern u64 object_zl4_000DB0_Tex[TEX_LEN(u64, object_zl4_000DB0_Tex_WIDTH, object_zl4_000DB0_Tex_HEIGHT, 8)];
#define object_zl4_0015B0_Tex_WIDTH 8
#define object_zl4_0015B0_Tex_HEIGHT 8
extern u64 object_zl4_0015B0_Tex[TEX_LEN(u64, object_zl4_0015B0_Tex_WIDTH, object_zl4_0015B0_Tex_HEIGHT, 16)];
#define object_zl4_001630_Tex_WIDTH 8
#define object_zl4_001630_Tex_HEIGHT 8
extern u64 object_zl4_001630_Tex[TEX_LEN(u64, object_zl4_001630_Tex_WIDTH, object_zl4_001630_Tex_HEIGHT, 16)];
#define object_zl4_0016B0_Tex_WIDTH 32
#define object_zl4_0016B0_Tex_HEIGHT 8
extern u64 object_zl4_0016B0_Tex[TEX_LEN(u64, object_zl4_0016B0_Tex_WIDTH, object_zl4_0016B0_Tex_HEIGHT, 8)];
#define object_zl4_0017B0_Tex_WIDTH 8
#define object_zl4_0017B0_Tex_HEIGHT 8
extern u64 object_zl4_0017B0_Tex[TEX_LEN(u64, object_zl4_0017B0_Tex_WIDTH, object_zl4_0017B0_Tex_HEIGHT, 8)];
#define object_zl4_0017F0_Tex_WIDTH 32
#define object_zl4_0017F0_Tex_HEIGHT 32
extern u64 object_zl4_0017F0_Tex[TEX_LEN(u64, object_zl4_0017F0_Tex_WIDTH, object_zl4_0017F0_Tex_HEIGHT, 8)];
#define object_zl4_001BF0_Tex_WIDTH 8
#define object_zl4_001BF0_Tex_HEIGHT 16
extern u64 object_zl4_001BF0_Tex[TEX_LEN(u64, object_zl4_001BF0_Tex_WIDTH, object_zl4_001BF0_Tex_HEIGHT, 16)];
#define object_zl4_001CF0_Tex_WIDTH 16
#define object_zl4_001CF0_Tex_HEIGHT 16
extern u64 object_zl4_001CF0_Tex[TEX_LEN(u64, object_zl4_001CF0_Tex_WIDTH, object_zl4_001CF0_Tex_HEIGHT, 8)];
#define object_zl4_001DF0_Tex_WIDTH 8
#define object_zl4_001DF0_Tex_HEIGHT 8
extern u64 object_zl4_001DF0_Tex[TEX_LEN(u64, object_zl4_001DF0_Tex_WIDTH, object_zl4_001DF0_Tex_HEIGHT, 8)];
#define object_zl4_001E30_Tex_WIDTH 16
#define object_zl4_001E30_Tex_HEIGHT 32
extern u64 object_zl4_001E30_Tex[TEX_LEN(u64, object_zl4_001E30_Tex_WIDTH, object_zl4_001E30_Tex_HEIGHT, 16)];
#define object_zl4_002230_Tex_WIDTH 8
#define object_zl4_002230_Tex_HEIGHT 8
extern u64 object_zl4_002230_Tex[TEX_LEN(u64, object_zl4_002230_Tex_WIDTH, object_zl4_002230_Tex_HEIGHT, 8)];
#define object_zl4_002270_Tex_WIDTH 8
#define object_zl4_002270_Tex_HEIGHT 16
extern u64 object_zl4_002270_Tex[TEX_LEN(u64, object_zl4_002270_Tex_WIDTH, object_zl4_002270_Tex_HEIGHT, 8)];
#define object_zl4_0022F0_Tex_WIDTH 16
#define object_zl4_0022F0_Tex_HEIGHT 32
extern u64 object_zl4_0022F0_Tex[TEX_LEN(u64, object_zl4_0022F0_Tex_WIDTH, object_zl4_0022F0_Tex_HEIGHT, 8)];
#define object_zl4_0024F0_Tex_WIDTH 16
#define object_zl4_0024F0_Tex_HEIGHT 16
extern u64 object_zl4_0024F0_Tex[TEX_LEN(u64, object_zl4_0024F0_Tex_WIDTH, object_zl4_0024F0_Tex_HEIGHT, 16)];
#define object_zl4_0026F0_Tex_WIDTH 16
#define object_zl4_0026F0_Tex_HEIGHT 16
extern u64 object_zl4_0026F0_Tex[TEX_LEN(u64, object_zl4_0026F0_Tex_WIDTH, object_zl4_0026F0_Tex_HEIGHT, 16)];
#define object_zl4_0028F0_Tex_WIDTH 8
#define object_zl4_0028F0_Tex_HEIGHT 8
extern u64 object_zl4_0028F0_Tex[TEX_LEN(u64, object_zl4_0028F0_Tex_WIDTH, object_zl4_0028F0_Tex_HEIGHT, 16)];
#define object_zl4_002970_Tex_WIDTH 8
#define object_zl4_002970_Tex_HEIGHT 8
extern u64 object_zl4_002970_Tex[TEX_LEN(u64, object_zl4_002970_Tex_WIDTH, object_zl4_002970_Tex_HEIGHT, 16)];
#define object_zl4_0029F0_Tex_WIDTH 16
#define object_zl4_0029F0_Tex_HEIGHT 8
extern u64 object_zl4_0029F0_Tex[TEX_LEN(u64, object_zl4_0029F0_Tex_WIDTH, object_zl4_0029F0_Tex_HEIGHT, 16)];
#define gChildZeldaEyeOpenTex_WIDTH 32
#define gChildZeldaEyeOpenTex_HEIGHT 32
extern u64 gChildZeldaEyeOpenTex[TEX_LEN(u64, gChildZeldaEyeOpenTex_WIDTH, gChildZeldaEyeOpenTex_HEIGHT, 8)];
#define gChildZeldaEyeBlinkTex_WIDTH 32
#define gChildZeldaEyeBlinkTex_HEIGHT 32
extern u64 gChildZeldaEyeBlinkTex[TEX_LEN(u64, gChildZeldaEyeBlinkTex_WIDTH, gChildZeldaEyeBlinkTex_HEIGHT, 8)];
#define gChildZeldaEyeShutTex_WIDTH 32
#define gChildZeldaEyeShutTex_HEIGHT 32
extern u64 gChildZeldaEyeShutTex[TEX_LEN(u64, gChildZeldaEyeShutTex_WIDTH, gChildZeldaEyeShutTex_HEIGHT, 8)];
#define gChildZeldaEyeWideTex_WIDTH 32
#define gChildZeldaEyeWideTex_HEIGHT 32
extern u64 gChildZeldaEyeWideTex[TEX_LEN(u64, gChildZeldaEyeWideTex_WIDTH, gChildZeldaEyeWideTex_HEIGHT, 8)];
#define gChildZeldaEyeSquintTex_WIDTH 32
#define gChildZeldaEyeSquintTex_HEIGHT 32
extern u64 gChildZeldaEyeSquintTex[TEX_LEN(u64, gChildZeldaEyeSquintTex_WIDTH, gChildZeldaEyeSquintTex_HEIGHT, 8)];
#define gChildZeldaEyeOutTex_WIDTH 32
#define gChildZeldaEyeOutTex_HEIGHT 32
extern u64 gChildZeldaEyeOutTex[TEX_LEN(u64, gChildZeldaEyeOutTex_WIDTH, gChildZeldaEyeOutTex_HEIGHT, 8)];
#define gChildZeldaEyeInTex_WIDTH 32
#define gChildZeldaEyeInTex_HEIGHT 32
extern u64 gChildZeldaEyeInTex[TEX_LEN(u64, gChildZeldaEyeInTex_WIDTH, gChildZeldaEyeInTex_HEIGHT, 8)];
#define gChildZeldaMouthNeutralTex_WIDTH 32
#define gChildZeldaMouthNeutralTex_HEIGHT 32
extern u64 gChildZeldaMouthNeutralTex[TEX_LEN(u64, gChildZeldaMouthNeutralTex_WIDTH, gChildZeldaMouthNeutralTex_HEIGHT, 8)];
#define gChildZeldaMouthHappyTex_WIDTH 32
#define gChildZeldaMouthHappyTex_HEIGHT 32
extern u64 gChildZeldaMouthHappyTex[TEX_LEN(u64, gChildZeldaMouthHappyTex_WIDTH, gChildZeldaMouthHappyTex_HEIGHT, 8)];
#define gChildZeldaMouthWorriedTex_WIDTH 32
#define gChildZeldaMouthWorriedTex_HEIGHT 32
extern u64 gChildZeldaMouthWorriedTex[TEX_LEN(u64, gChildZeldaMouthWorriedTex_WIDTH, gChildZeldaMouthWorriedTex_HEIGHT, 8)];
#define gChildZeldaMouthSurprisedTex_WIDTH 32
#define gChildZeldaMouthSurprisedTex_HEIGHT 32
extern u64 gChildZeldaMouthSurprisedTex[TEX_LEN(u64, gChildZeldaMouthSurprisedTex_WIDTH, gChildZeldaMouthSurprisedTex_HEIGHT, 8)];
#define object_zl4_0056F0_Tex_WIDTH 16
#define object_zl4_0056F0_Tex_HEIGHT 16
extern u64 object_zl4_0056F0_Tex[TEX_LEN(u64, object_zl4_0056F0_Tex_WIDTH, object_zl4_0056F0_Tex_HEIGHT, 16)];
#define object_zl4_0058F0_Tex_WIDTH 16
#define object_zl4_0058F0_Tex_HEIGHT 16
extern u64 object_zl4_0058F0_Tex[TEX_LEN(u64, object_zl4_0058F0_Tex_WIDTH, object_zl4_0058F0_Tex_HEIGHT, 8)];
#define object_zl4_0059F0_Tex_WIDTH 8
#define object_zl4_0059F0_Tex_HEIGHT 8
extern u64 object_zl4_0059F0_Tex[TEX_LEN(u64, object_zl4_0059F0_Tex_WIDTH, object_zl4_0059F0_Tex_HEIGHT, 16)];
#define object_zl4_005A70_Tex_WIDTH 16
#define object_zl4_005A70_Tex_HEIGHT 16
extern u64 object_zl4_005A70_Tex[TEX_LEN(u64, object_zl4_005A70_Tex_WIDTH, object_zl4_005A70_Tex_HEIGHT, 16)];
#define object_zl4_005C70_Tex_WIDTH 8
#define object_zl4_005C70_Tex_HEIGHT 8
extern u64 object_zl4_005C70_Tex[TEX_LEN(u64, object_zl4_005C70_Tex_WIDTH, object_zl4_005C70_Tex_HEIGHT, 8)];
#define object_zl4_005CB0_Tex_WIDTH 16
#define object_zl4_005CB0_Tex_HEIGHT 16
extern u64 object_zl4_005CB0_Tex[TEX_LEN(u64, object_zl4_005CB0_Tex_WIDTH, object_zl4_005CB0_Tex_HEIGHT, 8)];
#define object_zl4_005DB0_Tex_WIDTH 32
#define object_zl4_005DB0_Tex_HEIGHT 32
extern u64 object_zl4_005DB0_Tex[TEX_LEN(u64, object_zl4_005DB0_Tex_WIDTH, object_zl4_005DB0_Tex_HEIGHT, 16)];
extern Vtx object_zl4_Vtx_0065B0[];
extern Vtx object_zl4_Vtx_0067C0[];
extern Vtx object_zl4_Vtx_006A20[];
extern Vtx object_zl4_Vtx_006C60[];
extern Vtx object_zl4_Vtx_006EB0[];
extern Vtx object_zl4_Vtx_006EE0[];
extern Vtx object_zl4_Vtx_007130[];
extern Vtx object_zl4_Vtx_007160[];
extern Vtx gChildZeldaCutsceneDressVtx[];
extern Vtx object_zl4_Vtx_007EB0[];
extern Vtx object_zl4_Vtx_008AA0[];
extern Vtx object_zl4_Vtx_008D70[];
extern Vtx object_zl4_Vtx_008FB0[];
extern Vtx object_zl4_Vtx_009390[];
extern Vtx object_zl4_Vtx_009660[];
extern Vtx object_zl4_Vtx_0098A0[];
extern Vtx object_zl4_Vtx_009C80[];
extern Gfx object_zl4_00A630_DL[307];
extern Gfx object_zl4_00AFC8_DL[290];
extern Gfx object_zl4_00B8D8_DL[77];
extern Gfx object_zl4_00BB40_DL[42];
extern Gfx object_zl4_00BC90_DL[60];
extern Gfx object_zl4_00BE70_DL[78];
extern Gfx object_zl4_00C0E0_DL[42];
extern Gfx object_zl4_00C230_DL[60];
extern Gfx gChildZeldaCutsceneDressDL[152];
extern Gfx object_zl4_00C8D0_DL[259];
extern Gfx object_zl4_00D0E8_DL[55];
extern Gfx object_zl4_00D2A0_DL[56];
extern Gfx object_zl4_00D460_DL[39];
extern Gfx object_zl4_00D598_DL[10];
extern Gfx object_zl4_00D5E8_DL[40];
extern Gfx object_zl4_00D728_DL[10];
extern Gfx object_zl4_00D778_DL[40];
#define object_zl4_00D8B8_Tex_WIDTH 32
#define object_zl4_00D8B8_Tex_HEIGHT 16
extern u64 object_zl4_00D8B8_Tex[TEX_LEN(u64, object_zl4_00D8B8_Tex_WIDTH, object_zl4_00D8B8_Tex_HEIGHT, 16)];
extern Vtx gChildZeldaOcarinaOfTimeVtx[];
extern Gfx gChildZeldaOcarinaOfTimeDL[36];
extern StandardLimb object_zl4_00DF28_Limb;
extern StandardLimb object_zl4_00DF34_Limb;
extern StandardLimb object_zl4_00DF40_Limb;
extern StandardLimb object_zl4_00DF4C_Limb;
extern StandardLimb object_zl4_00DF58_Limb;
extern StandardLimb object_zl4_00DF64_Limb;
extern StandardLimb object_zl4_00DF70_Limb;
extern StandardLimb object_zl4_00DF7C_Limb;
extern StandardLimb object_zl4_00DF88_Limb;
extern StandardLimb object_zl4_00DF94_Limb;
extern StandardLimb object_zl4_00DFA0_Limb;
extern StandardLimb object_zl4_00DFAC_Limb;
extern StandardLimb object_zl4_00DFB8_Limb;
extern StandardLimb object_zl4_00DFC4_Limb;
extern StandardLimb object_zl4_00DFD0_Limb;
extern StandardLimb object_zl4_00DFDC_Limb;
extern StandardLimb object_zl4_00DFE8_Limb;
extern void* gChildZeldaLimbs[];
typedef enum gChildZeldaSkelLimb {
    /*  0 */ LIMB_OBJECT_ZL4_00E038_NONE,
    /*  1 */ LIMB_OBJECT_ZL4_00DF28,
    /*  2 */ LIMB_OBJECT_ZL4_00DF34,
    /*  3 */ LIMB_OBJECT_ZL4_00DF40,
    /*  4 */ LIMB_OBJECT_ZL4_00DF4C,
    /*  5 */ LIMB_OBJECT_ZL4_00DF58,
    /*  6 */ LIMB_OBJECT_ZL4_00DF64,
    /*  7 */ LIMB_OBJECT_ZL4_00DF70,
    /*  8 */ LIMB_OBJECT_ZL4_00DF7C,
    /*  9 */ LIMB_OBJECT_ZL4_00DF88,
    /* 10 */ LIMB_OBJECT_ZL4_00DF94,
    /* 11 */ LIMB_OBJECT_ZL4_00DFA0,
    /* 12 */ LIMB_OBJECT_ZL4_00DFAC,
    /* 13 */ LIMB_OBJECT_ZL4_00DFB8,
    /* 14 */ LIMB_OBJECT_ZL4_00DFC4,
    /* 15 */ LIMB_OBJECT_ZL4_00DFD0,
    /* 16 */ LIMB_OBJECT_ZL4_00DFDC,
    /* 17 */ LIMB_OBJECT_ZL4_00DFE8,
    /* 18 */ LIMB_OBJECT_ZL4_00E038_MAX
} gChildZeldaSkelLimb;
extern FlexSkeletonHeader gChildZeldaSkel;
extern s16 gChildZeldaAnim_00E5C8_0600E050_FrameData[];
extern JointIndex gChildZeldaAnim_00E5C8_0600E55C_JointIndices[];
extern AnimationHeader gChildZeldaAnim_00E5C8;
extern s16 gChildZeldaAnim_00EBC4_0600E5E0_FrameData[];
extern JointIndex gChildZeldaAnim_00EBC4_0600EB58_JointIndices[];
extern AnimationHeader gChildZeldaAnim_00EBC4;
extern s16 gChildZeldaAnim_00F0A4_0600EBE0_FrameData[];
extern JointIndex gChildZeldaAnim_00F0A4_0600F038_JointIndices[];
extern AnimationHeader gChildZeldaAnim_00F0A4;
extern s16 gChildZeldaAnim_00F894_0600F0C0_FrameData[];
extern JointIndex gChildZeldaAnim_00F894_0600F828_JointIndices[];
extern AnimationHeader gChildZeldaAnim_00F894;
extern s16 gChildZeldaAnim_010DF8_0600F8B0_FrameData[];
extern JointIndex gChildZeldaAnim_010DF8_06010D8C_JointIndices[];
extern AnimationHeader gChildZeldaAnim_010DF8;
extern s16 gChildZeldaAnim_011248_06010E10_FrameData[];
extern JointIndex gChildZeldaAnim_011248_060111DC_JointIndices[];
extern AnimationHeader gChildZeldaAnim_011248;
extern s16 gChildZeldaAnim_011698_06011260_FrameData[];
extern JointIndex gChildZeldaAnim_011698_0601162C_JointIndices[];
extern AnimationHeader gChildZeldaAnim_011698;
extern s16 gChildZeldaAnim_011B34_060116B0_FrameData[];
extern JointIndex gChildZeldaAnim_011B34_06011AC8_JointIndices[];
extern AnimationHeader gChildZeldaAnim_011B34;
extern s16 gChildZeldaAnim_0125E4_06011B50_FrameData[];
extern JointIndex gChildZeldaAnim_0125E4_06012578_JointIndices[];
extern AnimationHeader gChildZeldaAnim_0125E4;
extern s16 gChildZeldaAnim_012E58_06012600_FrameData[];
extern JointIndex gChildZeldaAnim_012E58_06012DEC_JointIndices[];
extern AnimationHeader gChildZeldaAnim_012E58;
extern s16 gChildZeldaAnim_013280_06012E70_FrameData[];
extern JointIndex gChildZeldaAnim_013280_06013214_JointIndices[];
extern AnimationHeader gChildZeldaAnim_013280;
extern s16 gChildZeldaAnim_013628_06013290_FrameData[];
extern JointIndex gChildZeldaAnim_013628_060135BC_JointIndices[];
extern AnimationHeader gChildZeldaAnim_013628;
extern s16 gChildZeldaAnim_013A50_06013640_FrameData[];
extern JointIndex gChildZeldaAnim_013A50_060139E4_JointIndices[];
extern AnimationHeader gChildZeldaAnim_013A50;
extern s16 gChildZeldaAnim_013EA0_06013A60_FrameData[];
extern JointIndex gChildZeldaAnim_013EA0_06013E34_JointIndices[];
extern AnimationHeader gChildZeldaAnim_013EA0;
extern s16 gChildZeldaAnim_015F14_06013EB0_FrameData[];
extern JointIndex gChildZeldaAnim_015F14_06015EA8_JointIndices[];
extern AnimationHeader gChildZeldaAnim_015F14;
extern s16 gChildZeldaAnim_0169B4_06015F30_FrameData[];
extern JointIndex gChildZeldaAnim_0169B4_06016948_JointIndices[];
extern AnimationHeader gChildZeldaAnim_0169B4;
extern s16 gChildZeldaAnim_016D08_060169D0_FrameData[];
extern JointIndex gChildZeldaAnim_016D08_06016C9C_JointIndices[];
extern AnimationHeader gChildZeldaAnim_016D08;
extern s16 gChildZeldaAnim_01726C_06016D20_FrameData[];
extern JointIndex gChildZeldaAnim_01726C_06017200_JointIndices[];
extern AnimationHeader gChildZeldaAnim_01726C;
extern s16 gChildZeldaAnim_017818_06017280_FrameData[];
extern JointIndex gChildZeldaAnim_017818_060177AC_JointIndices[];
extern AnimationHeader gChildZeldaAnim_017818;
extern s16 gChildZeldaAnim_01805C_06017830_FrameData[];
extern JointIndex gChildZeldaAnim_01805C_06017FF0_JointIndices[];
extern AnimationHeader gChildZeldaAnim_01805C;
extern s16 gChildZeldaAnim_018898_06018070_FrameData[];
extern JointIndex gChildZeldaAnim_018898_0601882C_JointIndices[];
extern AnimationHeader gChildZeldaAnim_018898;
extern s16 gChildZeldaAnim_01910C_060188B0_FrameData[];
extern JointIndex gChildZeldaAnim_01910C_060190A0_JointIndices[];
extern AnimationHeader gChildZeldaAnim_01910C;
extern s16 gChildZeldaAnim_019600_06019120_FrameData[];
extern JointIndex gChildZeldaAnim_019600_06019594_JointIndices[];
extern AnimationHeader gChildZeldaAnim_019600;
extern s16 gChildZeldaAnim_01991C_06019610_FrameData[];
extern JointIndex gChildZeldaAnim_01991C_060198B0_JointIndices[];
extern AnimationHeader gChildZeldaAnim_01991C;
extern s16 gChildZeldaAnim_01A2FC_06019930_FrameData[];
extern JointIndex gChildZeldaAnim_01A2FC_0601A290_JointIndices[];
extern AnimationHeader gChildZeldaAnim_01A2FC;
extern s16 gChildZeldaAnim_01AAE0_0601A310_FrameData[];
extern JointIndex gChildZeldaAnim_01AAE0_0601AA74_JointIndices[];
extern AnimationHeader gChildZeldaAnim_01AAE0;
extern s16 gChildZeldaAnim_01AE88_0601AAF0_FrameData[];
extern JointIndex gChildZeldaAnim_01AE88_0601AE1C_JointIndices[];
extern AnimationHeader gChildZeldaAnim_01AE88;
extern s16 gChildZeldaAnim_01B874_0601AEA0_FrameData[];
extern JointIndex gChildZeldaAnim_01B874_0601B808_JointIndices[];
extern AnimationHeader gChildZeldaAnim_01B874;
extern s16 gChildZeldaAnim_01BCF0_0601B890_FrameData[];
extern JointIndex gChildZeldaAnim_01BCF0_0601BC84_JointIndices[];
extern AnimationHeader gChildZeldaAnim_01BCF0;
extern s16 gChildZeldaAnim_01C494_0601BD00_FrameData[];
extern JointIndex gChildZeldaAnim_01C494_0601C428_JointIndices[];
extern AnimationHeader gChildZeldaAnim_01C494;
extern s16 gChildZeldaAnim_01C7B0_0601C4B0_FrameData[];
extern JointIndex gChildZeldaAnim_01C7B0_0601C744_JointIndices[];
extern AnimationHeader gChildZeldaAnim_01C7B0;
extern s16 gChildZeldaAnim_01CE08_0601C7C0_FrameData[];
extern JointIndex gChildZeldaAnim_01CE08_0601CD9C_JointIndices[];
extern AnimationHeader gChildZeldaAnim_01CE08;

#endif
