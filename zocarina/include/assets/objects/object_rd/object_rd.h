#ifndef OBJECT_RD_H
#define OBJECT_RD_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

#define gGibdoWrappingTex_WIDTH 64
#define gGibdoWrappingTex_HEIGHT 32
extern u64 gGibdoWrappingTex[TEX_LEN(u64, gGibdoWrappingTex_WIDTH, gGibdoWrappingTex_HEIGHT, 16)];
#define gGibdoEyeTex_WIDTH 32
#define gGibdoEyeTex_HEIGHT 16
extern u64 gGibdoEyeTex[TEX_LEN(u64, gGibdoEyeTex_WIDTH, gGibdoEyeTex_HEIGHT, 16)];
extern Vtx gGibdoLeftHandVtx[];
extern Vtx gGibdoLeftForearmVtx[];
extern Vtx gGibdoLeftUpperArmVtx[];
extern Vtx gGibdoRightHandVtx[];
extern Vtx gGibdoRightForearmVtx[];
extern Vtx gGibdoRightUpperArmVtx[];
extern Vtx gGibdoHeadVtx[];
extern Vtx gGibdoTorsoVtx[];
extern Vtx gGibdoLeftFootVtx[];
extern Vtx gGibdoLeftShinVtx[];
extern Vtx gGibdoLeftThighVtx[];
extern Vtx gGibdoRightFootVtx[];
extern Vtx gGibdoRightShinVtx[];
extern Vtx gGibdoRightThighVtx[];
extern Vtx gGibdoPelvisVtx[];
extern Gfx gGibdoPelvisDL[28];
extern Gfx gGibdoHeadDL[46];
extern Gfx gGibdoTorsoDL[45];
extern Gfx gGibdoRightUpperArmDL[33];
extern Gfx gGibdoRightForearmDL[32];
extern Gfx gGibdoRightHandDL[32];
extern Gfx gGibdoLeftUpperArmDL[33];
extern Gfx gGibdoLeftForearmDL[32];
extern Gfx gGibdoLeftHandDL[32];
extern Gfx gGibdoRightThighDL[34];
extern Gfx gGibdoRightShinDL[31];
extern Gfx gGibdoRightFootDL[35];
extern Gfx gGibdoLeftThighDL[34];
extern Gfx gGibdoLeftShinDL[31];
extern Gfx gGibdoLeftFootDL[31];
extern StandardLimb gGibdoRootLimb;
extern StandardLimb gGibdoLeftLegRootLimb;
extern StandardLimb gGibdoLeftThighLimb;
extern StandardLimb gGibdoLeftShinLimb;
extern StandardLimb gGibdoLeftFootRootLimb;
extern StandardLimb gGibdoLeftFootLimb;
extern StandardLimb gGibdoRightLegRootLimb;
extern StandardLimb gGibdoRightThighLimb;
extern StandardLimb gGibdoRightShinLimb;
extern StandardLimb gGibdoRightFootRootLimb;
extern StandardLimb gGibdoRightFootLimb;
extern StandardLimb gGibdoUpperBodyRootLimb;
extern StandardLimb gGibdoTorsoRootLimb;
extern StandardLimb gGibdoTorsoLimb;
extern StandardLimb gGibdoLeftArmRootLimb;
extern StandardLimb gGibdoLeftUpperArmLimb;
extern StandardLimb gGibdoLeftForearmLimb;
extern StandardLimb gGibdoLeftHandLimb;
extern StandardLimb gGibdoRightArmRootLimb;
extern StandardLimb gGibdoRightUpperArmLimb;
extern StandardLimb gGibdoRightForearmLimb;
extern StandardLimb gGibdoRightHandLimb;
extern StandardLimb gGibdoHeadRootLimb;
extern StandardLimb gGibdoHeadLimb;
extern StandardLimb gGibdoPelvisLimb;
extern void* gGibdoLimbs[];
typedef enum gGibdoSkelLimb {
    /*  0 */ LIMB_OBJECT_RD_003DD8_NONE,
    /*  1 */ LIMB_OBJECT_RD_003C48,
    /*  2 */ LIMB_OBJECT_RD_003C54,
    /*  3 */ LIMB_OBJECT_RD_003C60,
    /*  4 */ LIMB_OBJECT_RD_003C6C,
    /*  5 */ LIMB_OBJECT_RD_003C78,
    /*  6 */ LIMB_OBJECT_RD_003C84,
    /*  7 */ LIMB_OBJECT_RD_003C90,
    /*  8 */ LIMB_OBJECT_RD_003C9C,
    /*  9 */ LIMB_OBJECT_RD_003CA8,
    /* 10 */ LIMB_OBJECT_RD_003CB4,
    /* 11 */ LIMB_OBJECT_RD_003CC0,
    /* 12 */ LIMB_OBJECT_RD_003CCC,
    /* 13 */ LIMB_OBJECT_RD_003CD8,
    /* 14 */ LIMB_OBJECT_RD_003CE4,
    /* 15 */ LIMB_OBJECT_RD_003CF0,
    /* 16 */ LIMB_OBJECT_RD_003CFC,
    /* 17 */ LIMB_OBJECT_RD_003D08,
    /* 18 */ LIMB_OBJECT_RD_003D14,
    /* 19 */ LIMB_OBJECT_RD_003D20,
    /* 20 */ LIMB_OBJECT_RD_003D2C,
    /* 21 */ LIMB_OBJECT_RD_003D38,
    /* 22 */ LIMB_OBJECT_RD_003D44,
    /* 23 */ LIMB_OBJECT_RD_003D50,
    /* 24 */ LIMB_OBJECT_RD_003D5C,
    /* 25 */ LIMB_OBJECT_RD_003D68,
    /* 26 */ LIMB_OBJECT_RD_003DD8_MAX
} gGibdoSkelLimb;
extern FlexSkeletonHeader gGibdoSkel;
extern s16 gGibdoRedeadGrabAttackFrameData[];
extern JointIndex gGibdoRedeadGrabAttackJointIndices[];
extern AnimationHeader gGibdoRedeadGrabAttackAnim;
extern s16 gGibdoRedeadGrabEndFrameData[];
extern JointIndex gGibdoRedeadGrabEndJointIndices[];
extern AnimationHeader gGibdoRedeadGrabEndAnim;
extern s16 gGibdoRedeadGrabStartFrameData[];
extern JointIndex gGibdoRedeadGrabStartJointIndices[];
extern AnimationHeader gGibdoRedeadGrabStartAnim;
extern s16 gGibdoRedeadLookBackFrameData[];
extern JointIndex gGibdoRedeadLookBackJointIndices[];
extern AnimationHeader gGibdoRedeadLookBackAnim;
extern s16 gGibdoRedeadWipingTearsFrameData[];
extern JointIndex gGibdoRedeadWipingTearsJointIndices[];
extern AnimationHeader gGibdoRedeadWipingTearsAnim;
extern s16 gGibdoRedeadSobbingFrameData[];
extern JointIndex gGibdoRedeadSobbingJointIndices[];
extern AnimationHeader gGibdoRedeadSobbingAnim;
extern s16 gGibdoRedeadDeathFrameData[];
extern JointIndex gGibdoRedeadDeathJointIndices[];
extern AnimationHeader gGibdoRedeadDeathAnim;
extern s16 gGibdoRedeadDamageFrameData[];
extern JointIndex gGibdoRedeadDamageJointIndices[];
extern AnimationHeader gGibdoRedeadDamageAnim;
extern s16 gGibdoRedeadStandUpFrameData[];
extern JointIndex gGibdoRedeadStandUpJointIndices[];
extern AnimationHeader gGibdoRedeadStandUpAnim;
extern s16 gGibdoRedeadIdleFrameData[];
extern JointIndex gGibdoRedeadIdleJointIndices[];
extern AnimationHeader gGibdoRedeadIdleAnim;
#define gRedeadBackTex_WIDTH 32
#define gRedeadBackTex_HEIGHT 64
extern u64 gRedeadBackTex[TEX_LEN(u64, gRedeadBackTex_WIDTH, gRedeadBackTex_HEIGHT, 16)];
#define gRedeadTorsoTex_WIDTH 32
#define gRedeadTorsoTex_HEIGHT 64
extern u64 gRedeadTorsoTex[TEX_LEN(u64, gRedeadTorsoTex_WIDTH, gRedeadTorsoTex_HEIGHT, 16)];
#define gRedeadFingersAndToesTex_WIDTH 16
#define gRedeadFingersAndToesTex_HEIGHT 32
extern u64 gRedeadFingersAndToesTex[TEX_LEN(u64, gRedeadFingersAndToesTex_WIDTH, gRedeadFingersAndToesTex_HEIGHT, 16)];
#define gRedeadMuscleTex_WIDTH 16
#define gRedeadMuscleTex_HEIGHT 32
extern u64 gRedeadMuscleTex[TEX_LEN(u64, gRedeadMuscleTex_WIDTH, gRedeadMuscleTex_HEIGHT, 16)];
#define gRedeadMaskTex_WIDTH 32
#define gRedeadMaskTex_HEIGHT 32
extern u64 gRedeadMaskTex[TEX_LEN(u64, gRedeadMaskTex_WIDTH, gRedeadMaskTex_HEIGHT, 8)];
#define gRedeadFaceTex_WIDTH 32
#define gRedeadFaceTex_HEIGHT 64
extern u64 gRedeadFaceTex[TEX_LEN(u64, gRedeadFaceTex_WIDTH, gRedeadFaceTex_HEIGHT, 16)];
#define gRedeadHipsTex_WIDTH 32
#define gRedeadHipsTex_HEIGHT 16
extern u64 gRedeadHipsTex[TEX_LEN(u64, gRedeadHipsTex_WIDTH, gRedeadHipsTex_HEIGHT, 16)];
extern Vtx gRedeadTorsoVtx[];
extern Vtx gRedeadLeftHandVtx[];
extern Vtx gRedeadLeftForearmVtx[];
extern Vtx gRedeadLeftUpperArmVtx[];
extern Vtx gRedeadRightHandVtx[];
extern Vtx gRedeadRightForearmVtx[];
extern Vtx gRedeadRightUpperArmVtx[];
extern Vtx gRedeadHeadVtx[];
extern Vtx gRedeadLeftFootVtx[];
extern Vtx gRedeadLeftShinVtx[];
extern Vtx gRedeadLeftThighVtx[];
extern Vtx gRedeadRightFootVtx[];
extern Vtx gRedeadRightShinVtx[];
extern Vtx gRedeadRightThighVtx[];
extern Vtx gRedeadPelvisVtx[];
extern Gfx gRedeadPelvisDL[37];
extern Gfx gRedeadTorsoDL[95];
extern Gfx gRedeadLeftUpperArmDL[28];
extern Gfx gRedeadLeftForearmDL[24];
extern Gfx gRedeadLeftHandDL[26];
extern Gfx gRedeadRightUpperArmDL[27];
extern Gfx gRedeadRightForearmDL[26];
extern Gfx gRedeadRightHandDL[26];
extern Gfx gRedeadHeadDL[40];
extern Gfx gRedeadLeftThighDL[28];
extern Gfx gRedeadLeftShinDL[25];
extern Gfx gRedeadLeftFootDL[25];
extern Gfx gRedeadRightThighDL[28];
extern Gfx gRedeadRightShinDL[25];
extern Gfx gRedeadRightFootDL[29];
extern StandardLimb gRedeadRootLimb;
extern StandardLimb gRedeadLeftLegRootLimb;
extern StandardLimb gRedeadLeftThighLimb;
extern StandardLimb gRedeadLeftShinLimb;
extern StandardLimb gRedeadLeftFootRootLimb;
extern StandardLimb gRedeadLeftFootLimb;
extern StandardLimb gRedeadRightLegRootLimb;
extern StandardLimb gRedeadRightThighLimb;
extern StandardLimb gRedeadRightShinLimb;
extern StandardLimb gRedeadRightFootRootLimb;
extern StandardLimb gRedeadRightFootLimb;
extern StandardLimb gRedeadUpperBodyRootLimb;
extern StandardLimb gRedeadTorsoRootLimb;
extern StandardLimb gRedeadTorsoLimb;
extern StandardLimb gRedeadLeftArmRootLimb;
extern StandardLimb gRedeadLeftUpperArmLimb;
extern StandardLimb gRedeadLeftForearmLimb;
extern StandardLimb gRedeadLeftHandLimb;
extern StandardLimb gRedeadRightArmRootLimb;
extern StandardLimb gRedeadRightUpperArmLimb;
extern StandardLimb gRedeadRightForearmLimb;
extern StandardLimb gRedeadRightHandLimb;
extern StandardLimb gRedeadHeadRootLimb;
extern StandardLimb gRedeadHeadLimb;
extern StandardLimb gRedeadPelvisLimb;
extern void* gRedeadLimbs[];
typedef enum gRedeadSkelLimb {
    /*  0 */ LIMB_OBJECT_RD_00E778_NONE,
    /*  1 */ LIMB_OBJECT_RD_00E5E8,
    /*  2 */ LIMB_OBJECT_RD_00E5F4,
    /*  3 */ LIMB_OBJECT_RD_00E600,
    /*  4 */ LIMB_OBJECT_RD_00E60C,
    /*  5 */ LIMB_OBJECT_RD_00E618,
    /*  6 */ LIMB_OBJECT_RD_00E624,
    /*  7 */ LIMB_OBJECT_RD_00E630,
    /*  8 */ LIMB_OBJECT_RD_00E63C,
    /*  9 */ LIMB_OBJECT_RD_00E648,
    /* 10 */ LIMB_OBJECT_RD_00E654,
    /* 11 */ LIMB_OBJECT_RD_00E660,
    /* 12 */ LIMB_OBJECT_RD_00E66C,
    /* 13 */ LIMB_OBJECT_RD_00E678,
    /* 14 */ LIMB_OBJECT_RD_00E684,
    /* 15 */ LIMB_OBJECT_RD_00E690,
    /* 16 */ LIMB_OBJECT_RD_00E69C,
    /* 17 */ LIMB_OBJECT_RD_00E6A8,
    /* 18 */ LIMB_OBJECT_RD_00E6B4,
    /* 19 */ LIMB_OBJECT_RD_00E6C0,
    /* 20 */ LIMB_OBJECT_RD_00E6CC,
    /* 21 */ LIMB_OBJECT_RD_00E6D8,
    /* 22 */ LIMB_OBJECT_RD_00E6E4,
    /* 23 */ LIMB_OBJECT_RD_00E6F0,
    /* 24 */ LIMB_OBJECT_RD_00E6FC,
    /* 25 */ LIMB_OBJECT_RD_00E708,
    /* 26 */ LIMB_OBJECT_RD_00E778_MAX
} gRedeadSkelLimb;
extern FlexSkeletonHeader gRedeadSkel;
extern s16 gGibdoRedeadWalkFrameData[];
extern JointIndex gGibdoRedeadWalkJointIndices[];
extern AnimationHeader gGibdoRedeadWalkAnim;

#endif
