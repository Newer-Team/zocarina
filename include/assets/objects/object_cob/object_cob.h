#ifndef OBJECT_COB_H
#define OBJECT_COB_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

//#define gHylianWoman3TLUT_TLUT_COUNT 256
extern u64 gHylianWoman3TLUT[];
#define gHylianWoman3FaceTex_WIDTH 8
#define gHylianWoman3FaceTex_HEIGHT 16
extern u64 gHylianWoman3FaceTex[TEX_LEN(u64, gHylianWoman3FaceTex_WIDTH, gHylianWoman3FaceTex_HEIGHT, 8)];
#define gHylianWoman3HairTex_WIDTH 8
#define gHylianWoman3HairTex_HEIGHT 8
extern u64 gHylianWoman3HairTex[TEX_LEN(u64, gHylianWoman3HairTex_WIDTH, gHylianWoman3HairTex_HEIGHT, 8)];
#define gHylianWoman3FingersTex_WIDTH 8
#define gHylianWoman3FingersTex_HEIGHT 8
extern u64 gHylianWoman3FingersTex[TEX_LEN(u64, gHylianWoman3FingersTex_WIDTH, gHylianWoman3FingersTex_HEIGHT, 8)];
#define gHylianWoman3DressSleevesTex_WIDTH 8
#define gHylianWoman3DressSleevesTex_HEIGHT 8
extern u64 gHylianWoman3DressSleevesTex[TEX_LEN(u64, gHylianWoman3DressSleevesTex_WIDTH, gHylianWoman3DressSleevesTex_HEIGHT, 8)];
#define gHylianWoman3ShirtTex_WIDTH 8
#define gHylianWoman3ShirtTex_HEIGHT 16
extern u64 gHylianWoman3ShirtTex[TEX_LEN(u64, gHylianWoman3ShirtTex_WIDTH, gHylianWoman3ShirtTex_HEIGHT, 8)];
extern Vtx gHylianWoman3HeadVtx[];
extern Vtx gHylianWoman3LeftHandVtx[];
extern Vtx gHylianWoman3LeftForearmVtx[];
extern Vtx gHylianWoman3LeftUpperArmVtx[];
extern Vtx gHylianWoman3RightHandVtx[];
extern Vtx gHylianWoman3RightForearmVtx[];
extern Vtx gHylianWoman3RightUpperArmVtx[];
extern Vtx gHylianWoman3TorsoVtx[];
extern Vtx gHylianWoman3LeftFootVtx[];
extern Vtx gHylianWoman3LeftShinVtx[];
extern Vtx gHylianWoman3LeftThighVtx[];
extern Vtx gHylianWoman3RightFootVtx[];
extern Vtx gHylianWoman3RightShinVtx[];
extern Vtx gHylianWoman3RightThighVtx[];
extern Vtx gHylianWoman3PelvisVtx[];
extern Gfx gHylianWoman3HeadDL[111];
extern Gfx gHylianWoman3RightHandDL[33];
extern Gfx gHylianWoman3RightForearmDL[35];
extern Gfx gHylianWoman3RightUpperArmDL[35];
extern Gfx gHylianWoman3LeftHandDL[33];
extern Gfx gHylianWoman3LeftForearmDL[35];
extern Gfx gHylianWoman3LeftUpperArmDL[35];
extern Gfx gHylianWoman3TorsoDL[43];
extern Gfx gHylianWoman3RightFootDL[10];
extern Gfx gHylianWoman3RightShinDL[10];
extern Gfx gHylianWoman3RightThighDL[10];
extern Gfx gHylianWoman3LeftFootDL[10];
extern Gfx gHylianWoman3LeftShinDL[10];
extern Gfx gHylianWoman3LeftThighDL[10];
extern Gfx gHylianWoman3PelvisDL[29];
extern StandardLimb gHylianWoman3PelvisLimb;
extern StandardLimb gHylianWoman3LeftThighLimb;
extern StandardLimb gHylianWoman3LeftShinLimb;
extern StandardLimb gHylianWoman3LeftFootLimb;
extern StandardLimb gHylianWoman3RightThighLimb;
extern StandardLimb gHylianWoman3RightShinLimb;
extern StandardLimb gHylianWoman3RightFootLimb;
extern StandardLimb gHylianWoman3TorsoLimb;
extern StandardLimb gHylianWoman3LeftUpperArmLimb;
extern StandardLimb gHylianWoman3LeftForearmLimb;
extern StandardLimb gHylianWoman3LeftHandLimb;
extern StandardLimb gHylianWoman3RightUpperArmLimb;
extern StandardLimb gHylianWoman3RightForearmLimb;
extern StandardLimb gHylianWoman3RightHandLimb;
extern StandardLimb gHylianWoman3HeadLimb;
extern void* gHylianWoman3Limbs[];
typedef enum gHylianWoman3SkelLimb {
    /*  0 */ LIMB_OBJECT_COB_0021F8_NONE,
    /*  1 */ LIMB_OBJECT_COB_002108,
    /*  2 */ LIMB_OBJECT_COB_002114,
    /*  3 */ LIMB_OBJECT_COB_002120,
    /*  4 */ LIMB_OBJECT_COB_00212C,
    /*  5 */ LIMB_OBJECT_COB_002138,
    /*  6 */ LIMB_OBJECT_COB_002144,
    /*  7 */ LIMB_OBJECT_COB_002150,
    /*  8 */ LIMB_OBJECT_COB_00215C,
    /*  9 */ LIMB_OBJECT_COB_002168,
    /* 10 */ LIMB_OBJECT_COB_002174,
    /* 11 */ LIMB_OBJECT_COB_002180,
    /* 12 */ LIMB_OBJECT_COB_00218C,
    /* 13 */ LIMB_OBJECT_COB_002198,
    /* 14 */ LIMB_OBJECT_COB_0021A4,
    /* 15 */ LIMB_OBJECT_COB_0021B0,
    /* 16 */ LIMB_OBJECT_COB_0021F8_MAX
} gHylianWoman3SkelLimb;
extern FlexSkeletonHeader gHylianWoman3Skel;

#endif
