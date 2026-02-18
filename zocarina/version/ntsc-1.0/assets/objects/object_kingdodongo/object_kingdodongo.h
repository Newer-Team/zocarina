#ifndef OBJECT_KINGDODONGO_H
#define OBJECT_KINGDODONGO_H

#include "animation.h"
#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern s16 object_kingdodongo_Anim_000690_06000000_FrameData[];
extern JointIndex object_kingdodongo_Anim_000690_06000568_JointIndices[];
extern AnimationHeader object_kingdodongo_Anim_000690;
extern s16 object_kingdodongo_Anim_001074_060006A0_FrameData[];
extern JointIndex object_kingdodongo_Anim_001074_06000F4C_JointIndices[];
extern AnimationHeader object_kingdodongo_Anim_001074;
extern s16 object_kingdodongo_Anim_002D0C_06001090_FrameData[];
extern JointIndex object_kingdodongo_Anim_002D0C_06002BE4_JointIndices[];
extern AnimationHeader object_kingdodongo_Anim_002D0C;
extern s16 object_kingdodongo_Anim_003CF8_06002D20_FrameData[];
extern JointIndex object_kingdodongo_Anim_003CF8_06003BD0_JointIndices[];
extern AnimationHeader object_kingdodongo_Anim_003CF8;
extern s16 object_kingdodongo_Anim_0042A8_06003D10_FrameData[];
extern JointIndex object_kingdodongo_Anim_0042A8_06004180_JointIndices[];
extern AnimationHeader object_kingdodongo_Anim_0042A8;
extern s16 object_kingdodongo_Anim_004E0C_060042C0_FrameData[];
extern JointIndex object_kingdodongo_Anim_004E0C_06004CE4_JointIndices[];
extern AnimationHeader object_kingdodongo_Anim_004E0C;
extern s16 object_kingdodongo_Anim_0061D4_06004E20_FrameData[];
extern JointIndex object_kingdodongo_Anim_0061D4_060060AC_JointIndices[];
extern AnimationHeader object_kingdodongo_Anim_0061D4;
extern s16 object_kingdodongo_Anim_006924_060061F0_FrameData[];
extern JointIndex object_kingdodongo_Anim_006924_060067FC_JointIndices[];
extern AnimationHeader object_kingdodongo_Anim_006924;
extern s16 object_kingdodongo_Anim_008EEC_06006940_FrameData[];
extern JointIndex object_kingdodongo_Anim_008EEC_06008DC4_JointIndices[];
extern AnimationHeader object_kingdodongo_Anim_008EEC;
extern s16 object_kingdodongo_Anim_009D10_06008F00_FrameData[];
extern JointIndex object_kingdodongo_Anim_009D10_06009BE8_JointIndices[];
extern AnimationHeader object_kingdodongo_Anim_009D10;
extern Vtx object_kingdodongo_009D20_Vtx[];
extern Gfx object_kingdodongo_DL_009D50[16];
extern Gfx object_kingdodongo_DL_009DD0[3];
#define object_kingdodongo_Tex_009DE8_WIDTH 16
#define object_kingdodongo_Tex_009DE8_HEIGHT 16
extern u64 object_kingdodongo_Tex_009DE8[TEX_LEN(u64, object_kingdodongo_Tex_009DE8_WIDTH, object_kingdodongo_Tex_009DE8_HEIGHT, 8)];
extern s16 object_kingdodongo_Anim_00AA9C_06009EF0_FrameData[];
extern JointIndex object_kingdodongo_Anim_00AA9C_0600A974_JointIndices[];
extern AnimationHeader object_kingdodongo_Anim_00AA9C;
extern s16 object_kingdodongo_Anim_00DF38_0600AAB0_FrameData[];
extern JointIndex object_kingdodongo_Anim_00DF38_0600DE10_JointIndices[];
extern AnimationHeader object_kingdodongo_Anim_00DF38;
extern s16 object_kingdodongo_Anim_00E848_0600DF50_FrameData[];
extern JointIndex object_kingdodongo_Anim_00E848_0600E720_JointIndices[];
extern AnimationHeader object_kingdodongo_Anim_00E848;
extern s16 object_kingdodongo_Anim_00F0D8_0600E860_FrameData[];
extern JointIndex object_kingdodongo_Anim_00F0D8_0600EFB0_JointIndices[];
extern AnimationHeader object_kingdodongo_Anim_00F0D8;
extern Vtx object_kingdodongo_00F0F0_Vtx[];
extern Gfx object_kingdodongo_DL_00F310[44];
extern Vtx object_kingdodongo_00F470_Vtx[];
extern Gfx object_kingdodongo_DL_00F6C0[48];
extern Vtx object_kingdodongo_00F840_Vtx[];
extern Gfx object_kingdodongo_DL_00FAC0[37];
extern Vtx object_kingdodongo_00FBE8_Vtx[];
extern Gfx object_kingdodongo_DL_00FF68[55];
extern Vtx object_kingdodongo_010120_Vtx[];
extern Gfx object_kingdodongo_DL_010390[47];
extern Vtx object_kingdodongo_010508_Vtx[];
extern Gfx object_kingdodongo_DL_010878[41];
extern Vtx object_kingdodongo_0109C0_Vtx[];
extern Gfx object_kingdodongo_DL_010BE0[44];
extern Vtx object_kingdodongo_010D40_Vtx[];
extern Gfx object_kingdodongo_DL_010F90[48];
extern Vtx object_kingdodongo_011110_Vtx[];
extern Gfx object_kingdodongo_DL_011390[37];
extern Vtx object_kingdodongo_0114B8_Vtx[];
extern Gfx object_kingdodongo_DL_011838[55];
extern Vtx object_kingdodongo_0119F0_Vtx[];
extern Gfx object_kingdodongo_DL_011C60[47];
extern Vtx object_kingdodongo_011DD8_Vtx[];
extern Gfx object_kingdodongo_DL_012148[41];
extern Vtx object_kingdodongo_012290_Vtx[];
extern Gfx object_kingdodongo_DL_0127D0[75];
extern Vtx object_kingdodongo_012A28_Vtx[];
extern Gfx object_kingdodongo_DL_012F28[71];
extern Vtx object_kingdodongo_013160_Vtx[];
extern Gfx object_kingdodongo_DL_0137B0[76];
extern Vtx object_kingdodongo_013A10_Vtx[];
extern Gfx object_kingdodongo_DL_013C20[43];
extern Vtx object_kingdodongo_013D78_Vtx[];
extern Gfx object_kingdodongo_DL_013EF8[41];
extern Vtx object_kingdodongo_014040_Vtx[];
extern Gfx object_kingdodongo_DL_014100[28];
extern Vtx object_kingdodongo_0141E0_Vtx[];
extern Gfx object_kingdodongo_DL_014A30[100];
extern Vtx object_kingdodongo_014D50_Vtx[];
extern Gfx object_kingdodongo_DL_015630[76];
#define object_kingdodongo_Tex_015890_WIDTH 8
#define object_kingdodongo_Tex_015890_HEIGHT 16
extern u64 object_kingdodongo_Tex_015890[TEX_LEN(u64, object_kingdodongo_Tex_015890_WIDTH, object_kingdodongo_Tex_015890_HEIGHT, 16)];
#define object_kingdodongo_Tex_015990_WIDTH 16
#define object_kingdodongo_Tex_015990_HEIGHT 32
extern u64 object_kingdodongo_Tex_015990[TEX_LEN(u64, object_kingdodongo_Tex_015990_WIDTH, object_kingdodongo_Tex_015990_HEIGHT, 16)];
#define object_kingdodongo_Tex_015D90_WIDTH 16
#define object_kingdodongo_Tex_015D90_HEIGHT 16
extern u64 object_kingdodongo_Tex_015D90[TEX_LEN(u64, object_kingdodongo_Tex_015D90_WIDTH, object_kingdodongo_Tex_015D90_HEIGHT, 16)];
#define object_kingdodongo_Tex_015F90_WIDTH 16
#define object_kingdodongo_Tex_015F90_HEIGHT 32
extern u64 object_kingdodongo_Tex_015F90[TEX_LEN(u64, object_kingdodongo_Tex_015F90_WIDTH, object_kingdodongo_Tex_015F90_HEIGHT, 16)];
#define object_kingdodongo_Tex_016390_WIDTH 16
#define object_kingdodongo_Tex_016390_HEIGHT 16
extern u64 object_kingdodongo_Tex_016390[TEX_LEN(u64, object_kingdodongo_Tex_016390_WIDTH, object_kingdodongo_Tex_016390_HEIGHT, 16)];
#define object_kingdodongo_Tex_016590_WIDTH 16
#define object_kingdodongo_Tex_016590_HEIGHT 16
extern u64 object_kingdodongo_Tex_016590[TEX_LEN(u64, object_kingdodongo_Tex_016590_WIDTH, object_kingdodongo_Tex_016590_HEIGHT, 16)];
#define object_kingdodongo_Tex_016790_WIDTH 16
#define object_kingdodongo_Tex_016790_HEIGHT 16
extern u64 object_kingdodongo_Tex_016790[TEX_LEN(u64, object_kingdodongo_Tex_016790_WIDTH, object_kingdodongo_Tex_016790_HEIGHT, 16)];
#define object_kingdodongo_Tex_016990_WIDTH 32
#define object_kingdodongo_Tex_016990_HEIGHT 16
extern u64 object_kingdodongo_Tex_016990[TEX_LEN(u64, object_kingdodongo_Tex_016990_WIDTH, object_kingdodongo_Tex_016990_HEIGHT, 16)];
#define object_kingdodongo_Tex_016D90_WIDTH 8
#define object_kingdodongo_Tex_016D90_HEIGHT 8
extern u64 object_kingdodongo_Tex_016D90[TEX_LEN(u64, object_kingdodongo_Tex_016D90_WIDTH, object_kingdodongo_Tex_016D90_HEIGHT, 16)];
#define object_kingdodongo_Tex_016E10_WIDTH 32
#define object_kingdodongo_Tex_016E10_HEIGHT 16
extern u64 object_kingdodongo_Tex_016E10[TEX_LEN(u64, object_kingdodongo_Tex_016E10_WIDTH, object_kingdodongo_Tex_016E10_HEIGHT, 16)];
#define object_kingdodongo_Tex_017210_WIDTH 8
#define object_kingdodongo_Tex_017210_HEIGHT 32
extern u64 object_kingdodongo_Tex_017210[TEX_LEN(u64, object_kingdodongo_Tex_017210_WIDTH, object_kingdodongo_Tex_017210_HEIGHT, 16)];
#define gKingDodongoTitleCardTex_WIDTH 128
#define gKingDodongoTitleCardTex_HEIGHT 80
extern u64 gKingDodongoTitleCardTex[TEX_LEN(u64, gKingDodongoTitleCardTex_WIDTH, gKingDodongoTitleCardTex_HEIGHT, 8)];
extern StandardLimb object_kingdodongo_Limb_01B010;
extern StandardLimb object_kingdodongo_Limb_01B01C;
extern StandardLimb object_kingdodongo_Limb_01B028;
extern StandardLimb object_kingdodongo_Limb_01B034;
extern StandardLimb object_kingdodongo_Limb_01B040;
extern StandardLimb object_kingdodongo_Limb_01B04C;
extern StandardLimb object_kingdodongo_Limb_01B058;
extern StandardLimb object_kingdodongo_Limb_01B064;
extern StandardLimb object_kingdodongo_Limb_01B070;
extern StandardLimb object_kingdodongo_Limb_01B07C;
extern StandardLimb object_kingdodongo_Limb_01B088;
extern StandardLimb object_kingdodongo_Limb_01B094;
extern StandardLimb object_kingdodongo_Limb_01B0A0;
extern StandardLimb object_kingdodongo_Limb_01B0AC;
extern StandardLimb object_kingdodongo_Limb_01B0B8;
extern StandardLimb object_kingdodongo_Limb_01B0C4;
extern StandardLimb object_kingdodongo_Limb_01B0D0;
extern StandardLimb object_kingdodongo_Limb_01B0DC;
extern StandardLimb object_kingdodongo_Limb_01B0E8;
extern StandardLimb object_kingdodongo_Limb_01B0F4;
extern StandardLimb object_kingdodongo_Limb_01B100;
extern StandardLimb object_kingdodongo_Limb_01B10C;
extern StandardLimb object_kingdodongo_Limb_01B118;
extern StandardLimb object_kingdodongo_Limb_01B124;
extern StandardLimb object_kingdodongo_Limb_01B130;
extern StandardLimb object_kingdodongo_Limb_01B13C;
extern StandardLimb object_kingdodongo_Limb_01B148;
extern StandardLimb object_kingdodongo_Limb_01B154;
extern StandardLimb object_kingdodongo_Limb_01B160;
extern StandardLimb object_kingdodongo_Limb_01B16C;
extern StandardLimb object_kingdodongo_Limb_01B178;
extern StandardLimb object_kingdodongo_Limb_01B184;
extern StandardLimb object_kingdodongo_Limb_01B190;
extern StandardLimb object_kingdodongo_Limb_01B19C;
extern StandardLimb object_kingdodongo_Limb_01B1A8;
extern StandardLimb object_kingdodongo_Limb_01B1B4;
extern StandardLimb object_kingdodongo_Limb_01B1C0;
extern StandardLimb object_kingdodongo_Limb_01B1CC;
extern StandardLimb object_kingdodongo_Limb_01B1D8;
extern StandardLimb object_kingdodongo_Limb_01B1E4;
extern StandardLimb object_kingdodongo_Limb_01B1F0;
extern StandardLimb object_kingdodongo_Limb_01B1FC;
extern StandardLimb object_kingdodongo_Limb_01B208;
extern StandardLimb object_kingdodongo_Limb_01B214;
extern StandardLimb object_kingdodongo_Limb_01B220;
extern StandardLimb object_kingdodongo_Limb_01B22C;
extern StandardLimb object_kingdodongo_Limb_01B238;
extern StandardLimb object_kingdodongo_Limb_01B244;
extern void* object_kingdodongo_Skel_01B310_06019E50_Limbs[];
typedef enum object_kingdodongo_Skel_01B310Limb {
    /*  0 */ LIMB_OBJECT_KINGDODONGO_019F10_NONE,
    /*  1 */ LIMB_OBJECT_KINGDODONGO_019C10,
    /*  2 */ LIMB_OBJECT_KINGDODONGO_019C1C,
    /*  3 */ LIMB_OBJECT_KINGDODONGO_019C28,
    /*  4 */ LIMB_OBJECT_KINGDODONGO_019C34,
    /*  5 */ LIMB_OBJECT_KINGDODONGO_019C40,
    /*  6 */ LIMB_OBJECT_KINGDODONGO_019C4C,
    /*  7 */ LIMB_OBJECT_KINGDODONGO_019C58,
    /*  8 */ LIMB_OBJECT_KINGDODONGO_019C64,
    /*  9 */ LIMB_OBJECT_KINGDODONGO_019C70,
    /* 10 */ LIMB_OBJECT_KINGDODONGO_019C7C,
    /* 11 */ LIMB_OBJECT_KINGDODONGO_019C88,
    /* 12 */ LIMB_OBJECT_KINGDODONGO_019C94,
    /* 13 */ LIMB_OBJECT_KINGDODONGO_019CA0,
    /* 14 */ LIMB_OBJECT_KINGDODONGO_019CAC,
    /* 15 */ LIMB_OBJECT_KINGDODONGO_019CB8,
    /* 16 */ LIMB_OBJECT_KINGDODONGO_019CC4,
    /* 17 */ LIMB_OBJECT_KINGDODONGO_019CD0,
    /* 18 */ LIMB_OBJECT_KINGDODONGO_019CDC,
    /* 19 */ LIMB_OBJECT_KINGDODONGO_019CE8,
    /* 20 */ LIMB_OBJECT_KINGDODONGO_019CF4,
    /* 21 */ LIMB_OBJECT_KINGDODONGO_019D00,
    /* 22 */ LIMB_OBJECT_KINGDODONGO_019D0C,
    /* 23 */ LIMB_OBJECT_KINGDODONGO_019D18,
    /* 24 */ LIMB_OBJECT_KINGDODONGO_019D24,
    /* 25 */ LIMB_OBJECT_KINGDODONGO_019D30,
    /* 26 */ LIMB_OBJECT_KINGDODONGO_019D3C,
    /* 27 */ LIMB_OBJECT_KINGDODONGO_019D48,
    /* 28 */ LIMB_OBJECT_KINGDODONGO_019D54,
    /* 29 */ LIMB_OBJECT_KINGDODONGO_019D60,
    /* 30 */ LIMB_OBJECT_KINGDODONGO_019D6C,
    /* 31 */ LIMB_OBJECT_KINGDODONGO_019D78,
    /* 32 */ LIMB_OBJECT_KINGDODONGO_019D84,
    /* 33 */ LIMB_OBJECT_KINGDODONGO_019D90,
    /* 34 */ LIMB_OBJECT_KINGDODONGO_019D9C,
    /* 35 */ LIMB_OBJECT_KINGDODONGO_019DA8,
    /* 36 */ LIMB_OBJECT_KINGDODONGO_019DB4,
    /* 37 */ LIMB_OBJECT_KINGDODONGO_019DC0,
    /* 38 */ LIMB_OBJECT_KINGDODONGO_019DCC,
    /* 39 */ LIMB_OBJECT_KINGDODONGO_019DD8,
    /* 40 */ LIMB_OBJECT_KINGDODONGO_019DE4,
    /* 41 */ LIMB_OBJECT_KINGDODONGO_019DF0,
    /* 42 */ LIMB_OBJECT_KINGDODONGO_019DFC,
    /* 43 */ LIMB_OBJECT_KINGDODONGO_019E08,
    /* 44 */ LIMB_OBJECT_KINGDODONGO_019E14,
    /* 45 */ LIMB_OBJECT_KINGDODONGO_019E20,
    /* 46 */ LIMB_OBJECT_KINGDODONGO_019E2C,
    /* 47 */ LIMB_OBJECT_KINGDODONGO_019E38,
    /* 48 */ LIMB_OBJECT_KINGDODONGO_019E44,
    /* 49 */ LIMB_OBJECT_KINGDODONGO_019F10_MAX
} object_kingdodongo_Skel_01B310Limb;
extern SkeletonHeader object_kingdodongo_Skel_01B310;
extern s16 object_kingdodongo_Anim_01CAE0_06019F20_FrameData[];
extern JointIndex object_kingdodongo_Anim_01CAE0_0601B5B8_JointIndices[];
extern AnimationHeader object_kingdodongo_Anim_01CAE0;
extern s16 object_kingdodongo_Anim_01D218_0601B6F0_FrameData[];
extern JointIndex object_kingdodongo_Anim_01D218_0601BCF0_JointIndices[];
extern AnimationHeader object_kingdodongo_Anim_01D218;
extern s16 object_kingdodongo_Anim_01D934_0601BE30_FrameData[];
extern JointIndex object_kingdodongo_Anim_01D934_0601C40C_JointIndices[];
extern AnimationHeader object_kingdodongo_Anim_01D934;
extern Gfx object_kingdodongo_DL_01D950[12];
extern Vtx object_kingdodongo_01C5B0_Vtx[];
#define object_kingdodongo_Tex_01D9F0_WIDTH 64
#define object_kingdodongo_Tex_01D9F0_HEIGHT 64
extern u64 object_kingdodongo_Tex_01D9F0[TEX_LEN(u64, object_kingdodongo_Tex_01D9F0_WIDTH, object_kingdodongo_Tex_01D9F0_HEIGHT, 8)];
#define object_kingdodongo_Tex_01E9F0_WIDTH 64
#define object_kingdodongo_Tex_01E9F0_HEIGHT 64
extern u64 object_kingdodongo_Tex_01E9F0[TEX_LEN(u64, object_kingdodongo_Tex_01E9F0_WIDTH, object_kingdodongo_Tex_01E9F0_HEIGHT, 8)];
#define object_kingdodongo_Tex_01F9F0_WIDTH 64
#define object_kingdodongo_Tex_01F9F0_HEIGHT 64
extern u64 object_kingdodongo_Tex_01F9F0[TEX_LEN(u64, object_kingdodongo_Tex_01F9F0_WIDTH, object_kingdodongo_Tex_01F9F0_HEIGHT, 8)];
#define object_kingdodongo_Tex_0209F0_WIDTH 64
#define object_kingdodongo_Tex_0209F0_HEIGHT 64
extern u64 object_kingdodongo_Tex_0209F0[TEX_LEN(u64, object_kingdodongo_Tex_0209F0_WIDTH, object_kingdodongo_Tex_0209F0_HEIGHT, 8)];
#define object_kingdodongo_Tex_0219F0_WIDTH 64
#define object_kingdodongo_Tex_0219F0_HEIGHT 64
extern u64 object_kingdodongo_Tex_0219F0[TEX_LEN(u64, object_kingdodongo_Tex_0219F0_WIDTH, object_kingdodongo_Tex_0219F0_HEIGHT, 8)];
#define object_kingdodongo_Tex_0229F0_WIDTH 64
#define object_kingdodongo_Tex_0229F0_HEIGHT 64
extern u64 object_kingdodongo_Tex_0229F0[TEX_LEN(u64, object_kingdodongo_Tex_0229F0_WIDTH, object_kingdodongo_Tex_0229F0_HEIGHT, 8)];
#define object_kingdodongo_Tex_0239F0_WIDTH 64
#define object_kingdodongo_Tex_0239F0_HEIGHT 64
extern u64 object_kingdodongo_Tex_0239F0[TEX_LEN(u64, object_kingdodongo_Tex_0239F0_WIDTH, object_kingdodongo_Tex_0239F0_HEIGHT, 8)];
#define object_kingdodongo_Tex_0249F0_WIDTH 64
#define object_kingdodongo_Tex_0249F0_HEIGHT 64
extern u64 object_kingdodongo_Tex_0249F0[TEX_LEN(u64, object_kingdodongo_Tex_0249F0_WIDTH, object_kingdodongo_Tex_0249F0_HEIGHT, 8)];
extern Gfx object_kingdodongo_DL_0259F0[12];
extern Vtx object_kingdodongo_024650_Vtx[];
extern Gfx object_kingdodongo_DL_025A90[12];
extern Vtx object_kingdodongo_0246F0_Vtx[];
extern BgCamInfo object_kingdodongo_Col_025B64_06024730_BgCamList[];
extern SurfaceType object_kingdodongo_Col_025B64_06024738_SurfaceTypes[];
extern CollisionPoly object_kingdodongo_Col_025B64_06024740_PolyList[];
extern Vec3s object_kingdodongo_Col_025B64_06024750_VtxList[];
extern CollisionHeader object_kingdodongo_Col_025B64;
extern Vtx object_kingdodongo_024790_Vtx[];
extern Gfx object_kingdodongo_DL_025BD0[17];
#define object_kingdodongo_Tex_025C58_WIDTH 32
#define object_kingdodongo_Tex_025C58_HEIGHT 32
extern u64 object_kingdodongo_Tex_025C58[TEX_LEN(u64, object_kingdodongo_Tex_025C58_WIDTH, object_kingdodongo_Tex_025C58_HEIGHT, 16)];
extern BgCamInfo object_kingdodongo_Col_0264A8_06025060_BgCamList[];
extern SurfaceType object_kingdodongo_Col_0264A8_06025068_SurfaceTypes[];
extern CollisionPoly object_kingdodongo_Col_0264A8_06025070_PolyList[];
extern Vec3s object_kingdodongo_Col_0264A8_06025090_VtxList[];
extern CollisionHeader object_kingdodongo_Col_0264A8;
#define object_kingdodongo_Tex_0264E0_WIDTH 64
#define object_kingdodongo_Tex_0264E0_HEIGHT 64
extern u64 object_kingdodongo_Tex_0264E0[TEX_LEN(u64, object_kingdodongo_Tex_0264E0_WIDTH, object_kingdodongo_Tex_0264E0_HEIGHT, 8)];
#define object_kingdodongo_Tex_0274E0_WIDTH 64
#define object_kingdodongo_Tex_0274E0_HEIGHT 64
extern u64 object_kingdodongo_Tex_0274E0[TEX_LEN(u64, object_kingdodongo_Tex_0274E0_WIDTH, object_kingdodongo_Tex_0274E0_HEIGHT, 8)];
#define object_kingdodongo_Tex_0284E0_WIDTH 64
#define object_kingdodongo_Tex_0284E0_HEIGHT 64
extern u64 object_kingdodongo_Tex_0284E0[TEX_LEN(u64, object_kingdodongo_Tex_0284E0_WIDTH, object_kingdodongo_Tex_0284E0_HEIGHT, 8)];
#define object_kingdodongo_Tex_0294E0_WIDTH 64
#define object_kingdodongo_Tex_0294E0_HEIGHT 64
extern u64 object_kingdodongo_Tex_0294E0[TEX_LEN(u64, object_kingdodongo_Tex_0294E0_WIDTH, object_kingdodongo_Tex_0294E0_HEIGHT, 8)];
#define object_kingdodongo_Tex_02A4E0_WIDTH 64
#define object_kingdodongo_Tex_02A4E0_HEIGHT 64
extern u64 object_kingdodongo_Tex_02A4E0[TEX_LEN(u64, object_kingdodongo_Tex_02A4E0_WIDTH, object_kingdodongo_Tex_02A4E0_HEIGHT, 8)];
#define object_kingdodongo_Tex_02B4E0_WIDTH 64
#define object_kingdodongo_Tex_02B4E0_HEIGHT 64
extern u64 object_kingdodongo_Tex_02B4E0[TEX_LEN(u64, object_kingdodongo_Tex_02B4E0_WIDTH, object_kingdodongo_Tex_02B4E0_HEIGHT, 8)];
#define object_kingdodongo_Tex_02C4E0_WIDTH 64
#define object_kingdodongo_Tex_02C4E0_HEIGHT 64
extern u64 object_kingdodongo_Tex_02C4E0[TEX_LEN(u64, object_kingdodongo_Tex_02C4E0_WIDTH, object_kingdodongo_Tex_02C4E0_HEIGHT, 8)];
#define object_kingdodongo_Tex_02D4E0_WIDTH 64
#define object_kingdodongo_Tex_02D4E0_HEIGHT 64
extern u64 object_kingdodongo_Tex_02D4E0[TEX_LEN(u64, object_kingdodongo_Tex_02D4E0_WIDTH, object_kingdodongo_Tex_02D4E0_HEIGHT, 8)];
#define object_kingdodongo_Tex_02E4E0_WIDTH 32
#define object_kingdodongo_Tex_02E4E0_HEIGHT 64
extern u64 object_kingdodongo_Tex_02E4E0[TEX_LEN(u64, object_kingdodongo_Tex_02E4E0_WIDTH, object_kingdodongo_Tex_02E4E0_HEIGHT, 4)];
#define object_kingdodongo_Tex_02E8E0_WIDTH 32
#define object_kingdodongo_Tex_02E8E0_HEIGHT 64
extern u64 object_kingdodongo_Tex_02E8E0[TEX_LEN(u64, object_kingdodongo_Tex_02E8E0_WIDTH, object_kingdodongo_Tex_02E8E0_HEIGHT, 4)];
#define object_kingdodongo_Tex_02ECE0_WIDTH 32
#define object_kingdodongo_Tex_02ECE0_HEIGHT 64
extern u64 object_kingdodongo_Tex_02ECE0[TEX_LEN(u64, object_kingdodongo_Tex_02ECE0_WIDTH, object_kingdodongo_Tex_02ECE0_HEIGHT, 4)];
#define object_kingdodongo_Tex_02F0E0_WIDTH 32
#define object_kingdodongo_Tex_02F0E0_HEIGHT 64
extern u64 object_kingdodongo_Tex_02F0E0[TEX_LEN(u64, object_kingdodongo_Tex_02F0E0_WIDTH, object_kingdodongo_Tex_02F0E0_HEIGHT, 4)];
#define object_kingdodongo_Tex_02F4E0_WIDTH 32
#define object_kingdodongo_Tex_02F4E0_HEIGHT 64
extern u64 object_kingdodongo_Tex_02F4E0[TEX_LEN(u64, object_kingdodongo_Tex_02F4E0_WIDTH, object_kingdodongo_Tex_02F4E0_HEIGHT, 4)];
#define object_kingdodongo_Tex_02F8E0_WIDTH 32
#define object_kingdodongo_Tex_02F8E0_HEIGHT 64
extern u64 object_kingdodongo_Tex_02F8E0[TEX_LEN(u64, object_kingdodongo_Tex_02F8E0_WIDTH, object_kingdodongo_Tex_02F8E0_HEIGHT, 4)];
#define object_kingdodongo_Tex_02FCE0_WIDTH 32
#define object_kingdodongo_Tex_02FCE0_HEIGHT 64
extern u64 object_kingdodongo_Tex_02FCE0[TEX_LEN(u64, object_kingdodongo_Tex_02FCE0_WIDTH, object_kingdodongo_Tex_02FCE0_HEIGHT, 4)];
#define object_kingdodongo_Tex_0300E0_WIDTH 32
#define object_kingdodongo_Tex_0300E0_HEIGHT 64
extern u64 object_kingdodongo_Tex_0300E0[TEX_LEN(u64, object_kingdodongo_Tex_0300E0_WIDTH, object_kingdodongo_Tex_0300E0_HEIGHT, 4)];
#define object_kingdodongo_Tex_0304E0_WIDTH 32
#define object_kingdodongo_Tex_0304E0_HEIGHT 64
extern u64 object_kingdodongo_Tex_0304E0[TEX_LEN(u64, object_kingdodongo_Tex_0304E0_WIDTH, object_kingdodongo_Tex_0304E0_HEIGHT, 4)];
#define object_kingdodongo_Tex_0308E0_WIDTH 32
#define object_kingdodongo_Tex_0308E0_HEIGHT 64
extern u64 object_kingdodongo_Tex_0308E0[TEX_LEN(u64, object_kingdodongo_Tex_0308E0_WIDTH, object_kingdodongo_Tex_0308E0_HEIGHT, 4)];

#endif
