#ifndef OBJECT_BBA_H
#define OBJECT_BBA_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern StandardLimb gHylianOldWomanPelvisLimb;
extern StandardLimb gHylianOldWomanLeftThighLimb;
extern StandardLimb gHylianOldWomanLeftShinLimb;
extern StandardLimb gHylianOldWomanLeftFootLimb;
extern StandardLimb gHylianOldWomanRightThighLimb;
extern StandardLimb gHylianOldWomanRightShinLimb;
extern StandardLimb gHylianOldWomanRightFootLimb;
extern StandardLimb gHylianOldWomanTorsoLimb;
extern StandardLimb gHylianOldWomanLeftUpperArmLimb;
extern StandardLimb gHylianOldWomanLeftForearmLimb;
extern StandardLimb gHylianOldWomanLeftHandLimb;
extern StandardLimb gHylianOldWomanRightUpperArmLimb;
extern StandardLimb gHylianOldWomanRightForearmLimb;
extern StandardLimb gHylianOldWomanRightHandLimb;
extern StandardLimb gHylianOldWomanHeadLimb;
extern void* gHylianOldWomanLimbs[];
typedef enum gHylianOldWomanSkelLimb {
    /*  0 */ LIMB_OBJECT_BBA_0000F0_NONE,
    /*  1 */ LIMB_OBJECT_BBA_000000,
    /*  2 */ LIMB_OBJECT_BBA_00000C,
    /*  3 */ LIMB_OBJECT_BBA_000018,
    /*  4 */ LIMB_OBJECT_BBA_000024,
    /*  5 */ LIMB_OBJECT_BBA_000030,
    /*  6 */ LIMB_OBJECT_BBA_00003C,
    /*  7 */ LIMB_OBJECT_BBA_000048,
    /*  8 */ LIMB_OBJECT_BBA_000054,
    /*  9 */ LIMB_OBJECT_BBA_000060,
    /* 10 */ LIMB_OBJECT_BBA_00006C,
    /* 11 */ LIMB_OBJECT_BBA_000078,
    /* 12 */ LIMB_OBJECT_BBA_000084,
    /* 13 */ LIMB_OBJECT_BBA_000090,
    /* 14 */ LIMB_OBJECT_BBA_00009C,
    /* 15 */ LIMB_OBJECT_BBA_0000A8,
    /* 16 */ LIMB_OBJECT_BBA_0000F0_MAX
} gHylianOldWomanSkelLimb;
extern FlexSkeletonHeader gHylianOldWomanSkel;
//#define gHylianOldWomanTLUT_TLUT_COUNT 256
extern u64 gHylianOldWomanTLUT[];
#define gHylianOldWomanMouthTex_WIDTH 8
#define gHylianOldWomanMouthTex_HEIGHT 8
extern u64 gHylianOldWomanMouthTex[TEX_LEN(u64, gHylianOldWomanMouthTex_WIDTH, gHylianOldWomanMouthTex_HEIGHT, 8)];
#define gHylianOldWomanSkinTex_WIDTH 8
#define gHylianOldWomanSkinTex_HEIGHT 8
extern u64 gHylianOldWomanSkinTex[TEX_LEN(u64, gHylianOldWomanSkinTex_WIDTH, gHylianOldWomanSkinTex_HEIGHT, 8)];
#define gHylianOldWomanHairTex_WIDTH 16
#define gHylianOldWomanHairTex_HEIGHT 16
extern u64 gHylianOldWomanHairTex[TEX_LEN(u64, gHylianOldWomanHairTex_WIDTH, gHylianOldWomanHairTex_HEIGHT, 8)];
#define gHylianOldWomanEarTex_WIDTH 8
#define gHylianOldWomanEarTex_HEIGHT 8
extern u64 gHylianOldWomanEarTex[TEX_LEN(u64, gHylianOldWomanEarTex_WIDTH, gHylianOldWomanEarTex_HEIGHT, 8)];
#define gHylianOldWomanEyeTex_WIDTH 32
#define gHylianOldWomanEyeTex_HEIGHT 32
extern u64 gHylianOldWomanEyeTex[TEX_LEN(u64, gHylianOldWomanEyeTex_WIDTH, gHylianOldWomanEyeTex_HEIGHT, 16)];
#define gHylianOldWomanFingersTex_WIDTH 16
#define gHylianOldWomanFingersTex_HEIGHT 16
extern u64 gHylianOldWomanFingersTex[TEX_LEN(u64, gHylianOldWomanFingersTex_WIDTH, gHylianOldWomanFingersTex_HEIGHT, 8)];
#define gHylianOldWomanCollarSleevesTex_WIDTH 8
#define gHylianOldWomanCollarSleevesTex_HEIGHT 8
extern u64 gHylianOldWomanCollarSleevesTex[TEX_LEN(u64, gHylianOldWomanCollarSleevesTex_WIDTH, gHylianOldWomanCollarSleevesTex_HEIGHT, 8)];
#define gHylianOldWomanShirtTex_WIDTH 16
#define gHylianOldWomanShirtTex_HEIGHT 16
extern u64 gHylianOldWomanShirtTex[TEX_LEN(u64, gHylianOldWomanShirtTex_WIDTH, gHylianOldWomanShirtTex_HEIGHT, 8)];
#define gHylianOldWomanSkirtTex_WIDTH 16
#define gHylianOldWomanSkirtTex_HEIGHT 16
extern u64 gHylianOldWomanSkirtTex[TEX_LEN(u64, gHylianOldWomanSkirtTex_WIDTH, gHylianOldWomanSkirtTex_HEIGHT, 8)];
extern Vtx gHylianOldWomanHeadVtx[];
extern Vtx gHylianOldWomanLeftHandVtx[];
extern Vtx gHylianOldWomanLeftForearmVtx[];
extern Vtx gHylianOldWomanLeftUpperArmVtx[];
extern Vtx gHylianOldWomanRightHandVtx[];
extern Vtx gHylianOldWomanRightForearmVtx[];
extern Vtx gHylianOldWomanRightUpperArmVtx[];
extern Vtx gHylianOldWomanTorsoVtx[];
extern Vtx gHylianOldWomanRightFootVtx[];
extern Vtx gHylianOldWomanRightShinVtx[];
extern Vtx gHylianOldWomanRightThighVtx[];
extern Vtx gHylianOldWomanLeftFootVtx[];
extern Vtx gHylianOldWomanLeftShinVtx[];
extern Vtx gHylianOldWomanLeftThighVtx[];
extern Vtx gHylianOldWomanPelvisVtx[];
extern Gfx gHylianOldWomanHeadDL[298];
extern Gfx gHylianOldWomanRightHandDL[34];
extern Gfx gHylianOldWomanRightForearmDL[36];
extern Gfx gHylianOldWomanRightUpperArmDL[37];
extern Gfx gHylianOldWomanLeftHandDL[34];
extern Gfx gHylianOldWomanLeftForearmDL[36];
extern Gfx gHylianOldWomanLeftUpperArmDL[37];
extern Gfx gHylianOldWomanTorsoDL[103];
extern Gfx gHylianOldWomanRightFootDL[26];
extern Gfx gHylianOldWomanRightShinDL[26];
extern Gfx gHylianOldWomanRightThighDL[26];
extern Gfx gHylianOldWomanLeftFootDL[26];
extern Gfx gHylianOldWomanLeftShinDL[26];
extern Gfx gHylianOldWomanLeftThighDL[26];
extern Gfx gHylianOldWomanPelvisDL[37];

#endif
