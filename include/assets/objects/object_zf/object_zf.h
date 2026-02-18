#ifndef OBJECT_ZF_H
#define OBJECT_ZF_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

//#define gZfDinolfosTLUT_TLUT_COUNT 256
extern u64 gZfDinolfosTLUT[];
#define object_zf_Tex_000200_WIDTH 8
#define object_zf_Tex_000200_HEIGHT 8
extern u64 object_zf_Tex_000200[TEX_LEN(u64, object_zf_Tex_000200_WIDTH, object_zf_Tex_000200_HEIGHT, 8)];
#define object_zf_Tex_000240_WIDTH 16
#define object_zf_Tex_000240_HEIGHT 16
extern u64 object_zf_Tex_000240[TEX_LEN(u64, object_zf_Tex_000240_WIDTH, object_zf_Tex_000240_HEIGHT, 8)];
#define gZfDinolfosSpineTex_WIDTH 8
#define gZfDinolfosSpineTex_HEIGHT 8
extern u64 gZfDinolfosSpineTex[TEX_LEN(u64, gZfDinolfosSpineTex_WIDTH, gZfDinolfosSpineTex_HEIGHT, 16)];
#define object_zf_Tex_0003C0_WIDTH 8
#define object_zf_Tex_0003C0_HEIGHT 8
extern u64 object_zf_Tex_0003C0[TEX_LEN(u64, object_zf_Tex_0003C0_WIDTH, object_zf_Tex_0003C0_HEIGHT, 16)];
#define object_zf_Tex_000440_WIDTH 16
#define object_zf_Tex_000440_HEIGHT 16
extern u64 object_zf_Tex_000440[TEX_LEN(u64, object_zf_Tex_000440_WIDTH, object_zf_Tex_000440_HEIGHT, 8)];
#define object_zf_Tex_000540_WIDTH 8
#define object_zf_Tex_000540_HEIGHT 8
extern u64 object_zf_Tex_000540[TEX_LEN(u64, object_zf_Tex_000540_WIDTH, object_zf_Tex_000540_HEIGHT, 8)];
#define object_zf_Tex_000580_WIDTH 8
#define object_zf_Tex_000580_HEIGHT 16
extern u64 object_zf_Tex_000580[TEX_LEN(u64, object_zf_Tex_000580_WIDTH, object_zf_Tex_000580_HEIGHT, 8)];
#define object_zf_Tex_000600_WIDTH 16
#define object_zf_Tex_000600_HEIGHT 16
extern u64 object_zf_Tex_000600[TEX_LEN(u64, object_zf_Tex_000600_WIDTH, object_zf_Tex_000600_HEIGHT, 8)];
#define gZfDinolfosNormalEyeTex_WIDTH 16
#define gZfDinolfosNormalEyeTex_HEIGHT 16
extern u64 gZfDinolfosNormalEyeTex[TEX_LEN(u64, gZfDinolfosNormalEyeTex_WIDTH, gZfDinolfosNormalEyeTex_HEIGHT, 16)];
extern Vtx gZfDinolfosRightThighVtx[];
extern Vtx gZfDinolfosRightShinVtx[];
extern Vtx gZfDinolfosRightFootVtx[];
extern Vtx gZfDinolfosLeftThighVtx[];
extern Vtx gZfDinolfosLeftShinVtx[];
extern Vtx gZfDinolfosLeftFootVtx[];
extern Vtx gZfDinolfosRightUpperArmVtx[];
extern Vtx gZfDinolfosRightForearmVtx[];
extern Vtx gZfDinolfosSwordVtx[];
extern Vtx gZfDinolfosLeftUpperArmVtx[];
extern Vtx gZfDinolfosLeftForearmVtx[];
extern Vtx gZfDinolfosLeftHandVtx[];
extern Vtx gZfDinolfosTailBaseVtx[];
extern Vtx gZfDinolfosTailTipVtx[];
extern Vtx gZfDinolfosScabbardVtx[];
extern Vtx gZfDinolfosTrunkVtx[];
extern Vtx gZfDinolfosChestArmorVtx[];
extern Vtx gZfDinolfosNeckVtx[];
extern Vtx gZfDinolfosJawVtx[];
extern Vtx gZfDinolfosHeadVtx[];
extern Gfx gZfDinolfosRightThighDL[77];
extern Gfx gZfDinolfosRightShinDL[50];
extern Gfx gZfDinolfosRightFootDL[43];
extern Gfx gZfDinolfosLeftThighDL[77];
extern Gfx gZfDinolfosLeftShinDL[50];
extern Gfx gZfDinolfosLeftFootDL[43];
extern Gfx gZfDinolfosRightUpperArmDL[63];
extern Gfx gZfDinolfosRightForearmDL[49];
extern Gfx gZfDinolfosSwordDL[56];
extern Gfx gZfDinolfosLeftUpperArmDL[63];
extern Gfx gZfDinolfosLeftForearmDL[49];
extern Gfx gZfDinolfosLeftHandDL[50];
extern Gfx gZfDinolfosTailBaseDL[106];
extern Gfx gZfDinolfosTailTipDL[21];
extern Gfx gZfDinolfosScabbardDL[21];
extern Gfx gZfDinolfosTrunkDL[92];
extern Gfx gZfDinolfosChestArmorDL[48];
extern Gfx gZfDinolfosNeckDL[83];
extern Gfx gZfDinolfosJawDL[134];
extern Gfx gZfDinolfosHeadDL[313];
extern StandardLimb gZfDinolfosRootLimb;
extern StandardLimb gZfDinolfosBodyRootLimb;
extern StandardLimb gZfDinolfosUpperBodyRootLimb;
extern StandardLimb gZfDinolfosNeckRootLimb;
extern StandardLimb gZfDinolfosHeadRootLimb;
extern StandardLimb gZfDinolfosJawRootRootLimb;
extern StandardLimb gZfDinolfosJawRootLimb;
extern StandardLimb gZfDinolfosJawLimb;
extern StandardLimb gZfDinolfosHeadLimb;
extern StandardLimb gZfDinolfosNeckLimb;
extern StandardLimb gZfDinolfosRightArmRootLimb;
extern StandardLimb gZfDinolfosRightUpperArmRootLimb;
extern StandardLimb gZfDinolfosRightForearmRootLimb;
extern StandardLimb gZfDinolfosSwordRootLimb;
extern StandardLimb gZfDinolfosSwordLimb;
extern StandardLimb gZfDinolfosRightForearmLimb;
extern StandardLimb gZfDinolfosRightUpperArmLimb;
extern StandardLimb gZfDinolfosLeftArmRootLimb;
extern StandardLimb gZfDinolfosLeftUpperArmRootLimb;
extern StandardLimb gZfDinolfosLeftForearmRootLimb;
extern StandardLimb gZfDinolfosLeftHandRootLimb;
extern StandardLimb gZfDinolfosLeftHandLimb;
extern StandardLimb gZfDinolfosLeftForearmLimb;
extern StandardLimb gZfDinolfosLeftUpperArmLimb;
extern StandardLimb gZfDinolfosChestArmorLimb;
extern StandardLimb gZfDinolfosTailRootLimb;
extern StandardLimb gZfDinolfosTailBaseRootLimb;
extern StandardLimb gZfDinolfosTailTipRootLimb;
extern StandardLimb gZfDinolfosTailTipLimb;
extern StandardLimb gZfDinolfosTailBaseLimb;
extern StandardLimb gZfDinolfosScabbardRootRootLimb;
extern StandardLimb gZfDinolfosScabbardRootLimb;
extern StandardLimb gZfDinolfosScabbardLimb;
extern StandardLimb gZfDinolfosRightLegRootLimb;
extern StandardLimb gZfDinolfosRightThighRootLimb;
extern StandardLimb gZfDinolfosRightShinRootLimb;
extern StandardLimb gZfDinolfosRightFootRootLimb;
extern StandardLimb gZfDinolfosRightFootLimb;
extern StandardLimb gZfDinolfosRightShinLimb;
extern StandardLimb gZfDinolfosRightThighLimb;
extern StandardLimb gZfDinolfosLeftLegRootLimb;
extern StandardLimb gZfDinolfosLeftThighRootLimb;
extern StandardLimb gZfDinolfosLeftShinRootLimb;
extern StandardLimb gZfDinolfosLeftFootRootLimb;
extern StandardLimb gZfDinolfosLeftFootLimb;
extern StandardLimb gZfDinolfosLeftShinLimb;
extern StandardLimb gZfDinolfosLeftThighLimb;
extern StandardLimb gZfDinolfosTrunkLimb;
extern void* gZfDinolfosLimbs[];
typedef enum gZfDinolfosSkelLimb {
    /*  0 */ LIMB_OBJECT_ZF_006690_NONE,
    /*  1 */ LIMB_OBJECT_ZF_006390,
    /*  2 */ LIMB_OBJECT_ZF_00639C,
    /*  3 */ LIMB_OBJECT_ZF_0063A8,
    /*  4 */ LIMB_OBJECT_ZF_0063B4,
    /*  5 */ LIMB_OBJECT_ZF_0063C0,
    /*  6 */ LIMB_OBJECT_ZF_0063CC,
    /*  7 */ LIMB_OBJECT_ZF_0063D8,
    /*  8 */ LIMB_OBJECT_ZF_0063E4,
    /*  9 */ LIMB_OBJECT_ZF_0063F0,
    /* 10 */ LIMB_OBJECT_ZF_0063FC,
    /* 11 */ LIMB_OBJECT_ZF_006408,
    /* 12 */ LIMB_OBJECT_ZF_006414,
    /* 13 */ LIMB_OBJECT_ZF_006420,
    /* 14 */ LIMB_OBJECT_ZF_00642C,
    /* 15 */ LIMB_OBJECT_ZF_006438,
    /* 16 */ LIMB_OBJECT_ZF_006444,
    /* 17 */ LIMB_OBJECT_ZF_006450,
    /* 18 */ LIMB_OBJECT_ZF_00645C,
    /* 19 */ LIMB_OBJECT_ZF_006468,
    /* 20 */ LIMB_OBJECT_ZF_006474,
    /* 21 */ LIMB_OBJECT_ZF_006480,
    /* 22 */ LIMB_OBJECT_ZF_00648C,
    /* 23 */ LIMB_OBJECT_ZF_006498,
    /* 24 */ LIMB_OBJECT_ZF_0064A4,
    /* 25 */ LIMB_OBJECT_ZF_0064B0,
    /* 26 */ LIMB_OBJECT_ZF_0064BC,
    /* 27 */ LIMB_OBJECT_ZF_0064C8,
    /* 28 */ LIMB_OBJECT_ZF_0064D4,
    /* 29 */ LIMB_OBJECT_ZF_0064E0,
    /* 30 */ LIMB_OBJECT_ZF_0064EC,
    /* 31 */ LIMB_OBJECT_ZF_0064F8,
    /* 32 */ LIMB_OBJECT_ZF_006504,
    /* 33 */ LIMB_OBJECT_ZF_006510,
    /* 34 */ LIMB_OBJECT_ZF_00651C,
    /* 35 */ LIMB_OBJECT_ZF_006528,
    /* 36 */ LIMB_OBJECT_ZF_006534,
    /* 37 */ LIMB_OBJECT_ZF_006540,
    /* 38 */ LIMB_OBJECT_ZF_00654C,
    /* 39 */ LIMB_OBJECT_ZF_006558,
    /* 40 */ LIMB_OBJECT_ZF_006564,
    /* 41 */ LIMB_OBJECT_ZF_006570,
    /* 42 */ LIMB_OBJECT_ZF_00657C,
    /* 43 */ LIMB_OBJECT_ZF_006588,
    /* 44 */ LIMB_OBJECT_ZF_006594,
    /* 45 */ LIMB_OBJECT_ZF_0065A0,
    /* 46 */ LIMB_OBJECT_ZF_0065AC,
    /* 47 */ LIMB_OBJECT_ZF_0065B8,
    /* 48 */ LIMB_OBJECT_ZF_0065C4,
    /* 49 */ LIMB_OBJECT_ZF_006690_MAX
} gZfDinolfosSkelLimb;
extern SkeletonHeader gZfDinolfosSkel;
extern s16 gZfWalkingFrameData[];
extern JointIndex gZfWalkingJointIndices[];
extern AnimationHeader gZfWalkingAnim;
extern s16 gZfLandingFrameData[];
extern JointIndex gZfLandingJointIndices[];
extern AnimationHeader gZfLandingAnim;
extern s16 gZfJumpingFrameData[];
extern JointIndex gZfJumpingJointIndices[];
extern AnimationHeader gZfJumpingAnim;
extern s16 gZfSlashFrameData[];
extern JointIndex gZfSlashJointIndices[];
extern AnimationHeader gZfSlashAnim;
extern s16 gZfCryingFrameData[];
extern JointIndex gZfCryingJointIndices[];
extern AnimationHeader gZfCryingAnim;
#define object_zf_Tex_00B120_WIDTH 32
#define object_zf_Tex_00B120_HEIGHT 32
extern u64 object_zf_Tex_00B120[TEX_LEN(u64, object_zf_Tex_00B120_WIDTH, object_zf_Tex_00B120_HEIGHT, 16)];
#define object_zf_Tex_00B920_WIDTH 8
#define object_zf_Tex_00B920_HEIGHT 8
extern u64 object_zf_Tex_00B920[TEX_LEN(u64, object_zf_Tex_00B920_WIDTH, object_zf_Tex_00B920_HEIGHT, 16)];
#define object_zf_Tex_00B9A0_WIDTH 8
#define object_zf_Tex_00B9A0_HEIGHT 8
extern u64 object_zf_Tex_00B9A0[TEX_LEN(u64, object_zf_Tex_00B9A0_WIDTH, object_zf_Tex_00B9A0_HEIGHT, 16)];
#define object_zf_Tex_00BA20_WIDTH 8
#define object_zf_Tex_00BA20_HEIGHT 8
extern u64 object_zf_Tex_00BA20[TEX_LEN(u64, object_zf_Tex_00BA20_WIDTH, object_zf_Tex_00BA20_HEIGHT, 16)];
#define object_zf_Tex_00BAA0_WIDTH 8
#define object_zf_Tex_00BAA0_HEIGHT 8
extern u64 object_zf_Tex_00BAA0[TEX_LEN(u64, object_zf_Tex_00BAA0_WIDTH, object_zf_Tex_00BAA0_HEIGHT, 16)];
#define object_zf_Tex_00BB20_WIDTH 8
#define object_zf_Tex_00BB20_HEIGHT 8
extern u64 object_zf_Tex_00BB20[TEX_LEN(u64, object_zf_Tex_00BB20_WIDTH, object_zf_Tex_00BB20_HEIGHT, 16)];
#define object_zf_Tex_00BBA0_WIDTH 16
#define object_zf_Tex_00BBA0_HEIGHT 16
extern u64 object_zf_Tex_00BBA0[TEX_LEN(u64, object_zf_Tex_00BBA0_WIDTH, object_zf_Tex_00BBA0_HEIGHT, 16)];
#define object_zf_Tex_00BDA0_WIDTH 8
#define object_zf_Tex_00BDA0_HEIGHT 8
extern u64 object_zf_Tex_00BDA0[TEX_LEN(u64, object_zf_Tex_00BDA0_WIDTH, object_zf_Tex_00BDA0_HEIGHT, 16)];
#define object_zf_Tex_00BE20_WIDTH 16
#define object_zf_Tex_00BE20_HEIGHT 16
extern u64 object_zf_Tex_00BE20[TEX_LEN(u64, object_zf_Tex_00BE20_WIDTH, object_zf_Tex_00BE20_HEIGHT, 16)];
#define object_zf_Tex_00C020_WIDTH 16
#define object_zf_Tex_00C020_HEIGHT 16
extern u64 object_zf_Tex_00C020[TEX_LEN(u64, object_zf_Tex_00C020_WIDTH, object_zf_Tex_00C020_HEIGHT, 16)];
#define object_zf_Tex_00C220_WIDTH 8
#define object_zf_Tex_00C220_HEIGHT 8
extern u64 object_zf_Tex_00C220[TEX_LEN(u64, object_zf_Tex_00C220_WIDTH, object_zf_Tex_00C220_HEIGHT, 16)];
#define object_zf_Tex_00C2A0_WIDTH 8
#define object_zf_Tex_00C2A0_HEIGHT 8
extern u64 object_zf_Tex_00C2A0[TEX_LEN(u64, object_zf_Tex_00C2A0_WIDTH, object_zf_Tex_00C2A0_HEIGHT, 16)];
extern Vtx gZfLizalfosLeftThighVtx[];
extern Gfx gZfLizalfosLeftThighDL[24];
extern Vtx gZfLizalfosLeftShinVtx[];
extern Gfx gZfLizalfosLeftShinDL[43];
extern Vtx gZfLizalfosLeftFootVtx[];
extern Gfx gZfLizalfosLeftFootDL[36];
extern Vtx gZfLizalfosLeftUpperArmVtx[];
extern Gfx gZfLizalfosLeftUpperArmDL[23];
extern Vtx gZfLizalfosLeftForearmVtx[];
extern Gfx gZfLizalfosLeftForearmDL[32];
extern Vtx gZfLizalfosLeftHandVtx[];
extern Gfx gZfLizalfosLeftHandDL[42];
extern Vtx gZfLizalfosRightThighVtx[];
extern Gfx gZfLizalfosRightThighDL[24];
extern Vtx gZfLizalfosRightShinVtx[];
extern Gfx gZfLizalfosRightShinDL[43];
extern Vtx gZfLizalfosRightFootVtx[];
extern Gfx gZfLizalfosRightFootDL[36];
extern Vtx gZfLizalfosRightUpperArmVtx[];
extern Gfx gZfLizalfosRightUpperArmDL[23];
extern Vtx gZfLizalfosRightForearmVtx[];
extern Gfx gZfLizalfosRightForearmDL[32];
extern Vtx gZfLizalfosSwordVtx[];
extern Gfx gZfLizalfosSwordDL[65];
extern Vtx gZfEmptyHandVtx[];
extern Gfx gZfEmptyHandDL[42];
extern Vtx gZfLizalfosJawVtx[];
extern Gfx gZfLizalfosJawDL[31];
extern Vtx gZfLizalfosHeadVtx[];
extern Gfx gZfLizalfosHeadDL[57];
extern Vtx gZfLizalfosTrunkVtx[];
extern Gfx gZfLizalfosTrunkDL[53];
extern Vtx gZfLizalfosNeckVtx[];
extern Gfx gZfLizalfosNeckDL[40];
extern Vtx gZfLizalfosChestArmorVtx[];
extern Gfx gZfLizalfosChestArmorDL[68];
extern Vtx gZfLizalfosTailBaseVtx[];
extern Gfx gZfLizalfosTailBaseDL[37];
extern Vtx gZfLizalfosTailTipVtx[];
extern Gfx gZfLizalfosTailTipDL[35];
extern Vtx gZfLizalfosScabbardVtx[];
extern Gfx gZfLizalfosScabbardDL[30];
extern Vtx gZfSheathedSwordVtx[];
extern Gfx gZfSheathedSwordDL[43];
extern StandardLimb gZfLizalfosRootLimb;
extern StandardLimb gZfLizalfosBodyRootLimb;
extern StandardLimb gZfLizalfosUpperBodyRootLimb;
extern StandardLimb gZfLizalfosNeckRootLimb;
extern StandardLimb gZfLizalfosHeadRootLimb;
extern StandardLimb gZfLizalfosJawRootRootLimb;
extern StandardLimb gZfLizalfosJawRootLimb;
extern StandardLimb gZfLizalfosJawLimb;
extern StandardLimb gZfLizalfosHeadLimb;
extern StandardLimb gZfLizalfosNeckLimb;
extern StandardLimb gZfLizalfosRightArmRootLimb;
extern StandardLimb gZfLizalfosRightUpperArmRootLimb;
extern StandardLimb gZfLizalfosRightForearmRootLimb;
extern StandardLimb gZfLizalfosSwordRootLimb;
extern StandardLimb gZfLizalfosSwordLimb;
extern StandardLimb gZfLizalfosRightForearmLimb;
extern StandardLimb gZfLizalfosRightUpperArmLimb;
extern StandardLimb gZfLizalfosLeftArmRootLimb;
extern StandardLimb gZfLizalfosLeftUpperArmRootLimb;
extern StandardLimb gZfLizalfosLeftForearmRootLimb;
extern StandardLimb gZfLizalfosLeftHandRootLimb;
extern StandardLimb gZfLizalfosLeftHandLimb;
extern StandardLimb gZfLizalfosLeftForearmLimb;
extern StandardLimb gZfLizalfosLeftUpperArmLimb;
extern StandardLimb gZfLizalfosChestArmorLimb;
extern StandardLimb gZfLizalfosTailRootLimb;
extern StandardLimb gZfLizalfosTailBaseRootLimb;
extern StandardLimb gZfLizalfosTailTipRootLimb;
extern StandardLimb gZfLizalfosTailTipLimb;
extern StandardLimb gZfLizalfosTailBaseLimb;
extern StandardLimb gZfLizalfosScabbardRootRootLimb;
extern StandardLimb gZfLizalfosScabbardRootLimb;
extern StandardLimb gZfLizalfosScabbardLimb;
extern StandardLimb gZfLizalfosRightLegRootLimb;
extern StandardLimb gZfLizalfosRightThighRootLimb;
extern StandardLimb gZfLizalfosRightShinRootLimb;
extern StandardLimb gZfLizalfosRightFootRootLimb;
extern StandardLimb gZfLizalfosRightFootLimb;
extern StandardLimb gZfLizalfosRightShinLimb;
extern StandardLimb gZfLizalfosRightThighLimb;
extern StandardLimb gZfLizalfosLeftLegRootLimb;
extern StandardLimb gZfLizalfosLeftThighRootLimb;
extern StandardLimb gZfLizalfosLeftShinRootLimb;
extern StandardLimb gZfLizalfosLeftFootRootLimb;
extern StandardLimb gZfLizalfosLeftFootLimb;
extern StandardLimb gZfLizalfosLeftShinLimb;
extern StandardLimb gZfLizalfosLeftThighLimb;
extern StandardLimb gZfLizalfosTrunkLimb;
extern void* gZfLizalfosLimbs[];
typedef enum gZfLizalfosSkelLimb {
    /*  0 */ LIMB_OBJECT_ZF_0104B8_NONE,
    /*  1 */ LIMB_OBJECT_ZF_0101B8,
    /*  2 */ LIMB_OBJECT_ZF_0101C4,
    /*  3 */ LIMB_OBJECT_ZF_0101D0,
    /*  4 */ LIMB_OBJECT_ZF_0101DC,
    /*  5 */ LIMB_OBJECT_ZF_0101E8,
    /*  6 */ LIMB_OBJECT_ZF_0101F4,
    /*  7 */ LIMB_OBJECT_ZF_010200,
    /*  8 */ LIMB_OBJECT_ZF_01020C,
    /*  9 */ LIMB_OBJECT_ZF_010218,
    /* 10 */ LIMB_OBJECT_ZF_010224,
    /* 11 */ LIMB_OBJECT_ZF_010230,
    /* 12 */ LIMB_OBJECT_ZF_01023C,
    /* 13 */ LIMB_OBJECT_ZF_010248,
    /* 14 */ LIMB_OBJECT_ZF_010254,
    /* 15 */ LIMB_OBJECT_ZF_010260,
    /* 16 */ LIMB_OBJECT_ZF_01026C,
    /* 17 */ LIMB_OBJECT_ZF_010278,
    /* 18 */ LIMB_OBJECT_ZF_010284,
    /* 19 */ LIMB_OBJECT_ZF_010290,
    /* 20 */ LIMB_OBJECT_ZF_01029C,
    /* 21 */ LIMB_OBJECT_ZF_0102A8,
    /* 22 */ LIMB_OBJECT_ZF_0102B4,
    /* 23 */ LIMB_OBJECT_ZF_0102C0,
    /* 24 */ LIMB_OBJECT_ZF_0102CC,
    /* 25 */ LIMB_OBJECT_ZF_0102D8,
    /* 26 */ LIMB_OBJECT_ZF_0102E4,
    /* 27 */ LIMB_OBJECT_ZF_0102F0,
    /* 28 */ LIMB_OBJECT_ZF_0102FC,
    /* 29 */ LIMB_OBJECT_ZF_010308,
    /* 30 */ LIMB_OBJECT_ZF_010314,
    /* 31 */ LIMB_OBJECT_ZF_010320,
    /* 32 */ LIMB_OBJECT_ZF_01032C,
    /* 33 */ LIMB_OBJECT_ZF_010338,
    /* 34 */ LIMB_OBJECT_ZF_010344,
    /* 35 */ LIMB_OBJECT_ZF_010350,
    /* 36 */ LIMB_OBJECT_ZF_01035C,
    /* 37 */ LIMB_OBJECT_ZF_010368,
    /* 38 */ LIMB_OBJECT_ZF_010374,
    /* 39 */ LIMB_OBJECT_ZF_010380,
    /* 40 */ LIMB_OBJECT_ZF_01038C,
    /* 41 */ LIMB_OBJECT_ZF_010398,
    /* 42 */ LIMB_OBJECT_ZF_0103A4,
    /* 43 */ LIMB_OBJECT_ZF_0103B0,
    /* 44 */ LIMB_OBJECT_ZF_0103BC,
    /* 45 */ LIMB_OBJECT_ZF_0103C8,
    /* 46 */ LIMB_OBJECT_ZF_0103D4,
    /* 47 */ LIMB_OBJECT_ZF_0103E0,
    /* 48 */ LIMB_OBJECT_ZF_0103EC,
    /* 49 */ LIMB_OBJECT_ZF_0104B8_MAX
} gZfLizalfosSkelLimb;
extern SkeletonHeader gZfLizalfosSkel;
extern s16 gZfHopCrouchingFrameData[];
extern JointIndex gZfHopCrouchingJointIndices[];
extern AnimationHeader gZfHopCrouchingAnim;
extern s16 gZfHopLeapingFrameData[];
extern JointIndex gZfHopLeapingJointIndices[];
extern AnimationHeader gZfHopLeapingAnim;
extern s16 gZfHopLandingFrameData[];
extern JointIndex gZfHopLandingJointIndices[];
extern AnimationHeader gZfHopLandingAnim;
extern s16 gZfSheathingSwordFrameData[];
extern JointIndex gZfSheathingSwordJointIndices[];
extern AnimationHeader gZfSheathingSwordAnim;
extern s16 gZfDrawingSwordFrameData[];
extern JointIndex gZfDrawingSwordJointIndices[];
extern AnimationHeader gZfDrawingSwordAnim;
extern s16 gZfDyingFrameData[];
extern JointIndex gZfDyingJointIndices[];
extern AnimationHeader gZfDyingAnim;
extern s16 gZfKnockedBackFrameData[];
extern JointIndex gZfKnockedBackJointIndices[];
extern AnimationHeader gZfKnockedBackAnim;
extern s16 gZfSidesteppingFrameData[];
extern JointIndex gZfSidesteppingJointIndices[];
extern AnimationHeader gZfSidesteppingAnim;

#endif
