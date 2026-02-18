#ifndef OBJECT_GOMA_H
#define OBJECT_GOMA_H

#include "animation.h"
#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern s16 gGohmaStandFrameData[];
extern JointIndex gGohmaStandJointIndices[];
extern AnimationHeader gGohmaStandAnim;
extern s16 gGohmaHangFrameData[];
extern JointIndex gGohmaHangJointIndices[];
extern AnimationHeader gGohmaHangAnim;
extern s16 gGohmaWalkFrameData[];
extern JointIndex gGohmaWalkJointIndices[];
extern AnimationHeader gGohmaWalkAnim;
extern s16 gGohmaPrepareEggsFrameData[];
extern JointIndex gGohmaPrepareEggsJointIndices[];
extern AnimationHeader gGohmaPrepareEggsAnim;
extern s16 gGohmaViolentAttackFrameData[];
extern JointIndex gGohmaViolentAttackJointIndices[];
extern AnimationHeader gGohmaViolentAttackAnim;
extern s16 gGohmaAttackFrameData[];
extern JointIndex gGohmaAttackJointIndices[];
extern AnimationHeader gGohmaAttackAnim;
extern s16 gGohmaRestAfterAttackFrameData[];
extern JointIndex gGohmaRestAfterAttackJointIndices[];
extern AnimationHeader gGohmaRestAfterAttackAnim;
extern s16 gGohmaRecoverAfterAttackFrameData[];
extern JointIndex gGohmaRecoverAfterAttackJointIndices[];
extern AnimationHeader gGohmaRecoverAfterAttackAnim;
extern s16 gGohmaCrashFrameData[];
extern JointIndex gGohmaCrashJointIndices[];
extern AnimationHeader gGohmaCrashAnim;
extern s16 gGohmaLandFrameData[];
extern JointIndex gGohmaLandJointIndices[];
extern AnimationHeader gGohmaLandAnim;
extern s16 gGohmaClimbFrameData[];
extern JointIndex gGohmaClimbJointIndices[];
extern AnimationHeader gGohmaClimbAnim;
extern s16 gGohmaDamageFrameData[];
extern JointIndex gGohmaDamageJointIndices[];
extern AnimationHeader gGohmaDamageAnim;
extern s16 gGohmaDeathFrameData[];
extern JointIndex gGohmaDeathJointIndices[];
extern AnimationHeader gGohmaDeathAnim;
extern s16 gGohmaPrepareAttackFrameData[];
extern JointIndex gGohmaPrepareAttackJointIndices[];
extern AnimationHeader gGohmaPrepareAttackAnim;
extern s16 gGohmaStunnedFrameData[];
extern JointIndex gGohmaStunnedJointIndices[];
extern AnimationHeader gGohmaStunnedAnim;
extern s16 gGohmaInitialLandingFrameData[];
extern JointIndex gGohmaInitialLandingJointIndices[];
extern AnimationHeader gGohmaInitialLandingAnim;
extern s16 gGohmaEyeRollFrameData[];
extern JointIndex gGohmaEyeRollJointIndices[];
extern AnimationHeader gGohmaEyeRollAnim;
extern s16 gGohmaLayEggsFrameData[];
extern JointIndex gGohmaLayEggsJointIndices[];
extern AnimationHeader gGohmaLayEggsAnim;
extern s16 gGohmaIdleCrouchedFrameData[];
extern JointIndex gGohmaIdleCrouchedJointIndices[];
extern AnimationHeader gGohmaIdleCrouchedAnim;
extern Vtx gGohmaLeftAntennaBodyVtx[];
extern Gfx gGohmaLeftAntennaBodyDL[23];
extern Vtx gGohmaLeftAntennaShellVtx[];
extern Gfx gGohmaLeftAntennaShellDL[51];
extern Vtx gGohmaRightAntennaBodyVtx[];
extern Gfx gGohmaRightAntennaBodyDL[23];
extern Vtx gGohmaRightAntennaShellVtx[];
extern Gfx gGohmaRightAntennaShellDL[51];
extern Vtx gGohmaRightMandibles1Vtx[];
extern Gfx gGohmaRightMandibles1DL[22];
extern Vtx gGohmaRightMandibles2Vtx[];
extern Gfx gGohmaRightMandibles2DL[34];
extern Vtx gGohmaLeftMandibles1Vtx[];
extern Gfx gGohmaLeftMandibles1DL[22];
extern Vtx gGohmaLeftMandibles2Vtx[];
extern Gfx gGohmaLeftMandibles2DL[34];
extern Vtx gGohmaBodyVtx[];
extern Gfx gGohmaBodyDL[29];
extern Vtx gGohmaBodyShellVtx[];
extern Gfx gGohmaBodyShellDL[49];
extern Vtx gGohmaBodyShellBackVtx[];
extern Gfx gGohmaBodyShellBackDL[22];
extern Vtx gGohmaLeftThighShellVtx[];
extern Gfx gGohmaLeftThighShellDL[22];
extern Vtx gGohmaRightThighShellVtx[];
extern Gfx gGohmaRightThighShellDL[22];
extern Vtx gGohmaEyeVtx[];
extern Gfx gGohmaEyeDL[38];
extern Vtx gGohmaLeftFeetVtx[];
extern Gfx gGohmaLeftFeetDL[43];
extern Vtx gGohmaRightFeetVtx[];
extern Gfx gGohmaRightFeetDL[40];
extern Vtx gGohmaIrisVtx[];
extern Gfx gGohmaIrisDL[22];
extern Vtx gGohmaLeftKneeVtx[];
extern Gfx gGohmaLeftKneeDL[42];
extern Vtx gGohmaRightKneeVtx[];
extern Gfx gGohmaRightKneeDL[42];
extern Vtx gGohmaLeftFeetBackVtx[];
extern Gfx gGohmaLeftFeetBackDL[34];
extern Vtx gGohmaRightFeetBackVtx[];
extern Gfx gGohmaRightFeetBackDL[34];
extern Vtx gGohmaLeftThighVtx[];
extern Gfx gGohmaLeftThighDL[41];
extern Vtx gGohmaRightThighVtx[];
extern Gfx gGohmaRightThighDL[41];
extern Vtx gGohmaEyeLidTopVtx[];
extern Gfx gGohmaEyeLidTopDL[35];
extern Vtx gGohmaEyeLidBottomVtx[];
extern Gfx gGohmaEyeLidBottomDL[33];
extern Vtx gGohmaMandiblesBodyVtx[];
extern Gfx gGohmaMandiblesBodyDL[36];
extern Vtx gGohmaLeftShinVtx[];
extern Gfx gGohmaLeftShinDL[39];
extern Vtx gGohmaRightShinVtx[];
extern Gfx gGohmaRightShinDL[39];
extern Vtx gGohmaTail1Vtx[];
extern Gfx gGohmaTail1DL[25];
extern Vtx gGohmaTail2Vtx[];
extern Gfx gGohmaTail2DL[25];
extern Vtx gGohmaTail3Vtx[];
extern Gfx gGohmaTail3DL[29];
extern Vtx gGohmaTail4Vtx[];
extern Gfx gGohmaTail4DL[29];
extern Vtx gGohmaLeftAntennaClawVtx[];
extern Gfx gGohmaLeftAntennaClawDL[35];
extern Vtx gGohmaRightAntennaClawVtx[];
extern Gfx gGohmaRightAntennaClawDL[35];
#define gGohmaBodyTex_WIDTH 16
#define gGohmaBodyTex_HEIGHT 16
extern u64 gGohmaBodyTex[TEX_LEN(u64, gGohmaBodyTex_WIDTH, gGohmaBodyTex_HEIGHT, 16)];
#define gGohmaShellUndersideTex_WIDTH 16
#define gGohmaShellUndersideTex_HEIGHT 16
extern u64 gGohmaShellUndersideTex[TEX_LEN(u64, gGohmaShellUndersideTex_WIDTH, gGohmaShellUndersideTex_HEIGHT, 16)];
#define gGohmaDarkShellTex_WIDTH 16
#define gGohmaDarkShellTex_HEIGHT 16
extern u64 gGohmaDarkShellTex[TEX_LEN(u64, gGohmaDarkShellTex_WIDTH, gGohmaDarkShellTex_HEIGHT, 16)];
#define gGohmaShellTex_WIDTH 32
#define gGohmaShellTex_HEIGHT 32
extern u64 gGohmaShellTex[TEX_LEN(u64, gGohmaShellTex_WIDTH, gGohmaShellTex_HEIGHT, 16)];
#define gGohmaEyeTex_WIDTH 16
#define gGohmaEyeTex_HEIGHT 16
extern u64 gGohmaEyeTex[TEX_LEN(u64, gGohmaEyeTex_WIDTH, gGohmaEyeTex_HEIGHT, 16)];
#define gGohmaIrisTex_WIDTH 32
#define gGohmaIrisTex_HEIGHT 32
extern u64 gGohmaIrisTex[TEX_LEN(u64, gGohmaIrisTex_WIDTH, gGohmaIrisTex_HEIGHT, 16)];
#define gGohmaTitleCardTex_WIDTH 128
#define gGohmaTitleCardTex_HEIGHT 80
extern u64 gGohmaTitleCardTex[TEX_LEN(u64, gGohmaTitleCardTex_WIDTH, gGohmaTitleCardTex_HEIGHT, 8)];
extern StandardLimb gGohmaRoot1Limb;
extern StandardLimb gGohmaRoot2Limb;
extern StandardLimb gGohmaBodyLimb;
extern StandardLimb gGohmaBodyShellLimb;
extern StandardLimb gGohmaEyeLimb;
extern StandardLimb gGohmaTailRootLimb;
extern StandardLimb gGohmaTail1RootLimb;
extern StandardLimb gGohmaTail2RootLimb;
extern StandardLimb gGohmaTail3RootLimb;
extern StandardLimb gGohmaTail4RootLimb;
extern StandardLimb gGohmaTail4Limb;
extern StandardLimb gGohmaTail3Limb;
extern StandardLimb gGohmaTail2Limb;
extern StandardLimb gGohmaTail1Limb;
extern StandardLimb gGohmaRightLegRootLimb;
extern StandardLimb gGohmaRightThighRootLimb;
extern StandardLimb gGohmaRightLegLowerRootLimb;
extern StandardLimb gGohmaRightFeetRootLimb;
extern StandardLimb gGohmaRightFeetBackRoot1Limb;
extern StandardLimb gGohmaRightFeetBackRoot2Limb;
extern StandardLimb gGohmaRightFeetBackLimb;
extern StandardLimb gGohmaRightFeetLimb;
extern StandardLimb gGohmaRightShinLimb;
extern StandardLimb gGohmaRightKneeRoot1Limb;
extern StandardLimb gGohmaRightKneeRoot2Limb;
extern StandardLimb gGohmaRightKneeLimb;
extern StandardLimb gGohmaRightThighShellRoot1Limb;
extern StandardLimb gGohmaRightThighShellRoot2Limb;
extern StandardLimb gGohmaRightThighShellLimb;
extern StandardLimb gGohmaRightThighLimb;
extern StandardLimb gGohmaEyeLidBottomRoot1Limb;
extern StandardLimb gGohmaEyeLidBottomRoot2Limb;
extern StandardLimb gGohmaEyeLidBottomLimb;
extern StandardLimb gGohmaEyeLidTopRoot1Limb;
extern StandardLimb gGohmaEyeLidTopRoot2Limb;
extern StandardLimb gGohmaEyeLidTopLimb;
extern StandardLimb gGohmaIrisRoot1Limb;
extern StandardLimb gGohmaIrisRoot2Limb;
extern StandardLimb gGohmaIrisLimb;
extern StandardLimb gGohmaMandiblesRoot1Limb;
extern StandardLimb gGohmaMandiblesRoot2Limb;
extern StandardLimb gGohmaMandiblesBodyLimb;
extern StandardLimb gGohmaLeftMandiblesRootLimb;
extern StandardLimb gGohmaLeftMandibles1RootLimb;
extern StandardLimb gGohmaLeftMandibles2RootLimb;
extern StandardLimb gGohmaLeftMandibles2Limb;
extern StandardLimb gGohmaLeftMandibles1Limb;
extern StandardLimb gGohmaRightMandiblesRootLimb;
extern StandardLimb gGohmaRightMandibles1RootLimb;
extern StandardLimb gGohmaRightMandibles2RootLimb;
extern StandardLimb gGohmaRightMandibles2Limb;
extern StandardLimb gGohmaRightMandibles1Limb;
extern StandardLimb gGohmaLeftAntennaRootLimb;
extern StandardLimb gGohmaLeftAntennaBodyRootLimb;
extern StandardLimb gGohmaLeftAntennaShellRootLimb;
extern StandardLimb gGohmaLeftAntennaClawRootLimb;
extern StandardLimb gGohmaLeftAntennaClawLimb;
extern StandardLimb gGohmaLeftAntennaShellLimb;
extern StandardLimb gGohmaLeftAntennaBodyLimb;
extern StandardLimb gGohmaRightAntennaRootLimb;
extern StandardLimb gGohmaRightAntennaBodyRootLimb;
extern StandardLimb gGohmaRightAntennaShellRootLimb;
extern StandardLimb gGohmaRightAntennaClawRootLimb;
extern StandardLimb gGohmaRightAntennaClawLimb;
extern StandardLimb gGohmaRightAntennaShellLimb;
extern StandardLimb gGohmaRightAntennaBodyLimb;
extern StandardLimb gGohmaLeftLegRootLimb;
extern StandardLimb gGohmaLeftThighRootLimb;
extern StandardLimb gGohmaLeftLegLowerRootLimb;
extern StandardLimb gGohmaLeftFeetRootLimb;
extern StandardLimb gGohmaLeftFeetBackRoot1Limb;
extern StandardLimb gGohmaLeftFeetBackRoot2Limb;
extern StandardLimb gGohmaLeftFeetBackLimb;
extern StandardLimb gGohmaLeftFeetLimb;
extern StandardLimb gGohmaLeftShinLimb;
extern StandardLimb gGohmaLeftKneeRoot1Limb;
extern StandardLimb gGohmaLeftKneeRoot2Limb;
extern StandardLimb gGohmaLeftKneeLimb;
extern StandardLimb gGohmaLeftThighShellRoot1Limb;
extern StandardLimb gGohmaLeftThighShellRoot2Limb;
extern StandardLimb gGohmaLeftThighShellLimb;
extern StandardLimb gGohmaLeftThighLimb;
extern StandardLimb gGohmaBodyShellBackRoot1Limb;
extern StandardLimb gGohmaBodyShellBackRoot2Limb;
extern StandardLimb gGohmaBodyShellBackLimb;
extern void* gGohmaLimbs[];
typedef enum gGohmaSkelLimb {
    /*  0 */ LIMB_OBJECT_GOMA_01C8F8_NONE,
    /*  1 */ LIMB_OBJECT_GOMA_01C3A8,
    /*  2 */ LIMB_OBJECT_GOMA_01C3B4,
    /*  3 */ LIMB_OBJECT_GOMA_01C3C0,
    /*  4 */ LIMB_OBJECT_GOMA_01C3CC,
    /*  5 */ LIMB_OBJECT_GOMA_01C3D8,
    /*  6 */ LIMB_OBJECT_GOMA_01C3E4,
    /*  7 */ LIMB_OBJECT_GOMA_01C3F0,
    /*  8 */ LIMB_OBJECT_GOMA_01C3FC,
    /*  9 */ LIMB_OBJECT_GOMA_01C408,
    /* 10 */ LIMB_OBJECT_GOMA_01C414,
    /* 11 */ LIMB_OBJECT_GOMA_01C420,
    /* 12 */ LIMB_OBJECT_GOMA_01C42C,
    /* 13 */ LIMB_OBJECT_GOMA_01C438,
    /* 14 */ LIMB_OBJECT_GOMA_01C444,
    /* 15 */ LIMB_OBJECT_GOMA_01C450,
    /* 16 */ LIMB_OBJECT_GOMA_01C45C,
    /* 17 */ LIMB_OBJECT_GOMA_01C468,
    /* 18 */ LIMB_OBJECT_GOMA_01C474,
    /* 19 */ LIMB_OBJECT_GOMA_01C480,
    /* 20 */ LIMB_OBJECT_GOMA_01C48C,
    /* 21 */ LIMB_OBJECT_GOMA_01C498,
    /* 22 */ LIMB_OBJECT_GOMA_01C4A4,
    /* 23 */ LIMB_OBJECT_GOMA_01C4B0,
    /* 24 */ LIMB_OBJECT_GOMA_01C4BC,
    /* 25 */ LIMB_OBJECT_GOMA_01C4C8,
    /* 26 */ LIMB_OBJECT_GOMA_01C4D4,
    /* 27 */ LIMB_OBJECT_GOMA_01C4E0,
    /* 28 */ LIMB_OBJECT_GOMA_01C4EC,
    /* 29 */ LIMB_OBJECT_GOMA_01C4F8,
    /* 30 */ LIMB_OBJECT_GOMA_01C504,
    /* 31 */ LIMB_OBJECT_GOMA_01C510,
    /* 32 */ LIMB_OBJECT_GOMA_01C51C,
    /* 33 */ LIMB_OBJECT_GOMA_01C528,
    /* 34 */ LIMB_OBJECT_GOMA_01C534,
    /* 35 */ LIMB_OBJECT_GOMA_01C540,
    /* 36 */ LIMB_OBJECT_GOMA_01C54C,
    /* 37 */ LIMB_OBJECT_GOMA_01C558,
    /* 38 */ LIMB_OBJECT_GOMA_01C564,
    /* 39 */ LIMB_OBJECT_GOMA_01C570,
    /* 40 */ LIMB_OBJECT_GOMA_01C57C,
    /* 41 */ LIMB_OBJECT_GOMA_01C588,
    /* 42 */ LIMB_OBJECT_GOMA_01C594,
    /* 43 */ LIMB_OBJECT_GOMA_01C5A0,
    /* 44 */ LIMB_OBJECT_GOMA_01C5AC,
    /* 45 */ LIMB_OBJECT_GOMA_01C5B8,
    /* 46 */ LIMB_OBJECT_GOMA_01C5C4,
    /* 47 */ LIMB_OBJECT_GOMA_01C5D0,
    /* 48 */ LIMB_OBJECT_GOMA_01C5DC,
    /* 49 */ LIMB_OBJECT_GOMA_01C5E8,
    /* 50 */ LIMB_OBJECT_GOMA_01C5F4,
    /* 51 */ LIMB_OBJECT_GOMA_01C600,
    /* 52 */ LIMB_OBJECT_GOMA_01C60C,
    /* 53 */ LIMB_OBJECT_GOMA_01C618,
    /* 54 */ LIMB_OBJECT_GOMA_01C624,
    /* 55 */ LIMB_OBJECT_GOMA_01C630,
    /* 56 */ LIMB_OBJECT_GOMA_01C63C,
    /* 57 */ LIMB_OBJECT_GOMA_01C648,
    /* 58 */ LIMB_OBJECT_GOMA_01C654,
    /* 59 */ LIMB_OBJECT_GOMA_01C660,
    /* 60 */ LIMB_OBJECT_GOMA_01C66C,
    /* 61 */ LIMB_OBJECT_GOMA_01C678,
    /* 62 */ LIMB_OBJECT_GOMA_01C684,
    /* 63 */ LIMB_OBJECT_GOMA_01C690,
    /* 64 */ LIMB_OBJECT_GOMA_01C69C,
    /* 65 */ LIMB_OBJECT_GOMA_01C6A8,
    /* 66 */ LIMB_OBJECT_GOMA_01C6B4,
    /* 67 */ LIMB_OBJECT_GOMA_01C6C0,
    /* 68 */ LIMB_OBJECT_GOMA_01C6CC,
    /* 69 */ LIMB_OBJECT_GOMA_01C6D8,
    /* 70 */ LIMB_OBJECT_GOMA_01C6E4,
    /* 71 */ LIMB_OBJECT_GOMA_01C6F0,
    /* 72 */ LIMB_OBJECT_GOMA_01C6FC,
    /* 73 */ LIMB_OBJECT_GOMA_01C708,
    /* 74 */ LIMB_OBJECT_GOMA_01C714,
    /* 75 */ LIMB_OBJECT_GOMA_01C720,
    /* 76 */ LIMB_OBJECT_GOMA_01C72C,
    /* 77 */ LIMB_OBJECT_GOMA_01C738,
    /* 78 */ LIMB_OBJECT_GOMA_01C744,
    /* 79 */ LIMB_OBJECT_GOMA_01C750,
    /* 80 */ LIMB_OBJECT_GOMA_01C75C,
    /* 81 */ LIMB_OBJECT_GOMA_01C768,
    /* 82 */ LIMB_OBJECT_GOMA_01C774,
    /* 83 */ LIMB_OBJECT_GOMA_01C780,
    /* 84 */ LIMB_OBJECT_GOMA_01C78C,
    /* 85 */ LIMB_OBJECT_GOMA_01C798,
    /* 86 */ LIMB_OBJECT_GOMA_01C8F8_MAX
} gGohmaSkelLimb;
extern SkeletonHeader gGohmaSkel;
extern s16 gGohmaWalkCrouchedFrameData[];
extern JointIndex gGohmaWalkCrouchedJointIndices[];
extern AnimationHeader gGohmaWalkCrouchedAnim;
extern Vtx gGohmaDoorVtx[];
extern Gfx gGohmaDoorDL[22];
extern BgCamInfo gGohmaDoorBgCamList[];
extern SurfaceType gGohmaDoorSurfaceTypes[];
extern CollisionPoly gGohmaDoorPolyList[];
extern Vec3s gGohmaDoorVtxList[];
extern CollisionHeader gGohmaDoorCol;
#define gGohmaDoorTex_WIDTH 32
#define gGohmaDoorTex_HEIGHT 32
extern u64 gGohmaDoorTex[TEX_LEN(u64, gGohmaDoorTex_WIDTH, gGohmaDoorTex_HEIGHT, 16)];

#endif
