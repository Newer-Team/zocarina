#ifndef OBJECT_BG_H
#define OBJECT_BG_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gChuGirlWakeUpFrameData[];
extern JointIndex gChuGirlWakeUpJointIndices[];
extern AnimationHeader gChuGirlWakeUpAnim;
extern s16 gChuGirlNoddingOffFrameData[];
extern JointIndex gChuGirlNoddingOffJointIndices[];
extern AnimationHeader gChuGirlNoddingOffAnim;
extern Vtx gChuGirlHeadVtx[];
extern Vtx gChuGirlNeckVtx[];
extern Vtx gChuGirlLeftHandVtx[];
extern Vtx gChuGirlLeftForearmVtx[];
extern Vtx gChuGirlLeftUpperArmVtx[];
extern Vtx gChuGirlRightHandVtx[];
extern Vtx gChuGirlRightForearmVtx[];
extern Vtx gChuGirlRightUpperArmVtx[];
extern Vtx gChuGirlTorsoVtx[];
extern Vtx gChuGirlWaistVtx[];
extern Gfx gChuGirlHeadDL[157];
extern Gfx gChuGirlNeckDL[43];
extern Gfx gChuGirlLeftHandDL[42];
extern Gfx gChuGirlLeftForearmDL[34];
extern Gfx gChuGirlLeftUpperArmDL[61];
extern Gfx gChuGirlRightHandDL[42];
extern Gfx gChuGirlRightForearmDL[34];
extern Gfx gChuGirlRightUpperArmDL[61];
extern Gfx gChuGirlTorsoDL[81];
extern Gfx gChuGirlWaistDL[27];
#define gChuGirlEyeOpenTex_WIDTH 32
#define gChuGirlEyeOpenTex_HEIGHT 32
extern u64 gChuGirlEyeOpenTex[TEX_LEN(u64, gChuGirlEyeOpenTex_WIDTH, gChuGirlEyeOpenTex_HEIGHT, 16)];
#define gChuGirlEyeHalfTex_WIDTH 32
#define gChuGirlEyeHalfTex_HEIGHT 32
extern u64 gChuGirlEyeHalfTex[TEX_LEN(u64, gChuGirlEyeHalfTex_WIDTH, gChuGirlEyeHalfTex_HEIGHT, 16)];
#define gChuGirlEyeClosedTex_WIDTH 32
#define gChuGirlEyeClosedTex_HEIGHT 32
extern u64 gChuGirlEyeClosedTex[TEX_LEN(u64, gChuGirlEyeClosedTex_WIDTH, gChuGirlEyeClosedTex_HEIGHT, 16)];
#define gChuGirlMouthTex_WIDTH 32
#define gChuGirlMouthTex_HEIGHT 32
extern u64 gChuGirlMouthTex[TEX_LEN(u64, gChuGirlMouthTex_WIDTH, gChuGirlMouthTex_HEIGHT, 16)];
#define gChuGirlSkinGradientTex_WIDTH 16
#define gChuGirlSkinGradientTex_HEIGHT 16
extern u64 gChuGirlSkinGradientTex[TEX_LEN(u64, gChuGirlSkinGradientTex_WIDTH, gChuGirlSkinGradientTex_HEIGHT, 16)];
#define gChuGirlUmbEarLicusTex_WIDTH 16
#define gChuGirlUmbEarLicusTex_HEIGHT 16
extern u64 gChuGirlUmbEarLicusTex[TEX_LEN(u64, gChuGirlUmbEarLicusTex_WIDTH, gChuGirlUmbEarLicusTex_HEIGHT, 16)];
#define gChuGirlSweaterTex_WIDTH 32
#define gChuGirlSweaterTex_HEIGHT 32
extern u64 gChuGirlSweaterTex[TEX_LEN(u64, gChuGirlSweaterTex_WIDTH, gChuGirlSweaterTex_HEIGHT, 16)];
#define gChuGirlHairTex_WIDTH 8
#define gChuGirlHairTex_HEIGHT 16
extern u64 gChuGirlHairTex[TEX_LEN(u64, gChuGirlHairTex_WIDTH, gChuGirlHairTex_HEIGHT, 16)];
extern StandardLimb gChuGirlWaistLimb;
extern StandardLimb gChuGirlTorsoLimb;
extern StandardLimb gChuGirlNeckLimb;
extern StandardLimb gChuGirlHeadLimb;
extern StandardLimb gChuGirlLeftUpperArmLimb;
extern StandardLimb gChuGirlLeftForearmLimb;
extern StandardLimb gChuGirlLeftHandLimb;
extern StandardLimb gChuGirlRightUpperArmLimb;
extern StandardLimb gChuGirlRightForearmLimb;
extern StandardLimb gChuGirlRightHandLimb;
extern void* gChuGirlLimbs[];
typedef enum gChuGirlSkelLimb {
    /*  0 */ LIMB_OBJECT_BG_006EB0_NONE,
    /*  1 */ LIMB_OBJECT_BG_006E10,
    /*  2 */ LIMB_OBJECT_BG_006E1C,
    /*  3 */ LIMB_OBJECT_BG_006E28,
    /*  4 */ LIMB_OBJECT_BG_006E34,
    /*  5 */ LIMB_OBJECT_BG_006E40,
    /*  6 */ LIMB_OBJECT_BG_006E4C,
    /*  7 */ LIMB_OBJECT_BG_006E58,
    /*  8 */ LIMB_OBJECT_BG_006E64,
    /*  9 */ LIMB_OBJECT_BG_006E70,
    /* 10 */ LIMB_OBJECT_BG_006E7C,
    /* 11 */ LIMB_OBJECT_BG_006EB0_MAX
} gChuGirlSkelLimb;
extern FlexSkeletonHeader gChuGirlSkel;
extern s16 gChuGirlLeanOverCounterFrameData[];
extern JointIndex gChuGirlLeanOverCounterJointIndices[];
extern AnimationHeader gChuGirlLeanOverCounterAnim;

#endif
