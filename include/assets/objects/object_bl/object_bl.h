#ifndef OBJECT_BL_H
#define OBJECT_BL_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gBiriDischargeLightningFrameData[];
extern JointIndex gBiriDischargeLightningJointIndices[];
extern AnimationHeader gBiriDischargeLightningAnim;
extern s16 gBiriClimbFrameData[];
extern JointIndex gBiriClimbJointIndices[];
extern AnimationHeader gBiriClimbAnim;
extern s16 gBiriDefaultFrameData[];
extern JointIndex gBiriDefaultJointIndices[];
extern AnimationHeader gBiriDefaultAnim;
extern Vtx gBiriTentaclesVtx[];
extern Vtx gBiriInnerHoodVtx[];
extern Vtx gBiriOuterHoodVtx[];
extern Gfx gBiriTentaclesDL[19];
extern Gfx gBiriInnerHoodDL[29];
extern Gfx gBiriOuterHoodDL[27];
#define gBiriOuterHoodTex_WIDTH 16
#define gBiriOuterHoodTex_HEIGHT 64
extern u64 gBiriOuterHoodTex[TEX_LEN(u64, gBiriOuterHoodTex_WIDTH, gBiriOuterHoodTex_HEIGHT, 16)];
#define gBiriTentacles0Tex_WIDTH 48
#define gBiriTentacles0Tex_HEIGHT 48
extern u64 gBiriTentacles0Tex[TEX_LEN(u64, gBiriTentacles0Tex_WIDTH, gBiriTentacles0Tex_HEIGHT, 8)];
#define gBiriTentacles1Tex_WIDTH 48
#define gBiriTentacles1Tex_HEIGHT 48
extern u64 gBiriTentacles1Tex[TEX_LEN(u64, gBiriTentacles1Tex_WIDTH, gBiriTentacles1Tex_HEIGHT, 8)];
#define gBiriTentacles2Tex_WIDTH 48
#define gBiriTentacles2Tex_HEIGHT 48
extern u64 gBiriTentacles2Tex[TEX_LEN(u64, gBiriTentacles2Tex_WIDTH, gBiriTentacles2Tex_HEIGHT, 8)];
#define gBiriTentacles3Tex_WIDTH 48
#define gBiriTentacles3Tex_HEIGHT 48
extern u64 gBiriTentacles3Tex[TEX_LEN(u64, gBiriTentacles3Tex_WIDTH, gBiriTentacles3Tex_HEIGHT, 8)];
#define gBiriTentacles4Tex_WIDTH 48
#define gBiriTentacles4Tex_HEIGHT 48
extern u64 gBiriTentacles4Tex[TEX_LEN(u64, gBiriTentacles4Tex_WIDTH, gBiriTentacles4Tex_HEIGHT, 8)];
#define gBiriTentacles5Tex_WIDTH 48
#define gBiriTentacles5Tex_HEIGHT 48
extern u64 gBiriTentacles5Tex[TEX_LEN(u64, gBiriTentacles5Tex_WIDTH, gBiriTentacles5Tex_HEIGHT, 8)];
#define gBiriTentacles6Tex_WIDTH 48
#define gBiriTentacles6Tex_HEIGHT 48
extern u64 gBiriTentacles6Tex[TEX_LEN(u64, gBiriTentacles6Tex_WIDTH, gBiriTentacles6Tex_HEIGHT, 8)];
#define gBiriTentacles7Tex_WIDTH 48
#define gBiriTentacles7Tex_HEIGHT 48
extern u64 gBiriTentacles7Tex[TEX_LEN(u64, gBiriTentacles7Tex_WIDTH, gBiriTentacles7Tex_HEIGHT, 8)];
#define gBiriInnerHoodTex_WIDTH 16
#define gBiriInnerHoodTex_HEIGHT 16
extern u64 gBiriInnerHoodTex[TEX_LEN(u64, gBiriInnerHoodTex_WIDTH, gBiriInnerHoodTex_HEIGHT, 16)];
extern StandardLimb gBiriRootLimb;
extern StandardLimb gBiriInnerHoodLimb;
extern StandardLimb gBiriOuterHoodLimb;
extern StandardLimb gBiriTentaclesLimb;
extern void* gBiriLimbs[];
typedef enum BiriLimb {
    /*  0 */ BIRI_LIMB_NONE,
    /*  1 */ BIRI_LIMB_ROOT,
    /*  2 */ BIRI_LIMB_INNER_HOOD,
    /*  3 */ BIRI_LIMB_OUTER_HOOD,
    /*  4 */ BIRI_LIMB_TENTACLES,
    /*  5 */ BIRI_LIMB_MAX
} BiriLimb;
extern SkeletonHeader gBiriSkel;

#endif
