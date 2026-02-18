#ifndef OBJECT_PO_COMPOSER_H
#define OBJECT_PO_COMPOSER_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gPoeComposerAttackFrameData[];
extern JointIndex gPoeComposerAttackJointIndices[];
extern AnimationHeader gPoeComposerAttackAnim;
extern s16 gPoeComposerDamagedFrameData[];
extern JointIndex gPoeComposerDamagedJointIndices[];
extern AnimationHeader gPoeComposerDamagedAnim;
extern s16 gPoeComposerFleeFrameData[];
extern JointIndex gPoeComposerFleeJointIndices[];
extern AnimationHeader gPoeComposerFleeAnim;
extern s16 gPoeComposerFloatFrameData[];
extern JointIndex gPoeComposerFloatJointIndices[];
extern AnimationHeader gPoeComposerFloatAnim;
extern s16 gPoeComposerAppearFrameData[];
extern JointIndex gPoeComposerAppearJointIndices[];
extern AnimationHeader gPoeComposerAppearAnim;
extern s16 gPoeComposerDisappearFrameData[];
extern JointIndex gPoeComposerDisappearJointIndices[];
extern AnimationHeader gPoeComposerDisappearAnim;
#define object_po_composer_00001450_Tex_WIDTH 32
#define object_po_composer_00001450_Tex_HEIGHT 64
extern u64 object_po_composer_00001450_Tex[TEX_LEN(u64, object_po_composer_00001450_Tex_WIDTH, object_po_composer_00001450_Tex_HEIGHT, 8)];
extern Vtx gPoeComposerSoulVtx[];
extern Gfx gPoeComposerSoulDL[24];
extern Vtx object_po_composer_Vtx_001D50[];
extern Vtx object_po_composer_Vtx_001EA0[];
extern Vtx object_po_composer_Vtx_002130[];
extern Vtx object_po_composer_Vtx_002190[];
extern Vtx object_po_composer_Vtx_002210[];
extern Vtx object_po_composer_Vtx_002500[];
extern Vtx object_po_composer_Vtx_002600[];
extern Vtx object_po_composer_Vtx_002680[];
extern Gfx gPoeComposerLimbs_06006EE0_StandardLimb_06002970_DL[64];
extern Gfx gPoeComposerLimbs_06006F58_StandardLimb_06002B70_DL[30];
extern Gfx gPoeComposerLimbs_06006F1C_StandardLimb_06002C60_DL[89];
extern Gfx gPoeComposerLimbs_06006F28_StandardLimb_06002F28_DL[22];
extern Gfx gPoeComposerLimbs_06006F34_StandardLimb_06002FD8_DL[23];
extern Gfx gPoeComposerLimbs_06006EEC_StandardLimb_06003090_DL[87];
extern Gfx gPoeComposerLimbs_06006EF8_StandardLimb_06003348_DL[22];
extern Gfx gPoeComposerLimbs_06006F04_StandardLimb_060033F8_DL[33];
extern Vtx object_po_composer_Vtx_003500[];
extern Vtx object_po_composer_Vtx_003950[];
extern Vtx gPoeComposerLanternBottomVtx[];
extern Vtx gPoeComposerLanternTopVtx[];
extern Vtx gPoeComposerLanternVtx[];
extern Vtx gPoeComposerFlatHeadVtx[];
extern Gfx gPoeComposerLimbs_06006F4C_StandardLimb_06004100_DL[98];
extern Gfx gPoeComposerLimbs_06006F10_StandardLimb_06004410_DL[17];
extern Gfx gPoeComposerLanternBottomDL[19];
extern Gfx gPoeComposerLanternTopDL[14];
extern Gfx gPoeComposerLanternDL[19];
extern Gfx gPoeComposerFlatHeadDL[127];
extern Vtx gPoeComposerBurnVtx[];
extern Gfx gPoeComposerBurnDL[88];
#define object_po_composer_000054E0_Tex_WIDTH 16
#define object_po_composer_000054E0_Tex_HEIGHT 16
extern u64 object_po_composer_000054E0_Tex[TEX_LEN(u64, object_po_composer_000054E0_Tex_WIDTH, object_po_composer_000054E0_Tex_HEIGHT, 16)];
#define object_po_composer_000056E0_Tex_WIDTH 16
#define object_po_composer_000056E0_Tex_HEIGHT 16
extern u64 object_po_composer_000056E0_Tex[TEX_LEN(u64, object_po_composer_000056E0_Tex_WIDTH, object_po_composer_000056E0_Tex_HEIGHT, 16)];
#define object_po_composer_000058E0_Tex_WIDTH 16
#define object_po_composer_000058E0_Tex_HEIGHT 16
extern u64 object_po_composer_000058E0_Tex[TEX_LEN(u64, object_po_composer_000058E0_Tex_WIDTH, object_po_composer_000058E0_Tex_HEIGHT, 16)];
#define object_po_composer_00005AE0_Tex_WIDTH 16
#define object_po_composer_00005AE0_Tex_HEIGHT 16
extern u64 object_po_composer_00005AE0_Tex[TEX_LEN(u64, object_po_composer_00005AE0_Tex_WIDTH, object_po_composer_00005AE0_Tex_HEIGHT, 16)];
#define object_po_composer_00005CE0_Tex_WIDTH 16
#define object_po_composer_00005CE0_Tex_HEIGHT 32
extern u64 object_po_composer_00005CE0_Tex[TEX_LEN(u64, object_po_composer_00005CE0_Tex_WIDTH, object_po_composer_00005CE0_Tex_HEIGHT, 16)];
#define object_po_composer_000060E0_Tex_WIDTH 16
#define object_po_composer_000060E0_Tex_HEIGHT 16
extern u64 object_po_composer_000060E0_Tex[TEX_LEN(u64, object_po_composer_000060E0_Tex_WIDTH, object_po_composer_000060E0_Tex_HEIGHT, 16)];
#define object_po_composer_000062E0_Tex_WIDTH 16
#define object_po_composer_000062E0_Tex_HEIGHT 16
extern u64 object_po_composer_000062E0_Tex[TEX_LEN(u64, object_po_composer_000062E0_Tex_WIDTH, object_po_composer_000062E0_Tex_HEIGHT, 16)];
#define object_po_composer_000064E0_Tex_WIDTH 16
#define object_po_composer_000064E0_Tex_HEIGHT 16
extern u64 object_po_composer_000064E0_Tex[TEX_LEN(u64, object_po_composer_000064E0_Tex_WIDTH, object_po_composer_000064E0_Tex_HEIGHT, 16)];
#define object_po_composer_000066E0_Tex_WIDTH 16
#define object_po_composer_000066E0_Tex_HEIGHT 16
extern u64 object_po_composer_000066E0_Tex[TEX_LEN(u64, object_po_composer_000066E0_Tex_WIDTH, object_po_composer_000066E0_Tex_HEIGHT, 16)];
#define object_po_composer_000068E0_Tex_WIDTH 16
#define object_po_composer_000068E0_Tex_HEIGHT 16
extern u64 object_po_composer_000068E0_Tex[TEX_LEN(u64, object_po_composer_000068E0_Tex_WIDTH, object_po_composer_000068E0_Tex_HEIGHT, 16)];
#define object_po_composer_00006AE0_Tex_WIDTH 16
#define object_po_composer_00006AE0_Tex_HEIGHT 16
extern u64 object_po_composer_00006AE0_Tex[TEX_LEN(u64, object_po_composer_00006AE0_Tex_WIDTH, object_po_composer_00006AE0_Tex_HEIGHT, 16)];
#define object_po_composer_00006CE0_Tex_WIDTH 16
#define object_po_composer_00006CE0_Tex_HEIGHT 16
extern u64 object_po_composer_00006CE0_Tex[TEX_LEN(u64, object_po_composer_00006CE0_Tex_WIDTH, object_po_composer_00006CE0_Tex_HEIGHT, 16)];
extern StandardLimb gPoeComposerLimbs_06006EE0_StandardLimb;
extern StandardLimb gPoeComposerLimbs_06006EEC_StandardLimb;
extern StandardLimb gPoeComposerLimbs_06006EF8_StandardLimb;
extern StandardLimb gPoeComposerLimbs_06006F04_StandardLimb;
extern StandardLimb gPoeComposerLimbs_06006F10_StandardLimb;
extern StandardLimb gPoeComposerLimbs_06006F1C_StandardLimb;
extern StandardLimb gPoeComposerLimbs_06006F28_StandardLimb;
extern StandardLimb gPoeComposerLimbs_06006F34_StandardLimb;
extern StandardLimb gPoeComposerLimbs_06006F40_StandardLimb;
extern StandardLimb gPoeComposerLimbs_06006F4C_StandardLimb;
extern StandardLimb gPoeComposerLimbs_06006F58_StandardLimb;
extern void* gPoeComposerLimbs[];
typedef enum gPoeComposerSkelLimb {
    /*  0 */ LIMB_OBJECT_PO_COMPOSER_006F90_NONE,
    /*  1 */ LIMB_OBJECT_PO_COMPOSER_006EE0,
    /*  2 */ LIMB_OBJECT_PO_COMPOSER_006EEC,
    /*  3 */ LIMB_OBJECT_PO_COMPOSER_006EF8,
    /*  4 */ LIMB_OBJECT_PO_COMPOSER_006F04,
    /*  5 */ LIMB_OBJECT_PO_COMPOSER_006F10,
    /*  6 */ LIMB_OBJECT_PO_COMPOSER_006F1C,
    /*  7 */ LIMB_OBJECT_PO_COMPOSER_006F28,
    /*  8 */ LIMB_OBJECT_PO_COMPOSER_006F34,
    /*  9 */ LIMB_OBJECT_PO_COMPOSER_006F40,
    /* 10 */ LIMB_OBJECT_PO_COMPOSER_006F4C,
    /* 11 */ LIMB_OBJECT_PO_COMPOSER_006F58,
    /* 12 */ LIMB_OBJECT_PO_COMPOSER_006F90_MAX
} gPoeComposerSkelLimb;
extern FlexSkeletonHeader gPoeComposerSkel;

#endif
