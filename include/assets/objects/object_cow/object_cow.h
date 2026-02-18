#ifndef OBJECT_COW_H
#define OBJECT_COW_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gCowBodyChewFrameData[];
extern JointIndex gCowBodyChewJointIndices[];
extern AnimationHeader gCowBodyChewAnim;
extern Vtx gCowJawVtx[];
extern Vtx gCowNoseRingVtx[];
extern Vtx gCowNoseVtx[];
extern Vtx gCowHeadVtx[];
extern Vtx gCowTorsoVtx[];
extern Gfx gCowTorsoDL[173];
extern Gfx gCowHeadDL[112];
extern Gfx gCowNoseDL[88];
extern Gfx gCowNoseRingDL[39];
extern Gfx gCowJawDL[36];
//#define gCowTLUT_TLUT_COUNT 256
extern u64 gCowTLUT[];
#define gCowUdderTex_WIDTH 16
#define gCowUdderTex_HEIGHT 16
extern u64 gCowUdderTex[TEX_LEN(u64, gCowUdderTex_WIDTH, gCowUdderTex_HEIGHT, 8)];
#define gCowNoseRingTex_WIDTH 8
#define gCowNoseRingTex_HEIGHT 8
extern u64 gCowNoseRingTex[TEX_LEN(u64, gCowNoseRingTex_WIDTH, gCowNoseRingTex_HEIGHT, 8)];
#define gCowNoseTex_WIDTH 16
#define gCowNoseTex_HEIGHT 16
extern u64 gCowNoseTex[TEX_LEN(u64, gCowNoseTex_WIDTH, gCowNoseTex_HEIGHT, 8)];
#define gCowSpottedPatternTex_WIDTH 64
#define gCowSpottedPatternTex_HEIGHT 64
extern u64 gCowSpottedPatternTex[TEX_LEN(u64, gCowSpottedPatternTex_WIDTH, gCowSpottedPatternTex_HEIGHT, 8)];
#define gCowEarTex_WIDTH 8
#define gCowEarTex_HEIGHT 16
extern u64 gCowEarTex[TEX_LEN(u64, gCowEarTex_WIDTH, gCowEarTex_HEIGHT, 8)];
#define gCowEyelidTex_WIDTH 16
#define gCowEyelidTex_HEIGHT 16
extern u64 gCowEyelidTex[TEX_LEN(u64, gCowEyelidTex_WIDTH, gCowEyelidTex_HEIGHT, 16)];
#define gCowTailTex_WIDTH 8
#define gCowTailTex_HEIGHT 16
extern u64 gCowTailTex[TEX_LEN(u64, gCowTailTex_WIDTH, gCowTailTex_HEIGHT, 8)];
extern StandardLimb gCowRootLimb;
extern StandardLimb gCowHeadLimb;
extern StandardLimb gCowJawLimb;
extern StandardLimb gCowNoseLimb;
extern StandardLimb gCowNoseRingLimb;
extern void* gCowBodyLimbs[];
typedef enum CowLimb {
    /*  0 */ COW_LIMB_NONE,
    /*  1 */ COW_LIMB_ROOT,
    /*  2 */ COW_LIMB_HEAD,
    /*  3 */ COW_LIMB_JAW,
    /*  4 */ COW_LIMB_NOSE,
    /*  5 */ COW_LIMB_NOSE_RING,
    /*  6 */ COW_LIMB_MAX
} CowLimb;
extern FlexSkeletonHeader gCowBodySkel;
extern s16 gCowBodyMoveHeadFrameData[];
extern JointIndex gCowBodyMoveHeadJointIndices[];
extern AnimationHeader gCowBodyMoveHeadAnim;
extern s16 gCowTailIdleFrameData[];
extern JointIndex gCowTailIdleJointIndices[];
extern AnimationHeader gCowTailIdleAnim;
extern Vtx gCowTailEndVtx[];
extern Vtx gCowTailLowerVtx[];
extern Vtx gCowTailMiddleVtx[];
extern Vtx gCowTailUpperVtx[];
extern Vtx gCowTailConnectionVtx[];
extern Gfx gCowTailConnectionDL[28];
extern Gfx gCowTailUpperDL[32];
extern Gfx gCowTailMiddleDL[32];
extern Gfx gCowTailLowerDL[32];
extern Gfx gCowTailEndDL[34];
extern StandardLimb gCowTailRootLimb;
extern StandardLimb gCowTailUpperLimb;
extern StandardLimb gCowTailMiddleLimb;
extern StandardLimb gCowTailLowerLimb;
extern StandardLimb gCowTailEndLimb;
extern void* gCowTailLimbs[];
typedef enum CowTailLimb {
    /*  0 */ COW_TAIL_LIMB_NONE,
    /*  1 */ COW_TAIL_LIMB_ROOT,
    /*  2 */ COW_TAIL_LIMB_UPPER,
    /*  3 */ COW_TAIL_LIMB_MIDDLE,
    /*  4 */ COW_TAIL_LIMB_LOWER,
    /*  5 */ COW_TAIL_LIMB_END,
    /*  6 */ COW_TAIL_LIMB_MAX
} CowTailLimb;
extern FlexSkeletonHeader gCowTailSkel;
extern s16 gCowTailSwishFrameData[];
extern JointIndex gCowTailSwishJointIndices[];
extern AnimationHeader gCowTailSwishAnim;

#endif
