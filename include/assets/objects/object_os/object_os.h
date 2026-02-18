#ifndef OBJECT_OS_H
#define OBJECT_OS_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gHappyMaskSalesmanIdleFrameData[];
extern JointIndex gHappyMaskSalesmanIdleJointIndices[];
extern AnimationHeader gHappyMaskSalesmanIdleAnim;
extern Vtx gHappyMaskSalesmanHeadVtx[];
extern Vtx gHappyMaskSalesmanLeftHandVtx[];
extern Vtx gHappyMaskSalesmanLeftForearmVtx[];
extern Vtx gHappyMaskSalesmanLeftUpperArmVtx[];
extern Vtx gHappyMaskSalesmanRightHandVtx[];
extern Vtx gHappyMaskSalesmanRightForearmVtx[];
extern Vtx gHappyMaskSalesmanRightUpperArmVtx[];
extern Vtx gHappyMaskSalesmanTorsoVtx[];
extern Gfx gHappyMaskSalesmanTorsoDL[101];
extern Gfx gHappyMaskSalesmanHeadDL[168];
extern Gfx gHappyMaskSalesmanRightUpperArmDL[38];
extern Gfx gHappyMaskSalesmanRightForearmDL[38];
extern Gfx gHappyMaskSalesmanRightHandDL[55];
extern Gfx gHappyMaskSalesmanLeftUpperArmDL[38];
extern Gfx gHappyMaskSalesmanLeftForearmDL[38];
extern Gfx gHappyMaskSalesmanLeftHandDL[55];
//#define gHappyMaskSalesmanTLUT_TLUT_COUNT 256
extern u64 gHappyMaskSalesmanTLUT[];
//#define gHappyMaskSalesmanEyeMouthTLUT_TLUT_COUNT 256
extern u64 gHappyMaskSalesmanEyeMouthTLUT[];
#define gHappyMaskSalesmanSkinTex_WIDTH 8
#define gHappyMaskSalesmanSkinTex_HEIGHT 8
extern u64 gHappyMaskSalesmanSkinTex[TEX_LEN(u64, gHappyMaskSalesmanSkinTex_WIDTH, gHappyMaskSalesmanSkinTex_HEIGHT, 8)];
#define gHappyMaskSalesmanHairTex_WIDTH 16
#define gHappyMaskSalesmanHairTex_HEIGHT 16
extern u64 gHappyMaskSalesmanHairTex[TEX_LEN(u64, gHappyMaskSalesmanHairTex_WIDTH, gHappyMaskSalesmanHairTex_HEIGHT, 8)];
#define gHappyMaskSalesmanEarTex_WIDTH 8
#define gHappyMaskSalesmanEarTex_HEIGHT 8
extern u64 gHappyMaskSalesmanEarTex[TEX_LEN(u64, gHappyMaskSalesmanEarTex_WIDTH, gHappyMaskSalesmanEarTex_HEIGHT, 8)];
#define gHappyMaskSalesmanNostrilTex_WIDTH 8
#define gHappyMaskSalesmanNostrilTex_HEIGHT 8
extern u64 gHappyMaskSalesmanNostrilTex[TEX_LEN(u64, gHappyMaskSalesmanNostrilTex_WIDTH, gHappyMaskSalesmanNostrilTex_HEIGHT, 8)];
#define gHappyMaskSalesmanMouthTex_WIDTH 32
#define gHappyMaskSalesmanMouthTex_HEIGHT 16
extern u64 gHappyMaskSalesmanMouthTex[TEX_LEN(u64, gHappyMaskSalesmanMouthTex_WIDTH, gHappyMaskSalesmanMouthTex_HEIGHT, 8)];
#define gHappyMaskSalesmanEyeClosedTex_WIDTH 32
#define gHappyMaskSalesmanEyeClosedTex_HEIGHT 32
extern u64 gHappyMaskSalesmanEyeClosedTex[TEX_LEN(u64, gHappyMaskSalesmanEyeClosedTex_WIDTH, gHappyMaskSalesmanEyeClosedTex_HEIGHT, 8)];
#define gHappyMaskSalesmanEyeOpenTex_WIDTH 32
#define gHappyMaskSalesmanEyeOpenTex_HEIGHT 32
extern u64 gHappyMaskSalesmanEyeOpenTex[TEX_LEN(u64, gHappyMaskSalesmanEyeOpenTex_WIDTH, gHappyMaskSalesmanEyeOpenTex_HEIGHT, 8)];
#define gHappyMaskSalesmanFingersTex_WIDTH 16
#define gHappyMaskSalesmanFingersTex_HEIGHT 16
extern u64 gHappyMaskSalesmanFingersTex[TEX_LEN(u64, gHappyMaskSalesmanFingersTex_WIDTH, gHappyMaskSalesmanFingersTex_HEIGHT, 8)];
#define gHappyMaskSalesmanSleeveTex_WIDTH 16
#define gHappyMaskSalesmanSleeveTex_HEIGHT 32
extern u64 gHappyMaskSalesmanSleeveTex[TEX_LEN(u64, gHappyMaskSalesmanSleeveTex_WIDTH, gHappyMaskSalesmanSleeveTex_HEIGHT, 8)];
#define gHappyMaskSalesmanShirtTex_WIDTH 32
#define gHappyMaskSalesmanShirtTex_HEIGHT 32
extern u64 gHappyMaskSalesmanShirtTex[TEX_LEN(u64, gHappyMaskSalesmanShirtTex_WIDTH, gHappyMaskSalesmanShirtTex_HEIGHT, 8)];
#define gHappyMaskSalesmanGoldFabricTex_WIDTH 8
#define gHappyMaskSalesmanGoldFabricTex_HEIGHT 16
extern u64 gHappyMaskSalesmanGoldFabricTex[TEX_LEN(u64, gHappyMaskSalesmanGoldFabricTex_WIDTH, gHappyMaskSalesmanGoldFabricTex_HEIGHT, 8)];
#define gHappyMaskSalesmanGoldFabricCenterTex_WIDTH 8
#define gHappyMaskSalesmanGoldFabricCenterTex_HEIGHT 16
extern u64 gHappyMaskSalesmanGoldFabricCenterTex[TEX_LEN(u64, gHappyMaskSalesmanGoldFabricCenterTex_WIDTH, gHappyMaskSalesmanGoldFabricCenterTex_HEIGHT, 8)];
extern StandardLimb gHappyMaskSalesmanTorsoLimb;
extern StandardLimb gHappyMaskSalesmanLeftUpperArmLimb;
extern StandardLimb gHappyMaskSalesmanLeftForearmLimb;
extern StandardLimb gHappyMaskSalesmanLeftHandLimb;
extern StandardLimb gHappyMaskSalesmanRightUpperArmLimb;
extern StandardLimb gHappyMaskSalesmanRightForearmLimb;
extern StandardLimb gHappyMaskSalesmanRightHandLimb;
extern StandardLimb gHappyMaskSalesmanHeadLimb;
extern void* gHappyMaskSalesmanLimbs[];
typedef enum gHappyMaskSalesmanSkelLimb {
    /*  0 */ LIMB_OBJECT_OS_004658_NONE,
    /*  1 */ LIMB_OBJECT_OS_0045D8,
    /*  2 */ LIMB_OBJECT_OS_0045E4,
    /*  3 */ LIMB_OBJECT_OS_0045F0,
    /*  4 */ LIMB_OBJECT_OS_0045FC,
    /*  5 */ LIMB_OBJECT_OS_004608,
    /*  6 */ LIMB_OBJECT_OS_004614,
    /*  7 */ LIMB_OBJECT_OS_004620,
    /*  8 */ LIMB_OBJECT_OS_00462C,
    /*  9 */ LIMB_OBJECT_OS_004658_MAX
} gHappyMaskSalesmanSkelLimb;
extern FlexSkeletonHeader gHappyMaskSalesmanSkel;

#endif
