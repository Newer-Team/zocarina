#ifndef OBJECT_MD_H
#define OBJECT_MD_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gMidoIdleFrameData[];
extern JointIndex gMidoIdleJointIndices[];
extern AnimationHeader gMidoIdleAnim;
//#define gMido1TLUT_TLUT_COUNT 256
extern u64 gMido1TLUT[];
#define gMidoGradientTex_WIDTH 8
#define gMidoGradientTex_HEIGHT 8
extern u64 gMidoGradientTex[TEX_LEN(u64, gMidoGradientTex_WIDTH, gMidoGradientTex_HEIGHT, 8)];
#define gMidoEyeLookingUpTex_WIDTH 32
#define gMidoEyeLookingUpTex_HEIGHT 32
extern u64 gMidoEyeLookingUpTex[TEX_LEN(u64, gMidoEyeLookingUpTex_WIDTH, gMidoEyeLookingUpTex_HEIGHT, 16)];
#define gMidoTex_D20_WIDTH 8
#define gMidoTex_D20_HEIGHT 8
extern u64 gMidoTex_D20[TEX_LEN(u64, gMidoTex_D20_WIDTH, gMidoTex_D20_HEIGHT, 16)];
#define gMidoTex_DA0_WIDTH 8
#define gMidoTex_DA0_HEIGHT 16
extern u64 gMidoTex_DA0[TEX_LEN(u64, gMidoTex_DA0_WIDTH, gMidoTex_DA0_HEIGHT, 8)];
#define gMidoHairCurl1Tex_WIDTH 32
#define gMidoHairCurl1Tex_HEIGHT 32
extern u64 gMidoHairCurl1Tex[TEX_LEN(u64, gMidoHairCurl1Tex_WIDTH, gMidoHairCurl1Tex_HEIGHT, 8)];
#define gMidoTex_1220_WIDTH 8
#define gMidoTex_1220_HEIGHT 8
extern u64 gMidoTex_1220[TEX_LEN(u64, gMidoTex_1220_WIDTH, gMidoTex_1220_HEIGHT, 8)];
#define gMidoTex_1260_WIDTH 8
#define gMidoTex_1260_HEIGHT 8
extern u64 gMidoTex_1260[TEX_LEN(u64, gMidoTex_1260_WIDTH, gMidoTex_1260_HEIGHT, 8)];
#define gMidoBackOfHandTex_WIDTH 8
#define gMidoBackOfHandTex_HEIGHT 8
extern u64 gMidoBackOfHandTex[TEX_LEN(u64, gMidoBackOfHandTex_WIDTH, gMidoBackOfHandTex_HEIGHT, 8)];
#define gMidoClothesTex_WIDTH 8
#define gMidoClothesTex_HEIGHT 8
extern u64 gMidoClothesTex[TEX_LEN(u64, gMidoClothesTex_WIDTH, gMidoClothesTex_HEIGHT, 8)];
#define gMidoUndershirtTex_WIDTH 8
#define gMidoUndershirtTex_HEIGHT 8
extern u64 gMidoUndershirtTex[TEX_LEN(u64, gMidoUndershirtTex_WIDTH, gMidoUndershirtTex_HEIGHT, 8)];
#define gMidoShoeTex_WIDTH 8
#define gMidoShoeTex_HEIGHT 8
extern u64 gMidoShoeTex[TEX_LEN(u64, gMidoShoeTex_WIDTH, gMidoShoeTex_HEIGHT, 8)];
#define gMidoAnkleTex_WIDTH 8
#define gMidoAnkleTex_HEIGHT 8
extern u64 gMidoAnkleTex[TEX_LEN(u64, gMidoAnkleTex_WIDTH, gMidoAnkleTex_HEIGHT, 8)];
#define gMidoPantsTex_WIDTH 16
#define gMidoPantsTex_HEIGHT 16
extern u64 gMidoPantsTex[TEX_LEN(u64, gMidoPantsTex_WIDTH, gMidoPantsTex_HEIGHT, 16)];
extern Vtx gMidoLeftHandVtx[];
extern Vtx gMidoLeftForearmVtx[];
extern Vtx gMidoLeftUpperArmVtx[];
extern Vtx gMidoRightHandVtx[];
extern Vtx gMidoRightForearmVtx[];
extern Vtx gMidoRightUpperArmVtx[];
extern Vtx gMidoTorsoVtx[];
extern Vtx gMidoLeftFootVtx[];
extern Vtx gMidoLeftLegVtx[];
extern Vtx gMidoLeftThighVtx[];
extern Vtx gMidoRightFootVtx[];
extern Vtx gMidoRightLegVtx[];
extern Vtx gMidoRightThighVtx[];
extern Vtx gMidoWaistVtx[];
extern Gfx gMidoTorsoDL[142];
extern Gfx gMidoRightUpperArmDL[39];
extern Gfx gMidoRightForearmDL[39];
extern Gfx gMidoRightHandDL[95];
extern Gfx gMidoLeftUpperArmDL[39];
extern Gfx gMidoLeftForearmDL[39];
extern Gfx gMidoLeftHandDL[96];
extern Gfx gMidoWaistDL[39];
extern Gfx gMidoRightThighDL[53];
extern Gfx gMidoRightLegDL[52];
extern Gfx gMidoRightFootDL[39];
extern Gfx gMidoLeftThighDL[53];
extern Gfx gMidoLeftLegDL[51];
extern Gfx gMidoLeftFootDL[39];
//#define gMido2TLUT_TLUT_COUNT 188
extern u64 gMido2TLUT[];
//#define gMido3TLUT_TLUT_COUNT 248
extern u64 gMido3TLUT[];
#define gMidoTex_4FB0_WIDTH 8
#define gMidoTex_4FB0_HEIGHT 8
extern u64 gMidoTex_4FB0[TEX_LEN(u64, gMidoTex_4FB0_WIDTH, gMidoTex_4FB0_HEIGHT, 8)];
#define gMidoEyeOpenTex_WIDTH 32
#define gMidoEyeOpenTex_HEIGHT 32
extern u64 gMidoEyeOpenTex[TEX_LEN(u64, gMidoEyeOpenTex_WIDTH, gMidoEyeOpenTex_HEIGHT, 8)];
#define gMidoTex_53F0_WIDTH 8
#define gMidoTex_53F0_HEIGHT 8
extern u64 gMidoTex_53F0[TEX_LEN(u64, gMidoTex_53F0_WIDTH, gMidoTex_53F0_HEIGHT, 8)];
#define gMidoTex_5430_WIDTH 8
#define gMidoTex_5430_HEIGHT 8
extern u64 gMidoTex_5430[TEX_LEN(u64, gMidoTex_5430_WIDTH, gMidoTex_5430_HEIGHT, 8)];
#define gMidoHairCurl2Tex_WIDTH 32
#define gMidoHairCurl2Tex_HEIGHT 32
extern u64 gMidoHairCurl2Tex[TEX_LEN(u64, gMidoHairCurl2Tex_WIDTH, gMidoHairCurl2Tex_HEIGHT, 8)];
#define gMidoTex_5870_WIDTH 8
#define gMidoTex_5870_HEIGHT 16
extern u64 gMidoTex_5870[TEX_LEN(u64, gMidoTex_5870_WIDTH, gMidoTex_5870_HEIGHT, 8)];
#define gMidoTex_58F0_WIDTH 8
#define gMidoTex_58F0_HEIGHT 8
extern u64 gMidoTex_58F0[TEX_LEN(u64, gMidoTex_58F0_WIDTH, gMidoTex_58F0_HEIGHT, 8)];
#define gMidoEyeHalfTex_WIDTH 32
#define gMidoEyeHalfTex_HEIGHT 32
extern u64 gMidoEyeHalfTex[TEX_LEN(u64, gMidoEyeHalfTex_WIDTH, gMidoEyeHalfTex_HEIGHT, 8)];
#define gMidoEyeClosedTex_WIDTH 32
#define gMidoEyeClosedTex_HEIGHT 32
extern u64 gMidoEyeClosedTex[TEX_LEN(u64, gMidoEyeClosedTex_WIDTH, gMidoEyeClosedTex_HEIGHT, 8)];
#define gMidoEyeAngryTex_WIDTH 32
#define gMidoEyeAngryTex_HEIGHT 32
extern u64 gMidoEyeAngryTex[TEX_LEN(u64, gMidoEyeAngryTex_WIDTH, gMidoEyeAngryTex_HEIGHT, 8)];
extern Vtx gMidoHeadVtx[];
extern Gfx gMidoHeadDL[359];
extern StandardLimb gMidoRootLimb;
extern StandardLimb gMidoWaistLimb;
extern StandardLimb gMidoLeftThighLimb;
extern StandardLimb gMidoLeftLegLimb;
extern StandardLimb gMidoLeftFootLimb;
extern StandardLimb gMidoRightThighLimb;
extern StandardLimb gMidoRightLegLimb;
extern StandardLimb gMidoRightFootLimb;
extern StandardLimb gMidoTorsoLimb;
extern StandardLimb gMidoLeftUpperArmLimb;
extern StandardLimb gMidoLeftForearmLimb;
extern StandardLimb gMidoLeftHandLimb;
extern StandardLimb gMidoRightUpperArmLimb;
extern StandardLimb gMidoRightForearmLimb;
extern StandardLimb gMidoRightHandLimb;
extern StandardLimb gMidoHeadLimb;
extern void* gMidoLimbs[];
typedef enum MidoLimb {
    /*  0 */ MIDO_LIMB_NONE,
    /*  1 */ MIDO_LIMB_ROOT,
    /*  2 */ MIDO_LIMB_WAIST,
    /*  3 */ MIDO_LIMB_LEFT_THIGH,
    /*  4 */ MIDO_LIMB_LEFT_LEG,
    /*  5 */ MIDO_LIMB_LEFT_FOOT,
    /*  6 */ MIDO_LIMB_RIGHT_THIGH,
    /*  7 */ MIDO_LIMB_RIGHT_LEG,
    /*  8 */ MIDO_LIMB_RIGHT_FOOT,
    /*  9 */ MIDO_LIMB_TORSO,
    /* 10 */ MIDO_LIMB_LEFT_UPPER_ARM,
    /* 11 */ MIDO_LIMB_LEFT_FOREARM,
    /* 12 */ MIDO_LIMB_LEFT_HAND,
    /* 13 */ MIDO_LIMB_RIGHT_UPPER_ARM,
    /* 14 */ MIDO_LIMB_RIGHT_FOREARM,
    /* 15 */ MIDO_LIMB_RIGHT_HAND,
    /* 16 */ MIDO_LIMB_HEAD,
    /* 17 */ MIDO_LIMB_MAX
} MidoLimb;
extern FlexSkeletonHeader gMidoSkel;
extern s16 gMidoCuriousToAnnoyedFrameData[];
extern JointIndex gMidoCuriousToAnnoyedJointIndices[];
extern AnimationHeader gMidoCuriousToAnnoyedAnim;
extern s16 gMidoIdleToAnnoyedFrameData[];
extern JointIndex gMidoIdleToAnnoyedJointIndices[];
extern AnimationHeader gMidoIdleToAnnoyedAnim;
extern s16 gMidoCuriousFrameData[];
extern JointIndex gMidoCuriousJointIndices[];
extern AnimationHeader gMidoCuriousAnim;
extern s16 gMidoIdleToSurpriseFrameData[];
extern JointIndex gMidoIdleToSurpriseJointIndices[];
extern AnimationHeader gMidoIdleToSurpriseAnim;
extern s16 gMidoIdleToHaltFrameData[];
extern JointIndex gMidoIdleToHaltJointIndices[];
extern AnimationHeader gMidoIdleToHaltAnim;
extern s16 gMidoIdleToWalkFrameData[];
extern JointIndex gMidoIdleToWalkJointIndices[];
extern AnimationHeader gMidoIdleToWalkAnim;
extern s16 gMidoAnnoyedToHaltFrameData[];
extern JointIndex gMidoAnnoyedToHaltJointIndices[];
extern AnimationHeader gMidoAnnoyedToHaltAnim;
extern s16 gMidoAnnoyedFrameData[];
extern JointIndex gMidoAnnoyedJointIndices[];
extern AnimationHeader gMidoAnnoyedAnim;
extern s16 gMidoHaltToCuriousFrameData[];
extern JointIndex gMidoHaltToCuriousJointIndices[];
extern AnimationHeader gMidoHaltToCuriousAnim;
extern s16 gMidoHaltFrameData[];
extern JointIndex gMidoHaltJointIndices[];
extern AnimationHeader gMidoHaltAnim;
extern s16 gMidoWalkFrameData[];
extern JointIndex gMidoWalkJointIndices[];
extern AnimationHeader gMidoWalkAnim;

#endif
