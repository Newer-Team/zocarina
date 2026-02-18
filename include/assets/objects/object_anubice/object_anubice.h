#ifndef OBJECT_ANUBICE_H
#define OBJECT_ANUBICE_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gAnubiceLaughingFrameData[];
extern JointIndex gAnubiceLaughingJointIndices[];
extern AnimationHeader gAnubiceLaughingAnim;
extern s16 gAnubiceFallDownFrameData[];
extern JointIndex gAnubiceFallDownJointIndices[];
extern AnimationHeader gAnubiceFallDownAnim;
extern s16 gAnubiceAttackingFrameData[];
extern JointIndex gAnubiceAttackingJointIndices[];
extern AnimationHeader gAnubiceAttackingAnim;
extern s16 gAnubiceStandUpFrameData[];
extern JointIndex gAnubiceStandUpJointIndices[];
extern AnimationHeader gAnubiceStandUpAnim;
extern s16 gAnubiceAnim_000A48_06000940_FrameData[];
extern JointIndex gAnubiceAnim_000A48_060009E8_JointIndices[];
extern AnimationHeader gAnubiceAnim_000A48;
extern s16 gAnubiceAnim_000BAC_06000A60_FrameData[];
extern JointIndex gAnubiceAnim_000BAC_06000B4C_JointIndices[];
extern AnimationHeader gAnubiceAnim_000BAC;
extern s16 gAnubiceIdleFrameData[];
extern JointIndex gAnubiceIdleJointIndices[];
extern AnimationHeader gAnubiceIdleAnim;
#define object_anubice_000F90_Tex_WIDTH 8
#define object_anubice_000F90_Tex_HEIGHT 16
extern u64 object_anubice_000F90_Tex[TEX_LEN(u64, object_anubice_000F90_Tex_WIDTH, object_anubice_000F90_Tex_HEIGHT, 16)];
#define object_anubice_001090_Tex_WIDTH 4
#define object_anubice_001090_Tex_HEIGHT 16
extern u64 object_anubice_001090_Tex[TEX_LEN(u64, object_anubice_001090_Tex_WIDTH, object_anubice_001090_Tex_HEIGHT, 16)];
#define object_anubice_001110_Tex_WIDTH 16
#define object_anubice_001110_Tex_HEIGHT 32
extern u64 object_anubice_001110_Tex[TEX_LEN(u64, object_anubice_001110_Tex_WIDTH, object_anubice_001110_Tex_HEIGHT, 16)];
#define object_anubice_001510_Tex_WIDTH 8
#define object_anubice_001510_Tex_HEIGHT 8
extern u64 object_anubice_001510_Tex[TEX_LEN(u64, object_anubice_001510_Tex_WIDTH, object_anubice_001510_Tex_HEIGHT, 16)];
#define object_anubice_001590_Tex_WIDTH 8
#define object_anubice_001590_Tex_HEIGHT 8
extern u64 object_anubice_001590_Tex[TEX_LEN(u64, object_anubice_001590_Tex_WIDTH, object_anubice_001590_Tex_HEIGHT, 16)];
#define object_anubice_001610_Tex_WIDTH 4
#define object_anubice_001610_Tex_HEIGHT 16
extern u64 object_anubice_001610_Tex[TEX_LEN(u64, object_anubice_001610_Tex_WIDTH, object_anubice_001610_Tex_HEIGHT, 16)];
#define object_anubice_001690_Tex_WIDTH 32
#define object_anubice_001690_Tex_HEIGHT 16
extern u64 object_anubice_001690_Tex[TEX_LEN(u64, object_anubice_001690_Tex_WIDTH, object_anubice_001690_Tex_HEIGHT, 16)];
#define object_anubice_001A90_Tex_WIDTH 8
#define object_anubice_001A90_Tex_HEIGHT 8
extern u64 object_anubice_001A90_Tex[TEX_LEN(u64, object_anubice_001A90_Tex_WIDTH, object_anubice_001A90_Tex_HEIGHT, 16)];
extern Vtx object_anubice_Vtx_001B10[];
extern Vtx object_anubice_Vtx_001EF0[];
extern Vtx object_anubice_Vtx_002030[];
extern Vtx object_anubice_Vtx_002170[];
extern Vtx object_anubice_Vtx_0022B0[];
extern Vtx object_anubice_Vtx_0023C0[];
extern Vtx object_anubice_Vtx_002410[];
extern Vtx object_anubice_Vtx_002510[];
extern Vtx gAnubiceEyesVtx[];
extern Gfx object_anubice_002CE0_DL[42];
extern Gfx object_anubice_002E30_DL[22];
extern Gfx object_anubice_002EE0_DL[22];
extern Gfx object_anubice_002F90_DL[22];
extern Gfx object_anubice_003040_DL[25];
extern Gfx object_anubice_003108_DL[19];
extern Gfx object_anubice_0031A0_DL[29];
extern Gfx object_anubice_003288_DL[60];
extern Gfx gAnubiceEyesDL[21];
extern Gfx gAnubiceFireAttackDL[16];
extern Vtx gAnubiceFireAttackVtx[];
extern Vtx gAnubiceUnusedParticleModelVtx[];
extern Gfx gAnubiceUnusedParticleMaterialDL[15];
extern Gfx gAnubiceUnusedParticleModelDL[3];
#define object_anubice_0036A0_Tex_WIDTH 32
#define object_anubice_0036A0_Tex_HEIGHT 32
extern u64 object_anubice_0036A0_Tex[TEX_LEN(u64, object_anubice_0036A0_Tex_WIDTH, object_anubice_0036A0_Tex_HEIGHT, 4)];
extern StandardLimb object_anubice_0038A0_Limb;
extern StandardLimb object_anubice_0038AC_Limb;
extern StandardLimb object_anubice_0038B8_Limb;
extern StandardLimb object_anubice_0038C4_Limb;
extern StandardLimb object_anubice_0038D0_Limb;
extern StandardLimb object_anubice_0038DC_Limb;
extern StandardLimb object_anubice_0038E8_Limb;
extern StandardLimb object_anubice_0038F4_Limb;
extern StandardLimb object_anubice_003900_Limb;
extern StandardLimb object_anubice_00390C_Limb;
extern StandardLimb object_anubice_003918_Limb;
extern StandardLimb object_anubice_003924_Limb;
extern StandardLimb object_anubice_003930_Limb;
extern StandardLimb object_anubice_00393C_Limb;
extern StandardLimb object_anubice_003948_Limb;
extern void* gAnubiceLimbs[];
typedef enum AnubiceLimb {
    /*  0 */ ANUBICE_LIMB_NONE,
    /*  1 */ ANUBICE_LIMB_ROOT,
    /*  2 */ ANUBICE_LIMB_BODY_ROOT,
    /*  3 */ ANUBICE_LIMB_CHEST,
    /*  4 */ ANUBICE_LIMB_ABDOMEN_ROOT,
    /*  5 */ ANUBICE_LIMB_UPPER_ABDOMEN,
    /*  6 */ ANUBICE_LIMB_LOWER_ABDOMEN,
    /*  7 */ ANUBICE_LIMB_TAIL_ROOT,
    /*  8 */ ANUBICE_LIMB_TAIL_BASE,
    /*  9 */ ANUBICE_LIMB_TAIL_TIP,
    /* 10 */ ANUBICE_LIMB_JEWEL_ROOT,
    /* 11 */ ANUBICE_LIMB_JEWEL,
    /* 12 */ ANUBICE_LIMB_HEAD_ROOT,
    /* 13 */ ANUBICE_LIMB_HEAD,
    /* 14 */ ANUBICE_LIMB_JAW_ROOT,
    /* 15 */ ANUBICE_LIMB_JAW,
    /* 16 */ ANUBICE_LIMB_MAX
} AnubiceLimb;
extern SkeletonHeader gAnubiceSkel;

#endif
