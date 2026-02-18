#ifndef OBJECT_SKB_H
#define OBJECT_SKB_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gStalchildAttackingFrameData[];
extern JointIndex gStalchildAttackingJointIndices[];
extern AnimationHeader gStalchildAttackingAnim;
extern u8 object_skb_zeroes_Blob_470[];
extern s16 gStalchildDyingFrameData[];
extern JointIndex gStalchildDyingJointIndices[];
extern AnimationHeader gStalchildDyingAnim;
extern u8 object_skb_zeroes_Blob_9EC[];
extern s16 gStalchildDamagedFrameData[];
extern JointIndex gStalchildDamagedJointIndices[];
extern AnimationHeader gStalchildDamagedAnim;
extern u8 object_skb_zeroes_Blob_DA8[];
extern s16 gStalchildUncurlingFrameData[];
extern JointIndex gStalchildUncurlingJointIndices[];
extern AnimationHeader gStalchildUncurlingAnim;
extern u8 object_skb_zeroes_Blob_1864[];
#define gStalchildWaistTex_WIDTH 16
#define gStalchildWaistTex_HEIGHT 16
extern u64 gStalchildWaistTex[TEX_LEN(u64, gStalchildWaistTex_WIDTH, gStalchildWaistTex_HEIGHT, 16)];
#define gStalchildRibCageTex_WIDTH 8
#define gStalchildRibCageTex_HEIGHT 16
extern u64 gStalchildRibCageTex[TEX_LEN(u64, gStalchildRibCageTex_WIDTH, gStalchildRibCageTex_HEIGHT, 16)];
#define gStalchildHeadTex_WIDTH 8
#define gStalchildHeadTex_HEIGHT 8
extern u64 gStalchildHeadTex[TEX_LEN(u64, gStalchildHeadTex_WIDTH, gStalchildHeadTex_HEIGHT, 16)];
#define gStalchildNostrilTex_WIDTH 8
#define gStalchildNostrilTex_HEIGHT 8
extern u64 gStalchildNostrilTex[TEX_LEN(u64, gStalchildNostrilTex_WIDTH, gStalchildNostrilTex_HEIGHT, 16)];
#define gStalchildBoneTex_WIDTH 8
#define gStalchildBoneTex_HEIGHT 8
extern u64 gStalchildBoneTex[TEX_LEN(u64, gStalchildBoneTex_WIDTH, gStalchildBoneTex_HEIGHT, 16)];
#define gStalchildHandAndFeetTex_WIDTH 8
#define gStalchildHandAndFeetTex_HEIGHT 16
extern u64 gStalchildHandAndFeetTex[TEX_LEN(u64, gStalchildHandAndFeetTex_WIDTH, gStalchildHandAndFeetTex_HEIGHT, 16)];
#define gStalchildTeethTex_WIDTH 16
#define gStalchildTeethTex_HEIGHT 8
extern u64 gStalchildTeethTex[TEX_LEN(u64, gStalchildTeethTex_WIDTH, gStalchildTeethTex_HEIGHT, 16)];
#define gStalchildEyeSocketTex_WIDTH 16
#define gStalchildEyeSocketTex_HEIGHT 16
extern u64 gStalchildEyeSocketTex[TEX_LEN(u64, gStalchildEyeSocketTex_WIDTH, gStalchildEyeSocketTex_HEIGHT, 16)];
#define gStalchildEyeTex_WIDTH 8
#define gStalchildEyeTex_HEIGHT 8
extern u64 gStalchildEyeTex[TEX_LEN(u64, gStalchildEyeTex_WIDTH, gStalchildEyeTex_HEIGHT, 16)];
extern Vtx gStalchildHeadVtx[];
extern Vtx gStalchildJawVtx[];
extern Vtx gStalchildRibCageVtx[];
extern Vtx gStalchildSpineVtx[];
extern Vtx gStalchildWaistVtx[];
extern Vtx gStalchildLeftHumerusVtx[];
extern Vtx gStalchildLeftForearmVtx[];
extern Vtx gStalchildLeftHandVtx[];
extern Vtx gStalchildRightHumerusVtx[];
extern Vtx gStalchildRightForearmVtx[];
extern Vtx gStalchildRightHandVtx[];
extern Vtx gStalchildLeftFemurVtx[];
extern Vtx gStalchildLeftShinVtx[];
extern Vtx gStalchildLeftFootVtx[];
extern Vtx gStalchildRightFemurVtx[];
extern Vtx gStalchildRightShinVtx[];
extern Vtx gStalchildRightFootVtx[];
extern Gfx gStalchildHeadDL[109];
extern Gfx gStalchildJawDL[21];
extern Gfx gStalchildRibCageDL[25];
extern Gfx gStalchildSpineDL[19];
extern Gfx gStalchildWaistDL[33];
extern Gfx gStalchildLeftHumerusDL[24];
extern Gfx gStalchildLeftForearmDL[21];
extern Gfx gStalchildLeftHandDL[25];
extern Gfx gStalchildRightHumerusDL[24];
extern Gfx gStalchildRightForearmDL[21];
extern Gfx gStalchildRightHandDL[25];
extern Gfx gStalchildLeftFemurDL[19];
extern Gfx gStalchildLeftShinDL[21];
extern Gfx gStalchildLeftFootDL[20];
extern Gfx gStalchildRightFemurDL[19];
extern Gfx gStalchildRightShinDL[21];
extern Gfx gStalchildRightFootDL[20];
extern StandardLimb gStalchildRootLimb;
extern StandardLimb gStalchildWaistLimb;
extern StandardLimb gStalchildRoot2Limb;
extern StandardLimb gStalchildRightFemurLimb;
extern StandardLimb gStalchildRightShinLimb;
extern StandardLimb gStalchildRightFootLimb;
extern StandardLimb gStalchildLeftFemurLimb;
extern StandardLimb gStalchildLeftShinLimb;
extern StandardLimb gStalchildLeftFootLimb;
extern StandardLimb gStalchildRibCageLimb;
extern StandardLimb gStalchildHeadLimb;
extern StandardLimb gStalchildJawLimb;
extern StandardLimb gStalchildRightHumerusLimb;
extern StandardLimb gStalchildRightForearmLimb;
extern StandardLimb gStalchildRightHandLimb;
extern StandardLimb gStalchildLeftHumerusLimb;
extern StandardLimb gStalchildLeftForearmLimb;
extern StandardLimb gStalchildLeftHandLimb;
extern StandardLimb gStalchildSpineLimb;
extern void* gStalchildLimbs[];
typedef enum gStalchildSkelLimb {
    /*  0 */ LIMB_OBJECT_SKB_0041F8_NONE,
    /*  1 */ LIMB_OBJECT_SKB_0040C8,
    /*  2 */ LIMB_OBJECT_SKB_0040D4,
    /*  3 */ LIMB_OBJECT_SKB_0040E0,
    /*  4 */ LIMB_OBJECT_SKB_0040EC,
    /*  5 */ LIMB_OBJECT_SKB_0040F8,
    /*  6 */ LIMB_OBJECT_SKB_004104,
    /*  7 */ LIMB_OBJECT_SKB_004110,
    /*  8 */ LIMB_OBJECT_SKB_00411C,
    /*  9 */ LIMB_OBJECT_SKB_004128,
    /* 10 */ LIMB_OBJECT_SKB_004134,
    /* 11 */ LIMB_OBJECT_SKB_004140,
    /* 12 */ LIMB_OBJECT_SKB_00414C,
    /* 13 */ LIMB_OBJECT_SKB_004158,
    /* 14 */ LIMB_OBJECT_SKB_004164,
    /* 15 */ LIMB_OBJECT_SKB_004170,
    /* 16 */ LIMB_OBJECT_SKB_00417C,
    /* 17 */ LIMB_OBJECT_SKB_004188,
    /* 18 */ LIMB_OBJECT_SKB_004194,
    /* 19 */ LIMB_OBJECT_SKB_0041A0,
    /* 20 */ LIMB_OBJECT_SKB_0041F8_MAX
} gStalchildSkelLimb;
extern SkeletonHeader gStalchildSkel;
extern s16 gStalchildWalkingFrameData[];
extern JointIndex gStalchildWalkingJointIndices[];
extern AnimationHeader gStalchildWalkingAnim;
extern u8 object_skb_zeroes_Blob_47F0[];

#endif
