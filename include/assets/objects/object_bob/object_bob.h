#ifndef OBJECT_BOB_H
#define OBJECT_BOB_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern StandardLimb gHylianWoman2PelvisLimb;
extern StandardLimb gHylianWoman2LeftThighLimb;
extern StandardLimb gHylianWoman2LeftShinLimb;
extern StandardLimb gHylianWoman2LeftFootLimb;
extern StandardLimb gHylianWoman2RightThighLimb;
extern StandardLimb gHylianWoman2RightShinLimb;
extern StandardLimb gHylianWoman2RightFootLimb;
extern StandardLimb gHylianWoman2TorsoLimb;
extern StandardLimb gHylianWoman2LeftUpperArmLimb;
extern StandardLimb gHylianWoman2LeftForearmLimb;
extern StandardLimb gHylianWoman2LeftHandLimb;
extern StandardLimb gHylianWoman2RightUpperArmLimb;
extern StandardLimb gHylianWoman2RightForearmLimb;
extern StandardLimb gHylianWoman2RightHandLimb;
extern StandardLimb gHylianWoman2HeadLimb;
extern void* gHylianWoman2Limbs[];
typedef enum gHylianWoman2SkelLimb {
    /*  0 */ LIMB_OBJECT_BOB_0000F0_NONE,
    /*  1 */ LIMB_OBJECT_BOB_000000,
    /*  2 */ LIMB_OBJECT_BOB_00000C,
    /*  3 */ LIMB_OBJECT_BOB_000018,
    /*  4 */ LIMB_OBJECT_BOB_000024,
    /*  5 */ LIMB_OBJECT_BOB_000030,
    /*  6 */ LIMB_OBJECT_BOB_00003C,
    /*  7 */ LIMB_OBJECT_BOB_000048,
    /*  8 */ LIMB_OBJECT_BOB_000054,
    /*  9 */ LIMB_OBJECT_BOB_000060,
    /* 10 */ LIMB_OBJECT_BOB_00006C,
    /* 11 */ LIMB_OBJECT_BOB_000078,
    /* 12 */ LIMB_OBJECT_BOB_000084,
    /* 13 */ LIMB_OBJECT_BOB_000090,
    /* 14 */ LIMB_OBJECT_BOB_00009C,
    /* 15 */ LIMB_OBJECT_BOB_0000A8,
    /* 16 */ LIMB_OBJECT_BOB_0000F0_MAX
} gHylianWoman2SkelLimb;
extern FlexSkeletonHeader gHylianWoman2Skel;
//#define gHylianWoman2TLUT_TLUT_COUNT 256
extern u64 gHylianWoman2TLUT[];
#define gHylianWoman2SkinTex_WIDTH 8
#define gHylianWoman2SkinTex_HEIGHT 8
extern u64 gHylianWoman2SkinTex[TEX_LEN(u64, gHylianWoman2SkinTex_WIDTH, gHylianWoman2SkinTex_HEIGHT, 8)];
#define gHylianWoman2HairTex_WIDTH 8
#define gHylianWoman2HairTex_HEIGHT 8
extern u64 gHylianWoman2HairTex[TEX_LEN(u64, gHylianWoman2HairTex_WIDTH, gHylianWoman2HairTex_HEIGHT, 8)];
#define gHylianWoman2MouthTex_WIDTH 32
#define gHylianWoman2MouthTex_HEIGHT 32
extern u64 gHylianWoman2MouthTex[TEX_LEN(u64, gHylianWoman2MouthTex_WIDTH, gHylianWoman2MouthTex_HEIGHT, 8)];
#define gHylianWoman2EarTex_WIDTH 8
#define gHylianWoman2EarTex_HEIGHT 8
extern u64 gHylianWoman2EarTex[TEX_LEN(u64, gHylianWoman2EarTex_WIDTH, gHylianWoman2EarTex_HEIGHT, 8)];
#define gHylianWoman2EyeOpenTex_WIDTH 32
#define gHylianWoman2EyeOpenTex_HEIGHT 32
extern u64 gHylianWoman2EyeOpenTex[TEX_LEN(u64, gHylianWoman2EyeOpenTex_WIDTH, gHylianWoman2EyeOpenTex_HEIGHT, 16)];
#define gHylianWoman2EyeHalfTex_WIDTH 32
#define gHylianWoman2EyeHalfTex_HEIGHT 32
extern u64 gHylianWoman2EyeHalfTex[TEX_LEN(u64, gHylianWoman2EyeHalfTex_WIDTH, gHylianWoman2EyeHalfTex_HEIGHT, 16)];
#define gHylianWoman2EyeClosedTex_WIDTH 32
#define gHylianWoman2EyeClosedTex_HEIGHT 32
extern u64 gHylianWoman2EyeClosedTex[TEX_LEN(u64, gHylianWoman2EyeClosedTex_WIDTH, gHylianWoman2EyeClosedTex_HEIGHT, 16)];
#define gHylianWoman2FingersTex_WIDTH 16
#define gHylianWoman2FingersTex_HEIGHT 16
extern u64 gHylianWoman2FingersTex[TEX_LEN(u64, gHylianWoman2FingersTex_WIDTH, gHylianWoman2FingersTex_HEIGHT, 8)];
#define gHylianWoman2ShirtTex_WIDTH 16
#define gHylianWoman2ShirtTex_HEIGHT 16
extern u64 gHylianWoman2ShirtTex[TEX_LEN(u64, gHylianWoman2ShirtTex_WIDTH, gHylianWoman2ShirtTex_HEIGHT, 8)];
#define gHylianWoman2CollarTex_WIDTH 8
#define gHylianWoman2CollarTex_HEIGHT 8
extern u64 gHylianWoman2CollarTex[TEX_LEN(u64, gHylianWoman2CollarTex_WIDTH, gHylianWoman2CollarTex_HEIGHT, 8)];
#define gHylianWoman2DressTex_WIDTH 16
#define gHylianWoman2DressTex_HEIGHT 16
extern u64 gHylianWoman2DressTex[TEX_LEN(u64, gHylianWoman2DressTex_WIDTH, gHylianWoman2DressTex_HEIGHT, 8)];
extern Vtx gHylianWoman2HeadVtx[];
extern Vtx gHylianWoman2LeftHandVtx[];
extern Vtx gHylianWoman2LeftForearmVtx[];
extern Vtx gHylianWoman2LeftUpperArmVtx[];
extern Vtx gHylianWoman2RightHandVtx[];
extern Vtx gHylianWoman2RightForearmVtx[];
extern Vtx gHylianWoman2RightUpperArmVtx[];
extern Vtx gHylianWoman2TorsoVtx[];
extern Vtx gHylianWoman2LeftFootVtx[];
extern Vtx gHylianWoman2LeftShinVtx[];
extern Vtx gHylianWoman2LeftThighVtx[];
extern Vtx gHylianWoman2RightFootVtx[];
extern Vtx gHylianWoman2RightShinVtx[];
extern Vtx gHylianWoman2RightThighVtx[];
extern Vtx gHylianWoman2PelvisVtx[];
extern Gfx gHylianWoman2HeadDL[126];
extern Gfx gHylianWoman2RightHandDL[41];
extern Gfx gHylianWoman2RightForearmDL[38];
extern Gfx gHylianWoman2RightUpperArmDL[38];
extern Gfx gHylianWoman2LeftHandDL[41];
extern Gfx gHylianWoman2LeftForearmDL[38];
extern Gfx gHylianWoman2LeftUpperArmDL[38];
extern Gfx gHylianWoman2TorsoDL[114];
extern Gfx gHylianWoman2RightFootDL[26];
extern Gfx gHylianWoman2RightShinDL[26];
extern Gfx gHylianWoman2RightThighDL[10];
extern Gfx gHylianWoman2LeftFootDL[26];
extern Gfx gHylianWoman2LeftShinDL[26];
extern Gfx gHylianWoman2LeftThighDL[10];
extern Gfx gHylianWoman2PelvisDL[31];

#endif
