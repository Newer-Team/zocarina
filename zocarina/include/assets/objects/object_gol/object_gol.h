#ifndef OBJECT_GOL_H
#define OBJECT_GOL_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gObjectGolLandFromJumpFrameData[];
extern JointIndex gObjectGolLandFromJumpJointIndices[];
extern AnimationHeader gObjectGolLandFromJumpAnim;
extern s16 gObjectGolDeadTwitchingFrameData[];
extern JointIndex gObjectGolDeadTwitchingJointIndices[];
extern AnimationHeader gObjectGolDeadTwitchingAnim;
extern s16 gObjectGolJumpHeadbuttFrameData[];
extern JointIndex gObjectGolJumpHeadbuttJointIndices[];
extern AnimationHeader gObjectGolJumpHeadbuttAnim;
extern s16 gObjectGolDamagedFrameData[];
extern JointIndex gObjectGolDamagedJointIndices[];
extern AnimationHeader gObjectGolDamagedAnim;
extern s16 gObjectGolDeathFrameData[];
extern JointIndex gObjectGolDeathJointIndices[];
extern AnimationHeader gObjectGolDeathAnim;
extern s16 gObjectGolPrepareJumpFrameData[];
extern JointIndex gObjectGolPrepareJumpJointIndices[];
extern AnimationHeader gObjectGolPrepareJumpAnim;
extern s16 gObjectGolWalkFrameData[];
extern JointIndex gObjectGolWalkJointIndices[];
extern AnimationHeader gObjectGolWalkAnim;
extern s16 gObjectGolStandFrameData[];
extern JointIndex gObjectGolStandJointIndices[];
extern AnimationHeader gObjectGolStandAnim;
extern Vtx gObjectGolLeftFootVtx[];
extern Gfx gObjectGolLeftFootDL[24];
extern Vtx gObjectGolLeftThighVtx[];
extern Gfx gObjectGolLeftThighDL[31];
extern Vtx gObjectGolLeftShinVtx[];
extern Gfx gObjectGolLeftShinDL[18];
extern Vtx gObjectGolRightFootVtx[];
extern Gfx gObjectGolRightFootDL[24];
extern Vtx gObjectGolRightThighVtx[];
extern Gfx gObjectGolRightThighDL[31];
extern Vtx gObjectGolRightShinVtx[];
extern Gfx gObjectGolRightShinDL[18];
extern Vtx gObjectGolBodyVtx[];
extern Gfx gObjectGolBodyDL[60];
extern Vtx gObjectGolEggVtx[];
extern Gfx gObjectGolEggDL[46];
extern Vtx gObjectGolEyeIrisVtx[];
extern Gfx gObjectGolEyeIrisDL[17];
extern Vtx gObjectGolAntennaVtx[];
extern Gfx gObjectGolAntennaDL[35];
#define gObjectGolShellTex_WIDTH 16
#define gObjectGolShellTex_HEIGHT 16
extern u64 gObjectGolShellTex[TEX_LEN(u64, gObjectGolShellTex_WIDTH, gObjectGolShellTex_HEIGHT, 16)];
#define gObjectGolSkinTex_WIDTH 16
#define gObjectGolSkinTex_HEIGHT 16
extern u64 gObjectGolSkinTex[TEX_LEN(u64, gObjectGolSkinTex_WIDTH, gObjectGolSkinTex_HEIGHT, 16)];
#define gObjectGolEyeWhiteTex_WIDTH 16
#define gObjectGolEyeWhiteTex_HEIGHT 16
extern u64 gObjectGolEyeWhiteTex[TEX_LEN(u64, gObjectGolEyeWhiteTex_WIDTH, gObjectGolEyeWhiteTex_HEIGHT, 16)];
#define gObjectGolEyeIrisTex_WIDTH 16
#define gObjectGolEyeIrisTex_HEIGHT 16
extern u64 gObjectGolEyeIrisTex[TEX_LEN(u64, gObjectGolEyeIrisTex_WIDTH, gObjectGolEyeIrisTex_HEIGHT, 16)];
#define gObjectGolEggTex_WIDTH 16
#define gObjectGolEggTex_HEIGHT 16
extern u64 gObjectGolEggTex[TEX_LEN(u64, gObjectGolEggTex_WIDTH, gObjectGolEggTex_HEIGHT, 16)];
extern StandardLimb gObjectGolRoot1Limb;
extern StandardLimb gObjectGolRoot2Limb;
extern StandardLimb gObjectGolBodyLimb;
extern StandardLimb gObjectGolAntennaRoot1Limb;
extern StandardLimb gObjectGolAntennaRoot2Limb;
extern StandardLimb gObjectGolAntennaLimb;
extern StandardLimb gObjectGolEyeIrisRoot1Limb;
extern StandardLimb gObjectGolEyeIrisRoot2Limb;
extern StandardLimb gObjectGolEyeIrisLimb;
extern StandardLimb gObjectGolLeftLegRoot1Limb;
extern StandardLimb gObjectGolLeftLegRoot2Limb;
extern StandardLimb gObjectGolLeftShinRootLimb;
extern StandardLimb gObjectGolLeftFootRootLimb;
extern StandardLimb gObjectGolLeftFootLimb;
extern StandardLimb gObjectGolLeftShinLimb;
extern StandardLimb gObjectGolLeftThighLimb;
extern StandardLimb gObjectGolRightLegRoot1Limb;
extern StandardLimb gObjectGolRightLegRoot2Limb;
extern StandardLimb gObjectGolRightShinRootLimb;
extern StandardLimb gObjectGolRightFootRootLimb;
extern StandardLimb gObjectGolRightFootLimb;
extern StandardLimb gObjectGolRightShinLimb;
extern StandardLimb gObjectGolRightThighLimb;
extern void* gObjectGolLimbs[];
typedef enum gObjectGolSkelLimb {
    /*  0 */ LIMB_OBJECT_GOL_003B40_NONE,
    /*  1 */ LIMB_OBJECT_GOL_0039D0,
    /*  2 */ LIMB_OBJECT_GOL_0039DC,
    /*  3 */ LIMB_OBJECT_GOL_0039E8,
    /*  4 */ LIMB_OBJECT_GOL_0039F4,
    /*  5 */ LIMB_OBJECT_GOL_003A00,
    /*  6 */ LIMB_OBJECT_GOL_003A0C,
    /*  7 */ LIMB_OBJECT_GOL_003A18,
    /*  8 */ LIMB_OBJECT_GOL_003A24,
    /*  9 */ LIMB_OBJECT_GOL_003A30,
    /* 10 */ LIMB_OBJECT_GOL_003A3C,
    /* 11 */ LIMB_OBJECT_GOL_003A48,
    /* 12 */ LIMB_OBJECT_GOL_003A54,
    /* 13 */ LIMB_OBJECT_GOL_003A60,
    /* 14 */ LIMB_OBJECT_GOL_003A6C,
    /* 15 */ LIMB_OBJECT_GOL_003A78,
    /* 16 */ LIMB_OBJECT_GOL_003A84,
    /* 17 */ LIMB_OBJECT_GOL_003A90,
    /* 18 */ LIMB_OBJECT_GOL_003A9C,
    /* 19 */ LIMB_OBJECT_GOL_003AA8,
    /* 20 */ LIMB_OBJECT_GOL_003AB4,
    /* 21 */ LIMB_OBJECT_GOL_003AC0,
    /* 22 */ LIMB_OBJECT_GOL_003ACC,
    /* 23 */ LIMB_OBJECT_GOL_003AD8,
    /* 24 */ LIMB_OBJECT_GOL_003B40_MAX
} gObjectGolSkelLimb;
extern SkeletonHeader gObjectGolSkel;
extern s16 gObjectGolRunningFrameData[];
extern JointIndex gObjectGolRunningJointIndices[];
extern AnimationHeader gObjectGolRunningAnim;
extern s16 gObjectGolStopRunningFrameData[];
extern JointIndex gObjectGolStopRunningJointIndices[];
extern AnimationHeader gObjectGolStopRunningAnim;
extern s16 gObjectGolStartRunningFrameData[];
extern JointIndex gObjectGolStartRunningJointIndices[];
extern AnimationHeader gObjectGolStartRunningAnim;

#endif
