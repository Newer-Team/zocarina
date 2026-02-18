#ifndef OBJECT_FU_H
#define OBJECT_FU_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gWindmillManPlayAndMoveHeadFrameData[];
extern JointIndex gWindmillManPlayAndMoveHeadJointIndices[];
extern AnimationHeader gWindmillManPlayAndMoveHeadAnim;
extern s16 gWindmillManPlayStillFrameData[];
extern JointIndex gWindmillManPlayStillJointIndices[];
extern AnimationHeader gWindmillManPlayStillAnim;
extern Vtx gWindmillManBlueTriangleVtx[];
extern Vtx gWindmillManLeftArmAndMusicBoxVtx[];
extern Vtx gWindmillManRightHandAndCrankVtx[];
extern Vtx gWindmillManRightArmVtx[];
extern Vtx gWindmillManRightShoulderVtx[];
extern Vtx gWindmillManHornVtx[];
extern Vtx gWindmillManHeadVtx[];
extern Vtx gWindmillManChestAndMusicBoxPipeVtx[];
extern Vtx gWindmillManLeftFootVtx[];
extern Vtx gWindmillManLeftLegVtx[];
extern Vtx gWindmillManLeftThighVtx[];
extern Vtx gWindmillManRightFootVtx[];
extern Vtx gWindmillManRightLegVtx[];
extern Vtx gWindmillManRightThighVtx[];
extern Vtx gWindmillManTorsoVtx[];
extern Gfx gWindmillManHornDL[62];
extern Gfx gWindmillManChestAndMusicBoxPipeDL[112];
extern Gfx gWindmillManHeadDL[167];
extern Gfx gWindmillManRightShoulderDL[38];
extern Gfx gWindmillManRightArmDL[38];
extern Gfx gWindmillManRightHandAndCrankDL[85];
extern Gfx gWindmillManLeftArmAndMusicBoxDL[86];
extern Gfx gWindmillManBlueTriangleDL[26];
extern Gfx gWindmillManTorsoDL[34];
extern Gfx gWindmillManRightThighDL[36];
extern Gfx gWindmillManRightLegDL[42];
extern Gfx gWindmillManRightFootDL[33];
extern Gfx gWindmillManLeftThighDL[36];
extern Gfx gWindmillManLeftLegDL[42];
extern Gfx gWindmillManLeftFootDL[33];
//#define gWindmillManClothesTLUT_TLUT_COUNT 256
extern u64 gWindmillManClothesTLUT[];
//#define gWindmillManSkinTLUT_TLUT_COUNT 256
extern u64 gWindmillManSkinTLUT[];
#define gWindmillManPantsTex_WIDTH 16
#define gWindmillManPantsTex_HEIGHT 16
extern u64 gWindmillManPantsTex[TEX_LEN(u64, gWindmillManPantsTex_WIDTH, gWindmillManPantsTex_HEIGHT, 8)];
#define gWindmillManHeadSkinTex_WIDTH 8
#define gWindmillManHeadSkinTex_HEIGHT 8
extern u64 gWindmillManHeadSkinTex[TEX_LEN(u64, gWindmillManHeadSkinTex_WIDTH, gWindmillManHeadSkinTex_HEIGHT, 8)];
#define gWindmillManMusicBoxTex_WIDTH 32
#define gWindmillManMusicBoxTex_HEIGHT 32
extern u64 gWindmillManMusicBoxTex[TEX_LEN(u64, gWindmillManMusicBoxTex_WIDTH, gWindmillManMusicBoxTex_HEIGHT, 8)];
#define gWindmillManFingersAndToesTex_WIDTH 16
#define gWindmillManFingersAndToesTex_HEIGHT 16
extern u64 gWindmillManFingersAndToesTex[TEX_LEN(u64, gWindmillManFingersAndToesTex_WIDTH, gWindmillManFingersAndToesTex_HEIGHT, 8)];
#define gWindmillManEarTex_WIDTH 8
#define gWindmillManEarTex_HEIGHT 8
extern u64 gWindmillManEarTex[TEX_LEN(u64, gWindmillManEarTex_WIDTH, gWindmillManEarTex_HEIGHT, 8)];
#define gWindmillManUpperHornAndCrankTex_WIDTH 32
#define gWindmillManUpperHornAndCrankTex_HEIGHT 32
extern u64 gWindmillManUpperHornAndCrankTex[TEX_LEN(u64, gWindmillManUpperHornAndCrankTex_WIDTH, gWindmillManUpperHornAndCrankTex_HEIGHT, 8)];
#define gWindmillManShirtTex_WIDTH 32
#define gWindmillManShirtTex_HEIGHT 32
extern u64 gWindmillManShirtTex[TEX_LEN(u64, gWindmillManShirtTex_WIDTH, gWindmillManShirtTex_HEIGHT, 8)];
#define gWindmillManHornAndPipeTex_WIDTH 8
#define gWindmillManHornAndPipeTex_HEIGHT 8
extern u64 gWindmillManHornAndPipeTex[TEX_LEN(u64, gWindmillManHornAndPipeTex_WIDTH, gWindmillManHornAndPipeTex_HEIGHT, 8)];
#define gWindmillManEyeClosedTex_WIDTH 32
#define gWindmillManEyeClosedTex_HEIGHT 32
extern u64 gWindmillManEyeClosedTex[TEX_LEN(u64, gWindmillManEyeClosedTex_WIDTH, gWindmillManEyeClosedTex_HEIGHT, 8)];
#define gWindmillManEyeAngryTex_WIDTH 32
#define gWindmillManEyeAngryTex_HEIGHT 32
extern u64 gWindmillManEyeAngryTex[TEX_LEN(u64, gWindmillManEyeAngryTex_WIDTH, gWindmillManEyeAngryTex_HEIGHT, 8)];
#define gWindmillManMouthOpenTex_WIDTH 32
#define gWindmillManMouthOpenTex_HEIGHT 16
extern u64 gWindmillManMouthOpenTex[TEX_LEN(u64, gWindmillManMouthOpenTex_WIDTH, gWindmillManMouthOpenTex_HEIGHT, 8)];
#define gWindmillManMouthAngryTex_WIDTH 32
#define gWindmillManMouthAngryTex_HEIGHT 16
extern u64 gWindmillManMouthAngryTex[TEX_LEN(u64, gWindmillManMouthAngryTex_WIDTH, gWindmillManMouthAngryTex_HEIGHT, 8)];
#define gWindmillManHairTex_WIDTH 8
#define gWindmillManHairTex_HEIGHT 16
extern u64 gWindmillManHairTex[TEX_LEN(u64, gWindmillManHairTex_WIDTH, gWindmillManHairTex_HEIGHT, 8)];
extern StandardLimb gWindmillManTorsoLimb;
extern StandardLimb gWindmillManLeftThighLimb;
extern StandardLimb gWindmillManLeftLegLimb;
extern StandardLimb gWindmillManLeftFootLimb;
extern StandardLimb gWindmillManRightThighLimb;
extern StandardLimb gWindmillManRightLegLimb;
extern StandardLimb gWindmillManRightFootLimb;
extern StandardLimb gWindmillManChestAndMusicBoxPipeLimb;
extern StandardLimb gWindmillManLeftArmAndMusicBoxLimb;
extern StandardLimb gWindmillManLimb_006C0C;
extern StandardLimb gWindmillManRightShoulderLimb;
extern StandardLimb gWindmillManRightArmLimb;
extern StandardLimb gWindmillManRightHandAndCrankLimb;
extern StandardLimb gWindmillManHeadLimb;
extern StandardLimb gWindmillManHornLimb;
extern void* gWindmillManLimbs[];
typedef enum WindmillManLimb {
    /*  0 */ WINDMILL_MAN_LIMB_NONE,
    /*  1 */ WINDMILL_MAN_LIMB_TORSO,
    /*  2 */ WINDMILL_MAN_LIMB_LEFT_THIGH,
    /*  3 */ WINDMILL_MAN_LIMB_LEFT_LEG,
    /*  4 */ WINDMILL_MAN_LIMB_LEFT_FOOT,
    /*  5 */ WINDMILL_MAN_LIMB_RIGHT_THIGH,
    /*  6 */ WINDMILL_MAN_LIMB_RIGHT_LEG,
    /*  7 */ WINDMILL_MAN_LIMB_RIGHT_FOOT,
    /*  8 */ WINDMILL_MAN_LIMB_CHEST_MUSIC_BOX,
    /*  9 */ WINDMILL_MAN_LIMB_LEFT_ARM_MUSIC_BOX,
    /* 10 */ WINDMILL_MAN_LIMB_UNK,
    /* 11 */ WINDMILL_MAN_LIMB_RIGHT_SHOULDER,
    /* 12 */ WINDMILL_MAN_LIMB_RIGHT_ARM,
    /* 13 */ WINDMILL_MAN_LIMB_RIGHT_HAND_AND_CRANK,
    /* 14 */ WINDMILL_MAN_LIMB_HEAD,
    /* 15 */ WINDMILL_MAN_LIMB_HORN,
    /* 16 */ WINDMILL_MAN_LIMB_MAX
} WindmillManLimb;
extern FlexSkeletonHeader gWindmillManSkel;

#endif
