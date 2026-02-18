#ifndef OBJECT_BJI_H
#define OBJECT_BJI_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern StandardLimb gHylianOldManPelvisLimb;
extern StandardLimb gHylianOldManLeftThighLimb;
extern StandardLimb gHylianOldManLeftShinLimb;
extern StandardLimb gHylianOldManLeftFootLimb;
extern StandardLimb gHylianOldManRightThighLimb;
extern StandardLimb gHylianOldManRightShinLimb;
extern StandardLimb gHylianOldManRightFootLimb;
extern StandardLimb gHylianOldManTorsoLimb;
extern StandardLimb gHylianOldManLeftUpperArmLimb;
extern StandardLimb gHylianOldManLeftForearmLimb;
extern StandardLimb gHylianOldManLeftHandLimb;
extern StandardLimb gHylianOldManRightUpperArmLimb;
extern StandardLimb gHylianOldManRightForearmLimb;
extern StandardLimb gHylianOldManRightHandLimb;
extern StandardLimb gHylianOldManHeadLimb;
extern void* gHylianOldManLimbs[];
typedef enum gHylianOldManSkelLimb {
    /*  0 */ LIMB_OBJECT_BJI_0000F0_NONE,
    /*  1 */ LIMB_OBJECT_BJI_000000,
    /*  2 */ LIMB_OBJECT_BJI_00000C,
    /*  3 */ LIMB_OBJECT_BJI_000018,
    /*  4 */ LIMB_OBJECT_BJI_000024,
    /*  5 */ LIMB_OBJECT_BJI_000030,
    /*  6 */ LIMB_OBJECT_BJI_00003C,
    /*  7 */ LIMB_OBJECT_BJI_000048,
    /*  8 */ LIMB_OBJECT_BJI_000054,
    /*  9 */ LIMB_OBJECT_BJI_000060,
    /* 10 */ LIMB_OBJECT_BJI_00006C,
    /* 11 */ LIMB_OBJECT_BJI_000078,
    /* 12 */ LIMB_OBJECT_BJI_000084,
    /* 13 */ LIMB_OBJECT_BJI_000090,
    /* 14 */ LIMB_OBJECT_BJI_00009C,
    /* 15 */ LIMB_OBJECT_BJI_0000A8,
    /* 16 */ LIMB_OBJECT_BJI_0000F0_MAX
} gHylianOldManSkelLimb;
extern FlexSkeletonHeader gHylianOldManSkel;
//#define gHylianOldManTLUT_TLUT_COUNT 256
extern u32 gHylianOldManTLUT[];
#define gHylianOldManHairTex_WIDTH 8
#define gHylianOldManHairTex_HEIGHT 8
extern u32 gHylianOldManHairTex[TEX_LEN(u32, gHylianOldManHairTex_WIDTH, gHylianOldManHairTex_HEIGHT, 8)];
#define gHylianOldManSkinTex_WIDTH 8
#define gHylianOldManSkinTex_HEIGHT 8
extern u32 gHylianOldManSkinTex[TEX_LEN(u32, gHylianOldManSkinTex_WIDTH, gHylianOldManSkinTex_HEIGHT, 8)];
#define gHylianOldManForeheadTex_WIDTH 16
#define gHylianOldManForeheadTex_HEIGHT 16
extern u32 gHylianOldManForeheadTex[TEX_LEN(u32, gHylianOldManForeheadTex_WIDTH, gHylianOldManForeheadTex_HEIGHT, 8)];
#define gHylianOldManMouthTex_WIDTH 8
#define gHylianOldManMouthTex_HEIGHT 8
extern u32 gHylianOldManMouthTex[TEX_LEN(u32, gHylianOldManMouthTex_WIDTH, gHylianOldManMouthTex_HEIGHT, 8)];
#define gHylianOldManNoseTex_WIDTH 8
#define gHylianOldManNoseTex_HEIGHT 8
extern u32 gHylianOldManNoseTex[TEX_LEN(u32, gHylianOldManNoseTex_WIDTH, gHylianOldManNoseTex_HEIGHT, 8)];
#define gHylianOldManClothesCapTex_WIDTH 16
#define gHylianOldManClothesCapTex_HEIGHT 16
extern u32 gHylianOldManClothesCapTex[TEX_LEN(u32, gHylianOldManClothesCapTex_WIDTH, gHylianOldManClothesCapTex_HEIGHT, 8)];
#define gHylianOldManEyeOpenTex_WIDTH 32
#define gHylianOldManEyeOpenTex_HEIGHT 32
extern u32 gHylianOldManEyeOpenTex[TEX_LEN(u32, gHylianOldManEyeOpenTex_WIDTH, gHylianOldManEyeOpenTex_HEIGHT, 8)];
#define gHylianOldManEyeHalfTex_WIDTH 32
#define gHylianOldManEyeHalfTex_HEIGHT 32
extern u32 gHylianOldManEyeHalfTex[TEX_LEN(u32, gHylianOldManEyeHalfTex_WIDTH, gHylianOldManEyeHalfTex_HEIGHT, 8)];
#define gHylianOldManEyeClosedTex_WIDTH 32
#define gHylianOldManEyeClosedTex_HEIGHT 32
extern u32 gHylianOldManEyeClosedTex[TEX_LEN(u32, gHylianOldManEyeClosedTex_WIDTH, gHylianOldManEyeClosedTex_HEIGHT, 8)];
#define gHylianOldManClothesSideTex_WIDTH 8
#define gHylianOldManClothesSideTex_HEIGHT 8
extern u32 gHylianOldManClothesSideTex[TEX_LEN(u32, gHylianOldManClothesSideTex_WIDTH, gHylianOldManClothesSideTex_HEIGHT, 8)];
extern Vtx gHylianOldManLeftFootVtx[];
extern Vtx gHylianOldManLeftShinVtx[];
extern Vtx gHylianOldManLeftThighVtx[];
extern Vtx gHylianOldManRightFootVtx[];
extern Vtx gHylianOldManRightShinVtx[];
extern Vtx gHylianOldManRightThighVtx[];
extern Vtx gHylianOldManHeadVtx[];
extern Vtx gHylianOldManLeftHandVtx[];
extern Vtx gHylianOldManLeftForearmVtx[];
extern Vtx gHylianOldManLeftUpperArmVtx[];
extern Vtx gHylianOldManRightHandVtx[];
extern Vtx gHylianOldManRightForearmVtx[];
extern Vtx gHylianOldManRightUpperArmVtx[];
extern Vtx gHylianOldManTorsoVtx[];
extern Vtx gHylianOldManPelvisVtx[];
extern Gfx gHylianOldManHeadDL[197];
extern Gfx gHylianOldManRightHandDL[25];
extern Gfx gHylianOldManRightForearmDL[30];
extern Gfx gHylianOldManRightUpperArmDL[32];
extern Gfx gHylianOldManLeftHandDL[25];
extern Gfx gHylianOldManLeftForearmDL[30];
extern Gfx gHylianOldManLeftUpperArmDL[32];
extern Gfx gHylianOldManTorsoDL[70];
extern Gfx gHylianOldManRightFootDL[25];
extern Gfx gHylianOldManRightShinDL[25];
extern Gfx gHylianOldManRightThighDL[25];
extern Gfx gHylianOldManLeftFootDL[25];
extern Gfx gHylianOldManLeftShinDL[25];
extern Gfx gHylianOldManLeftThighDL[25];
extern Gfx gHylianOldManPelvisDL[38];
#define gHylianOldManBaldSkinEarTex_WIDTH 8
#define gHylianOldManBaldSkinEarTex_HEIGHT 8
extern u64 gHylianOldManBaldSkinEarTex[TEX_LEN(u64, gHylianOldManBaldSkinEarTex_WIDTH, gHylianOldManBaldSkinEarTex_HEIGHT, 16)];
#define gHylianOldManBaldFacialHairTex_WIDTH 8
#define gHylianOldManBaldFacialHairTex_HEIGHT 8
extern u64 gHylianOldManBaldFacialHairTex[TEX_LEN(u64, gHylianOldManBaldFacialHairTex_WIDTH, gHylianOldManBaldFacialHairTex_HEIGHT, 16)];
#define gHylianOldManBaldEyeTex_WIDTH 8
#define gHylianOldManBaldEyeTex_HEIGHT 8
extern u64 gHylianOldManBaldEyeTex[TEX_LEN(u64, gHylianOldManBaldEyeTex_WIDTH, gHylianOldManBaldEyeTex_HEIGHT, 16)];
extern Vtx gHylianOldManBaldHeadVtx[];
extern Gfx gHylianOldManBaldHeadDL[68];

#endif
