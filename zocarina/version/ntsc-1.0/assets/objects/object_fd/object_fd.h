#ifndef OBJECT_FD_H
#define OBJECT_FD_H

#include "animation.h"
#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gVolvagiaPlatformDL_06000000_Vtx_fused_[];
extern Gfx gVolvagiaPlatformDL[63];
//#define object_fd_000438_TLUT_TLUT_COUNT 16
extern u64 object_fd_000438_TLUT[];
#define object_fd_000458_Tex_WIDTH 32
#define object_fd_000458_Tex_HEIGHT 32
extern u64 object_fd_000458_Tex[TEX_LEN(u64, object_fd_000458_Tex_WIDTH, object_fd_000458_Tex_HEIGHT, 4)];
#define object_fd_000658_Tex_WIDTH 32
#define object_fd_000658_Tex_HEIGHT 64
extern u64 object_fd_000658_Tex[TEX_LEN(u64, object_fd_000658_Tex_WIDTH, object_fd_000658_Tex_HEIGHT, 4)];
//#define object_fd_000A58_TLUT_TLUT_COUNT 12
extern u64 object_fd_000A58_TLUT[];
extern u8 object_fd_000A70_Blob[];
#define object_fd_000A78_Tex_WIDTH 32
#define object_fd_000A78_Tex_HEIGHT 32
extern u64 object_fd_000A78_Tex[TEX_LEN(u64, object_fd_000A78_Tex_WIDTH, object_fd_000A78_Tex_HEIGHT, 4)];
extern BgCamInfo gVolvagiaPlatformBgCamList[];
extern SurfaceType gVolvagiaPlatformSurfaceTypes[];
extern CollisionPoly gVolvagiaPlatformPolyList[];
extern Vec3s gVolvagiaPlatformVtxList[];
extern CollisionHeader gVolvagiaPlatformCol;
extern Vtx object_fd_001DB0_DL_06000DA0_Vtx_fused_[];
extern Gfx object_fd_001DB0_DL[95];
extern Gfx object_fd_0020A8_DL[27];
extern Gfx object_fd_002180_DL[59];
extern Gfx object_fd_002358_DL[25];
extern Gfx object_fd_002420_DL[25];
extern Gfx object_fd_0024E8_DL[50];
extern Gfx object_fd_002678_DL[31];
extern Gfx object_fd_002770_DL[28];
extern Gfx object_fd_002850_DL[40];
extern Gfx object_fd_002990_DL[40];
extern Gfx object_fd_002AD0_DL[40];
extern Gfx object_fd_002C10_DL[32];
extern Gfx object_fd_002D10_DL[31];
extern Gfx object_fd_002E08_DL[28];
extern Gfx object_fd_002EE8_DL[40];
extern Gfx object_fd_003028_DL[40];
extern Gfx object_fd_003168_DL[40];
//#define gVolvagiaEyeTLUT_TLUT_COUNT 256
extern u64 gVolvagiaEyeTLUT[];
#define gVolvagiaEyeHalfTex_WIDTH 32
#define gVolvagiaEyeHalfTex_HEIGHT 32
extern u64 gVolvagiaEyeHalfTex[TEX_LEN(u64, gVolvagiaEyeHalfTex_WIDTH, gVolvagiaEyeHalfTex_HEIGHT, 8)];
#define gVolvagiaEyeOpenTex_WIDTH 32
#define gVolvagiaEyeOpenTex_HEIGHT 32
extern u64 gVolvagiaEyeOpenTex[TEX_LEN(u64, gVolvagiaEyeOpenTex_WIDTH, gVolvagiaEyeOpenTex_HEIGHT, 8)];
#define gVolvagiaEyeClosedTex_WIDTH 32
#define gVolvagiaEyeClosedTex_HEIGHT 32
extern u64 gVolvagiaEyeClosedTex[TEX_LEN(u64, gVolvagiaEyeClosedTex_WIDTH, gVolvagiaEyeClosedTex_HEIGHT, 8)];
#define object_fd_0040A8_Tex_WIDTH 32
#define object_fd_0040A8_Tex_HEIGHT 32
extern u64 object_fd_0040A8_Tex[TEX_LEN(u64, object_fd_0040A8_Tex_WIDTH, object_fd_0040A8_Tex_HEIGHT, 16)];
#define object_fd_0048A8_Tex_WIDTH 32
#define object_fd_0048A8_Tex_HEIGHT 32
extern u64 object_fd_0048A8_Tex[TEX_LEN(u64, object_fd_0048A8_Tex_WIDTH, object_fd_0048A8_Tex_HEIGHT, 16)];
#define object_fd_0050A8_Tex_WIDTH 16
#define object_fd_0050A8_Tex_HEIGHT 16
extern u64 object_fd_0050A8_Tex[TEX_LEN(u64, object_fd_0050A8_Tex_WIDTH, object_fd_0050A8_Tex_HEIGHT, 16)];
#define object_fd_0052A8_Tex_WIDTH 16
#define object_fd_0052A8_Tex_HEIGHT 16
extern u64 object_fd_0052A8_Tex[TEX_LEN(u64, object_fd_0052A8_Tex_WIDTH, object_fd_0052A8_Tex_HEIGHT, 16)];
#define object_fd_0054A8_Tex_WIDTH 16
#define object_fd_0054A8_Tex_HEIGHT 16
extern u64 object_fd_0054A8_Tex[TEX_LEN(u64, object_fd_0054A8_Tex_WIDTH, object_fd_0054A8_Tex_HEIGHT, 16)];
#define object_fd_0056A8_Tex_WIDTH 16
#define object_fd_0056A8_Tex_HEIGHT 16
extern u64 object_fd_0056A8_Tex[TEX_LEN(u64, object_fd_0056A8_Tex_WIDTH, object_fd_0056A8_Tex_HEIGHT, 16)];
extern Vtx gVolvagiaBrokenFaceDL_060058A8_Vtx_fused_[];
extern Gfx gVolvagiaBrokenFaceDL[45];
#define object_fd_005B60_Tex_WIDTH 16
#define object_fd_005B60_Tex_HEIGHT 16
extern u64 object_fd_005B60_Tex[TEX_LEN(u64, object_fd_005B60_Tex_WIDTH, object_fd_005B60_Tex_HEIGHT, 16)];
#define object_fd_005D60_Tex_WIDTH 16
#define object_fd_005D60_Tex_HEIGHT 16
extern u64 object_fd_005D60_Tex[TEX_LEN(u64, object_fd_005D60_Tex_WIDTH, object_fd_005D60_Tex_HEIGHT, 16)];
#define object_fd_005F60_Tex_WIDTH 16
#define object_fd_005F60_Tex_HEIGHT 16
extern u64 object_fd_005F60_Tex[TEX_LEN(u64, object_fd_005F60_Tex_WIDTH, object_fd_005F60_Tex_HEIGHT, 16)];
extern s16 gVolvagiaBodyStaticFrameData[];
extern JointIndex gVolvagiaBodyStaticJointIndices[];
extern AnimationHeader gVolvagiaBodyStaticAnim;
extern Vtx gVolvagiaBodySeg18DL_060061F0_Vtx_fused_[];
extern Gfx gVolvagiaBodySeg1DL[36];
extern Gfx gVolvagiaBodySeg2DL[22];
extern Gfx gVolvagiaBodySeg3DL[12];
extern Gfx gVolvagiaBodySeg4DL[12];
extern Gfx gVolvagiaBodySeg5DL[12];
extern Gfx gVolvagiaBodySeg6DL[12];
extern Gfx gVolvagiaBodySeg7DL[12];
extern Gfx gVolvagiaBodySeg8DL[12];
extern Gfx gVolvagiaBodySeg9DL[12];
extern Gfx gVolvagiaBodySeg10DL[12];
extern Gfx gVolvagiaBodySeg11DL[12];
extern Gfx gVolvagiaBodySeg12DL[12];
extern Gfx gVolvagiaBodySeg13DL[12];
extern Gfx gVolvagiaBodySeg14DL[12];
extern Gfx gVolvagiaBodySeg15DL[9];
extern Gfx gVolvagiaBodySeg16DL[9];
extern Gfx gVolvagiaBodySeg17DL[11];
extern Gfx gVolvagiaBodySeg18DL[10];
#define gVolvagiaBodyTex_WIDTH 32
#define gVolvagiaBodyTex_HEIGHT 64
extern u64 gVolvagiaBodyTex[TEX_LEN(u64, gVolvagiaBodyTex_WIDTH, gVolvagiaBodyTex_HEIGHT, 16)];
extern Vtx gVolvagiaManeModelDL_06009128_Vtx[];
extern Gfx gVolvagiaManeMaterialDL[16];
extern Gfx gVolvagiaManeModelDL[4];
#define object_fd_009208_Tex_WIDTH 16
#define object_fd_009208_Tex_HEIGHT 16
extern u64 object_fd_009208_Tex[TEX_LEN(u64, object_fd_009208_Tex_WIDTH, object_fd_009208_Tex_HEIGHT, 8)];
extern Vtx gVolvagiaDL_009668_06009308_Vtx_fused_[];
extern Gfx gVolvagiaDL_009668[35];
#define object_fd_009780_Tex_WIDTH 16
#define object_fd_009780_Tex_HEIGHT 16
extern u64 object_fd_009780_Tex[TEX_LEN(u64, object_fd_009780_Tex_WIDTH, object_fd_009780_Tex_HEIGHT, 16)];
#define object_fd_009980_Tex_WIDTH 16
#define object_fd_009980_Tex_HEIGHT 16
extern u64 object_fd_009980_Tex[TEX_LEN(u64, object_fd_009980_Tex_WIDTH, object_fd_009980_Tex_HEIGHT, 16)];
extern Vtx gVolvagiaRockDL_06009B80_Vtx_fused_[];
extern Gfx gVolvagiaRockDL[38];
#define object_fd_00A050_Tex_WIDTH 32
#define object_fd_00A050_Tex_HEIGHT 32
extern u64 object_fd_00A050_Tex[TEX_LEN(u64, object_fd_00A050_Tex_WIDTH, object_fd_00A050_Tex_HEIGHT, 16)];
extern Vtx gVolvagiaEmberModelDL_0600A850_Vtx[];
extern Gfx gVolvagiaEmberMaterialDL[16];
extern Gfx gVolvagiaEmberModelDL[3];
#define object_fd_00A918_Tex_WIDTH 16
#define object_fd_00A918_Tex_HEIGHT 16
extern u64 object_fd_00A918_Tex[TEX_LEN(u64, object_fd_00A918_Tex_WIDTH, object_fd_00A918_Tex_HEIGHT, 8)];
#define object_fd_00AA18_Tex_WIDTH 32
#define object_fd_00AA18_Tex_HEIGHT 32
extern u64 object_fd_00AA18_Tex[TEX_LEN(u64, object_fd_00AA18_Tex_WIDTH, object_fd_00AA18_Tex_HEIGHT, 16)];
extern Vtx gVolvagiaRibsDL_0600B218_Vtx[];
extern Gfx gVolvagiaRibsDL[22];
extern Gfx gVolvagiaDustMaterialDL[4];
extern Gfx gVolvagiaDustModelDL[10];
extern Vtx gVolvagiaDustModelDL_0600B418_Vtx[];
#define object_fd_00B458_Tex_WIDTH 32
#define object_fd_00B458_Tex_HEIGHT 32
extern u64 object_fd_00B458_Tex[TEX_LEN(u64, object_fd_00B458_Tex_WIDTH, object_fd_00B458_Tex_HEIGHT, 16)];
#define object_fd_00BC58_Tex_WIDTH 16
#define object_fd_00BC58_Tex_HEIGHT 16
extern u64 object_fd_00BC58_Tex[TEX_LEN(u64, object_fd_00BC58_Tex_WIDTH, object_fd_00BC58_Tex_HEIGHT, 16)];
#define object_fd_00BE58_Tex_WIDTH 16
#define object_fd_00BE58_Tex_HEIGHT 16
extern u64 object_fd_00BE58_Tex[TEX_LEN(u64, object_fd_00BE58_Tex_WIDTH, object_fd_00BE58_Tex_HEIGHT, 16)];
#define object_fd_00C058_Tex_WIDTH 16
#define object_fd_00C058_Tex_HEIGHT 16
extern u64 object_fd_00C058_Tex[TEX_LEN(u64, object_fd_00C058_Tex_WIDTH, object_fd_00C058_Tex_HEIGHT, 16)];
extern Vtx gVolvagiaSkullDL_0600C258_Vtx_fused_[];
extern Gfx gVolvagiaSkullDL[115];
extern Vtx gVolvagiaJawboneDL_0600CF60_Vtx[];
extern Gfx gVolvagiaJawboneDL[26];
#define object_fd_00D170_Tex_WIDTH 16
#define object_fd_00D170_Tex_HEIGHT 16
extern u64 object_fd_00D170_Tex[TEX_LEN(u64, object_fd_00D170_Tex_WIDTH, object_fd_00D170_Tex_HEIGHT, 16)];
extern Vtx gVolvagiaDebrisModelDL_0600D370_Vtx[];
extern Gfx gVolvagiaDebrisMaterialDL[16];
extern Gfx gVolvagiaDebrisModelDL[3];
#define object_fd_00D438_Tex_WIDTH 16
#define object_fd_00D438_Tex_HEIGHT 16
extern u64 object_fd_00D438_Tex[TEX_LEN(u64, object_fd_00D438_Tex_WIDTH, object_fd_00D438_Tex_HEIGHT, 16)];
extern Vtx gVolvagiaSkullPieceModelDL_0600D638_Vtx[];
extern Gfx gVolvagiaSkullPieceMaterialDL[16];
extern Gfx gVolvagiaSkullPieceModelDL[3];
#define gVolvagiaTitleCardTex_WIDTH 128
#define gVolvagiaTitleCardTex_HEIGHT 80
extern u64 gVolvagiaTitleCardTex[TEX_LEN(u64, gVolvagiaTitleCardTex_WIDTH, gVolvagiaTitleCardTex_HEIGHT, 8)];
extern StandardLimb object_fd_00FF00_Limb;
extern StandardLimb object_fd_00FF0C_Limb;
extern StandardLimb object_fd_00FF18_Limb;
extern StandardLimb object_fd_00FF24_Limb;
extern StandardLimb object_fd_00FF30_Limb;
extern StandardLimb object_fd_00FF3C_Limb;
extern StandardLimb object_fd_00FF48_Limb;
extern StandardLimb object_fd_00FF54_Limb;
extern StandardLimb object_fd_00FF60_Limb;
extern StandardLimb object_fd_00FF6C_Limb;
extern StandardLimb object_fd_00FF78_Limb;
extern StandardLimb object_fd_00FF84_Limb;
extern StandardLimb object_fd_00FF90_Limb;
extern StandardLimb object_fd_00FF9C_Limb;
extern StandardLimb object_fd_00FFA8_Limb;
extern StandardLimb object_fd_00FFB4_Limb;
extern StandardLimb object_fd_00FFC0_Limb;
extern StandardLimb object_fd_00FFCC_Limb;
extern void* gVolvagiaBodyLimbs[];
typedef enum gVolvagiaBodySkelLimb {
    /*  0 */ LIMB_OBJECT_FD_010020_NONE,
    /*  1 */ LIMB_OBJECT_FD_00FF00,
    /*  2 */ LIMB_OBJECT_FD_00FF0C,
    /*  3 */ LIMB_OBJECT_FD_00FF18,
    /*  4 */ LIMB_OBJECT_FD_00FF24,
    /*  5 */ LIMB_OBJECT_FD_00FF30,
    /*  6 */ LIMB_OBJECT_FD_00FF3C,
    /*  7 */ LIMB_OBJECT_FD_00FF48,
    /*  8 */ LIMB_OBJECT_FD_00FF54,
    /*  9 */ LIMB_OBJECT_FD_00FF60,
    /* 10 */ LIMB_OBJECT_FD_00FF6C,
    /* 11 */ LIMB_OBJECT_FD_00FF78,
    /* 12 */ LIMB_OBJECT_FD_00FF84,
    /* 13 */ LIMB_OBJECT_FD_00FF90,
    /* 14 */ LIMB_OBJECT_FD_00FF9C,
    /* 15 */ LIMB_OBJECT_FD_00FFA8,
    /* 16 */ LIMB_OBJECT_FD_00FFB4,
    /* 17 */ LIMB_OBJECT_FD_00FFC0,
    /* 18 */ LIMB_OBJECT_FD_00FFCC,
    /* 19 */ LIMB_OBJECT_FD_010020_MAX
} gVolvagiaBodySkelLimb;
extern FlexSkeletonHeader gVolvagiaBodySkel;
extern s16 gVolvagiaLeftArmEmergeFrameData[];
extern JointIndex gVolvagiaLeftArmEmergeJointIndices[];
extern AnimationHeader gVolvagiaLeftArmEmergeAnim;
extern StandardLimb object_fd_010080_Limb;
extern StandardLimb object_fd_01008C_Limb;
extern StandardLimb object_fd_010098_Limb;
extern StandardLimb object_fd_0100A4_Limb;
extern StandardLimb object_fd_0100B0_Limb;
extern StandardLimb object_fd_0100BC_Limb;
extern void* gVolvagiaLeftArmLimbs[];
typedef enum gVolvagiaLeftArmSkelLimb {
    /*  0 */ LIMB_OBJECT_FD_0100E0_NONE,
    /*  1 */ LIMB_OBJECT_FD_010080,
    /*  2 */ LIMB_OBJECT_FD_01008C,
    /*  3 */ LIMB_OBJECT_FD_010098,
    /*  4 */ LIMB_OBJECT_FD_0100A4,
    /*  5 */ LIMB_OBJECT_FD_0100B0,
    /*  6 */ LIMB_OBJECT_FD_0100BC,
    /*  7 */ LIMB_OBJECT_FD_0100E0_MAX
} gVolvagiaLeftArmSkelLimb;
extern SkeletonHeader gVolvagiaLeftArmSkel;
extern s16 gVolvagiaRightArmEmergeFrameData[];
extern JointIndex gVolvagiaRightArmEmergeJointIndices[];
extern AnimationHeader gVolvagiaRightArmEmergeAnim;
extern StandardLimb object_fd_010140_Limb;
extern StandardLimb object_fd_01014C_Limb;
extern StandardLimb object_fd_010158_Limb;
extern StandardLimb object_fd_010164_Limb;
extern StandardLimb object_fd_010170_Limb;
extern StandardLimb object_fd_01017C_Limb;
extern void* gVolvagiaRightArmLimbs[];
typedef enum gVolvagiaRightArmSkelLimb {
    /*  0 */ LIMB_OBJECT_FD_0101A0_NONE,
    /*  1 */ LIMB_OBJECT_FD_010140,
    /*  2 */ LIMB_OBJECT_FD_01014C,
    /*  3 */ LIMB_OBJECT_FD_010158,
    /*  4 */ LIMB_OBJECT_FD_010164,
    /*  5 */ LIMB_OBJECT_FD_010170,
    /*  6 */ LIMB_OBJECT_FD_01017C,
    /*  7 */ LIMB_OBJECT_FD_0101A0_MAX
} gVolvagiaRightArmSkelLimb;
extern SkeletonHeader gVolvagiaRightArmSkel;
extern s16 gVolvagiaHeadEmergeFrameData[];
extern JointIndex gVolvagiaHeadEmergeJointIndices[];
extern AnimationHeader gVolvagiaHeadEmergeAnim;
extern StandardLimb object_fd_010200_Limb;
extern StandardLimb object_fd_01020C_Limb;
extern StandardLimb object_fd_010218_Limb;
extern StandardLimb object_fd_010224_Limb;
extern StandardLimb object_fd_010230_Limb;
extern StandardLimb object_fd_01023C_Limb;
extern void* gVolvagiaHeadLimbs[];
typedef enum gVolvagiaHeadSkelLimb {
    /*  0 */ LIMB_OBJECT_FD_010260_NONE,
    /*  1 */ LIMB_OBJECT_FD_010200,
    /*  2 */ LIMB_OBJECT_FD_01020C,
    /*  3 */ LIMB_OBJECT_FD_010218,
    /*  4 */ LIMB_OBJECT_FD_010224,
    /*  5 */ LIMB_OBJECT_FD_010230,
    /*  6 */ LIMB_OBJECT_FD_01023C,
    /*  7 */ LIMB_OBJECT_FD_010260_MAX
} gVolvagiaHeadSkelLimb;
extern SkeletonHeader gVolvagiaHeadSkel;

#endif
