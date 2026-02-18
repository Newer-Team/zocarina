#ifndef OBJECT_HINTNUTS_H
#define OBJECT_HINTNUTS_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gHintNutsSpitFrameData[];
extern JointIndex gHintNutsSpitJointIndices[];
extern AnimationHeader gHintNutsSpitAnim;
extern Vtx object_hintnuts_Vtx_000180[];
extern Vtx object_hintnuts_Vtx_0002E0[];
extern Vtx object_hintnuts_Vtx_000340[];
extern Vtx object_hintnuts_Vtx_000430[];
extern Vtx object_hintnuts_Vtx_000480[];
extern Vtx object_hintnuts_Vtx_0004F0[];
extern Vtx object_hintnuts_Vtx_000560[];
extern Vtx object_hintnuts_Vtx_0005B0[];
extern Vtx object_hintnuts_Vtx_0009F0[];
extern Gfx object_hintnuts_000B30_DL[39];
extern Gfx object_hintnuts_000C68_DL[21];
extern Gfx object_hintnuts_000D10_DL[35];
extern Gfx object_hintnuts_000E28_DL[20];
extern Gfx object_hintnuts_000EC8_DL[22];
extern Gfx object_hintnuts_000F78_DL[22];
extern Gfx object_hintnuts_001028_DL[20];
extern Gfx object_hintnuts_0010C8_DL[40];
extern Gfx object_hintnuts_001208_DL[23];
extern Vtx gHintNutsNutVtx[];
extern Gfx gHintNutsNutDL[18];
extern Vtx gHintNutsFlowerVtx[];
extern Gfx gHintNutsFlowerDL[25];
#define object_hintnuts_0015A8_Tex_WIDTH 32
#define object_hintnuts_0015A8_Tex_HEIGHT 32
extern u64 object_hintnuts_0015A8_Tex[TEX_LEN(u64, object_hintnuts_0015A8_Tex_WIDTH, object_hintnuts_0015A8_Tex_HEIGHT, 16)];
#define object_hintnuts_001DA8_Tex_WIDTH 16
#define object_hintnuts_001DA8_Tex_HEIGHT 16
extern u64 object_hintnuts_001DA8_Tex[TEX_LEN(u64, object_hintnuts_001DA8_Tex_WIDTH, object_hintnuts_001DA8_Tex_HEIGHT, 16)];
#define object_hintnuts_001FA8_Tex_WIDTH 8
#define object_hintnuts_001FA8_Tex_HEIGHT 8
extern u64 object_hintnuts_001FA8_Tex[TEX_LEN(u64, object_hintnuts_001FA8_Tex_WIDTH, object_hintnuts_001FA8_Tex_HEIGHT, 16)];
#define object_hintnuts_002028_Tex_WIDTH 8
#define object_hintnuts_002028_Tex_HEIGHT 8
extern u64 object_hintnuts_002028_Tex[TEX_LEN(u64, object_hintnuts_002028_Tex_WIDTH, object_hintnuts_002028_Tex_HEIGHT, 16)];
#define object_hintnuts_0020A8_Tex_WIDTH 8
#define object_hintnuts_0020A8_Tex_HEIGHT 8
extern u64 object_hintnuts_0020A8_Tex[TEX_LEN(u64, object_hintnuts_0020A8_Tex_WIDTH, object_hintnuts_0020A8_Tex_HEIGHT, 16)];
#define object_hintnuts_002128_Tex_WIDTH 16
#define object_hintnuts_002128_Tex_HEIGHT 16
extern u64 object_hintnuts_002128_Tex[TEX_LEN(u64, object_hintnuts_002128_Tex_WIDTH, object_hintnuts_002128_Tex_HEIGHT, 16)];
extern StandardLimb object_hintnuts_002328_Limb;
extern StandardLimb object_hintnuts_002334_Limb;
extern StandardLimb object_hintnuts_002340_Limb;
extern StandardLimb object_hintnuts_00234C_Limb;
extern StandardLimb object_hintnuts_002358_Limb;
extern StandardLimb object_hintnuts_002364_Limb;
extern StandardLimb object_hintnuts_002370_Limb;
extern StandardLimb object_hintnuts_00237C_Limb;
extern StandardLimb object_hintnuts_002388_Limb;
extern void* gHintNutsLimbs[];
typedef enum gHintNutsSkelLimb {
    /*  0 */ LIMB_OBJECT_HINTNUTS_0023B8_NONE,
    /*  1 */ LIMB_OBJECT_HINTNUTS_002328,
    /*  2 */ LIMB_OBJECT_HINTNUTS_002334,
    /*  3 */ LIMB_OBJECT_HINTNUTS_002340,
    /*  4 */ LIMB_OBJECT_HINTNUTS_00234C,
    /*  5 */ LIMB_OBJECT_HINTNUTS_002358,
    /*  6 */ LIMB_OBJECT_HINTNUTS_002364,
    /*  7 */ LIMB_OBJECT_HINTNUTS_002370,
    /*  8 */ LIMB_OBJECT_HINTNUTS_00237C,
    /*  9 */ LIMB_OBJECT_HINTNUTS_002388,
    /* 10 */ LIMB_OBJECT_HINTNUTS_0023B8_MAX
} gHintNutsSkelLimb;
extern FlexSkeletonHeader gHintNutsSkel;
extern s16 gHintNutsBurrowFrameData[];
extern JointIndex gHintNutsBurrowJointIndices[];
extern AnimationHeader gHintNutsBurrowAnim;
extern s16 gHintNutsUnburrowFrameData[];
extern JointIndex gHintNutsUnburrowJointIndices[];
extern AnimationHeader gHintNutsUnburrowAnim;
extern s16 gHintNutsLookAroundFrameData[];
extern JointIndex gHintNutsLookAroundJointIndices[];
extern AnimationHeader gHintNutsLookAroundAnim;
extern s16 gHintNutsFreezeFrameData[];
extern JointIndex gHintNutsFreezeJointIndices[];
extern AnimationHeader gHintNutsFreezeAnim;
extern s16 gHintNutsUpFrameData[];
extern JointIndex gHintNutsUpJointIndices[];
extern AnimationHeader gHintNutsUpAnim;
extern s16 gHintNutsTalkFrameData[];
extern JointIndex gHintNutsTalkJointIndices[];
extern AnimationHeader gHintNutsTalkAnim;
extern s16 gHintNutsStandFrameData[];
extern JointIndex gHintNutsStandJointIndices[];
extern AnimationHeader gHintNutsStandAnim;
extern s16 gHintNutsRunFrameData[];
extern JointIndex gHintNutsRunJointIndices[];
extern AnimationHeader gHintNutsRunAnim;

#endif
