#ifndef OBJECT_AOB_H
#define OBJECT_AOB_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern StandardLimb gHylianWoman1PelvisLimb;
extern StandardLimb gHylianWoman1LeftThighLimb;
extern StandardLimb gHylianWoman1LeftShinLimb;
extern StandardLimb gHylianWoman1LeftFootLimb;
extern StandardLimb gHylianWoman1RightThighLimb;
extern StandardLimb gHylianWoman1RightShinLimb;
extern StandardLimb gHylianWoman1RightFootLimb;
extern StandardLimb gHylianWoman1TorsoLimb;
extern StandardLimb gHylianWoman1LeftUpperArmLimb;
extern StandardLimb gHylianWoman1LeftForearmLimb;
extern StandardLimb gHylianWoman1LeftHandLimb;
extern StandardLimb gHylianWoman1RightUpperArmLimb;
extern StandardLimb gHylianWoman1RightForearmLimb;
extern StandardLimb gHylianWoman1RightHandLimb;
extern StandardLimb gHylianWoman1HeadLimb;
extern void* gHylianWoman1Limbs[];
typedef enum gHylianWoman1SkelLimb {
    /*  0 */ LIMB_OBJECT_AOB_0000F0_NONE,
    /*  1 */ LIMB_OBJECT_AOB_000000,
    /*  2 */ LIMB_OBJECT_AOB_00000C,
    /*  3 */ LIMB_OBJECT_AOB_000018,
    /*  4 */ LIMB_OBJECT_AOB_000024,
    /*  5 */ LIMB_OBJECT_AOB_000030,
    /*  6 */ LIMB_OBJECT_AOB_00003C,
    /*  7 */ LIMB_OBJECT_AOB_000048,
    /*  8 */ LIMB_OBJECT_AOB_000054,
    /*  9 */ LIMB_OBJECT_AOB_000060,
    /* 10 */ LIMB_OBJECT_AOB_00006C,
    /* 11 */ LIMB_OBJECT_AOB_000078,
    /* 12 */ LIMB_OBJECT_AOB_000084,
    /* 13 */ LIMB_OBJECT_AOB_000090,
    /* 14 */ LIMB_OBJECT_AOB_00009C,
    /* 15 */ LIMB_OBJECT_AOB_0000A8,
    /* 16 */ LIMB_OBJECT_AOB_0000F0_MAX
} gHylianWoman1SkelLimb;
extern FlexSkeletonHeader gHylianWoman1Skel;
//#define gHylianWoman1TLUT_TLUT_COUNT 256
extern u64 gHylianWoman1TLUT[];
#define gHylianWoman1HairTex_WIDTH 16
#define gHylianWoman1HairTex_HEIGHT 16
extern u64 gHylianWoman1HairTex[TEX_LEN(u64, gHylianWoman1HairTex_WIDTH, gHylianWoman1HairTex_HEIGHT, 8)];
#define gHylianWoman1SkinTex_WIDTH 8
#define gHylianWoman1SkinTex_HEIGHT 8
extern u64 gHylianWoman1SkinTex[TEX_LEN(u64, gHylianWoman1SkinTex_WIDTH, gHylianWoman1SkinTex_HEIGHT, 8)];
#define gHylianWoman1EarTex_WIDTH 16
#define gHylianWoman1EarTex_HEIGHT 16
extern u64 gHylianWoman1EarTex[TEX_LEN(u64, gHylianWoman1EarTex_WIDTH, gHylianWoman1EarTex_HEIGHT, 8)];
#define gHylianWoman1MouthTex_WIDTH 8
#define gHylianWoman1MouthTex_HEIGHT 8
extern u64 gHylianWoman1MouthTex[TEX_LEN(u64, gHylianWoman1MouthTex_WIDTH, gHylianWoman1MouthTex_HEIGHT, 8)];
#define gHylianWoman1NostrilTex_WIDTH 8
#define gHylianWoman1NostrilTex_HEIGHT 8
extern u64 gHylianWoman1NostrilTex[TEX_LEN(u64, gHylianWoman1NostrilTex_WIDTH, gHylianWoman1NostrilTex_HEIGHT, 8)];
#define gHylianWoman1EyeOpenTex_WIDTH 32
#define gHylianWoman1EyeOpenTex_HEIGHT 32
extern u64 gHylianWoman1EyeOpenTex[TEX_LEN(u64, gHylianWoman1EyeOpenTex_WIDTH, gHylianWoman1EyeOpenTex_HEIGHT, 16)];
#define gHylianWoman1EyeHalfTex_WIDTH 32
#define gHylianWoman1EyeHalfTex_HEIGHT 32
extern u64 gHylianWoman1EyeHalfTex[TEX_LEN(u64, gHylianWoman1EyeHalfTex_WIDTH, gHylianWoman1EyeHalfTex_HEIGHT, 16)];
#define gHylianWoman1EyeClosedTex_WIDTH 32
#define gHylianWoman1EyeClosedTex_HEIGHT 32
extern u64 gHylianWoman1EyeClosedTex[TEX_LEN(u64, gHylianWoman1EyeClosedTex_WIDTH, gHylianWoman1EyeClosedTex_HEIGHT, 16)];
#define gHylianWoman1FingersTex_WIDTH 16
#define gHylianWoman1FingersTex_HEIGHT 16
extern u64 gHylianWoman1FingersTex[TEX_LEN(u64, gHylianWoman1FingersTex_WIDTH, gHylianWoman1FingersTex_HEIGHT, 8)];
#define gHylianWoman1SleevesTex_WIDTH 8
#define gHylianWoman1SleevesTex_HEIGHT 8
extern u64 gHylianWoman1SleevesTex[TEX_LEN(u64, gHylianWoman1SleevesTex_WIDTH, gHylianWoman1SleevesTex_HEIGHT, 8)];
#define gHylianWoman1DressTex_WIDTH 8
#define gHylianWoman1DressTex_HEIGHT 8
extern u64 gHylianWoman1DressTex[TEX_LEN(u64, gHylianWoman1DressTex_WIDTH, gHylianWoman1DressTex_HEIGHT, 8)];
extern Vtx gHylianWoman1HeadVtx[];
extern Vtx gHylianWoman1LeftHandVtx[];
extern Vtx gHylianWoman1LeftForearmVtx[];
extern Vtx gHylianWoman1LeftUpperArmVtx[];
extern Vtx gHylianWoman1RightHandVtx[];
extern Vtx gHylianWoman1RightForearmVtx[];
extern Vtx gHylianWoman1RightUpperArmVtx[];
extern Vtx gHylianWoman1TorsoVtx[];
extern Vtx gHylianWoman1LeftFootVtx[];
extern Vtx gHylianWoman1LeftShinVtx[];
extern Vtx gHylianWoman1LeftThighVtx[];
extern Vtx gHylianWoman1RightFootVtx[];
extern Vtx gHylianWoman1RightShinVtx[];
extern Vtx gHylianWoman1RightThighVtx[];
extern Vtx gHylianWoman1PelvisVtx[];
extern Gfx gHylianWoman1HeadDL[248];
extern Gfx gHylianWoman1RightHandDL[65];
extern Gfx gHylianWoman1RightForearmDL[38];
extern Gfx gHylianWoman1RightUpperArmDL[53];
extern Gfx gHylianWoman1LeftHandDL[65];
extern Gfx gHylianWoman1LeftForearmDL[38];
extern Gfx gHylianWoman1LeftUpperArmDL[53];
extern Gfx gHylianWoman1TorsoDL[84];
extern Gfx gHylianWoman1RightFootDL[26];
extern Gfx gHylianWoman1RightShinDL[26];
extern Gfx gHylianWoman1RightThighDL[26];
extern Gfx gHylianWoman1LeftFootDL[26];
extern Gfx gHylianWoman1LeftShinDL[26];
extern Gfx gHylianWoman1LeftThighDL[26];
extern Gfx gHylianWoman1PelvisDL[36];

#endif
