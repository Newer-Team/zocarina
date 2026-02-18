#ifndef OBJECT_IN_H
#define OBJECT_IN_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 object_in_Anim_0003B4_06000000_FrameData[];
extern JointIndex object_in_Anim_0003B4_0600033C_JointIndices[];
extern AnimationHeader object_in_Anim_0003B4;
extern s16 object_in_Anim_000CB0_060003D0_FrameData[];
extern JointIndex object_in_Anim_000CB0_06000C38_JointIndices[];
extern AnimationHeader object_in_Anim_000CB0;
extern s16 object_in_Anim_001BE0_06000CC0_FrameData[];
extern JointIndex object_in_Anim_001BE0_06001B68_JointIndices[];
extern AnimationHeader object_in_Anim_001BE0;
extern s16 object_in_Anim_001CC0_06001BF0_FrameData[];
extern JointIndex object_in_Anim_001CC0_06001C48_JointIndices[];
extern AnimationHeader object_in_Anim_001CC0;
//#define gIngoTLUT_TLUT_COUNT 256
extern u64 gIngoTLUT[];
//#define gIngoSkinGradientTLUT_TLUT_COUNT 256
extern u64 gIngoSkinGradientTLUT[];
extern u8 gIngoBlob_0020D0[];
#define gIngoUnusedEyeTex_WIDTH 32
#define gIngoUnusedEyeTex_HEIGHT 32
extern u64 gIngoUnusedEyeTex[TEX_LEN(u64, gIngoUnusedEyeTex_WIDTH, gIngoUnusedEyeTex_HEIGHT, 16)];
#define gIngoSkinGradientTex_WIDTH 8
#define gIngoSkinGradientTex_HEIGHT 8
extern u64 gIngoSkinGradientTex[TEX_LEN(u64, gIngoSkinGradientTex_WIDTH, gIngoSkinGradientTex_HEIGHT, 8)];
#define gIngoArmHairTex_WIDTH 16
#define gIngoArmHairTex_HEIGHT 32
extern u64 gIngoArmHairTex[TEX_LEN(u64, gIngoArmHairTex_WIDTH, gIngoArmHairTex_HEIGHT, 8)];
#define gIngoFingersTex_WIDTH 16
#define gIngoFingersTex_HEIGHT 16
extern u64 gIngoFingersTex[TEX_LEN(u64, gIngoFingersTex_WIDTH, gIngoFingersTex_HEIGHT, 8)];
#define gIngoShirtSleeveTex_WIDTH 8
#define gIngoShirtSleeveTex_HEIGHT 8
extern u64 gIngoShirtSleeveTex[TEX_LEN(u64, gIngoShirtSleeveTex_WIDTH, gIngoShirtSleeveTex_HEIGHT, 8)];
#define gIngoShirtButtonsTex_WIDTH 32
#define gIngoShirtButtonsTex_HEIGHT 32
extern u64 gIngoShirtButtonsTex[TEX_LEN(u64, gIngoShirtButtonsTex_WIDTH, gIngoShirtButtonsTex_HEIGHT, 8)];
#define gIngoClothTex_WIDTH 8
#define gIngoClothTex_HEIGHT 8
extern u64 gIngoClothTex[TEX_LEN(u64, gIngoClothTex_WIDTH, gIngoClothTex_HEIGHT, 8)];
#define gIngoClothStainTex_WIDTH 8
#define gIngoClothStainTex_HEIGHT 8
extern u64 gIngoClothStainTex[TEX_LEN(u64, gIngoClothStainTex_WIDTH, gIngoClothStainTex_HEIGHT, 8)];
extern u8 gIngoBlob_003150[];
#define gIngoPocketTex_WIDTH 8
#define gIngoPocketTex_HEIGHT 8
extern u64 gIngoPocketTex[TEX_LEN(u64, gIngoPocketTex_WIDTH, gIngoPocketTex_HEIGHT, 8)];
//#define gIngoHeadTLUT_TLUT_COUNT 252
extern u64 gIngoHeadTLUT[];
//#define gIngoTLUT2_TLUT_COUNT 100
extern u64 gIngoTLUT2[];
#define gIngoHeadGradient2Tex_WIDTH 8
#define gIngoHeadGradient2Tex_HEIGHT 8
extern u64 gIngoHeadGradient2Tex[TEX_LEN(u64, gIngoHeadGradient2Tex_WIDTH, gIngoHeadGradient2Tex_HEIGHT, 8)];
#define gIngoEarTex_WIDTH 8
#define gIngoEarTex_HEIGHT 8
extern u64 gIngoEarTex[TEX_LEN(u64, gIngoEarTex_WIDTH, gIngoEarTex_HEIGHT, 8)];
#define gIngoBrownTex_WIDTH 8
#define gIngoBrownTex_HEIGHT 8
extern u64 gIngoBrownTex[TEX_LEN(u64, gIngoBrownTex_WIDTH, gIngoBrownTex_HEIGHT, 8)];
#define gIngoEyeOpenTex_WIDTH 32
#define gIngoEyeOpenTex_HEIGHT 32
extern u64 gIngoEyeOpenTex[TEX_LEN(u64, gIngoEyeOpenTex_WIDTH, gIngoEyeOpenTex_HEIGHT, 8)];
#define gIngoEyebrowEdgeTex_WIDTH 16
#define gIngoEyebrowEdgeTex_HEIGHT 16
extern u64 gIngoEyebrowEdgeTex[TEX_LEN(u64, gIngoEyebrowEdgeTex_WIDTH, gIngoEyebrowEdgeTex_HEIGHT, 16)];
#define gIngoHairTex_WIDTH 16
#define gIngoHairTex_HEIGHT 16
extern u64 gIngoHairTex[TEX_LEN(u64, gIngoHairTex_WIDTH, gIngoHairTex_HEIGHT, 8)];
#define gIngoSideburnsTex_WIDTH 16
#define gIngoSideburnsTex_HEIGHT 16
extern u64 gIngoSideburnsTex[TEX_LEN(u64, gIngoSideburnsTex_WIDTH, gIngoSideburnsTex_HEIGHT, 8)];
#define gIngoPitchforkTex_WIDTH 8
#define gIngoPitchforkTex_HEIGHT 8
extern u64 gIngoPitchforkTex[TEX_LEN(u64, gIngoPitchforkTex_WIDTH, gIngoPitchforkTex_HEIGHT, 8)];
#define gIngoBasketTex_WIDTH 8
#define gIngoBasketTex_HEIGHT 16
extern u64 gIngoBasketTex[TEX_LEN(u64, gIngoBasketTex_WIDTH, gIngoBasketTex_HEIGHT, 16)];
#define gIngoBeardTex_WIDTH 16
#define gIngoBeardTex_HEIGHT 32
extern u64 gIngoBeardTex[TEX_LEN(u64, gIngoBeardTex_WIDTH, gIngoBeardTex_HEIGHT, 8)];
#define gIngoBasketInsideTex_WIDTH 8
#define gIngoBasketInsideTex_HEIGHT 16
extern u64 gIngoBasketInsideTex[TEX_LEN(u64, gIngoBasketInsideTex_WIDTH, gIngoBasketInsideTex_HEIGHT, 16)];
#define gIngoBootSideTex_WIDTH 8
#define gIngoBootSideTex_HEIGHT 16
extern u64 gIngoBootSideTex[TEX_LEN(u64, gIngoBootSideTex_WIDTH, gIngoBootSideTex_HEIGHT, 8)];
#define gIngoBootTopTex_WIDTH 16
#define gIngoBootTopTex_HEIGHT 16
extern u64 gIngoBootTopTex[TEX_LEN(u64, gIngoBootTopTex_WIDTH, gIngoBootTopTex_HEIGHT, 8)];
#define gIngoRedTex_WIDTH 8
#define gIngoRedTex_HEIGHT 8
extern u64 gIngoRedTex[TEX_LEN(u64, gIngoRedTex_WIDTH, gIngoRedTex_HEIGHT, 8)];
#define gIngoEyeClosed2Tex_WIDTH 32
#define gIngoEyeClosed2Tex_HEIGHT 32
extern u64 gIngoEyeClosed2Tex[TEX_LEN(u64, gIngoEyeClosed2Tex_WIDTH, gIngoEyeClosed2Tex_HEIGHT, 8)];
#define gIngoHeadGradientTex_WIDTH 8
#define gIngoHeadGradientTex_HEIGHT 8
extern u64 gIngoHeadGradientTex[TEX_LEN(u64, gIngoHeadGradientTex_WIDTH, gIngoHeadGradientTex_HEIGHT, 8)];
#define gIngoEyeHalfTex_WIDTH 32
#define gIngoEyeHalfTex_HEIGHT 32
extern u64 gIngoEyeHalfTex[TEX_LEN(u64, gIngoEyeHalfTex_WIDTH, gIngoEyeHalfTex_HEIGHT, 8)];
#define gIngoEyeClosedTex_WIDTH 32
#define gIngoEyeClosedTex_HEIGHT 32
extern u64 gIngoEyeClosedTex[TEX_LEN(u64, gIngoEyeClosedTex_WIDTH, gIngoEyeClosedTex_HEIGHT, 8)];
extern Vtx gIngoChildEraHeadVtx[];
extern Vtx gIngoChildEraRightEyebrowVtx[];
extern Vtx gIngoChildEraLeftEyebrowVtx[];
extern Vtx gIngoChildEraMustacheVtx[];
extern Vtx gIngoChildEraLeftFootVtx[];
extern Vtx gIngoChildEraRightFootVtx[];
extern Vtx gIngoChildEraBasketVtx[];
extern Vtx gIngoChildEraPitchForkVtx[];
extern Gfx gIngoChildEraHeadDL[397];
extern Gfx gIngoChildEraRightEyebrowDL[37];
extern Gfx gIngoChildEraLeftEyebrowDL[37];
extern Gfx gIngoChildEraMustacheDL[31];
extern Gfx gIngoChildEraLeftFootDL[52];
extern Gfx gIngoChildEraRightFootDL[52];
extern Gfx gIngoChildEraBasketDL[59];
extern Gfx gIngoChildEraPitchForkDL[116];
extern Vtx gIngoChildEraLeftHandVtx[];
extern Vtx gIngoChildEraLeftArmVtx[];
extern Vtx gIngoChildEraLeftShoulderVtx[];
extern Vtx gIngoChildEraRightHandVtx[];
extern Vtx gIngoChildEraRightArmVtx[];
extern Vtx gIngoChildEraRightShoulderVtx[];
extern Vtx gIngoChildEraChestVtx[];
extern Vtx gIngoChildEraLeftLegVtx[];
extern Vtx gIngoChildEraLeftThighVtx[];
extern Vtx gIngoChildEraRightLegVtx[];
extern Vtx gIngoChildEraRightThighVtx[];
extern Vtx gIngoChildEraTorsoVtx[];
extern Gfx gIngoChildEraChestDL[102];
extern Gfx gIngoChildEraRightShoulderDL[69];
extern Gfx gIngoChildEraRightArmDL[86];
extern Gfx gIngoChildEraRightHandDL[120];
extern Gfx gIngoChildEraLeftShoulderDL[69];
extern Gfx gIngoChildEraLeftArmDL[86];
extern Gfx gIngoChildEraLeftHandDL[136];
extern Gfx gIngoChildEraTorsoDL[69];
extern Gfx gIngoChildEraRightThighDL[105];
extern Gfx gIngoChildEraRightLegDL[75];
extern Gfx gIngoChildEraLeftThighDL[105];
extern Gfx gIngoChildEraLeftLegDL[58];
//#define gIngoAdultEraTLUT_TLUT_COUNT 256
extern u64 gIngoAdultEraTLUT[];
#define gIngoAdultEraEyebrowEdgeTex_WIDTH 16
#define gIngoAdultEraEyebrowEdgeTex_HEIGHT 16
extern u64 gIngoAdultEraEyebrowEdgeTex[TEX_LEN(u64, gIngoAdultEraEyebrowEdgeTex_WIDTH, gIngoAdultEraEyebrowEdgeTex_HEIGHT, 16)];
#define gIngoAdultEraFaceHairTex_WIDTH 8
#define gIngoAdultEraFaceHairTex_HEIGHT 8
extern u64 gIngoAdultEraFaceHairTex[TEX_LEN(u64, gIngoAdultEraFaceHairTex_WIDTH, gIngoAdultEraFaceHairTex_HEIGHT, 8)];
#define gIngoAdultEraGradientTex_WIDTH 8
#define gIngoAdultEraGradientTex_HEIGHT 8
extern u64 gIngoAdultEraGradientTex[TEX_LEN(u64, gIngoAdultEraGradientTex_WIDTH, gIngoAdultEraGradientTex_HEIGHT, 8)];
#define gIngoAdultEraEarTex_WIDTH 8
#define gIngoAdultEraEarTex_HEIGHT 8
extern u64 gIngoAdultEraEarTex[TEX_LEN(u64, gIngoAdultEraEarTex_WIDTH, gIngoAdultEraEarTex_HEIGHT, 8)];
#define object_in_Tex_00C758_WIDTH 16
#define object_in_Tex_00C758_HEIGHT 32
extern u64 object_in_Tex_00C758[TEX_LEN(u64, object_in_Tex_00C758_WIDTH, object_in_Tex_00C758_HEIGHT, 8)];
#define gIngoAdultEraHairTex_WIDTH 16
#define gIngoAdultEraHairTex_HEIGHT 16
extern u64 gIngoAdultEraHairTex[TEX_LEN(u64, gIngoAdultEraHairTex_WIDTH, gIngoAdultEraHairTex_HEIGHT, 8)];
#define gIngoAdultEraSideburnsTex_WIDTH 16
#define gIngoAdultEraSideburnsTex_HEIGHT 16
extern u64 gIngoAdultEraSideburnsTex[TEX_LEN(u64, gIngoAdultEraSideburnsTex_WIDTH, gIngoAdultEraSideburnsTex_HEIGHT, 8)];
#define gIngoAdultEraGradient2Tex_WIDTH 8
#define gIngoAdultEraGradient2Tex_HEIGHT 8
extern u64 gIngoAdultEraGradient2Tex[TEX_LEN(u64, gIngoAdultEraGradient2Tex_WIDTH, gIngoAdultEraGradient2Tex_HEIGHT, 8)];
#define gIngoUnusedEyeOpenTex_WIDTH 32
#define gIngoUnusedEyeOpenTex_HEIGHT 32
extern u64 gIngoUnusedEyeOpenTex[TEX_LEN(u64, gIngoUnusedEyeOpenTex_WIDTH, gIngoUnusedEyeOpenTex_HEIGHT, 16)];
#define gIngoUnusedEyeHalfTex_WIDTH 32
#define gIngoUnusedEyeHalfTex_HEIGHT 32
extern u64 gIngoUnusedEyeHalfTex[TEX_LEN(u64, gIngoUnusedEyeHalfTex_WIDTH, gIngoUnusedEyeHalfTex_HEIGHT, 16)];
#define gIngoUnusedEyeClosedTex_WIDTH 32
#define gIngoUnusedEyeClosedTex_HEIGHT 32
extern u64 gIngoUnusedEyeClosedTex[TEX_LEN(u64, gIngoUnusedEyeClosedTex_WIDTH, gIngoUnusedEyeClosedTex_HEIGHT, 16)];
#define gIngoAdultEraFingersTex_WIDTH 16
#define gIngoAdultEraFingersTex_HEIGHT 16
extern u64 gIngoAdultEraFingersTex[TEX_LEN(u64, gIngoAdultEraFingersTex_WIDTH, gIngoAdultEraFingersTex_HEIGHT, 8)];
#define gIngoAdultEraArmHairTex_WIDTH 16
#define gIngoAdultEraArmHairTex_HEIGHT 32
extern u64 gIngoAdultEraArmHairTex[TEX_LEN(u64, gIngoAdultEraArmHairTex_WIDTH, gIngoAdultEraArmHairTex_HEIGHT, 8)];
#define gIngoAdultEraSleeveTex_WIDTH 16
#define gIngoAdultEraSleeveTex_HEIGHT 16
extern u64 gIngoAdultEraSleeveTex[TEX_LEN(u64, gIngoAdultEraSleeveTex_WIDTH, gIngoAdultEraSleeveTex_HEIGHT, 8)];
#define gIngoAdultEraCollarTex_WIDTH 16
#define gIngoAdultEraCollarTex_HEIGHT 16
extern u64 gIngoAdultEraCollarTex[TEX_LEN(u64, gIngoAdultEraCollarTex_WIDTH, gIngoAdultEraCollarTex_HEIGHT, 8)];
#define gIngoAdultEraCollar2Tex_WIDTH 16
#define gIngoAdultEraCollar2Tex_HEIGHT 16
extern u64 gIngoAdultEraCollar2Tex[TEX_LEN(u64, gIngoAdultEraCollar2Tex_WIDTH, gIngoAdultEraCollar2Tex_HEIGHT, 8)];
#define gIngoAdultEraShirtTex_WIDTH 16
#define gIngoAdultEraShirtTex_HEIGHT 16
extern u64 gIngoAdultEraShirtTex[TEX_LEN(u64, gIngoAdultEraShirtTex_WIDTH, gIngoAdultEraShirtTex_HEIGHT, 8)];
#define gIngoAdultEraShoesTex_WIDTH 8
#define gIngoAdultEraShoesTex_HEIGHT 8
extern u64 gIngoAdultEraShoesTex[TEX_LEN(u64, gIngoAdultEraShoesTex_WIDTH, gIngoAdultEraShoesTex_HEIGHT, 8)];
#define gIngoAdultEraPantsTex_WIDTH 8
#define gIngoAdultEraPantsTex_HEIGHT 8
extern u64 gIngoAdultEraPantsTex[TEX_LEN(u64, gIngoAdultEraPantsTex_WIDTH, gIngoAdultEraPantsTex_HEIGHT, 8)];
extern Vtx gIngoAdultEraRightEyebrowVtx[];
extern Vtx gIngoAdultEraLeftEyebrowVtx[];
extern Vtx gIngoAdultEraMustacheVtx[];
extern Vtx gIngoAdultEraHeadVtx[];
extern Vtx gIngoAdultEraLeftHandVtx[];
extern Vtx gIngoAdultEraLeftArmVtx[];
extern Vtx gIngoAdultEraLeftShoulderVtx[];
extern Vtx gIngoAdultEraRightHandVtx[];
extern Vtx gIngoAdultEraRightArmVtx[];
extern Vtx gIngoAdultEraRightShoulderVtx[];
extern Vtx gIngoAdultEraChestVtx[];
extern Vtx gIngoAdultEraLeftFootVtx[];
extern Vtx gIngoAdultEraLeftLegVtx[];
extern Vtx gIngoAdultEraLeftThighVtx[];
extern Vtx gIngoAdultEraRightFootVtx[];
extern Vtx gIngoAdultEraRightLegVtx[];
extern Vtx gIngoAdultEraRightThighVtx[];
extern Vtx gIngoAdultEraTorsoVtx[];
extern Gfx gIngoAdultEraChestDL[112];
extern Gfx gIngoAdultEraHeadDL[201];
extern Gfx gIngoAdultEraMustacheDL[32];
extern Gfx gIngoAdultEraRightEyebrowDL[38];
extern Gfx gIngoAdultEraLeftEyebrowDL[38];
extern Gfx gIngoAdultEraRightShoulderDL[38];
extern Gfx gIngoAdultEraRightArmDL[38];
extern Gfx gIngoAdultEraRightHandDL[124];
extern Gfx gIngoAdultEraLeftShoulderDL[38];
extern Gfx gIngoAdultEraLeftArmDL[38];
extern Gfx gIngoAdultEraLeftHandDL[124];
extern Gfx gIngoAdultEraTorsoDL[55];
extern Gfx gIngoAdultEraRightThighDL[39];
extern Gfx gIngoAdultEraRightLegDL[42];
extern Gfx gIngoAdultEraRightFootDL[41];
extern Gfx gIngoAdultEraLeftThighDL[39];
extern Gfx gIngoAdultEraLeftLegDL[42];
extern Gfx gIngoAdultEraLeftFootDL[41];
extern StandardLimb gIngoRootLimb;
extern StandardLimb gIngoLeftThighLimb;
extern StandardLimb gIngoLeftLegLimb;
extern StandardLimb gIngoLeftFootLimb;
extern StandardLimb gIngoRightThighLimb;
extern StandardLimb gIngoRightLegLimb;
extern StandardLimb gIngoRightFootLimb;
extern StandardLimb gIngoTorsoLimb;
extern StandardLimb gIngoChestLimb;
extern StandardLimb gIngoLeftShoulderLimb;
extern StandardLimb gIngoLeftArmLimb;
extern StandardLimb gIngoLeftHandLimb;
extern StandardLimb gIngoRightShoulderLimb;
extern StandardLimb gIngoRightArmLimb;
extern StandardLimb gIngoRightHandLimb;
extern StandardLimb gIngoHeadLimb;
extern StandardLimb gIngoLeftEyebrowLimb;
extern StandardLimb gIngoRightEyebrowLimb;
extern StandardLimb gIngoMustacheLimb;
extern void* gIngoLimbs[];
typedef enum IngoLimb {
    /*  0 */ INGO_LIMB_NONE,
    /*  1 */ INGO_LIMB_ROOT,
    /*  2 */ INGO_LIMB_LEFT_THIGH,
    /*  3 */ INGO_LIMB_LEFT_LEG,
    /*  4 */ INGO_LIMB_LEFT_FOOT,
    /*  5 */ INGO_LIMB_RIGHT_THIGH,
    /*  6 */ INGO_LIMB_RIGHT_LEG,
    /*  7 */ INGO_LIMB_RIGHT_FOOT,
    /*  8 */ INGO_LIMB_TORSO,
    /*  9 */ INGO_LIMB_CHEST,
    /* 10 */ INGO_LIMB_LEFT_SHOULDER,
    /* 11 */ INGO_LIMB_LEFT_ARM,
    /* 12 */ INGO_LIMB_LEFT_HAND,
    /* 13 */ INGO_LIMB_RIGHT_SHOULDER,
    /* 14 */ INGO_LIMB_RIGHT_ARM,
    /* 15 */ INGO_LIMB_RIGHT_HAND,
    /* 16 */ INGO_LIMB_HEAD,
    /* 17 */ INGO_LIMB_LEFT_EYEBROW,
    /* 18 */ INGO_LIMB_RIGHT_EYEBROW,
    /* 19 */ INGO_LIMB_MUSTACHE,
    /* 20 */ INGO_LIMB_MAX
} IngoLimb;
extern FlexSkeletonHeader gIngoSkel;
extern s16 object_in_Anim_013C6C_06013BA0_FrameData[];
extern JointIndex object_in_Anim_013C6C_06013BF4_JointIndices[];
extern AnimationHeader object_in_Anim_013C6C;
extern s16 object_in_Anim_013D60_06013C80_FrameData[];
extern JointIndex object_in_Anim_013D60_06013CE8_JointIndices[];
extern AnimationHeader object_in_Anim_013D60;
extern s16 object_in_Anim_01431C_06013D70_FrameData[];
extern JointIndex object_in_Anim_01431C_060142A4_JointIndices[];
extern AnimationHeader object_in_Anim_01431C;
extern s16 object_in_Anim_014CA8_06014330_FrameData[];
extern JointIndex object_in_Anim_014CA8_06014C30_JointIndices[];
extern AnimationHeader object_in_Anim_014CA8;
extern s16 object_in_Anim_0151C8_06014CC0_FrameData[];
extern JointIndex object_in_Anim_0151C8_06015150_JointIndices[];
extern AnimationHeader object_in_Anim_0151C8;
extern s16 object_in_Anim_015814_060151E0_FrameData[];
extern JointIndex object_in_Anim_015814_0601579C_JointIndices[];
extern AnimationHeader object_in_Anim_015814;
extern s16 object_in_Anim_015DF0_06015830_FrameData[];
extern JointIndex object_in_Anim_015DF0_06015D78_JointIndices[];
extern AnimationHeader object_in_Anim_015DF0;
extern s16 object_in_Anim_01646C_06015E00_FrameData[];
extern JointIndex object_in_Anim_01646C_060163F4_JointIndices[];
extern AnimationHeader object_in_Anim_01646C;
extern s16 object_in_Anim_016B3C_06016480_FrameData[];
extern JointIndex object_in_Anim_016B3C_06016AC4_JointIndices[];
extern AnimationHeader object_in_Anim_016B3C;
extern s16 object_in_Anim_0175D0_06016B50_FrameData[];
extern JointIndex object_in_Anim_0175D0_06017558_JointIndices[];
extern AnimationHeader object_in_Anim_0175D0;
extern s16 object_in_Anim_017B58_060175E0_FrameData[];
extern JointIndex object_in_Anim_017B58_06017AE0_JointIndices[];
extern AnimationHeader object_in_Anim_017B58;
extern s16 object_in_Anim_018C38_06017B70_FrameData[];
extern JointIndex object_in_Anim_018C38_06018BC0_JointIndices[];
extern AnimationHeader object_in_Anim_018C38;

#endif
