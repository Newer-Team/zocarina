#ifndef OBJECT_HATA_H
#define OBJECT_HATA_H

#include "animation.h"
#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern BgCamInfo gFlagpoleBgCamList[];
extern SurfaceType gFlagpoleSurfaceTypes[];
extern CollisionPoly gFlagpolePolyList[];
extern Vec3s gFlagpoleVtxList[];
extern CollisionHeader gFlagpoleCol;
extern s16 gFlagpoleFlapFrameData[];
extern JointIndex gFlagpoleFlapJointIndices[];
extern AnimationHeader gFlagpoleFlapAnim;
#define gFlagpolePoleTex_WIDTH 32
#define gFlagpolePoleTex_HEIGHT 32
extern u64 gFlagpolePoleTex[TEX_LEN(u64, gFlagpolePoleTex_WIDTH, gFlagpolePoleTex_HEIGHT, 16)];
#define gFlagpoleTopTex_WIDTH 32
#define gFlagpoleTopTex_HEIGHT 32
extern u64 gFlagpoleTopTex[TEX_LEN(u64, gFlagpoleTopTex_WIDTH, gFlagpoleTopTex_HEIGHT, 16)];
#define gFlagpoleFlagTex_WIDTH 128
#define gFlagpoleFlagTex_HEIGHT 32
extern u64 gFlagpoleFlagTex[TEX_LEN(u64, gFlagpoleFlagTex_WIDTH, gFlagpoleFlagTex_HEIGHT, 8)];
extern Vtx gFlagpolePoleVtx[];
extern Gfx gFlagpolePoleDL[40];
extern Vtx gFlagpoleFlag1HoistEndVtx[];
extern Gfx gFlagpoleFlag1HoistEndDL[18];
extern Vtx gFlagpoleFlag1HoistMidVtx[];
extern Gfx gFlagpoleFlag1HoistMidDL[18];
extern Vtx gFlagpoleFlag1FlyMidVtx[];
extern Gfx gFlagpoleFlag1FlyMidDL[18];
extern Vtx gFlagpoleFlag1FlyEndVtx[];
extern Gfx gFlagpoleFlag1FlyEndDL[18];
extern Vtx gFlagpoleFlag2HoistEndVtx[];
extern Gfx gFlagpoleFlag2HoistEndDL[18];
extern Vtx gFlagpoleFlag2HoistMidVtx[];
extern Gfx gFlagpoleFlag2HoistMidDL[18];
extern Vtx gFlagpoleFlag2FlyMidVtx[];
extern Gfx gFlagpoleFlag2FlyMidDL[18];
extern Vtx gFlagpoleFlag2FlyEndVtx[];
extern Gfx gFlagpoleFlag2FlyEndDL[18];
extern StandardLimb gFlagpolePoleBaseLimb;
extern StandardLimb gFlagpolePoleLimb;
extern StandardLimb gFlagpoleFlag1BaseLimb;
extern StandardLimb gFlagpoleFlag1HoistEndBaseLimb;
extern StandardLimb gFlagpoleFlag1HoistMidBaseLimb;
extern StandardLimb gFlagpoleFlag1FlyMidBaseLimb;
extern StandardLimb gFlagpoleFlag1FlyEndBaseLimb;
extern StandardLimb gFlagpoleFlag1FlyEndLimb;
extern StandardLimb gFlagpoleFlag1FlyMidLimb;
extern StandardLimb gFlagpoleFlag1HoistMidLimb;
extern StandardLimb gFlagpoleFlag1HoistEndLimb;
extern StandardLimb gFlagpoleFlag2BaseLimb;
extern StandardLimb gFlagpoleFlag2HoistEndBaseLimb;
extern StandardLimb gFlagpoleFlag2HoistMidBaseLimb;
extern StandardLimb gFlagpoleFlag2FlyMidBaseLimb;
extern StandardLimb gFlagpoleFlag2FlyEndBaseLimb;
extern StandardLimb gFlagpoleFlag2FlyEndLimb;
extern StandardLimb gFlagpoleFlag2FlyMidLimb;
extern StandardLimb gFlagpoleFlag2HoistMidLimb;
extern StandardLimb gFlagpoleFlag2HoistEndLimb;
extern void* gFlagpoleLimbs[];
typedef enum FlagpoleLimb {
    /*  0 */ FLAGPOLE_LIMB_NONE,
    /*  1 */ FLAGPOLE_LIMB_POLE_BASE,
    /*  2 */ FLAGPOLE_LIMB_POLE,
    /*  3 */ FLAGPOLE_LIMB_FLAG_1_BASE,
    /*  4 */ FLAGPOLE_LIMB_FLAG_1_HOIST_END_BASE,
    /*  5 */ FLAGPOLE_LIMB_FLAG_1_HOIST_MID_BASE,
    /*  6 */ FLAGPOLE_LIMB_FLAG_1_FLY_MID_BASE,
    /*  7 */ FLAGPOLE_LIMB_FLAG_1_FLY_END_BASE,
    /*  8 */ FLAGPOLE_LIMB_FLAG_1_FLY_END,
    /*  9 */ FLAGPOLE_LIMB_FLAG_1_FLY_MID,
    /* 10 */ FLAGPOLE_LIMB_FLAG_1_HOIST_MID,
    /* 11 */ FLAGPOLE_LIMB_FLAG_1_HOIST_END,
    /* 12 */ FLAGPOLE_LIMB_FLAG_2_BASE,
    /* 13 */ FLAGPOLE_LIMB_FLAG_2_HOIST_END_BASE,
    /* 14 */ FLAGPOLE_LIMB_FLAG_2_HOIST_MID_BASE,
    /* 15 */ FLAGPOLE_LIMB_FLAG_2_FLY_MID_BASE,
    /* 16 */ FLAGPOLE_LIMB_FLAG_2_FLY_END_BASE,
    /* 17 */ FLAGPOLE_LIMB_FLAG_2_FLY_END,
    /* 18 */ FLAGPOLE_LIMB_FLAG_2_FLY_MID,
    /* 19 */ FLAGPOLE_LIMB_FLAG_2_HOIST_MID,
    /* 20 */ FLAGPOLE_LIMB_FLAG_2_HOIST_END,
    /* 21 */ FLAGPOLE_LIMB_MAX
} FlagpoleLimb;
extern SkeletonHeader gFlagpoleSkel;

#endif
