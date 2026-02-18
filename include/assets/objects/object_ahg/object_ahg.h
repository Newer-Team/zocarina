#ifndef OBJECT_AHG_H
#define OBJECT_AHG_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern StandardLimb gHylianMan1PelvisLimb;
extern StandardLimb gHylianMan1LeftThighLimb;
extern StandardLimb gHylianMan1LeftShinLimb;
extern StandardLimb gHylianMan1LeftFootLimb;
extern StandardLimb gHylianMan1RightThighLimb;
extern StandardLimb gHylianMan1RightShinLimb;
extern StandardLimb gHylianMan1RightFootLimb;
extern StandardLimb gHylianMan1TorsoLimb;
extern StandardLimb gHylianMan1LeftUpperArmLimb;
extern StandardLimb gHylianMan1LeftForearmLimb;
extern StandardLimb gHylianMan1LeftHandLimb;
extern StandardLimb gHylianMan1RightUpperArmLimb;
extern StandardLimb gHylianMan1RightForearmLimb;
extern StandardLimb gHylianMan1RightHandLimb;
extern StandardLimb gHylianMan1HeadLimb;
extern void* gHylianMan1Limbs[];
typedef enum gHylianMan1SkelLimb {
    /*  0 */ LIMB_OBJECT_AHG_0000F0_NONE,
    /*  1 */ LIMB_OBJECT_AHG_000000,
    /*  2 */ LIMB_OBJECT_AHG_00000C,
    /*  3 */ LIMB_OBJECT_AHG_000018,
    /*  4 */ LIMB_OBJECT_AHG_000024,
    /*  5 */ LIMB_OBJECT_AHG_000030,
    /*  6 */ LIMB_OBJECT_AHG_00003C,
    /*  7 */ LIMB_OBJECT_AHG_000048,
    /*  8 */ LIMB_OBJECT_AHG_000054,
    /*  9 */ LIMB_OBJECT_AHG_000060,
    /* 10 */ LIMB_OBJECT_AHG_00006C,
    /* 11 */ LIMB_OBJECT_AHG_000078,
    /* 12 */ LIMB_OBJECT_AHG_000084,
    /* 13 */ LIMB_OBJECT_AHG_000090,
    /* 14 */ LIMB_OBJECT_AHG_00009C,
    /* 15 */ LIMB_OBJECT_AHG_0000A8,
    /* 16 */ LIMB_OBJECT_AHG_0000F0_MAX
} gHylianMan1SkelLimb;
extern FlexSkeletonHeader gHylianMan1Skel;
//#define gHylianMan1TLUT_TLUT_COUNT 256
extern u32 gHylianMan1TLUT[];
#define gHylianMan1BeardedSkinHairTex_WIDTH 16
#define gHylianMan1BeardedSkinHairTex_HEIGHT 16
extern u32 gHylianMan1BeardedSkinHairTex[TEX_LEN(u32, gHylianMan1BeardedSkinHairTex_WIDTH, gHylianMan1BeardedSkinHairTex_HEIGHT, 8)];
#define gHylianMan1BeardedHairTex_WIDTH 16
#define gHylianMan1BeardedHairTex_HEIGHT 16
extern u32 gHylianMan1BeardedHairTex[TEX_LEN(u32, gHylianMan1BeardedHairTex_WIDTH, gHylianMan1BeardedHairTex_HEIGHT, 8)];
#define gHylianMan1BeardedEarTex_WIDTH 8
#define gHylianMan1BeardedEarTex_HEIGHT 8
extern u32 gHylianMan1BeardedEarTex[TEX_LEN(u32, gHylianMan1BeardedEarTex_WIDTH, gHylianMan1BeardedEarTex_HEIGHT, 8)];
#define gHylianMan1BeardedSkinTex_WIDTH 8
#define gHylianMan1BeardedSkinTex_HEIGHT 8
extern u32 gHylianMan1BeardedSkinTex[TEX_LEN(u32, gHylianMan1BeardedSkinTex_WIDTH, gHylianMan1BeardedSkinTex_HEIGHT, 8)];
#define gHylianMan1BeardedEyeOpenTex_WIDTH 16
#define gHylianMan1BeardedEyeOpenTex_HEIGHT 16
extern u32 gHylianMan1BeardedEyeOpenTex[TEX_LEN(u32, gHylianMan1BeardedEyeOpenTex_WIDTH, gHylianMan1BeardedEyeOpenTex_HEIGHT, 8)];
#define gHylianMan1BeardedEyeHalfTex_WIDTH 16
#define gHylianMan1BeardedEyeHalfTex_HEIGHT 16
extern u32 gHylianMan1BeardedEyeHalfTex[TEX_LEN(u32, gHylianMan1BeardedEyeHalfTex_WIDTH, gHylianMan1BeardedEyeHalfTex_HEIGHT, 8)];
#define gHylianMan1BeardedEyeClosedTex_WIDTH 16
#define gHylianMan1BeardedEyeClosedTex_HEIGHT 16
extern u32 gHylianMan1BeardedEyeClosedTex[TEX_LEN(u32, gHylianMan1BeardedEyeClosedTex_WIDTH, gHylianMan1BeardedEyeClosedTex_HEIGHT, 8)];
#define gHylianMan1FingersTex_WIDTH 16
#define gHylianMan1FingersTex_HEIGHT 16
extern u32 gHylianMan1FingersTex[TEX_LEN(u32, gHylianMan1FingersTex_WIDTH, gHylianMan1FingersTex_HEIGHT, 8)];
#define gHylianMan1ShirtTex_WIDTH 8
#define gHylianMan1ShirtTex_HEIGHT 8
extern u32 gHylianMan1ShirtTex[TEX_LEN(u32, gHylianMan1ShirtTex_WIDTH, gHylianMan1ShirtTex_HEIGHT, 8)];
#define gHylianMan1ShoesTex_WIDTH 8
#define gHylianMan1ShoesTex_HEIGHT 8
extern u32 gHylianMan1ShoesTex[TEX_LEN(u32, gHylianMan1ShoesTex_WIDTH, gHylianMan1ShoesTex_HEIGHT, 8)];
#define gHylianMan1PantsTex_WIDTH 32
#define gHylianMan1PantsTex_HEIGHT 16
extern u32 gHylianMan1PantsTex[TEX_LEN(u32, gHylianMan1PantsTex_WIDTH, gHylianMan1PantsTex_HEIGHT, 8)];
#define gHylianMan1PantsBeltTex_WIDTH 16
#define gHylianMan1PantsBeltTex_HEIGHT 16
extern u32 gHylianMan1PantsBeltTex[TEX_LEN(u32, gHylianMan1PantsBeltTex_WIDTH, gHylianMan1PantsBeltTex_HEIGHT, 8)];
extern Vtx gHylianMan1BeardedHeadVtx[];
extern Vtx gHylianMan1LeftHandVtx[];
extern Vtx gHylianMan1LeftForearmVtx[];
extern Vtx gHylianMan1LeftUpperArmVtx[];
extern Vtx gHylianMan1RightHandVtx[];
extern Vtx gHylianMan1RightForearmVtx[];
extern Vtx gHylianMan1RightUpperArmVtx[];
extern Vtx gHylianMan1TorsoVtx[];
extern Vtx gHylianMan1RightFootVtx[];
extern Vtx gHylianMan1RightShinVtx[];
extern Vtx gHylianMan1RightThighVtx[];
extern Vtx gHylianMan1LeftFootVtx[];
extern Vtx gHylianMan1LeftShinVtx[];
extern Vtx gHylianMan1LeftThighVtx[];
extern Vtx gHylianMan1PelvisVtx[];
extern Gfx gHylianMan1BeardedHeadDL[130];
extern Gfx gHylianMan1RightHandDL[46];
extern Gfx gHylianMan1RightForearmDL[38];
extern Gfx gHylianMan1RightUpperArmDL[39];
extern Gfx gHylianMan1LeftHandDL[46];
extern Gfx gHylianMan1LeftForearmDL[38];
extern Gfx gHylianMan1LeftUpperArmDL[39];
extern Gfx gHylianMan1TorsoDL[69];
extern Gfx gHylianMan1RightFootDL[40];
extern Gfx gHylianMan1RightShinDL[38];
extern Gfx gHylianMan1RightThighDL[39];
extern Gfx gHylianMan1LeftFootDL[40];
extern Gfx gHylianMan1LeftShinDL[38];
extern Gfx gHylianMan1LeftThighDL[39];
extern Gfx gHylianMan1PelvisDL[52];
//#define gHylianMan1ShavedBowlCutTLUT_TLUT_COUNT 192
extern u64 gHylianMan1ShavedBowlCutTLUT[];
#define gHylianMan1ShavedBowlSkinEarTex_WIDTH 8
#define gHylianMan1ShavedBowlSkinEarTex_HEIGHT 8
extern u64 gHylianMan1ShavedBowlSkinEarTex[TEX_LEN(u64, gHylianMan1ShavedBowlSkinEarTex_WIDTH, gHylianMan1ShavedBowlSkinEarTex_HEIGHT, 8)];
#define gHylianMan1ShavedBowlMouthTex_WIDTH 32
#define gHylianMan1ShavedBowlMouthTex_HEIGHT 16
extern u64 gHylianMan1ShavedBowlMouthTex[TEX_LEN(u64, gHylianMan1ShavedBowlMouthTex_WIDTH, gHylianMan1ShavedBowlMouthTex_HEIGHT, 8)];
#define gHylianMan1ShavedBowlEyeTex_WIDTH 16
#define gHylianMan1ShavedBowlEyeTex_HEIGHT 16
extern u64 gHylianMan1ShavedBowlEyeTex[TEX_LEN(u64, gHylianMan1ShavedBowlEyeTex_WIDTH, gHylianMan1ShavedBowlEyeTex_HEIGHT, 8)];
#define gHylianMan1BowlCutHairTex_WIDTH 8
#define gHylianMan1BowlCutHairTex_HEIGHT 16
extern u64 gHylianMan1BowlCutHairTex[TEX_LEN(u64, gHylianMan1BowlCutHairTex_WIDTH, gHylianMan1BowlCutHairTex_HEIGHT, 8)];
extern Vtx gHylianMan1ShavedHeadVtx[];
extern Vtx gHylianMan1BowlCutHeadVtx[];
extern Gfx gHylianMan1ShavedHeadDL[68];
extern Gfx gHylianMan1BowlCutHeadDL[80];

#endif
