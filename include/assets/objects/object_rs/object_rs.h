#ifndef OBJECT_RS_H
#define OBJECT_RS_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gBombchuShopkeeperIdleFrameData[];
extern JointIndex gBombchuShopkeeperIdleJointIndices[];
extern AnimationHeader gBombchuShopkeeperIdleAnim;
extern Vtx gBombchuShopkeeperHeadVtx[];
extern Vtx gBombchuShopkeeperLeftHandVtx[];
extern Vtx gBombchuShopkeeperLeftForearmVtx[];
extern Vtx gBombchuShopkeeperLeftUpperArmVtx[];
extern Vtx gBombchuShopkeeperRightHandVtx[];
extern Vtx gBombchuShopkeeperRightForearmVtx[];
extern Vtx gBombchuShopkeeperRightUpperArmVtx[];
extern Vtx gBombchuShopkeeperTorsoVtx[];
extern Gfx gBombchuShopkeeperTorsoDL[75];
extern Gfx gBombchuShopkeeperHeadDL[128];
extern Gfx gBombchuShopkeeperRightUpperArmDL[39];
extern Gfx gBombchuShopkeeperRightForearmDL[38];
extern Gfx gBombchuShopkeeperRightHandDL[66];
extern Gfx gBombchuShopkeeperLeftUpperArmDL[39];
extern Gfx gBombchuShopkeeperLeftForearmDL[38];
extern Gfx gBombchuShopkeeperLeftHandDL[66];
//#define gBombchuShopkeeperTLUT_TLUT_COUNT 256
extern u64 gBombchuShopkeeperTLUT[];
#define gBombchuShopkeeperSkinTex_WIDTH 8
#define gBombchuShopkeeperSkinTex_HEIGHT 8
extern u64 gBombchuShopkeeperSkinTex[TEX_LEN(u64, gBombchuShopkeeperSkinTex_WIDTH, gBombchuShopkeeperSkinTex_HEIGHT, 8)];
#define gBombchuShopkeeperEarTex_WIDTH 8
#define gBombchuShopkeeperEarTex_HEIGHT 8
extern u64 gBombchuShopkeeperEarTex[TEX_LEN(u64, gBombchuShopkeeperEarTex_WIDTH, gBombchuShopkeeperEarTex_HEIGHT, 8)];
#define gBombchuShopkeeperTattooTex_WIDTH 32
#define gBombchuShopkeeperTattooTex_HEIGHT 64
extern u64 gBombchuShopkeeperTattooTex[TEX_LEN(u64, gBombchuShopkeeperTattooTex_WIDTH, gBombchuShopkeeperTattooTex_HEIGHT, 8)];
#define gBombchuShopkeeperEyeOpenTex_WIDTH 32
#define gBombchuShopkeeperEyeOpenTex_HEIGHT 32
extern u64 gBombchuShopkeeperEyeOpenTex[TEX_LEN(u64, gBombchuShopkeeperEyeOpenTex_WIDTH, gBombchuShopkeeperEyeOpenTex_HEIGHT, 8)];
#define gBombchuShopkeeperEyeHalfTex_WIDTH 32
#define gBombchuShopkeeperEyeHalfTex_HEIGHT 32
extern u64 gBombchuShopkeeperEyeHalfTex[TEX_LEN(u64, gBombchuShopkeeperEyeHalfTex_WIDTH, gBombchuShopkeeperEyeHalfTex_HEIGHT, 8)];
#define gBombchuShopkeeperEyeClosedTex_WIDTH 32
#define gBombchuShopkeeperEyeClosedTex_HEIGHT 32
extern u64 gBombchuShopkeeperEyeClosedTex[TEX_LEN(u64, gBombchuShopkeeperEyeClosedTex_WIDTH, gBombchuShopkeeperEyeClosedTex_HEIGHT, 8)];
#define gBombchuShopkeeperFingersTex_WIDTH 16
#define gBombchuShopkeeperFingersTex_HEIGHT 16
extern u64 gBombchuShopkeeperFingersTex[TEX_LEN(u64, gBombchuShopkeeperFingersTex_WIDTH, gBombchuShopkeeperFingersTex_HEIGHT, 8)];
#define gBombchuShopkeeperVestTex_WIDTH 8
#define gBombchuShopkeeperVestTex_HEIGHT 16
extern u64 gBombchuShopkeeperVestTex[TEX_LEN(u64, gBombchuShopkeeperVestTex_WIDTH, gBombchuShopkeeperVestTex_HEIGHT, 8)];
#define gBombchuShopkeeperTorsoTex_WIDTH 8
#define gBombchuShopkeeperTorsoTex_HEIGHT 32
extern u64 gBombchuShopkeeperTorsoTex[TEX_LEN(u64, gBombchuShopkeeperTorsoTex_WIDTH, gBombchuShopkeeperTorsoTex_HEIGHT, 8)];
extern StandardLimb gBombchuShopkeeperTorsoLimb;
extern StandardLimb gBombchuShopkeeperLeftUpperArmLimb;
extern StandardLimb gBombchuShopkeeperLeftForearmLimb;
extern StandardLimb gBombchuShopkeeperLeftHandLimb;
extern StandardLimb gBombchuShopkeeperRightUpperArmLimb;
extern StandardLimb gBombchuShopkeeperRightForearmLimb;
extern StandardLimb gBombchuShopkeeperRightHandLimb;
extern StandardLimb gBombchuShopkeeperHeadLimb;
extern void* gBombchuShopkeeperLimbs[];
typedef enum gBombchuShopkeeperSkelLimb {
    /*  0 */ LIMB_OBJECT_RS_004868_NONE,
    /*  1 */ LIMB_OBJECT_RS_0047E8,
    /*  2 */ LIMB_OBJECT_RS_0047F4,
    /*  3 */ LIMB_OBJECT_RS_004800,
    /*  4 */ LIMB_OBJECT_RS_00480C,
    /*  5 */ LIMB_OBJECT_RS_004818,
    /*  6 */ LIMB_OBJECT_RS_004824,
    /*  7 */ LIMB_OBJECT_RS_004830,
    /*  8 */ LIMB_OBJECT_RS_00483C,
    /*  9 */ LIMB_OBJECT_RS_004868_MAX
} gBombchuShopkeeperSkelLimb;
extern FlexSkeletonHeader gBombchuShopkeeperSkel;

#endif
