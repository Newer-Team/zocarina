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
#define gGohmaTitleCardTex_HEIGHT 120
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
    /*  0 */ LIMB_OBJECT_GOMA_01DCF8_NONE,
    /*  1 */ LIMB_OBJECT_GOMA_01D7A8,
    /*  2 */ LIMB_OBJECT_GOMA_01D7B4,
    /*  3 */ LIMB_OBJECT_GOMA_01D7C0,
    /*  4 */ LIMB_OBJECT_GOMA_01D7CC,
    /*  5 */ LIMB_OBJECT_GOMA_01D7D8,
    /*  6 */ LIMB_OBJECT_GOMA_01D7E4,
    /*  7 */ LIMB_OBJECT_GOMA_01D7F0,
    /*  8 */ LIMB_OBJECT_GOMA_01D7FC,
    /*  9 */ LIMB_OBJECT_GOMA_01D808,
    /* 10 */ LIMB_OBJECT_GOMA_01D814,
    /* 11 */ LIMB_OBJECT_GOMA_01D820,
    /* 12 */ LIMB_OBJECT_GOMA_01D82C,
    /* 13 */ LIMB_OBJECT_GOMA_01D838,
    /* 14 */ LIMB_OBJECT_GOMA_01D844,
    /* 15 */ LIMB_OBJECT_GOMA_01D850,
    /* 16 */ LIMB_OBJECT_GOMA_01D85C,
    /* 17 */ LIMB_OBJECT_GOMA_01D868,
    /* 18 */ LIMB_OBJECT_GOMA_01D874,
    /* 19 */ LIMB_OBJECT_GOMA_01D880,
    /* 20 */ LIMB_OBJECT_GOMA_01D88C,
    /* 21 */ LIMB_OBJECT_GOMA_01D898,
    /* 22 */ LIMB_OBJECT_GOMA_01D8A4,
    /* 23 */ LIMB_OBJECT_GOMA_01D8B0,
    /* 24 */ LIMB_OBJECT_GOMA_01D8BC,
    /* 25 */ LIMB_OBJECT_GOMA_01D8C8,
    /* 26 */ LIMB_OBJECT_GOMA_01D8D4,
    /* 27 */ LIMB_OBJECT_GOMA_01D8E0,
    /* 28 */ LIMB_OBJECT_GOMA_01D8EC,
    /* 29 */ LIMB_OBJECT_GOMA_01D8F8,
    /* 30 */ LIMB_OBJECT_GOMA_01D904,
    /* 31 */ LIMB_OBJECT_GOMA_01D910,
    /* 32 */ LIMB_OBJECT_GOMA_01D91C,
    /* 33 */ LIMB_OBJECT_GOMA_01D928,
    /* 34 */ LIMB_OBJECT_GOMA_01D934,
    /* 35 */ LIMB_OBJECT_GOMA_01D940,
    /* 36 */ LIMB_OBJECT_GOMA_01D94C,
    /* 37 */ LIMB_OBJECT_GOMA_01D958,
    /* 38 */ LIMB_OBJECT_GOMA_01D964,
    /* 39 */ LIMB_OBJECT_GOMA_01D970,
    /* 40 */ LIMB_OBJECT_GOMA_01D97C,
    /* 41 */ LIMB_OBJECT_GOMA_01D988,
    /* 42 */ LIMB_OBJECT_GOMA_01D994,
    /* 43 */ LIMB_OBJECT_GOMA_01D9A0,
    /* 44 */ LIMB_OBJECT_GOMA_01D9AC,
    /* 45 */ LIMB_OBJECT_GOMA_01D9B8,
    /* 46 */ LIMB_OBJECT_GOMA_01D9C4,
    /* 47 */ LIMB_OBJECT_GOMA_01D9D0,
    /* 48 */ LIMB_OBJECT_GOMA_01D9DC,
    /* 49 */ LIMB_OBJECT_GOMA_01D9E8,
    /* 50 */ LIMB_OBJECT_GOMA_01D9F4,
    /* 51 */ LIMB_OBJECT_GOMA_01DA00,
    /* 52 */ LIMB_OBJECT_GOMA_01DA0C,
    /* 53 */ LIMB_OBJECT_GOMA_01DA18,
    /* 54 */ LIMB_OBJECT_GOMA_01DA24,
    /* 55 */ LIMB_OBJECT_GOMA_01DA30,
    /* 56 */ LIMB_OBJECT_GOMA_01DA3C,
    /* 57 */ LIMB_OBJECT_GOMA_01DA48,
    /* 58 */ LIMB_OBJECT_GOMA_01DA54,
    /* 59 */ LIMB_OBJECT_GOMA_01DA60,
    /* 60 */ LIMB_OBJECT_GOMA_01DA6C,
    /* 61 */ LIMB_OBJECT_GOMA_01DA78,
    /* 62 */ LIMB_OBJECT_GOMA_01DA84,
    /* 63 */ LIMB_OBJECT_GOMA_01DA90,
    /* 64 */ LIMB_OBJECT_GOMA_01DA9C,
    /* 65 */ LIMB_OBJECT_GOMA_01DAA8,
    /* 66 */ LIMB_OBJECT_GOMA_01DAB4,
    /* 67 */ LIMB_OBJECT_GOMA_01DAC0,
    /* 68 */ LIMB_OBJECT_GOMA_01DACC,
    /* 69 */ LIMB_OBJECT_GOMA_01DAD8,
    /* 70 */ LIMB_OBJECT_GOMA_01DAE4,
    /* 71 */ LIMB_OBJECT_GOMA_01DAF0,
    /* 72 */ LIMB_OBJECT_GOMA_01DAFC,
    /* 73 */ LIMB_OBJECT_GOMA_01DB08,
    /* 74 */ LIMB_OBJECT_GOMA_01DB14,
    /* 75 */ LIMB_OBJECT_GOMA_01DB20,
    /* 76 */ LIMB_OBJECT_GOMA_01DB2C,
    /* 77 */ LIMB_OBJECT_GOMA_01DB38,
    /* 78 */ LIMB_OBJECT_GOMA_01DB44,
    /* 79 */ LIMB_OBJECT_GOMA_01DB50,
    /* 80 */ LIMB_OBJECT_GOMA_01DB5C,
    /* 81 */ LIMB_OBJECT_GOMA_01DB68,
    /* 82 */ LIMB_OBJECT_GOMA_01DB74,
    /* 83 */ LIMB_OBJECT_GOMA_01DB80,
    /* 84 */ LIMB_OBJECT_GOMA_01DB8C,
    /* 85 */ LIMB_OBJECT_GOMA_01DB98,
    /* 86 */ LIMB_OBJECT_GOMA_01DCF8_MAX
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
