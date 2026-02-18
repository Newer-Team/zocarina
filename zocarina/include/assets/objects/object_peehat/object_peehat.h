#ifndef OBJECT_PEEHAT_H
#define OBJECT_PEEHAT_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gPeehatLandingFrameData[];
extern JointIndex gPeehatLandingJointIndices[];
extern AnimationHeader gPeehatLandingAnim;
extern s16 gPeehatFlyingFrameData[];
extern JointIndex gPeehatFlyingJointIndices[];
extern AnimationHeader gPeehatFlyingAnim;
extern s16 gPeehatRecoilFrameData[];
extern JointIndex gPeehatRecoilJointIndices[];
extern AnimationHeader gPeehatRecoilAnim;
extern s16 gPeehatRisingFrameData[];
extern JointIndex gPeehatRisingJointIndices[];
extern AnimationHeader gPeehatRisingAnim;
extern Vtx gPeehatWing1Vtx[];
extern Vtx gPeehatWing2Vtx[];
extern Vtx gPeehatWing3Vtx[];
extern Vtx gPeehatWing4Vtx[];
extern Vtx gPeehatWing5Vtx[];
extern Vtx gPeehatWing6Vtx[];
extern Vtx gPeehatTopVtx[];
extern Vtx gPeehatBodyVtx[];
extern Gfx gPeehatWing1DL[18];
extern Gfx gPeehatWing2DL[18];
extern Gfx gPeehatWing3DL[18];
extern Gfx gPeehatWing4DL[18];
extern Gfx gPeehatWing5DL[18];
extern Gfx gPeehatWing6DL[18];
extern Gfx gPeehatTopDL[24];
extern Gfx gPeehatBodyDL[36];
#define gPeehatLowerBodyTex_WIDTH 8
#define gPeehatLowerBodyTex_HEIGHT 8
extern u64 gPeehatLowerBodyTex[TEX_LEN(u64, gPeehatLowerBodyTex_WIDTH, gPeehatLowerBodyTex_HEIGHT, 16)];
#define gPeehatLeafTopTex_WIDTH 16
#define gPeehatLeafTopTex_HEIGHT 32
extern u64 gPeehatLeafTopTex[TEX_LEN(u64, gPeehatLeafTopTex_WIDTH, gPeehatLeafTopTex_HEIGHT, 16)];
#define gPeehatWingTex_WIDTH 8
#define gPeehatWingTex_HEIGHT 32
extern u64 gPeehatWingTex[TEX_LEN(u64, gPeehatWingTex_WIDTH, gPeehatWingTex_HEIGHT, 16)];
#define gPeehatUpperBodyTex_WIDTH 8
#define gPeehatUpperBodyTex_HEIGHT 8
extern u64 gPeehatUpperBodyTex[TEX_LEN(u64, gPeehatUpperBodyTex_WIDTH, gPeehatUpperBodyTex_HEIGHT, 16)];
extern StandardLimb gPeehatRootLimb;
extern StandardLimb gPeehatBodyRootLimb;
extern StandardLimb gPeehatBodyLimb;
extern StandardLimb gPeehatWingStructureRootLimb;
extern StandardLimb gPeehatWing1RootLimb;
extern StandardLimb gPeehatLimb_1B4C;
extern StandardLimb gPeehatWing1Limb;
extern StandardLimb gPeehatWing2RootLimb;
extern StandardLimb gPeehatLimb_1B70;
extern StandardLimb gPeehatWing2Limb;
extern StandardLimb gPeehatWing3RootLimb;
extern StandardLimb gPeehatLimb_1B94;
extern StandardLimb gPeehatWing3Limb;
extern StandardLimb gPeehatWing4RootLimb;
extern StandardLimb gPeehatLimb_1BB8;
extern StandardLimb gPeehatWing4Limb;
extern StandardLimb gPeehatWing5RootLimb;
extern StandardLimb gPeehatLimb_1BDC;
extern StandardLimb gPeehatWing5Limb;
extern StandardLimb gPeehatWing6RootLimb;
extern StandardLimb gPeehatLimb_1C00;
extern StandardLimb gPeehatWing6Limb;
extern StandardLimb gPeehatTopLimb;
extern void* gPeehatLimbs[];
typedef enum gPeehatSkelLimb {
    /*  0 */ LIMB_OBJECT_PEEHAT_001C80_NONE,
    /*  1 */ LIMB_OBJECT_PEEHAT_001B10,
    /*  2 */ LIMB_OBJECT_PEEHAT_001B1C,
    /*  3 */ LIMB_OBJECT_PEEHAT_001B28,
    /*  4 */ LIMB_OBJECT_PEEHAT_001B34,
    /*  5 */ LIMB_OBJECT_PEEHAT_001B40,
    /*  6 */ LIMB_OBJECT_PEEHAT_001B4C,
    /*  7 */ LIMB_OBJECT_PEEHAT_001B58,
    /*  8 */ LIMB_OBJECT_PEEHAT_001B64,
    /*  9 */ LIMB_OBJECT_PEEHAT_001B70,
    /* 10 */ LIMB_OBJECT_PEEHAT_001B7C,
    /* 11 */ LIMB_OBJECT_PEEHAT_001B88,
    /* 12 */ LIMB_OBJECT_PEEHAT_001B94,
    /* 13 */ LIMB_OBJECT_PEEHAT_001BA0,
    /* 14 */ LIMB_OBJECT_PEEHAT_001BAC,
    /* 15 */ LIMB_OBJECT_PEEHAT_001BB8,
    /* 16 */ LIMB_OBJECT_PEEHAT_001BC4,
    /* 17 */ LIMB_OBJECT_PEEHAT_001BD0,
    /* 18 */ LIMB_OBJECT_PEEHAT_001BDC,
    /* 19 */ LIMB_OBJECT_PEEHAT_001BE8,
    /* 20 */ LIMB_OBJECT_PEEHAT_001BF4,
    /* 21 */ LIMB_OBJECT_PEEHAT_001C00,
    /* 22 */ LIMB_OBJECT_PEEHAT_001C0C,
    /* 23 */ LIMB_OBJECT_PEEHAT_001C18,
    /* 24 */ LIMB_OBJECT_PEEHAT_001C80_MAX
} gPeehatSkelLimb;
extern SkeletonHeader gPeehatSkel;

#endif
