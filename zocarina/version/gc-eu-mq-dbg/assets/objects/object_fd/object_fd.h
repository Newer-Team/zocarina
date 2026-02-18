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
#define gVolvagiaTitleCardTex_HEIGHT 120
extern u64 gVolvagiaTitleCardTex[TEX_LEN(u64, gVolvagiaTitleCardTex_WIDTH, gVolvagiaTitleCardTex_HEIGHT, 8)];
extern StandardLimb object_fd_011300_Limb;
extern StandardLimb object_fd_01130C_Limb;
extern StandardLimb object_fd_011318_Limb;
extern StandardLimb object_fd_011324_Limb;
extern StandardLimb object_fd_011330_Limb;
extern StandardLimb object_fd_01133C_Limb;
extern StandardLimb object_fd_011348_Limb;
extern StandardLimb object_fd_011354_Limb;
extern StandardLimb object_fd_011360_Limb;
extern StandardLimb object_fd_01136C_Limb;
extern StandardLimb object_fd_011378_Limb;
extern StandardLimb object_fd_011384_Limb;
extern StandardLimb object_fd_011390_Limb;
extern StandardLimb object_fd_01139C_Limb;
extern StandardLimb object_fd_0113A8_Limb;
extern StandardLimb object_fd_0113B4_Limb;
extern StandardLimb object_fd_0113C0_Limb;
extern StandardLimb object_fd_0113CC_Limb;
extern void* gVolvagiaBodyLimbs[];
typedef enum gVolvagiaBodySkelLimb {
    /*  0 */ LIMB_OBJECT_FD_011420_NONE,
    /*  1 */ LIMB_OBJECT_FD_011300,
    /*  2 */ LIMB_OBJECT_FD_01130C,
    /*  3 */ LIMB_OBJECT_FD_011318,
    /*  4 */ LIMB_OBJECT_FD_011324,
    /*  5 */ LIMB_OBJECT_FD_011330,
    /*  6 */ LIMB_OBJECT_FD_01133C,
    /*  7 */ LIMB_OBJECT_FD_011348,
    /*  8 */ LIMB_OBJECT_FD_011354,
    /*  9 */ LIMB_OBJECT_FD_011360,
    /* 10 */ LIMB_OBJECT_FD_01136C,
    /* 11 */ LIMB_OBJECT_FD_011378,
    /* 12 */ LIMB_OBJECT_FD_011384,
    /* 13 */ LIMB_OBJECT_FD_011390,
    /* 14 */ LIMB_OBJECT_FD_01139C,
    /* 15 */ LIMB_OBJECT_FD_0113A8,
    /* 16 */ LIMB_OBJECT_FD_0113B4,
    /* 17 */ LIMB_OBJECT_FD_0113C0,
    /* 18 */ LIMB_OBJECT_FD_0113CC,
    /* 19 */ LIMB_OBJECT_FD_011420_MAX
} gVolvagiaBodySkelLimb;
extern FlexSkeletonHeader gVolvagiaBodySkel;
extern s16 gVolvagiaLeftArmEmergeFrameData[];
extern JointIndex gVolvagiaLeftArmEmergeJointIndices[];
extern AnimationHeader gVolvagiaLeftArmEmergeAnim;
extern StandardLimb object_fd_011480_Limb;
extern StandardLimb object_fd_01148C_Limb;
extern StandardLimb object_fd_011498_Limb;
extern StandardLimb object_fd_0114A4_Limb;
extern StandardLimb object_fd_0114B0_Limb;
extern StandardLimb object_fd_0114BC_Limb;
extern void* gVolvagiaLeftArmLimbs[];
typedef enum gVolvagiaLeftArmSkelLimb {
    /*  0 */ LIMB_OBJECT_FD_0114E0_NONE,
    /*  1 */ LIMB_OBJECT_FD_011480,
    /*  2 */ LIMB_OBJECT_FD_01148C,
    /*  3 */ LIMB_OBJECT_FD_011498,
    /*  4 */ LIMB_OBJECT_FD_0114A4,
    /*  5 */ LIMB_OBJECT_FD_0114B0,
    /*  6 */ LIMB_OBJECT_FD_0114BC,
    /*  7 */ LIMB_OBJECT_FD_0114E0_MAX
} gVolvagiaLeftArmSkelLimb;
extern SkeletonHeader gVolvagiaLeftArmSkel;
extern s16 gVolvagiaRightArmEmergeFrameData[];
extern JointIndex gVolvagiaRightArmEmergeJointIndices[];
extern AnimationHeader gVolvagiaRightArmEmergeAnim;
extern StandardLimb object_fd_011540_Limb;
extern StandardLimb object_fd_01154C_Limb;
extern StandardLimb object_fd_011558_Limb;
extern StandardLimb object_fd_011564_Limb;
extern StandardLimb object_fd_011570_Limb;
extern StandardLimb object_fd_01157C_Limb;
extern void* gVolvagiaRightArmLimbs[];
typedef enum gVolvagiaRightArmSkelLimb {
    /*  0 */ LIMB_OBJECT_FD_0115A0_NONE,
    /*  1 */ LIMB_OBJECT_FD_011540,
    /*  2 */ LIMB_OBJECT_FD_01154C,
    /*  3 */ LIMB_OBJECT_FD_011558,
    /*  4 */ LIMB_OBJECT_FD_011564,
    /*  5 */ LIMB_OBJECT_FD_011570,
    /*  6 */ LIMB_OBJECT_FD_01157C,
    /*  7 */ LIMB_OBJECT_FD_0115A0_MAX
} gVolvagiaRightArmSkelLimb;
extern SkeletonHeader gVolvagiaRightArmSkel;
extern s16 gVolvagiaHeadEmergeFrameData[];
extern JointIndex gVolvagiaHeadEmergeJointIndices[];
extern AnimationHeader gVolvagiaHeadEmergeAnim;
extern StandardLimb object_fd_011600_Limb;
extern StandardLimb object_fd_01160C_Limb;
extern StandardLimb object_fd_011618_Limb;
extern StandardLimb object_fd_011624_Limb;
extern StandardLimb object_fd_011630_Limb;
extern StandardLimb object_fd_01163C_Limb;
extern void* gVolvagiaHeadLimbs[];
typedef enum gVolvagiaHeadSkelLimb {
    /*  0 */ LIMB_OBJECT_FD_011660_NONE,
    /*  1 */ LIMB_OBJECT_FD_011600,
    /*  2 */ LIMB_OBJECT_FD_01160C,
    /*  3 */ LIMB_OBJECT_FD_011618,
    /*  4 */ LIMB_OBJECT_FD_011624,
    /*  5 */ LIMB_OBJECT_FD_011630,
    /*  6 */ LIMB_OBJECT_FD_01163C,
    /*  7 */ LIMB_OBJECT_FD_011660_MAX
} gVolvagiaHeadSkelLimb;
extern SkeletonHeader gVolvagiaHeadSkel;

#endif
