#ifndef OBJECT_DNS_H
#define OBJECT_DNS_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gDntJijiSpitFrameData[];
extern JointIndex gDntJijiSpitJointIndices[];
extern AnimationHeader gDntJijiSpitAnim;
extern s16 gDntJijiBurrowFrameData[];
extern JointIndex gDntJijiBurrowJointIndices[];
extern AnimationHeader gDntJijiBurrowAnim;
extern s16 gDntJijiDanceFrameData[];
extern JointIndex gDntJijiDanceJointIndices[];
extern AnimationHeader gDntJijiDanceAnim;
extern s16 gDntJijiCowerFrameData[];
extern JointIndex gDntJijiCowerJointIndices[];
extern AnimationHeader gDntJijiCowerAnim;
extern s16 gDntJijiHideFrameData[];
extern JointIndex gDntJijiHideJointIndices[];
extern AnimationHeader gDntJijiHideAnim;
extern s16 gDntJijiTalkFrameData[];
extern JointIndex gDntJijiTalkJointIndices[];
extern AnimationHeader gDntJijiTalkAnim;
extern s16 gDntJijiUnburrowFrameData[];
extern JointIndex gDntJijiUnburrowJointIndices[];
extern AnimationHeader gDntJijiUnburrowAnim;
extern s16 gDntJijiUnkFrameData[];
extern JointIndex gDntJijiUnkJointIndices[];
extern AnimationHeader gDntJijiUnkAnim;
extern s16 gDntJijiUpFrameData[];
extern JointIndex gDntJijiUpJointIndices[];
extern AnimationHeader gDntJijiUpAnim;
extern Vtx object_dns_Vtx_0012C0[];
extern Vtx object_dns_Vtx_001320[];
extern Vtx object_dns_Vtx_001390[];
extern Vtx object_dns_Vtx_001400[];
extern Vtx object_dns_Vtx_0014A0[];
extern Vtx object_dns_Vtx_001590[];
extern Vtx object_dns_Vtx_001760[];
extern Vtx object_dns_Vtx_0017A0[];
extern Vtx object_dns_Vtx_0017E0[];
extern Vtx object_dns_Vtx_001820[];
extern Vtx object_dns_Vtx_001860[];
extern Vtx object_dns_Vtx_0018C0[];
extern Gfx object_dns_001900_DL[18];
extern Gfx object_dns_001990_DL[22];
extern Gfx object_dns_001A40_DL[22];
extern Gfx object_dns_001AF0_DL[23];
extern Gfx object_dns_001BA8_DL[35];
extern Gfx object_dns_001CC0_DL[32];
extern Gfx object_dns_001DC0_DL[19];
extern Gfx object_dns_001E58_DL[18];
extern Gfx object_dns_001EE8_DL[18];
extern Gfx object_dns_001F78_DL[18];
extern Gfx object_dns_002008_DL[19];
extern Gfx object_dns_0020A0_DL[18];
extern Vtx gDntJijiFlowerVtx[];
extern Gfx gDntJijiFlowerDL[26];
extern Vtx gDntJijiNutVtx[];
extern Gfx gDntJijiNutDL[18];
#define object_dns_0024A0_Tex_WIDTH 32
#define object_dns_0024A0_Tex_HEIGHT 32
extern u64 object_dns_0024A0_Tex[TEX_LEN(u64, object_dns_0024A0_Tex_WIDTH, object_dns_0024A0_Tex_HEIGHT, 16)];
#define object_dns_002CA0_Tex_WIDTH 16
#define object_dns_002CA0_Tex_HEIGHT 16
extern u64 object_dns_002CA0_Tex[TEX_LEN(u64, object_dns_002CA0_Tex_WIDTH, object_dns_002CA0_Tex_HEIGHT, 16)];
#define gDntJijiEyeHalfTex_WIDTH 8
#define gDntJijiEyeHalfTex_HEIGHT 8
extern u64 gDntJijiEyeHalfTex[TEX_LEN(u64, gDntJijiEyeHalfTex_WIDTH, gDntJijiEyeHalfTex_HEIGHT, 16)];
#define object_dns_002F20_Tex_WIDTH 8
#define object_dns_002F20_Tex_HEIGHT 8
extern u64 object_dns_002F20_Tex[TEX_LEN(u64, object_dns_002F20_Tex_WIDTH, object_dns_002F20_Tex_HEIGHT, 16)];
#define object_dns_002FA0_Tex_WIDTH 8
#define object_dns_002FA0_Tex_HEIGHT 8
extern u64 object_dns_002FA0_Tex[TEX_LEN(u64, object_dns_002FA0_Tex_WIDTH, object_dns_002FA0_Tex_HEIGHT, 16)];
#define gDntJijiEyeShutTex_WIDTH 8
#define gDntJijiEyeShutTex_HEIGHT 8
extern u64 gDntJijiEyeShutTex[TEX_LEN(u64, gDntJijiEyeShutTex_WIDTH, gDntJijiEyeShutTex_HEIGHT, 16)];
#define gDntJijiEyeOpenTex_WIDTH 8
#define gDntJijiEyeOpenTex_HEIGHT 8
extern u64 gDntJijiEyeOpenTex[TEX_LEN(u64, gDntJijiEyeOpenTex_WIDTH, gDntJijiEyeOpenTex_HEIGHT, 16)];
#define object_dns_003120_Tex_WIDTH 16
#define object_dns_003120_Tex_HEIGHT 16
extern u64 object_dns_003120_Tex[TEX_LEN(u64, object_dns_003120_Tex_WIDTH, object_dns_003120_Tex_HEIGHT, 16)];
extern StandardLimb object_dns_003320_Limb;
extern StandardLimb object_dns_00332C_Limb;
extern StandardLimb object_dns_003338_Limb;
extern StandardLimb object_dns_003344_Limb;
extern StandardLimb object_dns_003350_Limb;
extern StandardLimb object_dns_00335C_Limb;
extern StandardLimb object_dns_003368_Limb;
extern StandardLimb object_dns_003374_Limb;
extern StandardLimb object_dns_003380_Limb;
extern StandardLimb object_dns_00338C_Limb;
extern StandardLimb object_dns_003398_Limb;
extern StandardLimb object_dns_0033A4_Limb;
extern void* gDntJijiLimbs[];
typedef enum gDntJijiSkelLimb {
    /*  0 */ LIMB_OBJECT_DNS_0033E0_NONE,
    /*  1 */ LIMB_OBJECT_DNS_003320,
    /*  2 */ LIMB_OBJECT_DNS_00332C,
    /*  3 */ LIMB_OBJECT_DNS_003338,
    /*  4 */ LIMB_OBJECT_DNS_003344,
    /*  5 */ LIMB_OBJECT_DNS_003350,
    /*  6 */ LIMB_OBJECT_DNS_00335C,
    /*  7 */ LIMB_OBJECT_DNS_003368,
    /*  8 */ LIMB_OBJECT_DNS_003374,
    /*  9 */ LIMB_OBJECT_DNS_003380,
    /* 10 */ LIMB_OBJECT_DNS_00338C,
    /* 11 */ LIMB_OBJECT_DNS_003398,
    /* 12 */ LIMB_OBJECT_DNS_0033A4,
    /* 13 */ LIMB_OBJECT_DNS_0033E0_MAX
} gDntJijiSkelLimb;
extern SkeletonHeader gDntJijiSkel;
extern s16 gDntJijiWaitFrameData[];
extern JointIndex gDntJijiWaitJointIndices[];
extern AnimationHeader gDntJijiWaitAnim;
extern s16 gDntJijiWalkFrameData[];
extern JointIndex gDntJijiWalkJointIndices[];
extern AnimationHeader gDntJijiWalkAnim;

#endif
