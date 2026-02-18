#ifndef OBJECT_DNK_H
#define OBJECT_DNK_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gDntStageSpitFrameData[];
extern JointIndex gDntStageSpitJointIndices[];
extern AnimationHeader gDntStageSpitAnim;
extern s16 gDntStageHideFrameData[];
extern JointIndex gDntStageHideJointIndices[];
extern AnimationHeader gDntStageHideAnim;
extern s16 gDntStageDanceFrameData[];
extern JointIndex gDntStageDanceJointIndices[];
extern AnimationHeader gDntStageDanceAnim;
extern s16 gDntStageUnburrowFrameData[];
extern JointIndex gDntStageUnburrowJointIndices[];
extern AnimationHeader gDntStageUnburrowAnim;
extern s16 gDntStageUpFrameData[];
extern JointIndex gDntStageUpJointIndices[];
extern AnimationHeader gDntStageUpAnim;
extern Vtx object_dnk_Vtx_000B80[];
extern Vtx object_dnk_Vtx_000BE0[];
extern Vtx object_dnk_Vtx_000C80[];
extern Vtx object_dnk_Vtx_000D70[];
extern Vtx object_dnk_Vtx_000F30[];
extern Vtx object_dnk_Vtx_000F90[];
extern Vtx object_dnk_Vtx_000FF0[];
extern Vtx object_dnk_Vtx_001030[];
extern Vtx object_dnk_Vtx_001070[];
extern Vtx object_dnk_Vtx_0010E0[];
extern Gfx object_dnk_001150_DL[18];
extern Gfx object_dnk_0011E0_DL[23];
extern Gfx object_dnk_001298_DL[35];
extern Gfx object_dnk_0013B0_DL[32];
extern Gfx object_dnk_0014B0_DL[19];
extern Gfx object_dnk_001548_DL[19];
extern Gfx object_dnk_0015E0_DL[18];
extern Gfx object_dnk_001670_DL[18];
extern Gfx object_dnk_001700_DL[22];
extern Gfx object_dnk_0017B0_DL[22];
extern Vtx gDntStageNutVtx[];
extern Gfx gDntStageNutDL[18];
extern Vtx gDntStageFlowerVtx[];
extern Gfx gDntStageFlowerDL[26];
#define object_dnk_001BD0_Tex_WIDTH 32
#define object_dnk_001BD0_Tex_HEIGHT 32
extern u64 object_dnk_001BD0_Tex[TEX_LEN(u64, object_dnk_001BD0_Tex_WIDTH, object_dnk_001BD0_Tex_HEIGHT, 16)];
#define object_dnk_0023D0_Tex_WIDTH 16
#define object_dnk_0023D0_Tex_HEIGHT 16
extern u64 object_dnk_0023D0_Tex[TEX_LEN(u64, object_dnk_0023D0_Tex_WIDTH, object_dnk_0023D0_Tex_HEIGHT, 16)];
#define gDntStageEyeHalfTex_WIDTH 8
#define gDntStageEyeHalfTex_HEIGHT 8
extern u64 gDntStageEyeHalfTex[TEX_LEN(u64, gDntStageEyeHalfTex_WIDTH, gDntStageEyeHalfTex_HEIGHT, 16)];
#define object_dnk_002650_Tex_WIDTH 8
#define object_dnk_002650_Tex_HEIGHT 8
extern u64 object_dnk_002650_Tex[TEX_LEN(u64, object_dnk_002650_Tex_WIDTH, object_dnk_002650_Tex_HEIGHT, 16)];
#define object_dnk_0026D0_Tex_WIDTH 8
#define object_dnk_0026D0_Tex_HEIGHT 8
extern u64 object_dnk_0026D0_Tex[TEX_LEN(u64, object_dnk_0026D0_Tex_WIDTH, object_dnk_0026D0_Tex_HEIGHT, 16)];
#define gDntStageEyeShutTex_WIDTH 8
#define gDntStageEyeShutTex_HEIGHT 8
extern u64 gDntStageEyeShutTex[TEX_LEN(u64, gDntStageEyeShutTex_WIDTH, gDntStageEyeShutTex_HEIGHT, 16)];
#define gDntStageEyeOpenTex_WIDTH 8
#define gDntStageEyeOpenTex_HEIGHT 8
extern u64 gDntStageEyeOpenTex[TEX_LEN(u64, gDntStageEyeOpenTex_WIDTH, gDntStageEyeOpenTex_HEIGHT, 16)];
#define object_dnk_002850_Tex_WIDTH 16
#define object_dnk_002850_Tex_HEIGHT 16
extern u64 object_dnk_002850_Tex[TEX_LEN(u64, object_dnk_002850_Tex_WIDTH, object_dnk_002850_Tex_HEIGHT, 16)];
extern StandardLimb object_dnk_002A50_Limb;
extern StandardLimb object_dnk_002A5C_Limb;
extern StandardLimb object_dnk_002A68_Limb;
extern StandardLimb object_dnk_002A74_Limb;
extern StandardLimb object_dnk_002A80_Limb;
extern StandardLimb object_dnk_002A8C_Limb;
extern StandardLimb object_dnk_002A98_Limb;
extern StandardLimb object_dnk_002AA4_Limb;
extern StandardLimb object_dnk_002AB0_Limb;
extern StandardLimb object_dnk_002ABC_Limb;
extern void* gDntStageLimbs[];
typedef enum gDntStageSkelLimb {
    /*  0 */ LIMB_OBJECT_DNK_002AF0_NONE,
    /*  1 */ LIMB_OBJECT_DNK_002A50,
    /*  2 */ LIMB_OBJECT_DNK_002A5C,
    /*  3 */ LIMB_OBJECT_DNK_002A68,
    /*  4 */ LIMB_OBJECT_DNK_002A74,
    /*  5 */ LIMB_OBJECT_DNK_002A80,
    /*  6 */ LIMB_OBJECT_DNK_002A8C,
    /*  7 */ LIMB_OBJECT_DNK_002A98,
    /*  8 */ LIMB_OBJECT_DNK_002AA4,
    /*  9 */ LIMB_OBJECT_DNK_002AB0,
    /* 10 */ LIMB_OBJECT_DNK_002ABC,
    /* 11 */ LIMB_OBJECT_DNK_002AF0_MAX
} gDntStageSkelLimb;
extern SkeletonHeader gDntStageSkel;
extern s16 gDntStageWaitFrameData[];
extern JointIndex gDntStageWaitJointIndices[];
extern AnimationHeader gDntStageWaitAnim;
extern s16 gDntStageWalkFrameData[];
extern JointIndex gDntStageWalkJointIndices[];
extern AnimationHeader gDntStageWalkAnim;

#endif
