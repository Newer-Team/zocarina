#ifndef OBJECT_BROB_H
#define OBJECT_BROB_H

#include "animation.h"
#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern s16 gBrobStunnedFrameData[];
extern JointIndex gBrobStunnedJointIndices[];
extern AnimationHeader gBrobStunnedAnim;
extern Vtx gBrobTopSegmentVtx[];
extern Vtx gBrobUpperSegmentVtx[];
extern Vtx gBrobMiddleSegmentVtx[];
extern Vtx gBrobLowerSegmentVtx[];
extern Vtx gBrobBaseSegmentVtx[];
extern Gfx gBrobBaseSegmentDL[23];
extern Gfx gBrobLowerSegmentDL[39];
extern Gfx gBrobMiddleSegmentDL[35];
extern Gfx gBrobUpperSegmentDL[35];
extern Gfx gBrobTopSegmentDL[41];
#define gBrobFleshTex_WIDTH 32
#define gBrobFleshTex_HEIGHT 32
extern u64 gBrobFleshTex[TEX_LEN(u64, gBrobFleshTex_WIDTH, gBrobFleshTex_HEIGHT, 16)];
extern StandardLimb gBrobRootLimb;
extern StandardLimb gBrobBaseSegmentRootLimb;
extern StandardLimb gBrobBaseSegmentLimb;
extern StandardLimb gBrobLowerSegmentRootLimb;
extern StandardLimb gBrobLowerSegmentLimb;
extern StandardLimb gBrobMiddleSegmentLimb;
extern StandardLimb gBrobUpperSegmentRootLimb;
extern StandardLimb gBrobUpperSegmentLimb;
extern StandardLimb gBrobTopSegmentLimb;
extern void* gBrobLimbs[];
typedef enum gBrobSkelLimb {
    /*  0 */ LIMB_OBJECT_BROB_0015D8_NONE,
    /*  1 */ LIMB_OBJECT_BROB_001548,
    /*  2 */ LIMB_OBJECT_BROB_001554,
    /*  3 */ LIMB_OBJECT_BROB_001560,
    /*  4 */ LIMB_OBJECT_BROB_00156C,
    /*  5 */ LIMB_OBJECT_BROB_001578,
    /*  6 */ LIMB_OBJECT_BROB_001584,
    /*  7 */ LIMB_OBJECT_BROB_001590,
    /*  8 */ LIMB_OBJECT_BROB_00159C,
    /*  9 */ LIMB_OBJECT_BROB_0015A8,
    /* 10 */ LIMB_OBJECT_BROB_0015D8_MAX
} gBrobSkelLimb;
extern FlexSkeletonHeader gBrobSkel;
extern s16 gBrobShockFrameData[];
extern JointIndex gBrobShockJointIndices[];
extern AnimationHeader gBrobShockAnim;
extern s16 gBrobMoveUpFrameData[];
extern JointIndex gBrobMoveUpJointIndices[];
extern AnimationHeader gBrobMoveUpAnim;
extern s16 gBrobWobbleFrameData[];
extern JointIndex gBrobWobbleJointIndices[];
extern AnimationHeader gBrobWobbleAnim;
extern BgCamInfo gBrobBgCamList[];
extern SurfaceType gBrobSurfaceTypes[];
extern CollisionPoly gBrobPolyList[];
extern Vec3s gBrobVtxList[];
extern CollisionHeader gBrobCol;

#endif
