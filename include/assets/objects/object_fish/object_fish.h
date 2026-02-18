#ifndef OBJECT_FISH_H
#define OBJECT_FISH_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gFishingFishFrameData[];
extern JointIndex gFishingFishJointIndices[];
extern AnimationHeader gFishingFishAnim;
extern Vtx object_fish_Vtx_000090[];
extern Vtx object_fish_Vtx_0000E0[];
extern Vtx object_fish_Vtx_000190[];
extern Vtx object_fish_Vtx_0003B0[];
extern Vtx object_fish_Vtx_0003E0[];
extern Vtx object_fish_Vtx_000410[];
extern Vtx object_fish_Vtx_0005B0[];
extern Vtx object_fish_Vtx_0005E0[];
extern Vtx object_fish_Vtx_000610[];
extern Vtx object_fish_Vtx_0007F0[];
extern Vtx object_fish_Vtx_0008E0[];
extern Vtx object_fish_Vtx_000910[];
extern Gfx gFishingFishDL_000940[21];
extern Gfx gFishingFishDL_0009E8[35];
extern Gfx gFishingFishDL_000B00[20];
extern Gfx gFishingFishDL_000BA0[20];
extern Gfx gFishingFishDL_000C40[62];
extern Gfx gFishingFishDL_000E30[20];
extern Gfx gFishingFishDL_000ED0[20];
extern Gfx gFishingFishDL_000F70[38];
extern Gfx gFishingFishDL_0010A0[56];
extern Gfx gFishingFishDL_001260[20];
extern Gfx gFishingFishDL_001300[20];
extern Gfx gFishingFishDL_0013A0[38];
#define gFishingFishTex_0014D0_WIDTH 16
#define gFishingFishTex_0014D0_HEIGHT 16
extern u64 gFishingFishTex_0014D0[TEX_LEN(u64, gFishingFishTex_0014D0_WIDTH, gFishingFishTex_0014D0_HEIGHT, 16)];
#define gFishingFishTex_0016D0_WIDTH 16
#define gFishingFishTex_0016D0_HEIGHT 16
extern u64 gFishingFishTex_0016D0[TEX_LEN(u64, gFishingFishTex_0016D0_WIDTH, gFishingFishTex_0016D0_HEIGHT, 16)];
#define gFishingFishTex_0018D0_WIDTH 16
#define gFishingFishTex_0018D0_HEIGHT 16
extern u64 gFishingFishTex_0018D0[TEX_LEN(u64, gFishingFishTex_0018D0_WIDTH, gFishingFishTex_0018D0_HEIGHT, 16)];
#define gFishingFishTex_001AD0_WIDTH 32
#define gFishingFishTex_001AD0_HEIGHT 32
extern u64 gFishingFishTex_001AD0[TEX_LEN(u64, gFishingFishTex_001AD0_WIDTH, gFishingFishTex_001AD0_HEIGHT, 16)];
#define gFishingFishTex_0022D0_WIDTH 16
#define gFishingFishTex_0022D0_HEIGHT 16
extern u64 gFishingFishTex_0022D0[TEX_LEN(u64, gFishingFishTex_0022D0_WIDTH, gFishingFishTex_0022D0_HEIGHT, 16)];
#define gFishingFishTex_0024D0_WIDTH 16
#define gFishingFishTex_0024D0_HEIGHT 16
extern u64 gFishingFishTex_0024D0[TEX_LEN(u64, gFishingFishTex_0024D0_WIDTH, gFishingFishTex_0024D0_HEIGHT, 16)];
#define gFishingFishTex_0026D0_WIDTH 16
#define gFishingFishTex_0026D0_HEIGHT 16
extern u64 gFishingFishTex_0026D0[TEX_LEN(u64, gFishingFishTex_0026D0_WIDTH, gFishingFishTex_0026D0_HEIGHT, 16)];
extern StandardLimb gFishingFishLimb_0028D0;
extern StandardLimb gFishingFishLimb_0028DC;
extern StandardLimb gFishingFishLimb_0028E8;
extern StandardLimb gFishingFishLimb_0028F4;
extern StandardLimb gFishingFishLimb_002900;
extern StandardLimb gFishingFishLimb_00290C;
extern StandardLimb gFishingFishLimb_002918;
extern StandardLimb gFishingFishLimb_002924;
extern StandardLimb gFishingFishLimb_002930;
extern StandardLimb gFishingFishLimb_00293C;
extern StandardLimb gFishingFishLimb_002948;
extern StandardLimb gFishingFishLimb_002954;
extern StandardLimb gFishingFishLimb_002960;
extern StandardLimb gFishingFishLimb_00296C;
extern StandardLimb gFishingFishLimb_002978;
extern void* gFishingFishLimbs[];
typedef enum gFishingFishSkelLimb {
    /*  0 */ LIMB_OBJECT_FISH_0029C0_NONE,
    /*  1 */ LIMB_OBJECT_FISH_0028D0,
    /*  2 */ LIMB_OBJECT_FISH_0028DC,
    /*  3 */ LIMB_OBJECT_FISH_0028E8,
    /*  4 */ LIMB_OBJECT_FISH_0028F4,
    /*  5 */ LIMB_OBJECT_FISH_002900,
    /*  6 */ LIMB_OBJECT_FISH_00290C,
    /*  7 */ LIMB_OBJECT_FISH_002918,
    /*  8 */ LIMB_OBJECT_FISH_002924,
    /*  9 */ LIMB_OBJECT_FISH_002930,
    /* 10 */ LIMB_OBJECT_FISH_00293C,
    /* 11 */ LIMB_OBJECT_FISH_002948,
    /* 12 */ LIMB_OBJECT_FISH_002954,
    /* 13 */ LIMB_OBJECT_FISH_002960,
    /* 14 */ LIMB_OBJECT_FISH_00296C,
    /* 15 */ LIMB_OBJECT_FISH_002978,
    /* 16 */ LIMB_OBJECT_FISH_0029C0_MAX
} gFishingFishSkelLimb;
extern FlexSkeletonHeader gFishingFishSkel;
#define gFishingOldLureHookTex_WIDTH 8
#define gFishingOldLureHookTex_HEIGHT 16
extern u64 gFishingOldLureHookTex[TEX_LEN(u64, gFishingOldLureHookTex_WIDTH, gFishingOldLureHookTex_HEIGHT, 16)];
#define gFishingOldLureFloatTex_WIDTH 8
#define gFishingOldLureFloatTex_HEIGHT 8
extern u64 gFishingOldLureFloatTex[TEX_LEN(u64, gFishingOldLureFloatTex_WIDTH, gFishingOldLureFloatTex_HEIGHT, 16)];
extern Vtx gFishingOldLureVtx[];
extern Gfx gFishingOldLureDL[33];
#define gFishingStreamSplashTile1Tex_WIDTH 32
#define gFishingStreamSplashTile1Tex_HEIGHT 64
extern u64 gFishingStreamSplashTile1Tex[TEX_LEN(u64, gFishingStreamSplashTile1Tex_WIDTH, gFishingStreamSplashTile1Tex_HEIGHT, 4)];
#define gFishingStreamSplashTile2Tex_WIDTH 16
#define gFishingStreamSplashTile2Tex_HEIGHT 16
extern u64 gFishingStreamSplashTile2Tex[TEX_LEN(u64, gFishingStreamSplashTile2Tex_WIDTH, gFishingStreamSplashTile2Tex_HEIGHT, 4)];
extern Vtx gFishingStreamSplashVtx[];
extern Gfx gFishingStreamSplashDL[29];
#define gFishingBubbleTex_WIDTH 16
#define gFishingBubbleTex_HEIGHT 16
extern u64 gFishingBubbleTex[TEX_LEN(u64, gFishingBubbleTex_WIDTH, gFishingBubbleTex_HEIGHT, 8)];
extern Vtx gFishingBubbleModelVtx[];
extern Gfx gFishingBubbleMaterialDL[12];
extern Gfx gFishingBubbleModelDL[3];
#define gFishingDustSplashTex_WIDTH 16
#define gFishingDustSplashTex_HEIGHT 16
extern u64 gFishingDustSplashTex[TEX_LEN(u64, gFishingDustSplashTex_WIDTH, gFishingDustSplashTex_HEIGHT, 8)];
extern Vtx gFishingDustSplashModelVtx[];
extern Gfx gFishingDustSplashMaterialDL[14];
extern Gfx gFishingDustSplashModelDL[3];
extern Vtx gFishingLineModelVtx[];
extern Gfx gFishingUnusedMaterialDL[6];
extern Gfx gFishingLineModelDL[4];
extern Vtx gFishingRainDropModelVtx[];
extern Gfx gFishingRainDropModelDL[3];
#define gFishingRainSplashTex_WIDTH 16
#define gFishingRainSplashTex_HEIGHT 16
extern u64 gFishingRainSplashTex[TEX_LEN(u64, gFishingRainSplashTex_WIDTH, gFishingRainSplashTex_HEIGHT, 16)];
extern Vtx gFishingRainSplashModelVtx[];
extern Gfx gFishingRainSplashMaterialDL[14];
extern Gfx gFishingRainSplashModelDL[3];
extern s16 gFishingOwnerFrameData[];
extern JointIndex gFishingOwnerJointIndices[];
extern AnimationHeader gFishingOwnerAnim;
extern Vtx object_fish_Vtx_004550[];
extern Vtx gFishingOwnerHatVtx[];
extern Vtx gFishingOwnerHairVtx[];
extern Vtx object_fish_Vtx_005870[];
extern Vtx object_fish_Vtx_005D60[];
extern Vtx object_fish_Vtx_005EE0[];
extern Vtx object_fish_Vtx_006160[];
extern Vtx object_fish_Vtx_006650[];
extern Vtx object_fish_Vtx_0067D0[];
extern Vtx object_fish_Vtx_006A50[];
extern Gfx gFishingOwnerDL_006F60[126];
extern Gfx gFishingOwnerHairDL[47];
extern Gfx gFishingOwnerHatDL[62];
extern Gfx gFishingOwnerDL_0076B8[200];
extern Gfx gFishingOwnerDL_007CF8[42];
extern Gfx gFishingOwnerDL_007E48[38];
extern Gfx gFishingOwnerDL_007F78[56];
extern Gfx gFishingOwnerDL_008138[42];
extern Gfx gFishingOwnerDL_008288[38];
extern Gfx gFishingOwnerDL_0083B8[56];
extern StandardLimb gFishingOwnerLimb_008578;
extern StandardLimb gFishingOwnerLimb_008584;
extern StandardLimb gFishingOwnerLimb_008590;
extern StandardLimb gFishingOwnerLimb_00859C;
extern StandardLimb gFishingOwnerLimb_0085A8;
extern StandardLimb gFishingOwnerLimb_0085B4;
extern StandardLimb gFishingOwnerLimb_0085C0;
extern StandardLimb gFishingOwnerLimb_0085CC;
extern void* gFishingOwnerLimbs[];
typedef enum gFishingOwnerSkelLimb {
    /*  0 */ LIMB_OBJECT_FISH_0085F8_NONE,
    /*  1 */ LIMB_OBJECT_FISH_008578,
    /*  2 */ LIMB_OBJECT_FISH_008584,
    /*  3 */ LIMB_OBJECT_FISH_008590,
    /*  4 */ LIMB_OBJECT_FISH_00859C,
    /*  5 */ LIMB_OBJECT_FISH_0085A8,
    /*  6 */ LIMB_OBJECT_FISH_0085B4,
    /*  7 */ LIMB_OBJECT_FISH_0085C0,
    /*  8 */ LIMB_OBJECT_FISH_0085CC,
    /*  9 */ LIMB_OBJECT_FISH_0085F8_MAX
} gFishingOwnerSkelLimb;
extern FlexSkeletonHeader gFishingOwnerSkel;
extern Gfx gFishingRippleMaterialDL[13];
extern Gfx gFishingRippleModelDL[3];
#define gFishingWaterDustTex_WIDTH 32
#define gFishingWaterDustTex_HEIGHT 32
extern u64 gFishingWaterDustTex[TEX_LEN(u64, gFishingWaterDustTex_WIDTH, gFishingWaterDustTex_HEIGHT, 4)];
extern Vtx gFishingWaterDustModelVtx[];
extern Gfx gFishingWaterDustMaterialDL[22];
extern Gfx gFishingWaterDustModelDL[4];
//#define gFishingOwnerTLUT_TLUT_COUNT 256
extern u64 gFishingOwnerTLUT[];
#define gFishingOwnerSkinTex_WIDTH 8
#define gFishingOwnerSkinTex_HEIGHT 8
extern u64 gFishingOwnerSkinTex[TEX_LEN(u64, gFishingOwnerSkinTex_WIDTH, gFishingOwnerSkinTex_HEIGHT, 8)];
#define gFishingOwnerHairFullTex_WIDTH 16
#define gFishingOwnerHairFullTex_HEIGHT 16
extern u64 gFishingOwnerHairFullTex[TEX_LEN(u64, gFishingOwnerHairFullTex_WIDTH, gFishingOwnerHairFullTex_HEIGHT, 8)];
#define gFishingOwnerHairPartialTex_WIDTH 16
#define gFishingOwnerHairPartialTex_HEIGHT 16
extern u64 gFishingOwnerHairPartialTex[TEX_LEN(u64, gFishingOwnerHairPartialTex_WIDTH, gFishingOwnerHairPartialTex_HEIGHT, 8)];
#define gFishingOwnerHearTex_WIDTH 8
#define gFishingOwnerHearTex_HEIGHT 8
extern u64 gFishingOwnerHearTex[TEX_LEN(u64, gFishingOwnerHearTex_WIDTH, gFishingOwnerHearTex_HEIGHT, 8)];
#define gFishingOwnerMouthTex_WIDTH 32
#define gFishingOwnerMouthTex_HEIGHT 32
extern u64 gFishingOwnerMouthTex[TEX_LEN(u64, gFishingOwnerMouthTex_WIDTH, gFishingOwnerMouthTex_HEIGHT, 8)];
#define gFishingOwnerNostrilTex_WIDTH 8
#define gFishingOwnerNostrilTex_HEIGHT 8
extern u64 gFishingOwnerNostrilTex[TEX_LEN(u64, gFishingOwnerNostrilTex_WIDTH, gFishingOwnerNostrilTex_HEIGHT, 8)];
#define gFishingOwnerEyeOpenTex_WIDTH 32
#define gFishingOwnerEyeOpenTex_HEIGHT 32
extern u64 gFishingOwnerEyeOpenTex[TEX_LEN(u64, gFishingOwnerEyeOpenTex_WIDTH, gFishingOwnerEyeOpenTex_HEIGHT, 8)];
#define gFishingOwnerEyeHalfTex_WIDTH 32
#define gFishingOwnerEyeHalfTex_HEIGHT 32
extern u64 gFishingOwnerEyeHalfTex[TEX_LEN(u64, gFishingOwnerEyeHalfTex_WIDTH, gFishingOwnerEyeHalfTex_HEIGHT, 8)];
#define gFishingOwnerEyeClosedTex_WIDTH 32
#define gFishingOwnerEyeClosedTex_HEIGHT 32
extern u64 gFishingOwnerEyeClosedTex[TEX_LEN(u64, gFishingOwnerEyeClosedTex_WIDTH, gFishingOwnerEyeClosedTex_HEIGHT, 8)];
#define gFishingOwnerHatTex_WIDTH 64
#define gFishingOwnerHatTex_HEIGHT 32
extern u64 gFishingOwnerHatTex[TEX_LEN(u64, gFishingOwnerHatTex_WIDTH, gFishingOwnerHatTex_HEIGHT, 8)];
#define gFishingOwnerShirtTex_WIDTH 8
#define gFishingOwnerShirtTex_HEIGHT 8
extern u64 gFishingOwnerShirtTex[TEX_LEN(u64, gFishingOwnerShirtTex_WIDTH, gFishingOwnerShirtTex_HEIGHT, 8)];
#define gFishingOwnerFingersTex_WIDTH 16
#define gFishingOwnerFingersTex_HEIGHT 16
extern u64 gFishingOwnerFingersTex[TEX_LEN(u64, gFishingOwnerFingersTex_WIDTH, gFishingOwnerFingersTex_HEIGHT, 8)];
#define gFishingOwnerCollarTex_WIDTH 8
#define gFishingOwnerCollarTex_HEIGHT 16
extern u64 gFishingOwnerCollarTex[TEX_LEN(u64, gFishingOwnerCollarTex_WIDTH, gFishingOwnerCollarTex_HEIGHT, 8)];
#define gFishingOwnerVestTex_WIDTH 16
#define gFishingOwnerVestTex_HEIGHT 16
extern u64 gFishingOwnerVestTex[TEX_LEN(u64, gFishingOwnerVestTex_WIDTH, gFishingOwnerVestTex_HEIGHT, 8)];
#define gFishingSinkingLureSegmentTex_WIDTH 64
#define gFishingSinkingLureSegmentTex_HEIGHT 64
extern u64 gFishingSinkingLureSegmentTex[TEX_LEN(u64, gFishingSinkingLureSegmentTex_WIDTH, gFishingSinkingLureSegmentTex_HEIGHT, 8)];
extern Vtx gFishingSinkingLureSegmentModelVtx[];
extern Gfx gFishingSinkingLureSegmentMaterialDL[14];
extern Gfx gFishingSinkingLureSegmentModelDL[3];
#define gFishingGroupFishTex_WIDTH 64
#define gFishingGroupFishTex_HEIGHT 16
extern u64 gFishingGroupFishTex[TEX_LEN(u64, gFishingGroupFishTex_WIDTH, gFishingGroupFishTex_HEIGHT, 16)];
extern Vtx gFishingGroupFishModelVtx[];
extern Gfx gFishingGroupFishMaterialDL[15];
extern Gfx gFishingGroupFishModelDL[3];
extern Vtx gFishingUnusedRockVtx[];
extern Gfx gFishingUnusedRockDL[38];
#define gFishingUnusedRockTex_WIDTH 32
#define gFishingUnusedRockTex_HEIGHT 32
extern u64 gFishingUnusedRockTex[TEX_LEN(u64, gFishingUnusedRockTex_WIDTH, gFishingUnusedRockTex_HEIGHT, 16)];
extern s16 gFishingLoachFrameData[];
extern JointIndex gFishingLoachJointIndices[];
extern AnimationHeader gFishingLoachAnim;
extern Vtx object_fish_Vtx_00CFF0[];
extern Vtx object_fish_Vtx_00D2E0[];
extern Vtx object_fish_Vtx_00D330[];
extern Vtx object_fish_Vtx_00D720[];
extern Vtx object_fish_Vtx_00D750[];
extern Vtx object_fish_Vtx_00DAE0[];
extern Vtx object_fish_Vtx_00DD20[];
extern Vtx object_fish_Vtx_00DD50[];
extern Vtx object_fish_Vtx_00DD80[];
extern Vtx object_fish_Vtx_00DDB0[];
extern Vtx object_fish_Vtx_00DE80[];
extern Gfx gFishingLoachDL_00DED0[27];
extern Gfx gFishingLoachDL_00DFA8[20];
extern Gfx gFishingLoachDL_00E048[36];
extern Gfx gFishingLoachDL_00E168[95];
extern Gfx gFishingLoachDL_00E460[20];
extern Gfx gFishingLoachDL_00E500[97];
extern Gfx gFishingLoachDL_00E808[21];
extern Gfx gFishingLoachDL_00E8B0[79];
extern Gfx gFishingLoachDL_00EB28[20];
extern Gfx gFishingLoachDL_00EBC8[20];
extern Gfx gFishingLoachDL_00EC68[24];
#define gFishingLoachTex_00ED28_WIDTH 32
#define gFishingLoachTex_00ED28_HEIGHT 32
extern u64 gFishingLoachTex_00ED28[TEX_LEN(u64, gFishingLoachTex_00ED28_WIDTH, gFishingLoachTex_00ED28_HEIGHT, 16)];
#define gFishingLoachTex_00F528_WIDTH 32
#define gFishingLoachTex_00F528_HEIGHT 32
extern u64 gFishingLoachTex_00F528[TEX_LEN(u64, gFishingLoachTex_00F528_WIDTH, gFishingLoachTex_00F528_HEIGHT, 16)];
#define gFishingLoachTex_00FD28_WIDTH 32
#define gFishingLoachTex_00FD28_HEIGHT 32
extern u64 gFishingLoachTex_00FD28[TEX_LEN(u64, gFishingLoachTex_00FD28_WIDTH, gFishingLoachTex_00FD28_HEIGHT, 16)];
#define gFishingLoachTex_010528_WIDTH 32
#define gFishingLoachTex_010528_HEIGHT 32
extern u64 gFishingLoachTex_010528[TEX_LEN(u64, gFishingLoachTex_010528_WIDTH, gFishingLoachTex_010528_HEIGHT, 16)];
#define gFishingLoachTex_010D28_WIDTH 8
#define gFishingLoachTex_010D28_HEIGHT 8
extern u64 gFishingLoachTex_010D28[TEX_LEN(u64, gFishingLoachTex_010D28_WIDTH, gFishingLoachTex_010D28_HEIGHT, 16)];
#define gFishingLoachTex_010DA8_WIDTH 16
#define gFishingLoachTex_010DA8_HEIGHT 16
extern u64 gFishingLoachTex_010DA8[TEX_LEN(u64, gFishingLoachTex_010DA8_WIDTH, gFishingLoachTex_010DA8_HEIGHT, 16)];
extern StandardLimb gFishingLoachLimb_010FA8;
extern StandardLimb gFishingLoachLimb_010FB4;
extern StandardLimb gFishingLoachLimb_010FC0;
extern StandardLimb gFishingLoachLimb_010FCC;
extern StandardLimb gFishingLoachLimb_010FD8;
extern StandardLimb gFishingLoachLimb_010FE4;
extern StandardLimb gFishingLoachLimb_010FF0;
extern StandardLimb gFishingLoachLimb_010FFC;
extern StandardLimb gFishingLoachLimb_011008;
extern StandardLimb gFishingLoachLimb_011014;
extern StandardLimb gFishingLoachLimb_011020;
extern void* gFishingLoachLimbs[];
typedef enum gFishingLoachSkelLimb {
    /*  0 */ LIMB_OBJECT_FISH_011058_NONE,
    /*  1 */ LIMB_OBJECT_FISH_010FA8,
    /*  2 */ LIMB_OBJECT_FISH_010FB4,
    /*  3 */ LIMB_OBJECT_FISH_010FC0,
    /*  4 */ LIMB_OBJECT_FISH_010FCC,
    /*  5 */ LIMB_OBJECT_FISH_010FD8,
    /*  6 */ LIMB_OBJECT_FISH_010FE4,
    /*  7 */ LIMB_OBJECT_FISH_010FF0,
    /*  8 */ LIMB_OBJECT_FISH_010FFC,
    /*  9 */ LIMB_OBJECT_FISH_011008,
    /* 10 */ LIMB_OBJECT_FISH_011014,
    /* 11 */ LIMB_OBJECT_FISH_011020,
    /* 12 */ LIMB_OBJECT_FISH_011058_MAX
} gFishingLoachSkelLimb;
extern FlexSkeletonHeader gFishingLoachSkel;
#define gFishingRodSegmentStripTex_WIDTH 16
#define gFishingRodSegmentStripTex_HEIGHT 8
extern u64 gFishingRodSegmentStripTex[TEX_LEN(u64, gFishingRodSegmentStripTex_WIDTH, gFishingRodSegmentStripTex_HEIGHT, 16)];
#define gFishingRodSegmentBlackTex_WIDTH 16
#define gFishingRodSegmentBlackTex_HEIGHT 8
extern u64 gFishingRodSegmentBlackTex[TEX_LEN(u64, gFishingRodSegmentBlackTex_WIDTH, gFishingRodSegmentBlackTex_HEIGHT, 16)];
#define gFishingRodSegmentWhiteTex_WIDTH 16
#define gFishingRodSegmentWhiteTex_HEIGHT 8
extern u64 gFishingRodSegmentWhiteTex[TEX_LEN(u64, gFishingRodSegmentWhiteTex_WIDTH, gFishingRodSegmentWhiteTex_HEIGHT, 16)];
extern Vtx gFishingRodSegmentVtx[];
extern Gfx gFishingRodMaterialDL[8];
extern Gfx gFishingRodSegmentDL[5];
#define gFishingLureHookTex_WIDTH 32
#define gFishingLureHookTex_HEIGHT 32
extern u64 gFishingLureHookTex[TEX_LEN(u64, gFishingLureHookTex_WIDTH, gFishingLureHookTex_HEIGHT, 16)];
#define gFishingLureFloatTex_WIDTH 32
#define gFishingLureFloatTex_HEIGHT 16
extern u64 gFishingLureFloatTex[TEX_LEN(u64, gFishingLureFloatTex_WIDTH, gFishingLureFloatTex_HEIGHT, 16)];
extern Vtx gFishingLureHookVtx[];
extern Vtx gFishingLureFloatVtx[];
extern Gfx gFishingLureHookDL[18];
extern Gfx gFishingLureFloatDL[29];
#define gFishingLilyPadTex_WIDTH 32
#define gFishingLilyPadTex_HEIGHT 32
extern u64 gFishingLilyPadTex[TEX_LEN(u64, gFishingLilyPadTex_WIDTH, gFishingLilyPadTex_HEIGHT, 16)];
#define gFishingRockTex_WIDTH 32
#define gFishingRockTex_HEIGHT 32
extern u64 gFishingRockTex[TEX_LEN(u64, gFishingRockTex_WIDTH, gFishingRockTex_HEIGHT, 16)];
extern Vtx gFishingLilyPadModelVtx[];
extern Gfx gFishingLilyPadMaterialDL[16];
extern Gfx gFishingLilyPadModelDL[4];
extern Vtx gFishingRockModelVtx[];
extern Gfx gFishingRockMaterialDL[16];
extern Gfx gFishingRockModelDL[10];
#define gFishingWoodPostTex_WIDTH 32
#define gFishingWoodPostTex_HEIGHT 32
extern u64 gFishingWoodPostTex[TEX_LEN(u64, gFishingWoodPostTex_WIDTH, gFishingWoodPostTex_HEIGHT, 16)];
extern Vtx gFishingWoodPostModelVtx[];
extern Gfx gFishingWoodPostMaterialDL[16];
extern Gfx gFishingWoodPostModelDL[6];
extern Vtx gFishingReedModelVtx[];
extern Gfx gFishingReedMaterialDL[16];
extern Gfx gFishingReedModelDL[3];
#define gFishingAquariumBottomTex_WIDTH 16
#define gFishingAquariumBottomTex_HEIGHT 16
extern u64 gFishingAquariumBottomTex[TEX_LEN(u64, gFishingAquariumBottomTex_WIDTH, gFishingAquariumBottomTex_HEIGHT, 16)];
#define gFishingAquariumWaterTex_WIDTH 32
#define gFishingAquariumWaterTex_HEIGHT 32
extern u64 gFishingAquariumWaterTex[TEX_LEN(u64, gFishingAquariumWaterTex_WIDTH, gFishingAquariumWaterTex_HEIGHT, 16)];
#define gFishingAquariumGlassTex_WIDTH 32
#define gFishingAquariumGlassTex_HEIGHT 32
extern u64 gFishingAquariumGlassTex[TEX_LEN(u64, gFishingAquariumGlassTex_WIDTH, gFishingAquariumGlassTex_HEIGHT, 8)];
extern Vtx gFishingAquariumBottomVtx[];
extern Vtx gFishingAquariumContainerVtx[];
extern Gfx gFishingAquariumBottomDL[20];
extern Gfx gFishingAquariumContainerDL[47];

#endif
