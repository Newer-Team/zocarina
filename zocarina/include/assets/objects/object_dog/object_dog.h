#ifndef OBJECT_DOG_H
#define OBJECT_DOG_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gDogBarkFrameData[];
extern JointIndex gDogBarkJointIndices[];
extern AnimationHeader gDogBarkAnim;
extern s16 gDogBowFrameData[];
extern JointIndex gDogBowJointIndices[];
extern AnimationHeader gDogBowAnim;
extern s16 gDogBow2FrameData[];
extern JointIndex gDogBow2JointIndices[];
extern AnimationHeader gDogBow2Anim;
extern s16 gDogRunFrameData[];
extern JointIndex gDogRunJointIndices[];
extern AnimationHeader gDogRunAnim;
extern s16 gDogSitFrameData[];
extern JointIndex gDogSitJointIndices[];
extern AnimationHeader gDogSitAnim;
extern s16 gDogWalkFrameData[];
extern JointIndex gDogWalkJointIndices[];
extern AnimationHeader gDogWalkAnim;
#define gDogFur1Tex_WIDTH 32
#define gDogFur1Tex_HEIGHT 32
extern u64 gDogFur1Tex[TEX_LEN(u64, gDogFur1Tex_WIDTH, gDogFur1Tex_HEIGHT, 16)];
#define gDogFur2Tex_WIDTH 32
#define gDogFur2Tex_HEIGHT 32
extern u64 gDogFur2Tex[TEX_LEN(u64, gDogFur2Tex_WIDTH, gDogFur2Tex_HEIGHT, 16)];
#define gDogFur3Tex_WIDTH 32
#define gDogFur3Tex_HEIGHT 32
extern u64 gDogFur3Tex[TEX_LEN(u64, gDogFur3Tex_WIDTH, gDogFur3Tex_HEIGHT, 16)];
#define gDogFaceEyeTex_WIDTH 32
#define gDogFaceEyeTex_HEIGHT 32
extern u64 gDogFaceEyeTex[TEX_LEN(u64, gDogFaceEyeTex_WIDTH, gDogFaceEyeTex_HEIGHT, 16)];
#define gDogFaceNoseTex_WIDTH 32
#define gDogFaceNoseTex_HEIGHT 32
extern u64 gDogFaceNoseTex[TEX_LEN(u64, gDogFaceNoseTex_WIDTH, gDogFaceNoseTex_HEIGHT, 16)];
#define gDogFur4Tex_WIDTH 32
#define gDogFur4Tex_HEIGHT 32
extern u64 gDogFur4Tex[TEX_LEN(u64, gDogFur4Tex_WIDTH, gDogFur4Tex_HEIGHT, 16)];
#define gDogPawTex_WIDTH 16
#define gDogPawTex_HEIGHT 16
extern u64 gDogPawTex[TEX_LEN(u64, gDogPawTex_WIDTH, gDogPawTex_HEIGHT, 16)];
#define gDogFaceHairTex_WIDTH 32
#define gDogFaceHairTex_HEIGHT 32
extern u64 gDogFaceHairTex[TEX_LEN(u64, gDogFaceHairTex_WIDTH, gDogFaceHairTex_HEIGHT, 16)];
extern Vtx gDogHeadVtx[];
extern Vtx gDogRightFaceHairVtx[];
extern Vtx gDogLeftFaceHairVtx[];
extern Vtx gDogFrontRightLegVtx[];
extern Vtx gDogFrontLeftLegVtx[];
extern Vtx gDogFrontBodyVtx[];
extern Vtx gDogBackRightLegVtx[];
extern Vtx gDogBackLeftLegVtx[];
extern Vtx gDogBackBodyVtx[];
extern Vtx gDogTailVtx[];
extern Gfx gDogHeadDL[109];
extern Gfx gDogRightFaceHairDL[20];
extern Gfx gDogLeftFaceHairDL[20];
extern Gfx gDogFrontBodyDL[67];
extern Gfx gDogFrontRightLegDL[54];
extern Gfx gDogFrontLeftLegDL[54];
extern Gfx gDogBackBodyDL[52];
extern Gfx gDogBackRightLegDL[54];
extern Gfx gDogBackLeftLegDL[54];
extern Gfx gDogTailDL[58];
extern StandardLimb gDogRootLimb;
extern StandardLimb gDogBodyBackLimb;
extern StandardLimb gDogBodyFrontLimb;
extern StandardLimb gDogHeadControlLimb;
extern StandardLimb gDogHeadLimb;
extern StandardLimb gDogRightFaceHairLimb;
extern StandardLimb gDogLeftFaceHairLimb;
extern StandardLimb gDogFrontRightLegLimb;
extern StandardLimb gDogFrontLeftLegLimb;
extern StandardLimb gDogBackRightLegLimb;
extern StandardLimb gDogBackLeftLegLimb;
extern StandardLimb gDogTailLimb;
extern void* gDogLimbs[];
typedef enum gDogSkelLimb {
    /*  0 */ LIMB_OBJECT_DOG_007290_NONE,
    /*  1 */ LIMB_OBJECT_DOG_0071D0,
    /*  2 */ LIMB_OBJECT_DOG_0071DC,
    /*  3 */ LIMB_OBJECT_DOG_0071E8,
    /*  4 */ LIMB_OBJECT_DOG_0071F4,
    /*  5 */ LIMB_OBJECT_DOG_007200,
    /*  6 */ LIMB_OBJECT_DOG_00720C,
    /*  7 */ LIMB_OBJECT_DOG_007218,
    /*  8 */ LIMB_OBJECT_DOG_007224,
    /*  9 */ LIMB_OBJECT_DOG_007230,
    /* 10 */ LIMB_OBJECT_DOG_00723C,
    /* 11 */ LIMB_OBJECT_DOG_007248,
    /* 12 */ LIMB_OBJECT_DOG_007254,
    /* 13 */ LIMB_OBJECT_DOG_007290_MAX
} gDogSkelLimb;
extern FlexSkeletonHeader gDogSkel;

#endif
