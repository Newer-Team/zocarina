#ifndef OBJECT_GND_H
#define OBJECT_GND_H

#include "animation.h"
#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern s16 gPhantomGanonDeathBlowFrameData[];
extern JointIndex gPhantomGanonDeathBlowJointIndices[];
extern AnimationHeader gPhantomGanonDeathBlowAnim;
extern s16 gPhantomGanonLimpFrameData[];
extern JointIndex gPhantomGanonLimpJointIndices[];
extern AnimationHeader gPhantomGanonLimpAnim;
extern s16 gPhantomGanonMaskOnFrameData[];
extern JointIndex gPhantomGanonMaskOnJointIndices[];
extern AnimationHeader gPhantomGanonMaskOnAnim;
extern s16 gPhantomGanonScreamFrameData[];
extern JointIndex gPhantomGanonScreamJointIndices[];
extern AnimationHeader gPhantomGanonScreamAnim;
extern s16 gPhantomGanonRidePoseFrameData[];
extern JointIndex gPhantomGanonRidePoseJointIndices[];
extern AnimationHeader gPhantomGanonRidePoseAnim;
extern s16 gPhantomGanonLastPoseFrameData[];
extern JointIndex gPhantomGanonLastPoseJointIndices[];
extern AnimationHeader gPhantomGanonLastPoseAnim;
extern s16 gPhantomGanonHorseRearingFrameData[];
extern JointIndex gPhantomGanonHorseRearingJointIndices[];
extern AnimationHeader gPhantomGanonHorseRearingAnim;
extern s16 gPhantomGanonRideSpearStrikeFrameData[];
extern JointIndex gPhantomGanonRideSpearStrikeJointIndices[];
extern AnimationHeader gPhantomGanonRideSpearStrikeAnim;
extern s16 gPhantomGanonAnim_003854_06003090_FrameData[];
extern JointIndex gPhantomGanonAnim_003854_0600375C_JointIndices[];
extern AnimationHeader gPhantomGanonAnim_003854;
extern s16 gPhantomGanonRideFrameData[];
extern JointIndex gPhantomGanonRideJointIndices[];
extern AnimationHeader gPhantomGanonRideAnim;
//#define gPhantomGanonEyeTLUT_TLUT_COUNT 80
extern u64 gPhantomGanonEyeTLUT[];
//#define gPhantomGanonMouthTLUT_TLUT_COUNT 40
extern u64 gPhantomGanonMouthTLUT[];
#define gPhantomGanonEyeTex_WIDTH 32
#define gPhantomGanonEyeTex_HEIGHT 16
extern u64 gPhantomGanonEyeTex[TEX_LEN(u64, gPhantomGanonEyeTex_WIDTH, gPhantomGanonEyeTex_HEIGHT, 8)];
#define gPhantomGanonSmileTex_WIDTH 16
#define gPhantomGanonSmileTex_HEIGHT 16
extern u64 gPhantomGanonSmileTex[TEX_LEN(u64, gPhantomGanonSmileTex_WIDTH, gPhantomGanonSmileTex_HEIGHT, 8)];
#define gPhantomGanonMouthTex_WIDTH 16
#define gPhantomGanonMouthTex_HEIGHT 16
extern u64 gPhantomGanonMouthTex[TEX_LEN(u64, gPhantomGanonMouthTex_WIDTH, gPhantomGanonMouthTex_HEIGHT, 8)];
extern Vtx gPhantomGanonFaceVtx[];
extern Gfx gPhantomGanonFaceDL[209];
extern Vtx object_gnd_Vtx_005548[];
extern Vtx object_gnd_Vtx_006108[];
extern Vtx object_gnd_Vtx_006338[];
extern Vtx object_gnd_Vtx_0063E8[];
extern Vtx object_gnd_Vtx_0065C8[];
extern Vtx object_gnd_Vtx_006EF8[];
extern Vtx object_gnd_Vtx_0072C8[];
extern Vtx object_gnd_Vtx_0075B8[];
extern Vtx object_gnd_Vtx_0076A8[];
extern Vtx object_gnd_Vtx_0077B8[];
extern Vtx object_gnd_Vtx_0078F8[];
extern Vtx object_gnd_Vtx_007AD8[];
extern Vtx object_gnd_Vtx_007B88[];
extern Vtx object_gnd_Vtx_007DB8[];
extern Vtx object_gnd_Vtx_007EA8[];
extern Vtx object_gnd_Vtx_007FE8[];
extern Gfx object_gnd_0080F8_DL[191];
extern Gfx object_gnd_0086F0_DL[69];
extern Gfx object_gnd_008918_DL[27];
extern Gfx object_gnd_0089F0_DL[62];
extern Gfx object_gnd_008BE0_DL[139];
extern Gfx object_gnd_009038_DL[76];
extern Gfx object_gnd_009298_DL[57];
extern Gfx object_gnd_009460_DL[24];
extern Gfx object_gnd_009520_DL[38];
extern Gfx object_gnd_009650_DL[45];
extern Gfx object_gnd_0097B8_DL[62];
extern Gfx object_gnd_0099A8_DL[27];
extern Gfx object_gnd_009A80_DL[69];
extern Gfx object_gnd_009CA8_DL[24];
extern Gfx object_gnd_009D68_DL[45];
extern Gfx object_gnd_009ED0_DL[38];
#define gPhantomGanonLimbTex_00A000_WIDTH 16
#define gPhantomGanonLimbTex_00A000_HEIGHT 16
extern u64 gPhantomGanonLimbTex_00A000[TEX_LEN(u64, gPhantomGanonLimbTex_00A000_WIDTH, gPhantomGanonLimbTex_00A000_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00A200_WIDTH 16
#define gPhantomGanonLimbTex_00A200_HEIGHT 16
extern u64 gPhantomGanonLimbTex_00A200[TEX_LEN(u64, gPhantomGanonLimbTex_00A200_WIDTH, gPhantomGanonLimbTex_00A200_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00A400_WIDTH 16
#define gPhantomGanonLimbTex_00A400_HEIGHT 16
extern u64 gPhantomGanonLimbTex_00A400[TEX_LEN(u64, gPhantomGanonLimbTex_00A400_WIDTH, gPhantomGanonLimbTex_00A400_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00A600_WIDTH 16
#define gPhantomGanonLimbTex_00A600_HEIGHT 16
extern u64 gPhantomGanonLimbTex_00A600[TEX_LEN(u64, gPhantomGanonLimbTex_00A600_WIDTH, gPhantomGanonLimbTex_00A600_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00A800_WIDTH 8
#define gPhantomGanonLimbTex_00A800_HEIGHT 8
extern u64 gPhantomGanonLimbTex_00A800[TEX_LEN(u64, gPhantomGanonLimbTex_00A800_WIDTH, gPhantomGanonLimbTex_00A800_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00A880_WIDTH 16
#define gPhantomGanonLimbTex_00A880_HEIGHT 16
extern u64 gPhantomGanonLimbTex_00A880[TEX_LEN(u64, gPhantomGanonLimbTex_00A880_WIDTH, gPhantomGanonLimbTex_00A880_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00AA80_WIDTH 32
#define gPhantomGanonLimbTex_00AA80_HEIGHT 16
extern u64 gPhantomGanonLimbTex_00AA80[TEX_LEN(u64, gPhantomGanonLimbTex_00AA80_WIDTH, gPhantomGanonLimbTex_00AA80_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00AE80_WIDTH 8
#define gPhantomGanonLimbTex_00AE80_HEIGHT 8
extern u64 gPhantomGanonLimbTex_00AE80[TEX_LEN(u64, gPhantomGanonLimbTex_00AE80_WIDTH, gPhantomGanonLimbTex_00AE80_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00AF00_WIDTH 8
#define gPhantomGanonLimbTex_00AF00_HEIGHT 8
extern u64 gPhantomGanonLimbTex_00AF00[TEX_LEN(u64, gPhantomGanonLimbTex_00AF00_WIDTH, gPhantomGanonLimbTex_00AF00_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00AF80_WIDTH 32
#define gPhantomGanonLimbTex_00AF80_HEIGHT 16
extern u64 gPhantomGanonLimbTex_00AF80[TEX_LEN(u64, gPhantomGanonLimbTex_00AF80_WIDTH, gPhantomGanonLimbTex_00AF80_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00B380_WIDTH 16
#define gPhantomGanonLimbTex_00B380_HEIGHT 32
extern u64 gPhantomGanonLimbTex_00B380[TEX_LEN(u64, gPhantomGanonLimbTex_00B380_WIDTH, gPhantomGanonLimbTex_00B380_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00B780_WIDTH 16
#define gPhantomGanonLimbTex_00B780_HEIGHT 16
extern u64 gPhantomGanonLimbTex_00B780[TEX_LEN(u64, gPhantomGanonLimbTex_00B780_WIDTH, gPhantomGanonLimbTex_00B780_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00B980_WIDTH 8
#define gPhantomGanonLimbTex_00B980_HEIGHT 16
extern u64 gPhantomGanonLimbTex_00B980[TEX_LEN(u64, gPhantomGanonLimbTex_00B980_WIDTH, gPhantomGanonLimbTex_00B980_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00BA80_WIDTH 16
#define gPhantomGanonLimbTex_00BA80_HEIGHT 16
extern u64 gPhantomGanonLimbTex_00BA80[TEX_LEN(u64, gPhantomGanonLimbTex_00BA80_WIDTH, gPhantomGanonLimbTex_00BA80_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00BC80_WIDTH 8
#define gPhantomGanonLimbTex_00BC80_HEIGHT 16
extern u64 gPhantomGanonLimbTex_00BC80[TEX_LEN(u64, gPhantomGanonLimbTex_00BC80_WIDTH, gPhantomGanonLimbTex_00BC80_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00BD80_WIDTH 8
#define gPhantomGanonLimbTex_00BD80_HEIGHT 16
extern u64 gPhantomGanonLimbTex_00BD80[TEX_LEN(u64, gPhantomGanonLimbTex_00BD80_WIDTH, gPhantomGanonLimbTex_00BD80_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00BE80_WIDTH 16
#define gPhantomGanonLimbTex_00BE80_HEIGHT 16
extern u64 gPhantomGanonLimbTex_00BE80[TEX_LEN(u64, gPhantomGanonLimbTex_00BE80_WIDTH, gPhantomGanonLimbTex_00BE80_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00C080_WIDTH 16
#define gPhantomGanonLimbTex_00C080_HEIGHT 8
extern u64 gPhantomGanonLimbTex_00C080[TEX_LEN(u64, gPhantomGanonLimbTex_00C080_WIDTH, gPhantomGanonLimbTex_00C080_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00C180_WIDTH 8
#define gPhantomGanonLimbTex_00C180_HEIGHT 8
extern u64 gPhantomGanonLimbTex_00C180[TEX_LEN(u64, gPhantomGanonLimbTex_00C180_WIDTH, gPhantomGanonLimbTex_00C180_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00C200_WIDTH 16
#define gPhantomGanonLimbTex_00C200_HEIGHT 16
extern u64 gPhantomGanonLimbTex_00C200[TEX_LEN(u64, gPhantomGanonLimbTex_00C200_WIDTH, gPhantomGanonLimbTex_00C200_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00C400_WIDTH 4
#define gPhantomGanonLimbTex_00C400_HEIGHT 16
extern u64 gPhantomGanonLimbTex_00C400[TEX_LEN(u64, gPhantomGanonLimbTex_00C400_WIDTH, gPhantomGanonLimbTex_00C400_HEIGHT, 16)];
#define gPhantomGanonLimbTex_00C480_WIDTH 8
#define gPhantomGanonLimbTex_00C480_HEIGHT 16
extern u64 gPhantomGanonLimbTex_00C480[TEX_LEN(u64, gPhantomGanonLimbTex_00C480_WIDTH, gPhantomGanonLimbTex_00C480_HEIGHT, 16)];
extern StandardLimb object_gnd_00C580_Limb;
extern StandardLimb object_gnd_00C58C_Limb;
extern StandardLimb object_gnd_00C598_Limb;
extern StandardLimb object_gnd_00C5A4_Limb;
extern StandardLimb object_gnd_00C5B0_Limb;
extern StandardLimb object_gnd_00C5BC_Limb;
extern StandardLimb object_gnd_00C5C8_Limb;
extern StandardLimb object_gnd_00C5D4_Limb;
extern StandardLimb object_gnd_00C5E0_Limb;
extern StandardLimb object_gnd_00C5EC_Limb;
extern StandardLimb object_gnd_00C5F8_Limb;
extern StandardLimb object_gnd_00C604_Limb;
extern StandardLimb object_gnd_00C610_Limb;
extern StandardLimb object_gnd_00C61C_Limb;
extern StandardLimb object_gnd_00C628_Limb;
extern StandardLimb object_gnd_00C634_Limb;
extern StandardLimb object_gnd_00C640_Limb;
extern StandardLimb object_gnd_00C64C_Limb;
extern StandardLimb object_gnd_00C658_Limb;
extern StandardLimb object_gnd_00C664_Limb;
extern StandardLimb object_gnd_00C670_Limb;
extern StandardLimb object_gnd_00C67C_Limb;
extern StandardLimb object_gnd_00C688_Limb;
extern StandardLimb object_gnd_00C694_Limb;
extern StandardLimb object_gnd_00C6A0_Limb;
extern void* gPhantomGanonLimbs[];
typedef enum gPhantomGanonSkelLimb {
    /*  0 */ LIMB_OBJECT_GND_00C710_NONE,
    /*  1 */ LIMB_OBJECT_GND_00C580,
    /*  2 */ LIMB_OBJECT_GND_00C58C,
    /*  3 */ LIMB_OBJECT_GND_00C598,
    /*  4 */ LIMB_OBJECT_GND_00C5A4,
    /*  5 */ LIMB_OBJECT_GND_00C5B0,
    /*  6 */ LIMB_OBJECT_GND_00C5BC,
    /*  7 */ LIMB_OBJECT_GND_00C5C8,
    /*  8 */ LIMB_OBJECT_GND_00C5D4,
    /*  9 */ LIMB_OBJECT_GND_00C5E0,
    /* 10 */ LIMB_OBJECT_GND_00C5EC,
    /* 11 */ LIMB_OBJECT_GND_00C5F8,
    /* 12 */ LIMB_OBJECT_GND_00C604,
    /* 13 */ LIMB_OBJECT_GND_00C610,
    /* 14 */ LIMB_OBJECT_GND_00C61C,
    /* 15 */ LIMB_OBJECT_GND_00C628,
    /* 16 */ LIMB_OBJECT_GND_00C634,
    /* 17 */ LIMB_OBJECT_GND_00C640,
    /* 18 */ LIMB_OBJECT_GND_00C64C,
    /* 19 */ LIMB_OBJECT_GND_00C658,
    /* 20 */ LIMB_OBJECT_GND_00C664,
    /* 21 */ LIMB_OBJECT_GND_00C670,
    /* 22 */ LIMB_OBJECT_GND_00C67C,
    /* 23 */ LIMB_OBJECT_GND_00C688,
    /* 24 */ LIMB_OBJECT_GND_00C694,
    /* 25 */ LIMB_OBJECT_GND_00C6A0,
    /* 26 */ LIMB_OBJECT_GND_00C710_MAX
} gPhantomGanonSkelLimb;
extern SkeletonHeader gPhantomGanonSkel;
extern s16 gPhantomGanonAnim_00CC84_0600C720_FrameData[];
extern JointIndex gPhantomGanonAnim_00CC84_0600CB88_JointIndices[];
extern AnimationHeader gPhantomGanonAnim_00CC84;
extern s16 gPhantomGanonAnim_00D398_0600CCA0_FrameData[];
extern JointIndex gPhantomGanonAnim_00D398_0600D2A0_JointIndices[];
extern AnimationHeader gPhantomGanonAnim_00D398;
extern s16 gPhantomGanonRideSpearRaiseFrameData[];
extern JointIndex gPhantomGanonRideSpearRaiseJointIndices[];
extern AnimationHeader gPhantomGanonRideSpearRaiseAnim;
extern s16 gPhantomGanonRideSpearResetFrameData[];
extern JointIndex gPhantomGanonRideSpearResetJointIndices[];
extern AnimationHeader gPhantomGanonRideSpearResetAnim;
extern s16 gPhantomGanonThrowFrameData[];
extern JointIndex gPhantomGanonThrowJointIndices[];
extern AnimationHeader gPhantomGanonThrowAnim;
extern s16 gPhantomGanonThrowEndFrameData[];
extern JointIndex gPhantomGanonThrowEndJointIndices[];
extern AnimationHeader gPhantomGanonThrowEndAnim;
extern s16 gPhantomGanonGroundDamageFrameData[];
extern JointIndex gPhantomGanonGroundDamageJointIndices[];
extern AnimationHeader gPhantomGanonGroundDamageAnim;
extern s16 gPhantomGanonNeutralFrameData[];
extern JointIndex gPhantomGanonNeutralJointIndices[];
extern AnimationHeader gPhantomGanonNeutralAnim;
extern s16 gPhantomGanonBlockFrameData[];
extern JointIndex gPhantomGanonBlockJointIndices[];
extern AnimationHeader gPhantomGanonBlockAnim;
extern s16 gPhantomGanonAirDamageFrameData[];
extern JointIndex gPhantomGanonAirDamageJointIndices[];
extern AnimationHeader gPhantomGanonAirDamageAnim;
extern s16 gPhantomGanonReturn1FrameData[];
extern JointIndex gPhantomGanonReturn1JointIndices[];
extern AnimationHeader gPhantomGanonReturn1Anim;
extern s16 gPhantomGanonReturn2FrameData[];
extern JointIndex gPhantomGanonReturn2JointIndices[];
extern AnimationHeader gPhantomGanonReturn2Anim;
extern s16 gPhantomGanonStunnedFrameData[];
extern JointIndex gPhantomGanonStunnedJointIndices[];
extern AnimationHeader gPhantomGanonStunnedAnim;
extern s16 gPhantomGanonChargeStartFrameData[];
extern JointIndex gPhantomGanonChargeStartJointIndices[];
extern AnimationHeader gPhantomGanonChargeStartAnim;
extern s16 gPhantomGanonAnim_012320_06011F60_FrameData[];
extern JointIndex gPhantomGanonAnim_012320_06012228_JointIndices[];
extern AnimationHeader gPhantomGanonAnim_012320;
extern s16 gPhantomGanonChargeFrameData[];
extern JointIndex gPhantomGanonChargeJointIndices[];
extern AnimationHeader gPhantomGanonChargeAnim;
extern s16 gPhantomGanonChargeWindupFrameData[];
extern JointIndex gPhantomGanonChargeWindupJointIndices[];
extern AnimationHeader gPhantomGanonChargeWindupAnim;
extern Vtx gPhantomGanonBarsVtx[];
extern Gfx gPhantomGanonBarsDL[20];
#define object_gnd_012B50_Tex_WIDTH 16
#define object_gnd_012B50_Tex_HEIGHT 32
extern u64 object_gnd_012B50_Tex[TEX_LEN(u64, object_gnd_012B50_Tex_WIDTH, object_gnd_012B50_Tex_HEIGHT, 16)];
extern BgCamInfo gPhantomGanonBarsBgCamList[];
extern SurfaceType gPhantomGanonBarsSurfaceTypes[];
extern CollisionPoly gPhantomGanonBarsPolyList[];
extern Vec3s gPhantomGanonBarsVtxList[];
extern CollisionHeader gPhantomGanonBarsCol;

#endif
