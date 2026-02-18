#ifndef OBJECT_NIW_H
#define OBJECT_NIW_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gCuccoFrameData[];
extern JointIndex gCuccoJointIndices[];
extern AnimationHeader gCuccoAnim;
extern Vtx gCuccoHeadVtx[];
extern Vtx gCuccoNeckVtx[];
extern Vtx gCuccoRightWingVtx[];
extern Vtx gCuccoLeftWingVtx[];
extern Vtx gCuccoLeftFootVtx[];
extern Vtx gCuccoRightFootVtx[];
extern Vtx gCuccoTailAndUndersideVtx[];
extern Gfx gCuccoNeckDL[27];
extern Gfx gCuccoHeadDL[107];
extern Gfx gCuccoTailAndUndersideDL[60];
extern Gfx gCuccoRightWingDL[23];
extern Gfx gCuccoRightFootDL[20];
extern Gfx gCuccoLeftWingDL[23];
extern Gfx gCuccoLeftFootDL[20];
#define gCuccoEyeTex_WIDTH 16
#define gCuccoEyeTex_HEIGHT 16
extern u64 gCuccoEyeTex[TEX_LEN(u64, gCuccoEyeTex_WIDTH, gCuccoEyeTex_HEIGHT, 16)];
#define gCuccoHeadFeathersTex_WIDTH 8
#define gCuccoHeadFeathersTex_HEIGHT 16
extern u64 gCuccoHeadFeathersTex[TEX_LEN(u64, gCuccoHeadFeathersTex_WIDTH, gCuccoHeadFeathersTex_HEIGHT, 16)];
#define gCuccoBaseFeathersTex_WIDTH 8
#define gCuccoBaseFeathersTex_HEIGHT 8
extern u64 gCuccoBaseFeathersTex[TEX_LEN(u64, gCuccoBaseFeathersTex_WIDTH, gCuccoBaseFeathersTex_HEIGHT, 16)];
#define gCuccoBeakTex_WIDTH 8
#define gCuccoBeakTex_HEIGHT 8
extern u64 gCuccoBeakTex[TEX_LEN(u64, gCuccoBeakTex_WIDTH, gCuccoBeakTex_HEIGHT, 16)];
#define gCuccoCombTex_WIDTH 16
#define gCuccoCombTex_HEIGHT 16
extern u64 gCuccoCombTex[TEX_LEN(u64, gCuccoCombTex_WIDTH, gCuccoCombTex_HEIGHT, 16)];
#define gCuccoTailFeathersTex_WIDTH 32
#define gCuccoTailFeathersTex_HEIGHT 32
extern u64 gCuccoTailFeathersTex[TEX_LEN(u64, gCuccoTailFeathersTex_WIDTH, gCuccoTailFeathersTex_HEIGHT, 16)];
#define gCuccoClawTex_WIDTH 8
#define gCuccoClawTex_HEIGHT 16
extern u64 gCuccoClawTex[TEX_LEN(u64, gCuccoClawTex_WIDTH, gCuccoClawTex_HEIGHT, 16)];
#define gCuccoTex_2180_WIDTH 16
#define gCuccoTex_2180_HEIGHT 16
extern u64 gCuccoTex_2180[TEX_LEN(u64, gCuccoTex_2180_WIDTH, gCuccoTex_2180_HEIGHT, 16)];
extern Vtx gCuccoEffectFeatherModelVtx[];
extern Gfx gCuccoEffectFeatherMaterialDL[15];
extern Gfx gCuccoEffectFeatherModelDL[3];
extern StandardLimb gCuccoRootLimb;
extern StandardLimb gCuccoLimb_244C;
extern StandardLimb gCuccoLimb_2458;
extern StandardLimb gCuccoTailAndUndersideLimb;
extern StandardLimb gCuccoLeftFootRootLimb;
extern StandardLimb gCuccoLeftFootLimb;
extern StandardLimb gCuccoLeftWingRootLimb;
extern StandardLimb gCuccoLeftWingLimb;
extern StandardLimb gCuccoRightFootRootLimb;
extern StandardLimb gCuccoRightFootLimb;
extern StandardLimb gCuccoRightWingRootLimb;
extern StandardLimb gCuccoRightWingLimb;
extern StandardLimb gCuccoUpperBodyRootLimb;
extern StandardLimb gCuccoNeckLimb;
extern StandardLimb gCuccoHeadLimb;
extern void* gCuccoLimbs[];
typedef enum gCuccoSkelLimb {
    /*  0 */ LIMB_OBJECT_NIW_002530_NONE,
    /*  1 */ LIMB_OBJECT_NIW_002440,
    /*  2 */ LIMB_OBJECT_NIW_00244C,
    /*  3 */ LIMB_OBJECT_NIW_002458,
    /*  4 */ LIMB_OBJECT_NIW_002464,
    /*  5 */ LIMB_OBJECT_NIW_002470,
    /*  6 */ LIMB_OBJECT_NIW_00247C,
    /*  7 */ LIMB_OBJECT_NIW_002488,
    /*  8 */ LIMB_OBJECT_NIW_002494,
    /*  9 */ LIMB_OBJECT_NIW_0024A0,
    /* 10 */ LIMB_OBJECT_NIW_0024AC,
    /* 11 */ LIMB_OBJECT_NIW_0024B8,
    /* 12 */ LIMB_OBJECT_NIW_0024C4,
    /* 13 */ LIMB_OBJECT_NIW_0024D0,
    /* 14 */ LIMB_OBJECT_NIW_0024DC,
    /* 15 */ LIMB_OBJECT_NIW_0024E8,
    /* 16 */ LIMB_OBJECT_NIW_002530_MAX
} gCuccoSkelLimb;
extern FlexSkeletonHeader gCuccoSkel;

#endif
