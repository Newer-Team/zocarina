#ifndef OBJECT_BIRD_H
#define OBJECT_BIRD_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gBirdFlyFrameData[];
extern JointIndex gBirdFlyJointIndices[];
extern AnimationHeader gBirdFlyAnim;
extern Gfx gBirdLeftWingDL[20];
extern Gfx gBirdLeftWingWrapper1DL[2];
extern Gfx gBirdLeftWingWrapper2DL[2];
extern Vtx gBirdLeftWingVtx[];
extern Gfx gBirdRightWingDL[20];
extern Gfx gBirdRightWingWrapper1DL[2];
extern Gfx gBirdRightWingWrapper2DL[2];
extern Vtx gBirdRightWingVtx[];
extern Gfx gBirdBodyDL[42];
extern Gfx gBirdBodyWrapper1DL[2];
extern Gfx gBirdBodyWrapper2DL[2];
extern Vtx gBirdBodyVtx[];
#define gBirdFaceTex_WIDTH 32
#define gBirdFaceTex_HEIGHT 32
extern u64 gBirdFaceTex[TEX_LEN(u64, gBirdFaceTex_WIDTH, gBirdFaceTex_HEIGHT, 16)];
#define gBirdTailTex_WIDTH 16
#define gBirdTailTex_HEIGHT 32
extern u64 gBirdTailTex[TEX_LEN(u64, gBirdTailTex_WIDTH, gBirdTailTex_HEIGHT, 16)];
#define gBirdWingTex_WIDTH 64
#define gBirdWingTex_HEIGHT 32
extern u64 gBirdWingTex[TEX_LEN(u64, gBirdWingTex_WIDTH, gBirdWingTex_HEIGHT, 16)];
extern StandardLimb gBirdLimb_002100;
extern StandardLimb gBirdLimb_00210C;
extern StandardLimb gBirdLimb_002118;
extern StandardLimb gBirdLimb_002124;
extern StandardLimb gBirdLeftWingLimb;
extern StandardLimb gBirdLimb_00213C;
extern StandardLimb gBirdLimb_002148;
extern StandardLimb gBirdRightWingLimb;
extern StandardLimb gBirdBodyLimb;
extern void* gBirdLimbs[];
typedef enum gBirdSkelLimb {
    /*  0 */ LIMB_OBJECT_BIRD_002190_NONE,
    /*  1 */ LIMB_OBJECT_BIRD_002100,
    /*  2 */ LIMB_OBJECT_BIRD_00210C,
    /*  3 */ LIMB_OBJECT_BIRD_002118,
    /*  4 */ LIMB_OBJECT_BIRD_002124,
    /*  5 */ LIMB_OBJECT_BIRD_002130,
    /*  6 */ LIMB_OBJECT_BIRD_00213C,
    /*  7 */ LIMB_OBJECT_BIRD_002148,
    /*  8 */ LIMB_OBJECT_BIRD_002154,
    /*  9 */ LIMB_OBJECT_BIRD_002160,
    /* 10 */ LIMB_OBJECT_BIRD_002190_MAX
} gBirdSkelLimb;
extern SkeletonHeader gBirdSkel;

#endif
