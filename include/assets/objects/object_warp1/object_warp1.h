#ifndef OBJECT_WARP1_H
#define OBJECT_WARP1_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern Vtx gWarpPortalVtx[];
extern Gfx gWarpPortalDL[36];
#define gWarpPortalTex_WIDTH 64
#define gWarpPortalTex_HEIGHT 64
extern u64 gWarpPortalTex[TEX_LEN(u64, gWarpPortalTex_WIDTH, gWarpPortalTex_HEIGHT, 8)];
extern s16 gWarpCrystalFrameData[];
extern JointIndex gWarpCrystalJointIndices[];
extern AnimationHeader gWarpCrystalAnim;
extern Vtx object_warp1_Vtx_001390[];
extern Vtx object_warp1_Vtx_001630[];
extern Vtx object_warp1_Vtx_001660[];
extern Vtx object_warp1_Vtx_001690[];
extern Vtx object_warp1_Vtx_0016C0[];
extern Vtx object_warp1_Vtx_0016F0[];
extern Vtx object_warp1_Vtx_001720[];
extern Gfx gWarp1DL_001750[27];
extern Gfx gWarp1DL_001828[17];
extern Gfx gWarp1DL_0018B0[17];
extern Gfx gWarp1DL_001938[17];
extern Gfx gWarp1DL_0019C0[17];
extern Gfx gWarp1DL_001A48[17];
extern Gfx gWarp1DL_001AD0[17];
#define gWarpCrystalTex_WIDTH 64
#define gWarpCrystalTex_HEIGHT 64
extern u64 gWarpCrystalTex[TEX_LEN(u64, gWarpCrystalTex_WIDTH, gWarpCrystalTex_HEIGHT, 8)];
extern StandardLimb gWarpCrystalLimb_002B58;
extern StandardLimb gWarpCrystalLimb_002B64;
extern StandardLimb gWarpCrystalLimb_002B70;
extern StandardLimb gWarpCrystalLimb_002B7C;
extern StandardLimb gWarpCrystalLimb_002B88;
extern StandardLimb gWarpCrystalLimb_002B94;
extern StandardLimb gWarpCrystalLimb_002BA0;
extern StandardLimb gWarpCrystalLimb_002BAC;
extern StandardLimb gWarpCrystalLimb_002BB8;
extern StandardLimb gWarpCrystalLimb_002BC4;
extern StandardLimb gWarpCrystalLimb_002BD0;
extern StandardLimb gWarpCrystalLimb_002BDC;
extern StandardLimb gWarpCrystalLimb_002BE8;
extern StandardLimb gWarpCrystalLimb_002BF4;
extern StandardLimb gWarpCrystalLimb_002C00;
extern StandardLimb gWarpCrystalLimb_002C0C;
extern StandardLimb gWarpCrystalLimb_002C18;
extern StandardLimb gWarpCrystalLimb_002C24;
extern StandardLimb gWarpCrystalLimb_002C30;
extern StandardLimb gWarpCrystalLimb_002C3C;
extern StandardLimb gWarpCrystalLimb_002C48;
extern void* gWarpCrystalLimbs[];
typedef enum gWarpCrystalSkelLimb {
    /*  0 */ LIMB_OBJECT_WARP1_002CA8_NONE,
    /*  1 */ LIMB_OBJECT_WARP1_002B58,
    /*  2 */ LIMB_OBJECT_WARP1_002B64,
    /*  3 */ LIMB_OBJECT_WARP1_002B70,
    /*  4 */ LIMB_OBJECT_WARP1_002B7C,
    /*  5 */ LIMB_OBJECT_WARP1_002B88,
    /*  6 */ LIMB_OBJECT_WARP1_002B94,
    /*  7 */ LIMB_OBJECT_WARP1_002BA0,
    /*  8 */ LIMB_OBJECT_WARP1_002BAC,
    /*  9 */ LIMB_OBJECT_WARP1_002BB8,
    /* 10 */ LIMB_OBJECT_WARP1_002BC4,
    /* 11 */ LIMB_OBJECT_WARP1_002BD0,
    /* 12 */ LIMB_OBJECT_WARP1_002BDC,
    /* 13 */ LIMB_OBJECT_WARP1_002BE8,
    /* 14 */ LIMB_OBJECT_WARP1_002BF4,
    /* 15 */ LIMB_OBJECT_WARP1_002C00,
    /* 16 */ LIMB_OBJECT_WARP1_002C0C,
    /* 17 */ LIMB_OBJECT_WARP1_002C18,
    /* 18 */ LIMB_OBJECT_WARP1_002C24,
    /* 19 */ LIMB_OBJECT_WARP1_002C30,
    /* 20 */ LIMB_OBJECT_WARP1_002C3C,
    /* 21 */ LIMB_OBJECT_WARP1_002C48,
    /* 22 */ LIMB_OBJECT_WARP1_002CA8_MAX
} gWarpCrystalSkelLimb;
extern SkeletonHeader gWarpCrystalSkel;

#endif
