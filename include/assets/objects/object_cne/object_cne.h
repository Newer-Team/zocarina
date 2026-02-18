#ifndef OBJECT_CNE_H
#define OBJECT_CNE_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern StandardLimb gHylianYoungWomanPelvisLimb;
extern StandardLimb gHylianYoungWomanLeftThighLimb;
extern StandardLimb gHylianYoungWomanLeftShinLimb;
extern StandardLimb gHylianYoungWomanLeftFootLimb;
extern StandardLimb gHylianYoungWomanRightThighLimb;
extern StandardLimb gHylianYoungWomanRightShinLimb;
extern StandardLimb gHylianYoungWomanRightFootLimb;
extern StandardLimb gHylianYoungWomanTorsoLimb;
extern StandardLimb gHylianYoungWomanLeftUpperArmLimb;
extern StandardLimb gHylianYoungWomanLeftForearmLimb;
extern StandardLimb gHylianYoungWomanLeftHandLimb;
extern StandardLimb gHylianYoungWomanRightUpperArmLimb;
extern StandardLimb gHylianYoungWomanRightForearmLimb;
extern StandardLimb gHylianYoungWomanRightHandLimb;
extern StandardLimb gHylianYoungWomanHeadLimb;
extern void* gHylianYoungWomanLimbs[];
typedef enum gHylianYoungWomanSkelLimb {
    /*  0 */ LIMB_OBJECT_CNE_0000F0_NONE,
    /*  1 */ LIMB_OBJECT_CNE_000000,
    /*  2 */ LIMB_OBJECT_CNE_00000C,
    /*  3 */ LIMB_OBJECT_CNE_000018,
    /*  4 */ LIMB_OBJECT_CNE_000024,
    /*  5 */ LIMB_OBJECT_CNE_000030,
    /*  6 */ LIMB_OBJECT_CNE_00003C,
    /*  7 */ LIMB_OBJECT_CNE_000048,
    /*  8 */ LIMB_OBJECT_CNE_000054,
    /*  9 */ LIMB_OBJECT_CNE_000060,
    /* 10 */ LIMB_OBJECT_CNE_00006C,
    /* 11 */ LIMB_OBJECT_CNE_000078,
    /* 12 */ LIMB_OBJECT_CNE_000084,
    /* 13 */ LIMB_OBJECT_CNE_000090,
    /* 14 */ LIMB_OBJECT_CNE_00009C,
    /* 15 */ LIMB_OBJECT_CNE_0000A8,
    /* 16 */ LIMB_OBJECT_CNE_0000F0_MAX
} gHylianYoungWomanSkelLimb;
extern FlexSkeletonHeader gHylianYoungWomanSkel;
//#define gHylianYoungWomanTLUT_TLUT_COUNT 256
extern u32 gHylianYoungWomanTLUT[];
#define gHylianYoungWomanSkinTex_WIDTH 8
#define gHylianYoungWomanSkinTex_HEIGHT 8
extern u32 gHylianYoungWomanSkinTex[TEX_LEN(u32, gHylianYoungWomanSkinTex_WIDTH, gHylianYoungWomanSkinTex_HEIGHT, 8)];
#define gHylianYoungWomanBrownHairTex_WIDTH 8
#define gHylianYoungWomanBrownHairTex_HEIGHT 8
extern u32 gHylianYoungWomanBrownHairTex[TEX_LEN(u32, gHylianYoungWomanBrownHairTex_WIDTH, gHylianYoungWomanBrownHairTex_HEIGHT, 8)];
#define gHylianYoungWomanHandTex_WIDTH 8
#define gHylianYoungWomanHandTex_HEIGHT 8
extern u32 gHylianYoungWomanHandTex[TEX_LEN(u32, gHylianYoungWomanHandTex_WIDTH, gHylianYoungWomanHandTex_HEIGHT, 8)];
#define gHylianYoungWomanBrownHairSkinTex_WIDTH 8
#define gHylianYoungWomanBrownHairSkinTex_HEIGHT 8
extern u32 gHylianYoungWomanBrownHairSkinTex[TEX_LEN(u32, gHylianYoungWomanBrownHairSkinTex_WIDTH, gHylianYoungWomanBrownHairSkinTex_HEIGHT, 8)];
#define gHylianYoungWomanBrownHairFaceTex_WIDTH 8
#define gHylianYoungWomanBrownHairFaceTex_HEIGHT 16
extern u32 gHylianYoungWomanBrownHairFaceTex[TEX_LEN(u32, gHylianYoungWomanBrownHairFaceTex_WIDTH, gHylianYoungWomanBrownHairFaceTex_HEIGHT, 8)];
#define gHylianYoungWomanDressTex_WIDTH 8
#define gHylianYoungWomanDressTex_HEIGHT 8
extern u32 gHylianYoungWomanDressTex[TEX_LEN(u32, gHylianYoungWomanDressTex_WIDTH, gHylianYoungWomanDressTex_HEIGHT, 8)];
#define gHylianYoungWomanCollarTex_WIDTH 8
#define gHylianYoungWomanCollarTex_HEIGHT 8
extern u32 gHylianYoungWomanCollarTex[TEX_LEN(u32, gHylianYoungWomanCollarTex_WIDTH, gHylianYoungWomanCollarTex_HEIGHT, 8)];
extern Vtx gHylianYoungWomanLeftFootVtx[];
extern Vtx gHylianYoungWomanLeftShinVtx[];
extern Vtx gHylianYoungWomanLeftThighVtx[];
extern Vtx gHylianYoungWomanRightFootVtx[];
extern Vtx gHylianYoungWomanRightShinVtx[];
extern Vtx gHylianYoungWomanRightThighVtx[];
extern Vtx gHylianYoungWomanBrownHairHeadVtx[];
extern Vtx gHylianYoungWomanLeftHandVtx[];
extern Vtx gHylianYoungWomanLeftForearmVtx[];
extern Vtx gHylianYoungWomanLeftUpperArmVtx[];
extern Vtx gHylianYoungWomanRightHandVtx[];
extern Vtx gHylianYoungWomanRightForearmVtx[];
extern Vtx gHylianYoungWomanRightUpperArmVtx[];
extern Vtx gHylianYoungWomanTorsoVtx[];
extern Vtx gHylianYoungWomanPelvisVtx[];
extern Gfx gHylianYoungWomanBrownHairHeadDL[97];
extern Gfx gHylianYoungWomanRightHandDL[28];
extern Gfx gHylianYoungWomanRightForearmDL[36];
extern Gfx gHylianYoungWomanRightUpperArmDL[24];
extern Gfx gHylianYoungWomanLeftHandDL[28];
extern Gfx gHylianYoungWomanLeftForearmDL[36];
extern Gfx gHylianYoungWomanLeftUpperArmDL[24];
extern Gfx gHylianYoungWomanTorsoDL[89];
extern Gfx gHylianYoungWomanRightFootDL[25];
extern Gfx gHylianYoungWomanRightShinDL[25];
extern Gfx gHylianYoungWomanRightThighDL[25];
extern Gfx gHylianYoungWomanLeftFootDL[25];
extern Gfx gHylianYoungWomanLeftShinDL[25];
extern Gfx gHylianYoungWomanLeftThighDL[25];
extern Gfx gHylianYoungWomanPelvisDL[26];
#define gHylianYoungWomanOrangeHairFaceTex_WIDTH 8
#define gHylianYoungWomanOrangeHairFaceTex_HEIGHT 16
extern u64 gHylianYoungWomanOrangeHairFaceTex[TEX_LEN(u64, gHylianYoungWomanOrangeHairFaceTex_WIDTH, gHylianYoungWomanOrangeHairFaceTex_HEIGHT, 16)];
#define gHylianYoungWomanOrangeHairSkinTex_WIDTH 8
#define gHylianYoungWomanOrangeHairSkinTex_HEIGHT 8
extern u64 gHylianYoungWomanOrangeHairSkinTex[TEX_LEN(u64, gHylianYoungWomanOrangeHairSkinTex_WIDTH, gHylianYoungWomanOrangeHairSkinTex_HEIGHT, 16)];
extern Vtx gHylianYoungWomanOrangeHairHeadVtx[];
extern Gfx gHylianYoungWomanOrangeHairHeadDL[45];

#endif
