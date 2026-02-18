#ifndef OBJECT_PO_FIELD_H
#define OBJECT_PO_FIELD_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gPoeFieldAttackFrameData[];
extern JointIndex gPoeFieldAttackJointIndices[];
extern AnimationHeader gPoeFieldAttackAnim;
extern s16 gPoeFieldDamagedFrameData[];
extern JointIndex gPoeFieldDamagedJointIndices[];
extern AnimationHeader gPoeFieldDamagedAnim;
extern s16 gPoeFieldFleeFrameData[];
extern JointIndex gPoeFieldFleeJointIndices[];
extern AnimationHeader gPoeFieldFleeAnim;
extern s16 gPoeFieldFloatFrameData[];
extern JointIndex gPoeFieldFloatJointIndices[];
extern AnimationHeader gPoeFieldFloatAnim;
extern s16 gPoeFieldAppearFrameData[];
extern JointIndex gPoeFieldAppearJointIndices[];
extern AnimationHeader gPoeFieldAppearAnim;
extern s16 gPoeFieldDisappearFrameData[];
extern JointIndex gPoeFieldDisappearJointIndices[];
extern AnimationHeader gPoeFieldDisappearAnim;
#define gBigPoeSoulTex_WIDTH 32
#define gBigPoeSoulTex_HEIGHT 64
extern u64 gBigPoeSoulTex[TEX_LEN(u64, gBigPoeSoulTex_WIDTH, gBigPoeSoulTex_HEIGHT, 8)];
#define gPoeFieldSoulTex_WIDTH 32
#define gPoeFieldSoulTex_HEIGHT 64
extern u64 gPoeFieldSoulTex[TEX_LEN(u64, gPoeFieldSoulTex_WIDTH, gPoeFieldSoulTex_HEIGHT, 8)];
extern Vtx gPoeFieldSoulVtx[];
extern Gfx gPoeFieldSoulDL[24];
#define object_po_field_002470_Tex_WIDTH 16
#define object_po_field_002470_Tex_HEIGHT 16
extern u64 object_po_field_002470_Tex[TEX_LEN(u64, object_po_field_002470_Tex_WIDTH, object_po_field_002470_Tex_HEIGHT, 16)];
#define object_po_field_002670_Tex_WIDTH 16
#define object_po_field_002670_Tex_HEIGHT 16
extern u64 object_po_field_002670_Tex[TEX_LEN(u64, object_po_field_002670_Tex_WIDTH, object_po_field_002670_Tex_HEIGHT, 16)];
#define object_po_field_002870_Tex_WIDTH 32
#define object_po_field_002870_Tex_HEIGHT 32
extern u64 object_po_field_002870_Tex[TEX_LEN(u64, object_po_field_002870_Tex_WIDTH, object_po_field_002870_Tex_HEIGHT, 16)];
#define object_po_field_003070_Tex_WIDTH 16
#define object_po_field_003070_Tex_HEIGHT 16
extern u64 object_po_field_003070_Tex[TEX_LEN(u64, object_po_field_003070_Tex_WIDTH, object_po_field_003070_Tex_HEIGHT, 16)];
#define object_po_field_003270_Tex_WIDTH 8
#define object_po_field_003270_Tex_HEIGHT 8
extern u64 object_po_field_003270_Tex[TEX_LEN(u64, object_po_field_003270_Tex_WIDTH, object_po_field_003270_Tex_HEIGHT, 16)];
#define object_po_field_0032F0_Tex_WIDTH 16
#define object_po_field_0032F0_Tex_HEIGHT 8
extern u64 object_po_field_0032F0_Tex[TEX_LEN(u64, object_po_field_0032F0_Tex_WIDTH, object_po_field_0032F0_Tex_HEIGHT, 16)];
#define object_po_field_0033F0_Tex_WIDTH 16
#define object_po_field_0033F0_Tex_HEIGHT 16
extern u64 object_po_field_0033F0_Tex[TEX_LEN(u64, object_po_field_0033F0_Tex_WIDTH, object_po_field_0033F0_Tex_HEIGHT, 16)];
#define object_po_field_0035F0_Tex_WIDTH 16
#define object_po_field_0035F0_Tex_HEIGHT 16
extern u64 object_po_field_0035F0_Tex[TEX_LEN(u64, object_po_field_0035F0_Tex_WIDTH, object_po_field_0035F0_Tex_HEIGHT, 16)];
#define object_po_field_0037F0_Tex_WIDTH 16
#define object_po_field_0037F0_Tex_HEIGHT 16
extern u64 object_po_field_0037F0_Tex[TEX_LEN(u64, object_po_field_0037F0_Tex_WIDTH, object_po_field_0037F0_Tex_HEIGHT, 16)];
extern Vtx gPoeFieldLanternVtx[];
extern Vtx gPoeFieldLanternTopVtx[];
extern Vtx object_po_field_Vtx_003BA0[];
extern Vtx object_po_field_Vtx_003C00[];
extern Vtx object_po_field_Vtx_003DA0[];
extern Vtx object_po_field_Vtx_003F50[];
extern Vtx object_po_field_Vtx_003FD0[];
extern Vtx object_po_field_Vtx_004060[];
extern Vtx object_po_field_Vtx_004110[];
extern Vtx object_po_field_Vtx_004190[];
extern Vtx gBigPoeCloakVtx[];
extern Vtx gBigPoeFaceVtx[];
extern Vtx gBigPoeBodyVtx[];
extern Gfx gPoeFieldLanternDL[36];
extern Gfx gPoeFieldLanternTopDL[17];
extern Gfx object_po_field_004D48_DL[22];
extern Gfx object_po_field_004DF8_DL[45];
extern Gfx object_po_field_004F60_DL[31];
extern Gfx object_po_field_005058_DL[20];
extern Gfx object_po_field_0050F8_DL[21];
extern Gfx object_po_field_0051A0_DL[29];
extern Gfx object_po_field_005288_DL[20];
extern Gfx object_po_field_005328_DL[95];
extern Gfx gBigPoeCloakDL[92];
extern Gfx gBigPoeFaceDL[30];
extern Gfx gBigPoeBodyDL[24];
#define object_po_field_005AB0_Tex_WIDTH 16
#define object_po_field_005AB0_Tex_HEIGHT 16
extern u64 object_po_field_005AB0_Tex[TEX_LEN(u64, object_po_field_005AB0_Tex_WIDTH, object_po_field_005AB0_Tex_HEIGHT, 16)];
#define object_po_field_005CB0_Tex_WIDTH 8
#define object_po_field_005CB0_Tex_HEIGHT 8
extern u64 object_po_field_005CB0_Tex[TEX_LEN(u64, object_po_field_005CB0_Tex_WIDTH, object_po_field_005CB0_Tex_HEIGHT, 16)];
extern Vtx gPoeFieldBurnVtx[];
extern Gfx gPoeFieldBurnDL[90];
extern StandardLimb object_po_field_0069A0_Limb;
extern StandardLimb object_po_field_0069AC_Limb;
extern StandardLimb object_po_field_0069B8_Limb;
extern StandardLimb object_po_field_0069C4_Limb;
extern StandardLimb object_po_field_0069D0_Limb;
extern StandardLimb object_po_field_0069DC_Limb;
extern StandardLimb object_po_field_0069E8_Limb;
extern StandardLimb object_po_field_0069F4_Limb;
extern StandardLimb object_po_field_006A00_Limb;
extern void* gPoeFieldLimbs[];
typedef enum gPoeFieldSkelLimb {
    /*  0 */ LIMB_OBJECT_PO_FIELD_006A30_NONE,
    /*  1 */ LIMB_OBJECT_PO_FIELD_0069A0,
    /*  2 */ LIMB_OBJECT_PO_FIELD_0069AC,
    /*  3 */ LIMB_OBJECT_PO_FIELD_0069B8,
    /*  4 */ LIMB_OBJECT_PO_FIELD_0069C4,
    /*  5 */ LIMB_OBJECT_PO_FIELD_0069D0,
    /*  6 */ LIMB_OBJECT_PO_FIELD_0069DC,
    /*  7 */ LIMB_OBJECT_PO_FIELD_0069E8,
    /*  8 */ LIMB_OBJECT_PO_FIELD_0069F4,
    /*  9 */ LIMB_OBJECT_PO_FIELD_006A00,
    /* 10 */ LIMB_OBJECT_PO_FIELD_006A30_MAX
} gPoeFieldSkelLimb;
extern SkeletonHeader gPoeFieldSkel;

#endif
