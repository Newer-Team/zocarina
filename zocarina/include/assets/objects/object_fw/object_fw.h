#ifndef OBJECT_FW_H
#define OBJECT_FW_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gFlareDancerCastingFireFrameData[];
extern JointIndex gFlareDancerCastingFireJointIndices[];
extern AnimationHeader gFlareDancerCastingFireAnim;
#define gFlareDancerBlueFlameTex_WIDTH 4
#define gFlareDancerBlueFlameTex_HEIGHT 4
extern u64 gFlareDancerBlueFlameTex[TEX_LEN(u64, gFlareDancerBlueFlameTex_WIDTH, gFlareDancerBlueFlameTex_HEIGHT, 16)];
#define gFlareDancerFireTex_WIDTH 32
#define gFlareDancerFireTex_HEIGHT 64
extern u64 gFlareDancerFireTex[TEX_LEN(u64, gFlareDancerFireTex_WIDTH, gFlareDancerFireTex_HEIGHT, 8)];
#define gFlareDancerFirePatternTex_WIDTH 32
#define gFlareDancerFirePatternTex_HEIGHT 64
extern u64 gFlareDancerFirePatternTex[TEX_LEN(u64, gFlareDancerFirePatternTex_WIDTH, gFlareDancerFirePatternTex_HEIGHT, 8)];
#define gFlareDancerFuseTex_WIDTH 16
#define gFlareDancerFuseTex_HEIGHT 32
extern u64 gFlareDancerFuseTex[TEX_LEN(u64, gFlareDancerFuseTex_WIDTH, gFlareDancerFuseTex_HEIGHT, 16)];
#define gFlareDancerSwordHiltTex_WIDTH 16
#define gFlareDancerSwordHiltTex_HEIGHT 16
extern u64 gFlareDancerSwordHiltTex[TEX_LEN(u64, gFlareDancerSwordHiltTex_WIDTH, gFlareDancerSwordHiltTex_HEIGHT, 16)];
#define gFlareDancerCoreBodyTex_WIDTH 16
#define gFlareDancerCoreBodyTex_HEIGHT 32
extern u64 gFlareDancerCoreBodyTex[TEX_LEN(u64, gFlareDancerCoreBodyTex_WIDTH, gFlareDancerCoreBodyTex_HEIGHT, 16)];
extern Vtx gFlareDancerRightStiltVtx[];
extern Vtx gFlareDancerLowerRightLegVtx[];
extern Vtx gFlareDancerUpperRightLegVtx[];
extern Vtx gFlareDancerLeftStiltVtx[];
extern Vtx gFlareDancerLowerLeftLegVtx[];
extern Vtx gFlareDancerUpperLeftLegVtx[];
extern Vtx gFlareDancerDressVtx[];
extern Vtx gFlareDancerFuseVtx[];
extern Vtx gFlareDancerRightSwordVtx[];
extern Vtx gFlareDancerRightForearmVtx[];
extern Vtx gFlareDancerRightUpperArmVtx[];
extern Vtx gFlareDancerLeftSwordVtx[];
extern Vtx gFlareDancerLeftForearmVtx[];
extern Vtx gFlareDancerLeftUpperArmVtx[];
extern Vtx gFlareDancerHeadVtx[];
extern Vtx gFlareDancerTorsoVtx[];
extern Vtx gFlareDancerLowerFireHairVtx[];
extern Vtx gFlareDancerMiddleFireHair3Vtx[];
extern Vtx gFlareDancerMiddleFireHair2Vtx[];
extern Vtx gFlareDancerMiddleFireHair1Vtx[];
extern Vtx gFlareDancerUpperFireHairVtx[];
extern Gfx gFlareDancerUpperRightLegDL[33];
extern Gfx gFlareDancerLowerRightLegDL[30];
extern Gfx gFlareDancerRightStiltDL[21];
extern Gfx gFlareDancerUpperLeftLegDL[33];
extern Gfx gFlareDancerLowerLeftLegDL[38];
extern Gfx gFlareDancerLeftStiltDL[21];
extern Gfx gFlareDancerTorsoDL[32];
extern Gfx gFlareDancerDressDL[47];
extern Gfx gFlareDancerFuseDL[33];
extern Gfx gFlareDancerRightUpperArmDL[40];
extern Gfx gFlareDancerRightForearmDL[39];
extern Gfx gFlareDancerRightSwordDL[44];
extern Gfx gFlareDancerLeftUpperArmDL[40];
extern Gfx gFlareDancerLeftForearmDL[38];
extern Gfx gFlareDancerLeftSwordDL[42];
extern Gfx gFlareDancerHeadDL[33];
extern Gfx gFlareDancerUpperFireHairDL[29];
extern Gfx gFlareDancerMiddleFireHair1DL[32];
extern Gfx gFlareDancerMiddleFireHair2DL[32];
extern Gfx gFlareDancerMiddleFireHair3DL[32];
extern Gfx gFlareDancerLowerFireHairDL[37];
extern StandardLimb gFlareDancerRootLimb;
extern StandardLimb gFlareDancerLowerBodyRootLimb;
extern StandardLimb gFlareDancerUpperRightLegLimb;
extern StandardLimb gFlareDancerLowerRightLegBaseLimb;
extern StandardLimb gFlareDancerRightStiltLimb;
extern StandardLimb gFlareDancerLowerRightLegLimb;
extern StandardLimb gFlareDancerUpperLeftLegLimb;
extern StandardLimb gFlareDancerLowerLeftLegBaseLimb;
extern StandardLimb gFlareDancerLeftStiltLimb;
extern StandardLimb gFlareDancerLowerLeftLegLimb;
extern StandardLimb gFlareDancerUpperBodyRootLimb;
extern StandardLimb gFlareDancerDressLimb;
extern StandardLimb gFlareDancerFuseLimb;
extern StandardLimb gFlareDancerRightUpperArmLimb;
extern StandardLimb gFlareDancerRightForearmLimb;
extern StandardLimb gFlareDancerRightSwordLimb;
extern StandardLimb gFlareDancerLeftUpperArmLimb;
extern StandardLimb gFlareDancerLeftForearmLimb;
extern StandardLimb gFlareDancerLeftSwordLimb;
extern StandardLimb gFlareDancerHeadLimb;
extern StandardLimb gFlareDancerTorsoLimb;
extern StandardLimb gFlareDancerUpperFireHairLimb;
extern StandardLimb gFlareDancerMiddleFireHair1Limb;
extern StandardLimb gFlareDancerMiddleFireHair2Limb;
extern StandardLimb gFlareDancerMiddleFireHair3Limb;
extern StandardLimb gFlareDancerLowerFireHairLimb;
extern void* gFlareDancerLimbs[];
typedef enum gFlareDancerSkelLimb {
    /*  0 */ LIMB_OBJECT_FW_005810_NONE,
    /*  1 */ LIMB_OBJECT_FW_005670,
    /*  2 */ LIMB_OBJECT_FW_00567C,
    /*  3 */ LIMB_OBJECT_FW_005688,
    /*  4 */ LIMB_OBJECT_FW_005694,
    /*  5 */ LIMB_OBJECT_FW_0056A0,
    /*  6 */ LIMB_OBJECT_FW_0056AC,
    /*  7 */ LIMB_OBJECT_FW_0056B8,
    /*  8 */ LIMB_OBJECT_FW_0056C4,
    /*  9 */ LIMB_OBJECT_FW_0056D0,
    /* 10 */ LIMB_OBJECT_FW_0056DC,
    /* 11 */ LIMB_OBJECT_FW_0056E8,
    /* 12 */ LIMB_OBJECT_FW_0056F4,
    /* 13 */ LIMB_OBJECT_FW_005700,
    /* 14 */ LIMB_OBJECT_FW_00570C,
    /* 15 */ LIMB_OBJECT_FW_005718,
    /* 16 */ LIMB_OBJECT_FW_005724,
    /* 17 */ LIMB_OBJECT_FW_005730,
    /* 18 */ LIMB_OBJECT_FW_00573C,
    /* 19 */ LIMB_OBJECT_FW_005748,
    /* 20 */ LIMB_OBJECT_FW_005754,
    /* 21 */ LIMB_OBJECT_FW_005760,
    /* 22 */ LIMB_OBJECT_FW_00576C,
    /* 23 */ LIMB_OBJECT_FW_005778,
    /* 24 */ LIMB_OBJECT_FW_005784,
    /* 25 */ LIMB_OBJECT_FW_005790,
    /* 26 */ LIMB_OBJECT_FW_00579C,
    /* 27 */ LIMB_OBJECT_FW_005810_MAX
} gFlareDancerSkelLimb;
extern FlexSkeletonHeader gFlareDancerSkel;
extern s16 gFlareDancerBackflipFrameData[];
extern JointIndex gFlareDancerBackflipJointIndices[];
extern AnimationHeader gFlareDancerBackflipAnim;
extern s16 gFlareDancerGettingUpFrameData[];
extern JointIndex gFlareDancerGettingUpJointIndices[];
extern AnimationHeader gFlareDancerGettingUpAnim;
extern s16 gFlareDancerChasingFrameData[];
extern JointIndex gFlareDancerChasingJointIndices[];
extern AnimationHeader gFlareDancerChasingAnim;
extern s16 gFlareDancerTwirlFrameData[];
extern JointIndex gFlareDancerTwirlJointIndices[];
extern AnimationHeader gFlareDancerTwirlAnim;
extern s16 gFlareDancerCoreInitRunCycleFrameData[];
extern JointIndex gFlareDancerCoreInitRunCycleJointIndices[];
extern AnimationHeader gFlareDancerCoreInitRunCycleAnim;
extern Vtx gFlareDancerCoreFuseVtx[];
extern Vtx gFlareDancerCoreBodyVtx[];
extern Vtx gFlareDancerCoreRightFootVtx[];
extern Vtx gFlareDancerCoreLowerRightLegVtx[];
extern Vtx gFlareDancerCoreUpperRightLegVtx[];
extern Vtx gFlareDancerCoreLeftFootVtx[];
extern Vtx gFlareDancerCoreLowerLeftLegVtx[];
extern Vtx gFlareDancerCoreUpperLeftLegVtx[];
extern Gfx gFlareDancerCoreBodyDL[32];
extern Gfx gFlareDancerCoreFuseDL[33];
extern Gfx gFlareDancerCoreUpperRightLegDL[13];
extern Gfx gFlareDancerCoreLowerRightLegDL[17];
extern Gfx gFlareDancerCoreRightFootDL[17];
extern Gfx gFlareDancerCoreUpperLeftLegDL[13];
extern Gfx gFlareDancerCoreLowerLeftLegDL[17];
extern Gfx gFlareDancerCoreLeftFootDL[21];
extern Gfx gFlareDancerDL_7928[2];
extern Gfx gFlareDancerSquareParticleDL[10];
extern Vtx gFlareDancerSquareParticleVtx[];
extern Vtx gFlareDancerTriangleParticleVtx[];
extern Gfx gFlareDancerDL_79F8[16];
extern Gfx gFlareDancerTriangleParticleDL[3];
#define object_fw_007A90_Tex_WIDTH 16
#define object_fw_007A90_Tex_HEIGHT 16
extern u64 object_fw_007A90_Tex[TEX_LEN(u64, object_fw_007A90_Tex_WIDTH, object_fw_007A90_Tex_HEIGHT, 8)];
extern StandardLimb gFlareDancerCoreRootLimb;
extern StandardLimb gFlareDancerCoreBodyLimb;
extern StandardLimb gFlareDancerCoreFuseLimb;
extern StandardLimb gFlareDancerCoreLegsRootLimb;
extern StandardLimb gFlareDancerCoreUpperRightLegLimb;
extern StandardLimb gFlareDancerCoreLowerRightLegLimb;
extern StandardLimb gFlareDancerCoreRightFootLimb;
extern StandardLimb gFlareDancerCoreUpperLeftLegLimb;
extern StandardLimb gFlareDancerCoreLowerLeftLegLimb;
extern StandardLimb gFlareDancerCoreLeftFootLimb;
extern void* gFlareDancerCoreLimbs[];
typedef enum gFlareDancerCoreSkelLimb {
    /*  0 */ LIMB_OBJECT_FW_007C30_NONE,
    /*  1 */ LIMB_OBJECT_FW_007B90,
    /*  2 */ LIMB_OBJECT_FW_007B9C,
    /*  3 */ LIMB_OBJECT_FW_007BA8,
    /*  4 */ LIMB_OBJECT_FW_007BB4,
    /*  5 */ LIMB_OBJECT_FW_007BC0,
    /*  6 */ LIMB_OBJECT_FW_007BCC,
    /*  7 */ LIMB_OBJECT_FW_007BD8,
    /*  8 */ LIMB_OBJECT_FW_007BE4,
    /*  9 */ LIMB_OBJECT_FW_007BF0,
    /* 10 */ LIMB_OBJECT_FW_007BFC,
    /* 11 */ LIMB_OBJECT_FW_007C30_MAX
} gFlareDancerCoreSkelLimb;
extern FlexSkeletonHeader gFlareDancerCoreSkel;
extern s16 gFlareDancerCoreRunCycleFrameData[];
extern JointIndex gFlareDancerCoreRunCycleJointIndices[];
extern AnimationHeader gFlareDancerCoreRunCycleAnim;
extern s16 gFlareDancerCoreEndRunCycleFrameData[];
extern JointIndex gFlareDancerCoreEndRunCycleJointIndices[];
extern AnimationHeader gFlareDancerCoreEndRunCycleAnim;

#endif
