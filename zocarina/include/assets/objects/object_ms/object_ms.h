#ifndef OBJECT_MS_H
#define OBJECT_MS_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gBeanSalesmanEatingFrameData[];
extern JointIndex gBeanSalesmanEatingJointIndices[];
extern AnimationHeader gBeanSalesmanEatingAnim;
extern Vtx gBeanSalesmanLeftHandVtx[];
extern Vtx gBeanSalesmanLeftForearmVtx[];
extern Vtx gBeanSalesmanLeftUpperArmVtx[];
extern Vtx gBeanSalesmanMouthVtx[];
extern Vtx gBeanSalesmanHeadVtx[];
extern Vtx gBeanSalesmanBodyVtx[];
extern Vtx gBeanSalesmanBeanbagVtx[];
extern Gfx gBeanSalesmanBeanbagDL[36];
extern Gfx gBeanSalesmanBodyDL[180];
extern Gfx gBeanSalesmanHeadDL[133];
extern Gfx gBeanSalesmanMouthDL[50];
extern Gfx gBeanSalesmanLeftUpperArmDL[39];
extern Gfx gBeanSalesmanLeftForearmDL[38];
extern Gfx gBeanSalesmanLeftHandDL[46];
//#define gBeanSalesmanTLUT_TLUT_COUNT 256
extern u64 gBeanSalesmanTLUT[];
#define gBeanSalesmanBackOfHandTex_WIDTH 16
#define gBeanSalesmanBackOfHandTex_HEIGHT 16
extern u64 gBeanSalesmanBackOfHandTex[TEX_LEN(u64, gBeanSalesmanBackOfHandTex_WIDTH, gBeanSalesmanBackOfHandTex_HEIGHT, 8)];
#define gBeanSalesmanTattooTex_WIDTH 32
#define gBeanSalesmanTattooTex_HEIGHT 32
extern u64 gBeanSalesmanTattooTex[TEX_LEN(u64, gBeanSalesmanTattooTex_WIDTH, gBeanSalesmanTattooTex_HEIGHT, 8)];
#define gBeanSalesmanMouthTex_WIDTH 16
#define gBeanSalesmanMouthTex_HEIGHT 16
extern u64 gBeanSalesmanMouthTex[TEX_LEN(u64, gBeanSalesmanMouthTex_WIDTH, gBeanSalesmanMouthTex_HEIGHT, 8)];
#define gBeanSalesmanEarTex_WIDTH 8
#define gBeanSalesmanEarTex_HEIGHT 8
extern u64 gBeanSalesmanEarTex[TEX_LEN(u64, gBeanSalesmanEarTex_WIDTH, gBeanSalesmanEarTex_HEIGHT, 8)];
#define gBeanSalesmanNoseTex_WIDTH 8
#define gBeanSalesmanNoseTex_HEIGHT 8
extern u64 gBeanSalesmanNoseTex[TEX_LEN(u64, gBeanSalesmanNoseTex_WIDTH, gBeanSalesmanNoseTex_HEIGHT, 8)];
#define gBeanSalesmanEyeTex_WIDTH 8
#define gBeanSalesmanEyeTex_HEIGHT 8
extern u64 gBeanSalesmanEyeTex[TEX_LEN(u64, gBeanSalesmanEyeTex_WIDTH, gBeanSalesmanEyeTex_HEIGHT, 8)];
#define gBeanSalesmanPantsTex_WIDTH 16
#define gBeanSalesmanPantsTex_HEIGHT 16
extern u64 gBeanSalesmanPantsTex[TEX_LEN(u64, gBeanSalesmanPantsTex_WIDTH, gBeanSalesmanPantsTex_HEIGHT, 8)];
#define gBeanSalesmanShoeTex_WIDTH 8
#define gBeanSalesmanShoeTex_HEIGHT 8
extern u64 gBeanSalesmanShoeTex[TEX_LEN(u64, gBeanSalesmanShoeTex_WIDTH, gBeanSalesmanShoeTex_HEIGHT, 8)];
#define gBeanSalesmanSkinGradientTex_WIDTH 4
#define gBeanSalesmanSkinGradientTex_HEIGHT 4
extern u64 gBeanSalesmanSkinGradientTex[TEX_LEN(u64, gBeanSalesmanSkinGradientTex_WIDTH, gBeanSalesmanSkinGradientTex_HEIGHT, 8)];
#define gBeanSalesmanBeanbagTex_WIDTH 16
#define gBeanSalesmanBeanbagTex_HEIGHT 16
extern u64 gBeanSalesmanBeanbagTex[TEX_LEN(u64, gBeanSalesmanBeanbagTex_WIDTH, gBeanSalesmanBeanbagTex_HEIGHT, 8)];
extern StandardLimb gBeanSalesmanRootLimb;
extern StandardLimb gBeanSalesmanLeftUpperArmLimb;
extern StandardLimb gBeanSalesmanLeftForearmLimb;
extern StandardLimb gBeanSalesmanLeftHandLimb;
extern StandardLimb gBeanSalesmanHeadLimb;
extern StandardLimb gBeanSalesmanMouthLimb;
extern StandardLimb gBeanSalesmanBodyLimb;
extern StandardLimb gBeanSalesmanBeanbagLimb;
extern void* gBeanSalesmanLimbs[];
typedef enum gBeanSalesmanSkelLimb {
    /*  0 */ LIMB_OBJECT_MS_003DC0_NONE,
    /*  1 */ LIMB_OBJECT_MS_003D40,
    /*  2 */ LIMB_OBJECT_MS_003D4C,
    /*  3 */ LIMB_OBJECT_MS_003D58,
    /*  4 */ LIMB_OBJECT_MS_003D64,
    /*  5 */ LIMB_OBJECT_MS_003D70,
    /*  6 */ LIMB_OBJECT_MS_003D7C,
    /*  7 */ LIMB_OBJECT_MS_003D88,
    /*  8 */ LIMB_OBJECT_MS_003D94,
    /*  9 */ LIMB_OBJECT_MS_003DC0_MAX
} gBeanSalesmanSkelLimb;
extern FlexSkeletonHeader gBeanSalesmanSkel;

#endif
