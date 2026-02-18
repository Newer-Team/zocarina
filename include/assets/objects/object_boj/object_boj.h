#ifndef OBJECT_BOJ_H
#define OBJECT_BOJ_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern StandardLimb gHylianMan2PelvisLimb;
extern StandardLimb gHylianMan2LeftThighLimb;
extern StandardLimb gHylianMan2LeftShinLimb;
extern StandardLimb gHylianMan2LeftFootLimb;
extern StandardLimb gHylianMan2RightThighLimb;
extern StandardLimb gHylianMan2RightShinLimb;
extern StandardLimb gHylianMan2RightFootLimb;
extern StandardLimb gHylianMan2TorsoLimb;
extern StandardLimb gHylianMan2LeftUpperArmLimb;
extern StandardLimb gHylianMan2LeftForearmLimb;
extern StandardLimb gHylianMan2LeftHandLimb;
extern StandardLimb gHylianMan2RightUpperArmLimb;
extern StandardLimb gHylianMan2RightForearmLimb;
extern StandardLimb gHylianMan2RightHandLimb;
extern StandardLimb gHylianMan2HeadLimb;
extern void* gHylianMan2Limbs[];
typedef enum gHylianMan2SkelLimb {
    /*  0 */ LIMB_OBJECT_BOJ_0000F0_NONE,
    /*  1 */ LIMB_OBJECT_BOJ_000000,
    /*  2 */ LIMB_OBJECT_BOJ_00000C,
    /*  3 */ LIMB_OBJECT_BOJ_000018,
    /*  4 */ LIMB_OBJECT_BOJ_000024,
    /*  5 */ LIMB_OBJECT_BOJ_000030,
    /*  6 */ LIMB_OBJECT_BOJ_00003C,
    /*  7 */ LIMB_OBJECT_BOJ_000048,
    /*  8 */ LIMB_OBJECT_BOJ_000054,
    /*  9 */ LIMB_OBJECT_BOJ_000060,
    /* 10 */ LIMB_OBJECT_BOJ_00006C,
    /* 11 */ LIMB_OBJECT_BOJ_000078,
    /* 12 */ LIMB_OBJECT_BOJ_000084,
    /* 13 */ LIMB_OBJECT_BOJ_000090,
    /* 14 */ LIMB_OBJECT_BOJ_00009C,
    /* 15 */ LIMB_OBJECT_BOJ_0000A8,
    /* 16 */ LIMB_OBJECT_BOJ_0000F0_MAX
} gHylianMan2SkelLimb;
extern FlexSkeletonHeader gHylianMan2Skel;
//#define gHylianMan2TLUT_TLUT_COUNT 256
extern u32 gHylianMan2TLUT[];
#define gHylianMan2MustachedHairTex_WIDTH 8
#define gHylianMan2MustachedHairTex_HEIGHT 16
extern u32 gHylianMan2MustachedHairTex[TEX_LEN(u32, gHylianMan2MustachedHairTex_WIDTH, gHylianMan2MustachedHairTex_HEIGHT, 8)];
#define gHylianMan2MustachedSkinTex_WIDTH 8
#define gHylianMan2MustachedSkinTex_HEIGHT 8
extern u32 gHylianMan2MustachedSkinTex[TEX_LEN(u32, gHylianMan2MustachedSkinTex_WIDTH, gHylianMan2MustachedSkinTex_HEIGHT, 8)];
#define gHylianMan2MustachedMouthTex_WIDTH 32
#define gHylianMan2MustachedMouthTex_HEIGHT 16
extern u32 gHylianMan2MustachedMouthTex[TEX_LEN(u32, gHylianMan2MustachedMouthTex_WIDTH, gHylianMan2MustachedMouthTex_HEIGHT, 8)];
#define gHylianMan2MustachedEarTex_WIDTH 8
#define gHylianMan2MustachedEarTex_HEIGHT 8
extern u32 gHylianMan2MustachedEarTex[TEX_LEN(u32, gHylianMan2MustachedEarTex_WIDTH, gHylianMan2MustachedEarTex_HEIGHT, 8)];
#define gHylianMan2MustachedEyeOpenTex_WIDTH 16
#define gHylianMan2MustachedEyeOpenTex_HEIGHT 16
extern u32 gHylianMan2MustachedEyeOpenTex[TEX_LEN(u32, gHylianMan2MustachedEyeOpenTex_WIDTH, gHylianMan2MustachedEyeOpenTex_HEIGHT, 8)];
#define gHylianMan2MustachedEyeHalfTex_WIDTH 16
#define gHylianMan2MustachedEyeHalfTex_HEIGHT 16
extern u32 gHylianMan2MustachedEyeHalfTex[TEX_LEN(u32, gHylianMan2MustachedEyeHalfTex_WIDTH, gHylianMan2MustachedEyeHalfTex_HEIGHT, 8)];
#define gHylianMan2MustachedEyeClosedTex_WIDTH 16
#define gHylianMan2MustachedEyeClosedTex_HEIGHT 16
extern u32 gHylianMan2MustachedEyeClosedTex[TEX_LEN(u32, gHylianMan2MustachedEyeClosedTex_WIDTH, gHylianMan2MustachedEyeClosedTex_HEIGHT, 8)];
#define gHylianMan2FingersTex_WIDTH 8
#define gHylianMan2FingersTex_HEIGHT 8
extern u32 gHylianMan2FingersTex[TEX_LEN(u32, gHylianMan2FingersTex_WIDTH, gHylianMan2FingersTex_HEIGHT, 8)];
#define gHylianMan2ShirtTex_WIDTH 16
#define gHylianMan2ShirtTex_HEIGHT 16
extern u32 gHylianMan2ShirtTex[TEX_LEN(u32, gHylianMan2ShirtTex_WIDTH, gHylianMan2ShirtTex_HEIGHT, 8)];
#define gHylianMan2BeltShoeTex_WIDTH 8
#define gHylianMan2BeltShoeTex_HEIGHT 8
extern u32 gHylianMan2BeltShoeTex[TEX_LEN(u32, gHylianMan2BeltShoeTex_WIDTH, gHylianMan2BeltShoeTex_HEIGHT, 8)];
#define gHylianMan2PantsTex_WIDTH 8
#define gHylianMan2PantsTex_HEIGHT 8
extern u32 gHylianMan2PantsTex[TEX_LEN(u32, gHylianMan2PantsTex_WIDTH, gHylianMan2PantsTex_HEIGHT, 8)];
extern Vtx gHylianMan2MustachedHeadVtx[];
extern Vtx gHylianMan2LeftHandVtx[];
extern Vtx gHylianMan2LeftForearmVtx[];
extern Vtx gHylianMan2LeftUpperArmVtx[];
extern Vtx gHylianMan2RightHandVtx[];
extern Vtx gHylianMan2RightForearmVtx[];
extern Vtx gHylianMan2RightUpperArmVtx[];
extern Vtx gHylianMan2TorsoVtx[];
extern Vtx gHylianMan2LeftFootVtx[];
extern Vtx gHylianMan2LeftShinVtx[];
extern Vtx gHylianMan2LeftThighVtx[];
extern Vtx gHylianMan2RightFootVtx[];
extern Vtx gHylianMan2RightShinVtx[];
extern Vtx gHylianMan2RightThighVtx[];
extern Vtx gHylianMan2PelvisVtx[];
extern Gfx gHylianMan2MustachedHeadDL[123];
extern Gfx gHylianMan2RightHandDL[41];
extern Gfx gHylianMan2RightForearmDL[33];
extern Gfx gHylianMan2RightUpperArmDL[33];
extern Gfx gHylianMan2LeftHandDL[41];
extern Gfx gHylianMan2LeftForearmDL[33];
extern Gfx gHylianMan2LeftUpperArmDL[33];
extern Gfx gHylianMan2TorsoDL[59];
extern Gfx gHylianMan2RightFootDL[35];
extern Gfx gHylianMan2RightShinDL[34];
extern Gfx gHylianMan2RightThighDL[33];
extern Gfx gHylianMan2LeftFootDL[35];
extern Gfx gHylianMan2LeftShinDL[34];
extern Gfx gHylianMan2LeftThighDL[33];
extern Gfx gHylianMan2PelvisDL[61];
//#define gHylianMan2AltTLUT_TLUT_COUNT 252
extern u64 gHylianMan2AltTLUT[];
#define gHylianMan2AltEarTex_WIDTH 8
#define gHylianMan2AltEarTex_HEIGHT 8
extern u64 gHylianMan2AltEarTex[TEX_LEN(u64, gHylianMan2AltEarTex_WIDTH, gHylianMan2AltEarTex_HEIGHT, 8)];
#define gHylianMan2BaldEyeTex_WIDTH 16
#define gHylianMan2BaldEyeTex_HEIGHT 16
extern u64 gHylianMan2BaldEyeTex[TEX_LEN(u64, gHylianMan2BaldEyeTex_WIDTH, gHylianMan2BaldEyeTex_HEIGHT, 8)];
#define gHylianMan2BaldMouthTex_WIDTH 16
#define gHylianMan2BaldMouthTex_HEIGHT 16
extern u64 gHylianMan2BaldMouthTex[TEX_LEN(u64, gHylianMan2BaldMouthTex_WIDTH, gHylianMan2BaldMouthTex_HEIGHT, 8)];
#define gHylianMan2AltHairBagTex_WIDTH 8
#define gHylianMan2AltHairBagTex_HEIGHT 16
extern u64 gHylianMan2AltHairBagTex[TEX_LEN(u64, gHylianMan2AltHairBagTex_WIDTH, gHylianMan2AltHairBagTex_HEIGHT, 8)];
#define gHylianMan2LongHairMouthTex_WIDTH 16
#define gHylianMan2LongHairMouthTex_HEIGHT 16
extern u64 gHylianMan2LongHairMouthTex[TEX_LEN(u64, gHylianMan2LongHairMouthTex_WIDTH, gHylianMan2LongHairMouthTex_HEIGHT, 8)];
#define gHylianMan2BaldLongHairAltMustachedNoseTex_WIDTH 16
#define gHylianMan2BaldLongHairAltMustachedNoseTex_HEIGHT 16
extern u64 gHylianMan2BaldLongHairAltMustachedNoseTex[TEX_LEN(u64, gHylianMan2BaldLongHairAltMustachedNoseTex_WIDTH, gHylianMan2BaldLongHairAltMustachedNoseTex_HEIGHT, 8)];
#define gHylianMan2AltMustachedBeardedEyeTex_WIDTH 16
#define gHylianMan2AltMustachedBeardedEyeTex_HEIGHT 16
extern u64 gHylianMan2AltMustachedBeardedEyeTex[TEX_LEN(u64, gHylianMan2AltMustachedBeardedEyeTex_WIDTH, gHylianMan2AltMustachedBeardedEyeTex_HEIGHT, 8)];
extern Vtx gHylianMan2BaldHeadVtx[];
extern Vtx gHylianMan2LongHairHeadVtx[];
extern Vtx gHylianMan2AltMustachedHeadVtx[];
extern Vtx gHylianMan2BeardedHeadVtx[];
extern Vtx gHylianMan2BagVtx[];
extern Gfx gHylianMan2BaldHeadDL[73];
extern Gfx gHylianMan2LongHairHeadDL[66];
extern Gfx gHylianMan2AltMustachedHeadDL[79];
extern Gfx gHylianMan2BeardedHeadDL[67];
extern Gfx gHylianMan2BagDL[30];

#endif
