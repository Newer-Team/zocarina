#ifndef GAMEPLAY_FIELD_KEEP_H
#define GAMEPLAY_FIELD_KEEP_H

#include "animation.h"
#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Gfx gHanaFlower1DL[20];
extern Gfx gHanaFlower2DL[20];
extern Gfx gHanaFlower3DL[20];
extern Gfx gHanaLeaf1DL[20];
extern Gfx gHanaLeaf2DL[20];
extern Gfx gHanaLeaf3DL[20];
extern Gfx gHanaLeaf4DL[20];
extern Gfx gHanaLeaf5DL[20];
extern Gfx gHanaDL[9];
extern Vtx gHanaFlower1Vtx[];
extern Vtx gHanaFlower2Vtx[];
extern Vtx gHanaFlower3Vtx[];
extern Vtx gHanaLeaf1Vtx[];
extern Vtx gHanaLeaf2Vtx[];
extern Vtx gHanaLeaf3Vtx[];
extern Vtx gHanaLeaf4Vtx[];
extern Vtx gHanaLeaf5Vtx[];
#define gHanaFlowerTex_WIDTH 16
#define gHanaFlowerTex_HEIGHT 32
extern u64 gHanaFlowerTex[TEX_LEN(u64, gHanaFlowerTex_WIDTH, gHanaFlowerTex_HEIGHT, 16)];
#define gHanaLeafTex_WIDTH 32
#define gHanaLeafTex_HEIGHT 32
extern u64 gHanaLeafTex[TEX_LEN(u64, gHanaLeafTex_WIDTH, gHanaLeafTex_HEIGHT, 16)];
extern Vtx gGrottoVtx[];
extern Gfx gGrottoDL[18];
#define gGrottoTex_WIDTH 32
#define gGrottoTex_HEIGHT 64
extern u64 gGrottoTex[TEX_LEN(u64, gGrottoTex_WIDTH, gGrottoTex_HEIGHT, 16)];
extern s16 gButterflyFrameData[];
extern JointIndex gButterflyJointIndices[];
extern AnimationHeader gButterflyAnim;
extern Gfx gButterflyDL_002480[20];
extern Gfx gButterflyDL_002520[2];
extern Gfx gameplay_field_keep_002530_DL[2];
extern Vtx gameplay_field_keep_Vtx_002540[];
extern Gfx gButterflyDL_002580[20];
extern Gfx gButterflyDL_002620[2];
extern Gfx gameplay_field_keep_002630_DL[2];
extern Vtx gameplay_field_keep_Vtx_002640[];
#define gButterflyWingTex_WIDTH 32
#define gButterflyWingTex_HEIGHT 64
extern u64 gButterflyWingTex[TEX_LEN(u64, gButterflyWingTex_WIDTH, gButterflyWingTex_HEIGHT, 16)];
extern StandardLimb gameplay_field_keep_003680_Limb;
extern StandardLimb gameplay_field_keep_00368C_Limb;
extern StandardLimb gameplay_field_keep_003698_Limb;
extern StandardLimb gameplay_field_keep_0036A4_Limb;
extern StandardLimb gameplay_field_keep_0036B0_Limb;
extern StandardLimb gameplay_field_keep_0036BC_Limb;
extern StandardLimb gameplay_field_keep_0036C8_Limb;
extern void* gButterflyLimbs[];
typedef enum gButterflySkelLimb {
    /*  0 */ LIMB_GAMEPLAY_FIELD_KEEP_0036F0_NONE,
    /*  1 */ LIMB_GAMEPLAY_FIELD_KEEP_003680,
    /*  2 */ LIMB_GAMEPLAY_FIELD_KEEP_00368C,
    /*  3 */ LIMB_GAMEPLAY_FIELD_KEEP_003698,
    /*  4 */ LIMB_GAMEPLAY_FIELD_KEEP_0036A4,
    /*  5 */ LIMB_GAMEPLAY_FIELD_KEEP_0036B0,
    /*  6 */ LIMB_GAMEPLAY_FIELD_KEEP_0036BC,
    /*  7 */ LIMB_GAMEPLAY_FIELD_KEEP_0036C8,
    /*  8 */ LIMB_GAMEPLAY_FIELD_KEEP_0036F0_MAX
} gButterflySkelLimb;
extern SkeletonHeader gButterflySkel;
//#define gBgBombwallTLUT_TLUT_COUNT 16
extern u64 gBgBombwallTLUT[];
#define gBgBombwallNormalTex_WIDTH 32
#define gBgBombwallNormalTex_HEIGHT 64
extern u64 gBgBombwallNormalTex[TEX_LEN(u64, gBgBombwallNormalTex_WIDTH, gBgBombwallNormalTex_HEIGHT, 4)];
#define gBgBombWallBrokenTex_WIDTH 32
#define gBgBombWallBrokenTex_HEIGHT 64
extern u64 gBgBombWallBrokenTex[TEX_LEN(u64, gBgBombWallBrokenTex_WIDTH, gBgBombWallBrokenTex_HEIGHT, 4)];
extern Vtx gBgBombwallNormalVtx[];
extern Vtx gBgBombwallBrokenVtx[];
extern Gfx gBgBombwallNormalDL[25];
extern Gfx gBgBombwallBrokenDL[25];
extern BgCamInfo gBgBombwallBgCamList[];
extern SurfaceType gBgBombwallSurfaceTypes[];
extern CollisionPoly gBgBombwallPolyList[];
extern Vec3s gBgBombwallVtxList[];
extern CollisionHeader gBgBombwallCol;
extern Vtx gFieldDoorLeftVtx[];
extern Vtx gFieldDoorRightVtx[];
extern Vtx gameplay_field_keep_Vtx_004620[];
extern Gfx gFieldDoorDL_004720[16];
extern Gfx gFieldDoorLeftDL[59];
extern Gfx gFieldDoorRightDL[58];
#define gFieldDoorKnobTopHalfTex_WIDTH 16
#define gFieldDoorKnobTopHalfTex_HEIGHT 16
extern u64 gFieldDoorKnobTopHalfTex[TEX_LEN(u64, gFieldDoorKnobTopHalfTex_WIDTH, gFieldDoorKnobTopHalfTex_HEIGHT, 16)];
#define gFieldDoorKnobTex_WIDTH 16
#define gFieldDoorKnobTex_HEIGHT 16
extern u64 gFieldDoorKnobTex[TEX_LEN(u64, gFieldDoorKnobTex_WIDTH, gFieldDoorKnobTex_HEIGHT, 16)];
#define gFieldDoor1Tex_WIDTH 64
#define gFieldDoor1Tex_HEIGHT 128
extern u64 gFieldDoor1Tex[TEX_LEN(u64, gFieldDoor1Tex_WIDTH, gFieldDoor1Tex_HEIGHT, 4)];
extern s16 gFieldUnusedFishFrameData[];
extern JointIndex gFieldUnusedFishJointIndices[];
extern AnimationHeader gFieldUnusedFishAnim;
extern Gfx gFieldUnusedFishDL[61];
extern Gfx gFieldSkelUnusedFishDL_0061E8[2];
extern Gfx gameplay_field_keep_0061F8_DL[2];
extern Vtx gFieldUnusedFishVtx[];
extern Gfx gFieldSkelUnusedFishDL_0063A8[20];
extern Gfx gFieldSkelUnusedFishDL_006448[2];
extern Gfx gameplay_field_keep_006458_DL[2];
extern Vtx gameplay_field_keep_Vtx_006468[];
#define gFieldUnusedFishTex_WIDTH 64
#define gFieldUnusedFishTex_HEIGHT 32
extern u64 gFieldUnusedFishTex[TEX_LEN(u64, gFieldUnusedFishTex_WIDTH, gFieldUnusedFishTex_HEIGHT, 16)];
#define gFieldUnusedFishBottomTex_WIDTH 64
#define gFieldUnusedFishBottomTex_HEIGHT 32
extern u64 gFieldUnusedFishBottomTex[TEX_LEN(u64, gFieldUnusedFishBottomTex_WIDTH, gFieldUnusedFishBottomTex_HEIGHT, 16)];
#define gFieldUnusedFishFinTex_WIDTH 32
#define gFieldUnusedFishFinTex_HEIGHT 16
extern u64 gFieldUnusedFishFinTex[TEX_LEN(u64, gFieldUnusedFishFinTex_WIDTH, gFieldUnusedFishFinTex_HEIGHT, 16)];
extern StandardLimb gameplay_field_keep_0088A8_Limb;
extern StandardLimb gameplay_field_keep_0088B4_Limb;
extern StandardLimb gameplay_field_keep_0088C0_Limb;
extern StandardLimb gameplay_field_keep_0088CC_Limb;
extern StandardLimb gameplay_field_keep_0088D8_Limb;
extern void* gFieldUnusedFishLimbs[];
typedef enum gFieldUnusedFishSkelLimb {
    /*  0 */ LIMB_GAMEPLAY_FIELD_KEEP_0088F8_NONE,
    /*  1 */ LIMB_GAMEPLAY_FIELD_KEEP_0088A8,
    /*  2 */ LIMB_GAMEPLAY_FIELD_KEEP_0088B4,
    /*  3 */ LIMB_GAMEPLAY_FIELD_KEEP_0088C0,
    /*  4 */ LIMB_GAMEPLAY_FIELD_KEEP_0088CC,
    /*  5 */ LIMB_GAMEPLAY_FIELD_KEEP_0088D8,
    /*  6 */ LIMB_GAMEPLAY_FIELD_KEEP_0088F8_MAX
} gFieldUnusedFishSkelLimb;
extern SkeletonHeader gFieldUnusedFishSkel;
#define gFieldBeehiveTex_WIDTH 32
#define gFieldBeehiveTex_HEIGHT 32
extern u64 gFieldBeehiveTex[TEX_LEN(u64, gFieldBeehiveTex_WIDTH, gFieldBeehiveTex_HEIGHT, 16)];
extern Vtx gFieldBeehiveVtx[];
extern Gfx gFieldBeehiveDL[44];
#define gFieldBeehiveFragmentTex_WIDTH 16
#define gFieldBeehiveFragmentTex_HEIGHT 16
extern u64 gFieldBeehiveFragmentTex[TEX_LEN(u64, gFieldBeehiveFragmentTex_WIDTH, gFieldBeehiveFragmentTex_HEIGHT, 16)];
extern Vtx gFieldBeehiveFragmentVtx[];
extern Gfx gFieldBeehiveFragmentDL[18];
//#define gFieldSilverRockTLUT_TLUT_COUNT 16
extern u64 gFieldSilverRockTLUT[];
#define gFieldSilverRockTex_WIDTH 64
#define gFieldSilverRockTex_HEIGHT 64
extern u64 gFieldSilverRockTex[TEX_LEN(u64, gFieldSilverRockTex_WIDTH, gFieldSilverRockTex_HEIGHT, 4)];
extern Vtx gSilverRockVtx[];
extern Gfx gSilverRockDL[34];
extern Vtx gSilverRockFragmentsVtx[];
extern Gfx gSilverRockFragmentsDL[28];
extern Vtx gFieldKakeraVtx[];
extern Gfx gFieldKakeraDL[23];
#define gFieldKakeraTex_WIDTH 32
#define gFieldKakeraTex_HEIGHT 32
extern u64 gFieldKakeraTex[TEX_LEN(u64, gFieldKakeraTex_WIDTH, gFieldKakeraTex_HEIGHT, 16)];
#define gFieldBushTex_WIDTH 32
#define gFieldBushTex_HEIGHT 32
extern u64 gFieldBushTex[TEX_LEN(u64, gFieldBushTex_WIDTH, gFieldBushTex_HEIGHT, 16)];
extern Vtx gFieldBushVtx[];
extern Gfx gFieldBushDL[19];
#define gFieldSandstorm1Tex_WIDTH 64
#define gFieldSandstorm1Tex_HEIGHT 32
extern u64 gFieldSandstorm1Tex[TEX_LEN(u64, gFieldSandstorm1Tex_WIDTH, gFieldSandstorm1Tex_HEIGHT, 8)];
#define gFieldSandstorm2Tex_WIDTH 64
#define gFieldSandstorm2Tex_HEIGHT 32
extern u64 gFieldSandstorm2Tex[TEX_LEN(u64, gFieldSandstorm2Tex_WIDTH, gFieldSandstorm2Tex_HEIGHT, 8)];
extern Gfx gFieldSandstormDL[24];
#define gFieldKeepTex_00CB30_WIDTH 32
#define gFieldKeepTex_00CB30_HEIGHT 32
extern u64 gFieldKeepTex_00CB30[TEX_LEN(u64, gFieldKeepTex_00CB30_WIDTH, gFieldKeepTex_00CB30_HEIGHT, 16)];

#endif
