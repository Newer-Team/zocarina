#ifndef OBJECT_AM_H
#define OBJECT_AM_H

#include "animation.h"
#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern BgCamInfo gArmosBgCamList[];
extern SurfaceType gArmosSurfaceTypes[];
extern u8 object_am_000010_Blob[];
extern CollisionPoly gArmosPolyList[];
extern Vec3s gArmosVtxList[];
extern CollisionHeader gArmosCol;
extern s16 gArmosHopFrameData[];
extern JointIndex gArmosHopJointIndices[];
extern AnimationHeader gArmosHopAnim;
extern s16 gArmosRicochetFrameData[];
extern JointIndex gArmosRicochetJointIndices[];
extern AnimationHeader gArmosRicochetAnim;
extern Vtx object_am_Vtx_000350[];
extern Gfx object_am_0005D0_DL[35];
extern Vtx gArmosUnusedVtx[];
extern Gfx gArmosUnusedDL[18];
extern Vtx object_am_Vtx_000838[];
extern Gfx object_am_0016C8_DL[252];
extern Vtx object_am_Vtx_001EA8[];
extern Gfx object_am_002278_DL[57];
extern Vtx object_am_Vtx_002440[];
extern Gfx object_am_002550_DL[29];
#define object_am_002638_Tex_WIDTH 32
#define object_am_002638_Tex_HEIGHT 32
extern u64 object_am_002638_Tex[TEX_LEN(u64, object_am_002638_Tex_WIDTH, object_am_002638_Tex_HEIGHT, 4)];
#define object_am_002838_Tex_WIDTH 16
#define object_am_002838_Tex_HEIGHT 32
extern u64 object_am_002838_Tex[TEX_LEN(u64, object_am_002838_Tex_WIDTH, object_am_002838_Tex_HEIGHT, 4)];
#define object_am_002938_Tex_WIDTH 16
#define object_am_002938_Tex_HEIGHT 32
extern u64 object_am_002938_Tex[TEX_LEN(u64, object_am_002938_Tex_WIDTH, object_am_002938_Tex_HEIGHT, 16)];
#define object_am_002D38_Tex_WIDTH 16
#define object_am_002D38_Tex_HEIGHT 32
extern u64 object_am_002D38_Tex[TEX_LEN(u64, object_am_002D38_Tex_WIDTH, object_am_002D38_Tex_HEIGHT, 4)];
#define object_am_002E38_Tex_WIDTH 32
#define object_am_002E38_Tex_HEIGHT 32
extern u64 object_am_002E38_Tex[TEX_LEN(u64, object_am_002E38_Tex_WIDTH, object_am_002E38_Tex_HEIGHT, 4)];
#define object_am_003038_Tex_WIDTH 32
#define object_am_003038_Tex_HEIGHT 32
extern u64 object_am_003038_Tex[TEX_LEN(u64, object_am_003038_Tex_WIDTH, object_am_003038_Tex_HEIGHT, 4)];
#define object_am_003238_Tex_WIDTH 32
#define object_am_003238_Tex_HEIGHT 32
extern u64 object_am_003238_Tex[TEX_LEN(u64, object_am_003238_Tex_WIDTH, object_am_003238_Tex_HEIGHT, 16)];
#define object_am_003A38_Tex_WIDTH 16
#define object_am_003A38_Tex_HEIGHT 16
extern u64 object_am_003A38_Tex[TEX_LEN(u64, object_am_003A38_Tex_WIDTH, object_am_003A38_Tex_HEIGHT, 16)];
#define object_am_003C38_Tex_WIDTH 32
#define object_am_003C38_Tex_HEIGHT 32
extern u64 object_am_003C38_Tex[TEX_LEN(u64, object_am_003C38_Tex_WIDTH, object_am_003C38_Tex_HEIGHT, 16)];
#define object_am_004438_Tex_WIDTH 32
#define object_am_004438_Tex_HEIGHT 32
extern u64 object_am_004438_Tex[TEX_LEN(u64, object_am_004438_Tex_WIDTH, object_am_004438_Tex_HEIGHT, 16)];
#define object_am_004C38_Tex_WIDTH 32
#define object_am_004C38_Tex_HEIGHT 32
extern u64 object_am_004C38_Tex[TEX_LEN(u64, object_am_004C38_Tex_WIDTH, object_am_004C38_Tex_HEIGHT, 16)];
#define object_am_005438_Tex_WIDTH 16
#define object_am_005438_Tex_HEIGHT 8
extern u64 object_am_005438_Tex[TEX_LEN(u64, object_am_005438_Tex_WIDTH, object_am_005438_Tex_HEIGHT, 4)];
#define object_am_005478_Tex_WIDTH 16
#define object_am_005478_Tex_HEIGHT 32
extern u64 object_am_005478_Tex[TEX_LEN(u64, object_am_005478_Tex_WIDTH, object_am_005478_Tex_HEIGHT, 16)];
extern StandardLimb object_am_005878_Limb;
extern StandardLimb object_am_005884_Limb;
extern StandardLimb object_am_005890_Limb;
extern StandardLimb object_am_00589C_Limb;
extern StandardLimb object_am_0058A8_Limb;
extern StandardLimb object_am_0058B4_Limb;
extern StandardLimb object_am_0058C0_Limb;
extern StandardLimb object_am_0058CC_Limb;
extern StandardLimb object_am_0058D8_Limb;
extern StandardLimb object_am_0058E4_Limb;
extern StandardLimb object_am_0058F0_Limb;
extern StandardLimb object_am_0058FC_Limb;
extern StandardLimb object_am_005908_Limb;
extern void* gArmosLimbs[];
typedef enum gArmosSkelLimb {
    /*  0 */ LIMB_OBJECT_AM_005948_NONE,
    /*  1 */ LIMB_OBJECT_AM_005878,
    /*  2 */ LIMB_OBJECT_AM_005884,
    /*  3 */ LIMB_OBJECT_AM_005890,
    /*  4 */ LIMB_OBJECT_AM_00589C,
    /*  5 */ LIMB_OBJECT_AM_0058A8,
    /*  6 */ LIMB_OBJECT_AM_0058B4,
    /*  7 */ LIMB_OBJECT_AM_0058C0,
    /*  8 */ LIMB_OBJECT_AM_0058CC,
    /*  9 */ LIMB_OBJECT_AM_0058D8,
    /* 10 */ LIMB_OBJECT_AM_0058E4,
    /* 11 */ LIMB_OBJECT_AM_0058F0,
    /* 12 */ LIMB_OBJECT_AM_0058FC,
    /* 13 */ LIMB_OBJECT_AM_005908,
    /* 14 */ LIMB_OBJECT_AM_005948_MAX
} gArmosSkelLimb;
extern SkeletonHeader gArmosSkel;
extern s16 gArmosDamagedFrameData[];
extern JointIndex gArmosDamagedJointIndices[];
extern AnimationHeader gArmosDamagedAnim;

#endif
