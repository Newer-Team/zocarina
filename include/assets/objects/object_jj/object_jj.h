#ifndef OBJECT_JJ_H
#define OBJECT_JJ_H

#include "animation.h"
#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern BgCamInfo gJabuJabuHeadBgCamList[];
extern SurfaceType gJabuJabuHeadSurfaceTypes[];
extern CollisionPoly gJabuJabuHeadPolyList[];
extern Vec3s gJabuJabuHeadVtxList[];
extern CollisionHeader gJabuJabuHeadCol;
extern BgCamInfo gJabuJabuBodyBgCamList[];
extern SurfaceType gJabuJabuBodySurfaceTypes[];
extern CollisionPoly gJabuJabuBodyPolyList[];
extern Vec3s gJabuJabuBodyVtxList[];
extern CollisionHeader gJabuJabuBodyCol;
extern s16 gJabuJabuFrameData[];
extern JointIndex gJabuJabuJointIndices[];
extern AnimationHeader gJabuJabuAnim;
extern Vtx gJabuJabuLeftFrillVtx[];
extern Vtx gJabuJabuRightFrillVtx[];
extern Vtx gJabuJabuHeadVtx[];
extern Vtx gJabuJabuLeftLowerFlipperVtx[];
extern Vtx gJabuJabuLeftMidFlipperVtx[];
extern Vtx gJabuJabuLeftUpperFlipperVtx[];
extern Vtx gJabuJabuRightLowerFlipperVtx[];
extern Vtx gJabuJabuRightMidFlipperVtx[];
extern Vtx gJabuJabuRightUpperFlipperVtx[];
extern Vtx gJabuJabuFlukeVtx[];
extern Vtx gJabuJabuBodyVtx[];
extern Gfx gJabuJabuFlukeDL[27];
extern Gfx gJabuJabuRightLowerFlipperDL[26];
extern Gfx gJabuJabuRightMidFlipperDL[23];
extern Gfx gJabuJabuRightUpperFlipperDL[28];
extern Gfx gJabuJabuRightFrillDL[20];
extern Gfx gJabuJabuLeftFrillDL[20];
extern Gfx gJabuJabuHeadDL[348];
extern Gfx gJabuJabuLeftLowerFlipperDL[26];
extern Gfx gJabuJabuLeftMidFlipperDL[28];
extern Gfx gJabuJabuLeftUpperFlipperDL[28];
extern Gfx gJabuJabuBodyDL[153];
#define gJabuJabuFrillTex_WIDTH 32
#define gJabuJabuFrillTex_HEIGHT 32
extern u64 gJabuJabuFrillTex[TEX_LEN(u64, gJabuJabuFrillTex_WIDTH, gJabuJabuFrillTex_HEIGHT, 16)];
#define gJabuJabuNostrilTex_WIDTH 32
#define gJabuJabuNostrilTex_HEIGHT 16
extern u64 gJabuJabuNostrilTex[TEX_LEN(u64, gJabuJabuNostrilTex_WIDTH, gJabuJabuNostrilTex_HEIGHT, 16)];
#define gJabuJabuNoseDecorationTex_WIDTH 8
#define gJabuJabuNoseDecorationTex_HEIGHT 32
extern u64 gJabuJabuNoseDecorationTex[TEX_LEN(u64, gJabuJabuNoseDecorationTex_WIDTH, gJabuJabuNoseDecorationTex_HEIGHT, 16)];
#define gJabuJabuToothTex_WIDTH 8
#define gJabuJabuToothTex_HEIGHT 16
extern u64 gJabuJabuToothTex[TEX_LEN(u64, gJabuJabuToothTex_WIDTH, gJabuJabuToothTex_HEIGHT, 16)];
#define gJabuJabuLipTex_WIDTH 8
#define gJabuJabuLipTex_HEIGHT 16
extern u64 gJabuJabuLipTex[TEX_LEN(u64, gJabuJabuLipTex_WIDTH, gJabuJabuLipTex_HEIGHT, 16)];
#define gJabuJabuLipMouthCornerTex_WIDTH 16
#define gJabuJabuLipMouthCornerTex_HEIGHT 16
extern u64 gJabuJabuLipMouthCornerTex[TEX_LEN(u64, gJabuJabuLipMouthCornerTex_WIDTH, gJabuJabuLipMouthCornerTex_HEIGHT, 16)];
#define gJabuJabuDiademSideTex_WIDTH 8
#define gJabuJabuDiademSideTex_HEIGHT 16
extern u64 gJabuJabuDiademSideTex[TEX_LEN(u64, gJabuJabuDiademSideTex_WIDTH, gJabuJabuDiademSideTex_HEIGHT, 16)];
#define gJabuJabuLateralTex_WIDTH 16
#define gJabuJabuLateralTex_HEIGHT 64
extern u64 gJabuJabuLateralTex[TEX_LEN(u64, gJabuJabuLateralTex_WIDTH, gJabuJabuLateralTex_HEIGHT, 16)];
#define gJabuJabuEyeOrbitTex_WIDTH 4
#define gJabuJabuEyeOrbitTex_HEIGHT 8
extern u64 gJabuJabuEyeOrbitTex[TEX_LEN(u64, gJabuJabuEyeOrbitTex_WIDTH, gJabuJabuEyeOrbitTex_HEIGHT, 16)];
#define gJabuJabuEyeOpenTex_WIDTH 16
#define gJabuJabuEyeOpenTex_HEIGHT 32
extern u64 gJabuJabuEyeOpenTex[TEX_LEN(u64, gJabuJabuEyeOpenTex_WIDTH, gJabuJabuEyeOpenTex_HEIGHT, 16)];
#define gJabuJabuEyeHalfTex_WIDTH 16
#define gJabuJabuEyeHalfTex_HEIGHT 32
extern u64 gJabuJabuEyeHalfTex[TEX_LEN(u64, gJabuJabuEyeHalfTex_WIDTH, gJabuJabuEyeHalfTex_HEIGHT, 16)];
#define gJabuJabuEyeClosedTex_WIDTH 16
#define gJabuJabuEyeClosedTex_HEIGHT 32
extern u64 gJabuJabuEyeClosedTex[TEX_LEN(u64, gJabuJabuEyeClosedTex_WIDTH, gJabuJabuEyeClosedTex_HEIGHT, 16)];
#define gJabuJabuDorsalTex_WIDTH 32
#define gJabuJabuDorsalTex_HEIGHT 64
extern u64 gJabuJabuDorsalTex[TEX_LEN(u64, gJabuJabuDorsalTex_WIDTH, gJabuJabuDorsalTex_HEIGHT, 16)];
#define gJabuJabuCapOuterTex_WIDTH 4
#define gJabuJabuCapOuterTex_HEIGHT 8
extern u64 gJabuJabuCapOuterTex[TEX_LEN(u64, gJabuJabuCapOuterTex_WIDTH, gJabuJabuCapOuterTex_HEIGHT, 16)];
#define gJabuJabuCapInnerTex_WIDTH 8
#define gJabuJabuCapInnerTex_HEIGHT 8
extern u64 gJabuJabuCapInnerTex[TEX_LEN(u64, gJabuJabuCapInnerTex_WIDTH, gJabuJabuCapInnerTex_HEIGHT, 16)];
#define gJabuJabuMouthRoofTex_WIDTH 32
#define gJabuJabuMouthRoofTex_HEIGHT 64
extern u64 gJabuJabuMouthRoofTex[TEX_LEN(u64, gJabuJabuMouthRoofTex_WIDTH, gJabuJabuMouthRoofTex_HEIGHT, 16)];
#define gJabuJabuDiademCenterTex_WIDTH 16
#define gJabuJabuDiademCenterTex_HEIGHT 32
extern u64 gJabuJabuDiademCenterTex[TEX_LEN(u64, gJabuJabuDiademCenterTex_WIDTH, gJabuJabuDiademCenterTex_HEIGHT, 16)];
#define gJabuJabuFinTex_WIDTH 16
#define gJabuJabuFinTex_HEIGHT 8
extern u64 gJabuJabuFinTex[TEX_LEN(u64, gJabuJabuFinTex_WIDTH, gJabuJabuFinTex_HEIGHT, 16)];
#define gJabuJabuMouthFloorTex_WIDTH 32
#define gJabuJabuMouthFloorTex_HEIGHT 64
extern u64 gJabuJabuMouthFloorTex[TEX_LEN(u64, gJabuJabuMouthFloorTex_WIDTH, gJabuJabuMouthFloorTex_HEIGHT, 16)];
extern StandardLimb object_jj_00B858_Limb;
extern StandardLimb object_jj_00B864_Limb;
extern StandardLimb object_jj_00B870_Limb;
extern StandardLimb gJabuJabuBodyLimb;
extern StandardLimb object_jj_00B888_Limb;
extern StandardLimb gJabuJabuLeftUpperFlipperLimb;
extern StandardLimb object_jj_00B8A0_Limb;
extern StandardLimb gJabuJabuLeftMidFlipperLimb;
extern StandardLimb gJabuJabuLeftLowerFlipperLimb;
extern StandardLimb gJabuJabuHeadLimb;
extern StandardLimb object_jj_00B8D0_Limb;
extern StandardLimb gJabuJabuLeftFrillLimb;
extern StandardLimb object_jj_00B8E8_Limb;
extern StandardLimb gJabuJabuRightFrillLimb;
extern StandardLimb object_jj_00B900_Limb;
extern StandardLimb gJabuJabuRightUpperFlipperLimb;
extern StandardLimb object_jj_00B918_Limb;
extern StandardLimb gJabuJabuRightMidFlipperLimb;
extern StandardLimb gJabuJabuRightLowerFlipperLimb;
extern StandardLimb object_jj_00B93C_Limb;
extern StandardLimb gJabuJabuFlukeLimb;
extern void* gJabuJabuLimbs[];
typedef enum gJabuJabuSkelLimb {
    /*  0 */ LIMB_OBJECT_JJ_00B9A8_NONE,
    /*  1 */ LIMB_OBJECT_JJ_00B858,
    /*  2 */ LIMB_OBJECT_JJ_00B864,
    /*  3 */ LIMB_OBJECT_JJ_00B870,
    /*  4 */ LIMB_OBJECT_JJ_00B87C,
    /*  5 */ LIMB_OBJECT_JJ_00B888,
    /*  6 */ LIMB_OBJECT_JJ_00B894,
    /*  7 */ LIMB_OBJECT_JJ_00B8A0,
    /*  8 */ LIMB_OBJECT_JJ_00B8AC,
    /*  9 */ LIMB_OBJECT_JJ_00B8B8,
    /* 10 */ LIMB_OBJECT_JJ_00B8C4,
    /* 11 */ LIMB_OBJECT_JJ_00B8D0,
    /* 12 */ LIMB_OBJECT_JJ_00B8DC,
    /* 13 */ LIMB_OBJECT_JJ_00B8E8,
    /* 14 */ LIMB_OBJECT_JJ_00B8F4,
    /* 15 */ LIMB_OBJECT_JJ_00B900,
    /* 16 */ LIMB_OBJECT_JJ_00B90C,
    /* 17 */ LIMB_OBJECT_JJ_00B918,
    /* 18 */ LIMB_OBJECT_JJ_00B924,
    /* 19 */ LIMB_OBJECT_JJ_00B930,
    /* 20 */ LIMB_OBJECT_JJ_00B93C,
    /* 21 */ LIMB_OBJECT_JJ_00B948,
    /* 22 */ LIMB_OBJECT_JJ_00B9A8_MAX
} gJabuJabuSkelLimb;
extern FlexSkeletonHeader gJabuJabuSkel;
extern BgCamInfo gJabuJabuUnusedBgCamList[];
extern SurfaceType gJabuJabuUnusedSurfaceTypes[];
extern CollisionPoly gJabuJabuUnusedPolyList[];
extern Vec3s gJabuJabuUnusedVtxList[];
extern CollisionHeader gJabuJabuUnusedCol;

#endif
