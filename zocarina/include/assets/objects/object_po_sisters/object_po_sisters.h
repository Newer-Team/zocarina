#ifndef OBJECT_PO_SISTERS_H
#define OBJECT_PO_SISTERS_H

#include "animation.h"
#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern s16 gPoeSistersAttackFrameData[];
extern JointIndex gPoeSistersAttackJointIndices[];
extern AnimationHeader gPoeSistersAttackAnim;
extern s16 gPoeSistersMegCryFrameData[];
extern JointIndex gPoeSistersMegCryJointIndices[];
extern AnimationHeader gPoeSistersMegCryAnim;
extern s16 gPoeSistersDamagedFrameData[];
extern JointIndex gPoeSistersDamagedJointIndices[];
extern AnimationHeader gPoeSistersDamagedAnim;
extern s16 gPoeSistersFleeFrameData[];
extern JointIndex gPoeSistersFleeJointIndices[];
extern AnimationHeader gPoeSistersFleeAnim;
extern s16 gPoeSistersFloatFrameData[];
extern JointIndex gPoeSistersFloatJointIndices[];
extern AnimationHeader gPoeSistersFloatAnim;
extern s16 gPoeSistersAppearDisappearFrameData[];
extern JointIndex gPoeSistersAppearDisappearJointIndices[];
extern AnimationHeader gPoeSistersAppearDisappearAnim;
extern s16 gPoeSistersSwayFrameData[];
extern JointIndex gPoeSistersSwayJointIndices[];
extern AnimationHeader gPoeSistersSwayAnim;
extern Vtx gPoeSistersMegFaceVtx[];
extern Vtx gPoeSistersMegBodyVtx[];
extern Gfx gPoeSistersMegFaceDL[38];
extern Gfx gPoeSistersMegBodyDL[89];
extern Vtx object_po_sisters_Vtx_0020A8[];
extern Vtx object_po_sisters_Vtx_0021D8[];
extern Vtx object_po_sisters_Vtx_002238[];
extern Vtx object_po_sisters_Vtx_002298[];
extern Vtx object_po_sisters_Vtx_0022F8[];
extern Vtx gPoSistersTorchVtx[];
extern Vtx object_po_sisters_Vtx_002408[];
extern Gfx object_po_sisters_0024A8_DL[25];
extern Gfx object_po_sisters_002570_DL[15];
extern Gfx object_po_sisters_0025E8_DL[19];
extern Gfx object_po_sisters_002680_DL[19];
extern Gfx object_po_sisters_002718_DL[19];
extern Gfx gPoSistersTorchDL[24];
extern Gfx object_po_sisters_002870_DL[19];
extern Vtx gPoeSistersJoelleFaceVtx[];
extern Vtx gPoeSistersJoelleBodyVtx[];
extern Gfx gPoeSistersJoelleFaceDL[26];
extern Gfx gPoeSistersJoelleBodyDL[80];
extern Vtx gPoeSistersBethBodyVtx[];
extern Vtx gPoeSistersBethFaceVtx[];
extern Gfx gPoeSistersBethBodyDL[75];
extern Gfx gPoeSistersBethFaceDL[25];
extern Vtx gPoeSistersAmyBodyVtx[];
extern Vtx gPoSistersAmyFaceVtx[];
extern Gfx gPoeSistersAmyBodyDL[75];
extern Gfx gPoSistersAmyFaceDL[26];
extern Vtx gPoSistersBurnVtx[];
extern Gfx gPoSistersBurnDL[63];
#define object_po_sisters_0048D8_Tex_WIDTH 16
#define object_po_sisters_0048D8_Tex_HEIGHT 16
extern u64 object_po_sisters_0048D8_Tex[TEX_LEN(u64, object_po_sisters_0048D8_Tex_WIDTH, object_po_sisters_0048D8_Tex_HEIGHT, 16)];
#define object_po_sisters_004AD8_Tex_WIDTH 32
#define object_po_sisters_004AD8_Tex_HEIGHT 32
extern u64 object_po_sisters_004AD8_Tex[TEX_LEN(u64, object_po_sisters_004AD8_Tex_WIDTH, object_po_sisters_004AD8_Tex_HEIGHT, 16)];
#define object_po_sisters_0052D8_Tex_WIDTH 32
#define object_po_sisters_0052D8_Tex_HEIGHT 16
extern u64 object_po_sisters_0052D8_Tex[TEX_LEN(u64, object_po_sisters_0052D8_Tex_WIDTH, object_po_sisters_0052D8_Tex_HEIGHT, 16)];
#define object_po_sisters_0056D8_Tex_WIDTH 16
#define object_po_sisters_0056D8_Tex_HEIGHT 16
extern u64 object_po_sisters_0056D8_Tex[TEX_LEN(u64, object_po_sisters_0056D8_Tex_WIDTH, object_po_sisters_0056D8_Tex_HEIGHT, 16)];
#define object_po_sisters_0058D8_Tex_WIDTH 4
#define object_po_sisters_0058D8_Tex_HEIGHT 4
extern u64 object_po_sisters_0058D8_Tex[TEX_LEN(u64, object_po_sisters_0058D8_Tex_WIDTH, object_po_sisters_0058D8_Tex_HEIGHT, 16)];
#define object_po_sisters_0058F8_Tex_WIDTH 16
#define object_po_sisters_0058F8_Tex_HEIGHT 16
extern u64 object_po_sisters_0058F8_Tex[TEX_LEN(u64, object_po_sisters_0058F8_Tex_WIDTH, object_po_sisters_0058F8_Tex_HEIGHT, 16)];
#define object_po_sisters_005AF8_Tex_WIDTH 16
#define object_po_sisters_005AF8_Tex_HEIGHT 16
extern u64 object_po_sisters_005AF8_Tex[TEX_LEN(u64, object_po_sisters_005AF8_Tex_WIDTH, object_po_sisters_005AF8_Tex_HEIGHT, 16)];
#define object_po_sisters_005CF8_Tex_WIDTH 8
#define object_po_sisters_005CF8_Tex_HEIGHT 8
extern u64 object_po_sisters_005CF8_Tex[TEX_LEN(u64, object_po_sisters_005CF8_Tex_WIDTH, object_po_sisters_005CF8_Tex_HEIGHT, 16)];
#define object_po_sisters_005D78_Tex_WIDTH 16
#define object_po_sisters_005D78_Tex_HEIGHT 16
extern u64 object_po_sisters_005D78_Tex[TEX_LEN(u64, object_po_sisters_005D78_Tex_WIDTH, object_po_sisters_005D78_Tex_HEIGHT, 16)];
#define object_po_sisters_005F78_Tex_WIDTH 16
#define object_po_sisters_005F78_Tex_HEIGHT 8
extern u64 object_po_sisters_005F78_Tex[TEX_LEN(u64, object_po_sisters_005F78_Tex_WIDTH, object_po_sisters_005F78_Tex_HEIGHT, 16)];
#define object_po_sisters_006078_Tex_WIDTH 16
#define object_po_sisters_006078_Tex_HEIGHT 16
extern u64 object_po_sisters_006078_Tex[TEX_LEN(u64, object_po_sisters_006078_Tex_WIDTH, object_po_sisters_006078_Tex_HEIGHT, 16)];
#define object_po_sisters_006278_Tex_WIDTH 8
#define object_po_sisters_006278_Tex_HEIGHT 8
extern u64 object_po_sisters_006278_Tex[TEX_LEN(u64, object_po_sisters_006278_Tex_WIDTH, object_po_sisters_006278_Tex_HEIGHT, 16)];
#define object_po_sisters_0062F8_Tex_WIDTH 4
#define object_po_sisters_0062F8_Tex_HEIGHT 4
extern u64 object_po_sisters_0062F8_Tex[TEX_LEN(u64, object_po_sisters_0062F8_Tex_WIDTH, object_po_sisters_0062F8_Tex_HEIGHT, 16)];
#define object_po_sisters_006318_Tex_WIDTH 16
#define object_po_sisters_006318_Tex_HEIGHT 16
extern u64 object_po_sisters_006318_Tex[TEX_LEN(u64, object_po_sisters_006318_Tex_WIDTH, object_po_sisters_006318_Tex_HEIGHT, 16)];
extern StandardLimb object_po_sisters_006518_Limb;
extern StandardLimb object_po_sisters_006524_Limb;
extern StandardLimb object_po_sisters_006530_Limb;
extern StandardLimb object_po_sisters_00653C_Limb;
extern StandardLimb object_po_sisters_006548_Limb;
extern StandardLimb object_po_sisters_006554_Limb;
extern StandardLimb object_po_sisters_006560_Limb;
extern StandardLimb object_po_sisters_00656C_Limb;
extern StandardLimb object_po_sisters_006578_Limb;
extern StandardLimb object_po_sisters_006584_Limb;
extern StandardLimb object_po_sisters_006590_Limb;
extern void* gPoeSistersLimbs[];
typedef enum gPoeSistersSkelLimb {
    /*  0 */ LIMB_OBJECT_PO_SISTERS_0065C8_NONE,
    /*  1 */ LIMB_OBJECT_PO_SISTERS_006518,
    /*  2 */ LIMB_OBJECT_PO_SISTERS_006524,
    /*  3 */ LIMB_OBJECT_PO_SISTERS_006530,
    /*  4 */ LIMB_OBJECT_PO_SISTERS_00653C,
    /*  5 */ LIMB_OBJECT_PO_SISTERS_006548,
    /*  6 */ LIMB_OBJECT_PO_SISTERS_006554,
    /*  7 */ LIMB_OBJECT_PO_SISTERS_006560,
    /*  8 */ LIMB_OBJECT_PO_SISTERS_00656C,
    /*  9 */ LIMB_OBJECT_PO_SISTERS_006578,
    /* 10 */ LIMB_OBJECT_PO_SISTERS_006584,
    /* 11 */ LIMB_OBJECT_PO_SISTERS_006590,
    /* 12 */ LIMB_OBJECT_PO_SISTERS_0065C8_MAX
} gPoeSistersSkelLimb;
extern SkeletonHeader gPoeSistersSkel;
extern Vtx gPoSistersJoellePaintingVtx[];
extern Gfx gPoSistersJoellePaintingDL[90];
extern Vtx gPoSistersBethPaintingVtx[];
extern Gfx gPoSistersBethPaintingDL[90];
extern Vtx gPoSistersAmyPaintingVtx[];
extern Gfx gPoSistersAmyPaintingDL[61];
extern Vtx gPoSistersAmyBlockVtx[];
extern Gfx gPoSistersAmyBlockDL[55];
extern BgCamInfo gPoSistersAmyBlockBgCamList[];
extern SurfaceType gPoSistersAmyBlockSurfaceTypes[];
extern CollisionPoly gPoSistersAmyBlockPolyList[];
extern Vec3s gPoSistersAmyBlockVtxList[];
extern CollisionHeader gPoSistersAmyBlockCol;
extern Vtx gPoSistersAmyBethBlockVtx[];
extern Gfx gPoSistersAmyBethBlockDL[28];
#define object_po_sisters_00007AC0_Tex_WIDTH 32
#define object_po_sisters_00007AC0_Tex_HEIGHT 32
extern u64 object_po_sisters_00007AC0_Tex[TEX_LEN(u64, object_po_sisters_00007AC0_Tex_WIDTH, object_po_sisters_00007AC0_Tex_HEIGHT, 16)];
#define object_po_sisters_000082C0_Tex_WIDTH 8
#define object_po_sisters_000082C0_Tex_HEIGHT 16
extern u64 object_po_sisters_000082C0_Tex[TEX_LEN(u64, object_po_sisters_000082C0_Tex_WIDTH, object_po_sisters_000082C0_Tex_HEIGHT, 16)];
#define object_po_sisters_000083C0_Tex_WIDTH 32
#define object_po_sisters_000083C0_Tex_HEIGHT 32
extern u64 object_po_sisters_000083C0_Tex[TEX_LEN(u64, object_po_sisters_000083C0_Tex_WIDTH, object_po_sisters_000083C0_Tex_HEIGHT, 16)];
#define object_po_sisters_00008BC0_Tex_WIDTH 32
#define object_po_sisters_00008BC0_Tex_HEIGHT 32
extern u64 object_po_sisters_00008BC0_Tex[TEX_LEN(u64, object_po_sisters_00008BC0_Tex_WIDTH, object_po_sisters_00008BC0_Tex_HEIGHT, 16)];
#define object_po_sisters_000093C0_Tex_WIDTH 32
#define object_po_sisters_000093C0_Tex_HEIGHT 32
extern u64 object_po_sisters_000093C0_Tex[TEX_LEN(u64, object_po_sisters_000093C0_Tex_WIDTH, object_po_sisters_000093C0_Tex_HEIGHT, 16)];
#define object_po_sisters_00009BC0_Tex_WIDTH 32
#define object_po_sisters_00009BC0_Tex_HEIGHT 32
extern u64 object_po_sisters_00009BC0_Tex[TEX_LEN(u64, object_po_sisters_00009BC0_Tex_WIDTH, object_po_sisters_00009BC0_Tex_HEIGHT, 16)];
#define object_po_sisters_0000A3C0_Tex_WIDTH 32
#define object_po_sisters_0000A3C0_Tex_HEIGHT 32
extern u64 object_po_sisters_0000A3C0_Tex[TEX_LEN(u64, object_po_sisters_0000A3C0_Tex_WIDTH, object_po_sisters_0000A3C0_Tex_HEIGHT, 16)];
#define object_po_sisters_0000ABC0_Tex_WIDTH 32
#define object_po_sisters_0000ABC0_Tex_HEIGHT 32
extern u64 object_po_sisters_0000ABC0_Tex[TEX_LEN(u64, object_po_sisters_0000ABC0_Tex_WIDTH, object_po_sisters_0000ABC0_Tex_HEIGHT, 16)];
#define object_po_sisters_0000B3C0_Tex_WIDTH 32
#define object_po_sisters_0000B3C0_Tex_HEIGHT 32
extern u64 object_po_sisters_0000B3C0_Tex[TEX_LEN(u64, object_po_sisters_0000B3C0_Tex_WIDTH, object_po_sisters_0000B3C0_Tex_HEIGHT, 16)];
#define object_po_sisters_0000BBC0_Tex_WIDTH 32
#define object_po_sisters_0000BBC0_Tex_HEIGHT 32
extern u64 object_po_sisters_0000BBC0_Tex[TEX_LEN(u64, object_po_sisters_0000BBC0_Tex_WIDTH, object_po_sisters_0000BBC0_Tex_HEIGHT, 16)];
#define object_po_sisters_0000C3C0_Tex_WIDTH 32
#define object_po_sisters_0000C3C0_Tex_HEIGHT 32
extern u64 object_po_sisters_0000C3C0_Tex[TEX_LEN(u64, object_po_sisters_0000C3C0_Tex_WIDTH, object_po_sisters_0000C3C0_Tex_HEIGHT, 16)];
#define object_po_sisters_0000CBC0_Tex_WIDTH 32
#define object_po_sisters_0000CBC0_Tex_HEIGHT 32
extern u64 object_po_sisters_0000CBC0_Tex[TEX_LEN(u64, object_po_sisters_0000CBC0_Tex_WIDTH, object_po_sisters_0000CBC0_Tex_HEIGHT, 16)];
#define object_po_sisters_0000D3C0_Tex_WIDTH 32
#define object_po_sisters_0000D3C0_Tex_HEIGHT 32
extern u64 object_po_sisters_0000D3C0_Tex[TEX_LEN(u64, object_po_sisters_0000D3C0_Tex_WIDTH, object_po_sisters_0000D3C0_Tex_HEIGHT, 16)];
#define object_po_sisters_0000DBC0_Tex_WIDTH 32
#define object_po_sisters_0000DBC0_Tex_HEIGHT 32
extern u64 object_po_sisters_0000DBC0_Tex[TEX_LEN(u64, object_po_sisters_0000DBC0_Tex_WIDTH, object_po_sisters_0000DBC0_Tex_HEIGHT, 16)];

#endif
