#ifndef OBJECT_CROW_H
#define OBJECT_CROW_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gGuayFlyFrameData[];
extern JointIndex gGuayFlyJointIndices[];
extern AnimationHeader gGuayFlyAnim;
extern Vtx object_crow_Vtx_000100[];
extern Vtx object_crow_Vtx_000180[];
extern Vtx object_crow_Vtx_0001D0[];
extern Vtx object_crow_Vtx_000250[];
extern Vtx object_crow_Vtx_0002A0[];
extern Vtx object_crow_Vtx_000430[];
extern Vtx object_crow_Vtx_000460[];
extern Gfx object_crow_000490_DL[42];
extern Gfx object_crow_0005E0_DL[26];
extern Gfx object_crow_0006B0_DL[24];
extern Gfx object_crow_000770_DL[26];
extern Gfx object_crow_000840_DL[24];
extern Gfx object_crow_000900_DL[20];
extern Gfx object_crow_0009A0_DL[20];
#define gGuayBodyTex_WIDTH 16
#define gGuayBodyTex_HEIGHT 16
extern u64 gGuayBodyTex[TEX_LEN(u64, gGuayBodyTex_WIDTH, gGuayBodyTex_HEIGHT, 16)];
#define gGuayEyeTex_WIDTH 16
#define gGuayEyeTex_HEIGHT 16
extern u64 gGuayEyeTex[TEX_LEN(u64, gGuayEyeTex_WIDTH, gGuayEyeTex_HEIGHT, 16)];
#define gGuayTailTex_WIDTH 16
#define gGuayTailTex_HEIGHT 16
extern u64 gGuayTailTex[TEX_LEN(u64, gGuayTailTex_WIDTH, gGuayTailTex_HEIGHT, 16)];
extern StandardLimb object_crow_001040_Limb;
extern StandardLimb object_crow_00104C_Limb;
extern StandardLimb object_crow_001058_Limb;
extern StandardLimb object_crow_001064_Limb;
extern StandardLimb object_crow_001070_Limb;
extern StandardLimb object_crow_00107C_Limb;
extern StandardLimb object_crow_001088_Limb;
extern StandardLimb object_crow_001094_Limb;
extern void* gGuayLimbs[];
typedef enum gGuaySkelLimb {
    /*  0 */ LIMB_OBJECT_CROW_0010C0_NONE,
    /*  1 */ LIMB_OBJECT_CROW_001040,
    /*  2 */ LIMB_OBJECT_CROW_00104C,
    /*  3 */ LIMB_OBJECT_CROW_001058,
    /*  4 */ LIMB_OBJECT_CROW_001064,
    /*  5 */ LIMB_OBJECT_CROW_001070,
    /*  6 */ LIMB_OBJECT_CROW_00107C,
    /*  7 */ LIMB_OBJECT_CROW_001088,
    /*  8 */ LIMB_OBJECT_CROW_001094,
    /*  9 */ LIMB_OBJECT_CROW_0010C0_MAX
} gGuaySkelLimb;
extern FlexSkeletonHeader gGuaySkel;

#endif
