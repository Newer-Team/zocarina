#ifndef OBJECT_BW_H
#define OBJECT_BW_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gTorchSlugEyestalkWaveFrameData[];
extern JointIndex gTorchSlugEyestalkWaveJointIndices[];
extern AnimationHeader gTorchSlugEyestalkWaveAnim;
extern Vtx gTorchSlugLeftLowerEyestalkVtx[];
extern Gfx gTorchSlugLeftLowerEyestalkDL[19];
extern Vtx gTorchSlugLeftUpperEyestalkVtx[];
extern Gfx gTorchSlugLeftUpperEyestalkDL[30];
extern Vtx gTorchSlugRightLowerEyestalkVtx[];
extern Gfx gTorchSlugRightLowerEyestalkDL[19];
extern Vtx gTorchSlugRightUpperEyestalkVtx[];
extern Gfx gTorchSlugRightUpperEyestalkDL[30];
extern Vtx gTorchSlugBodyVtx[];
extern Gfx gTorchSlugBodyDL[62];
#define gTorchSlugEyestalkTex_WIDTH 16
#define gTorchSlugEyestalkTex_HEIGHT 16
extern u64 gTorchSlugEyestalkTex[TEX_LEN(u64, gTorchSlugEyestalkTex_WIDTH, gTorchSlugEyestalkTex_HEIGHT, 16)];
#define gTorchSlugEyeTex_WIDTH 16
#define gTorchSlugEyeTex_HEIGHT 16
extern u64 gTorchSlugEyeTex[TEX_LEN(u64, gTorchSlugEyeTex_WIDTH, gTorchSlugEyeTex_HEIGHT, 16)];
//#define gTorchSlugBodyTLUT_TLUT_COUNT 256
extern u64 gTorchSlugBodyTLUT[];
#define gTorchSlugBody1Tex_WIDTH 32
#define gTorchSlugBody1Tex_HEIGHT 32
extern u64 gTorchSlugBody1Tex[TEX_LEN(u64, gTorchSlugBody1Tex_WIDTH, gTorchSlugBody1Tex_HEIGHT, 8)];
#define gTorchSlugBody2Tex_WIDTH 32
#define gTorchSlugBody2Tex_HEIGHT 32
extern u64 gTorchSlugBody2Tex[TEX_LEN(u64, gTorchSlugBody2Tex_WIDTH, gTorchSlugBody2Tex_HEIGHT, 8)];
extern StandardLimb gTorchSlugBodyLimb;
extern StandardLimb gTorchSlugLeftEyestalkRootRootLimb;
extern StandardLimb gTorchSlugLeftEyestalkRootLimb;
extern StandardLimb gTorchSlugLeftUpperEyestalkRootLimb;
extern StandardLimb gTorchSlugLeftUpperEyestalkLimb;
extern StandardLimb gTorchSlugLeftLowerEyestalkLimb;
extern StandardLimb gTorchSlugRightEyestalkRootRootLimb;
extern StandardLimb gTorchSlugRightEyestalkRootLimb;
extern StandardLimb gTorchSlugRightUpperEyestalkRootLimb;
extern StandardLimb gTorchSlugRightUpperEyestalkLimb;
extern StandardLimb gTorchSlugRightLowerEyestalkLimb;
extern void* gTorchSlugLimbs[];
typedef enum TorchSlugLimb {
    /*  0 */ TORCH_SLUG_LIMB_NONE,
    /*  1 */ TORCH_SLUG_LIMB_BODY,
    /*  2 */ TORCH_SLUG_LIMB_LEFT_EYESTALK_ROOT_ROOT,
    /*  3 */ TORCH_SLUG_LIMB_LEFT_EYESTALK_ROOT,
    /*  4 */ TORCH_SLUG_LIMB_LEFT_UPPER_EYESTALK_ROOT,
    /*  5 */ TORCH_SLUG_LIMB_LEFT_UPPER_EYESTALK,
    /*  6 */ TORCH_SLUG_LIMB_LEFT_LOWER_EYESTALK,
    /*  7 */ TORCH_SLUG_LIMB_RIGHT_EYESTALK_ROOT_ROOT,
    /*  8 */ TORCH_SLUG_LIMB_RIGHT_EYESTALK_ROOT,
    /*  9 */ TORCH_SLUG_LIMB_RIGHT_UPPER_EYESTALK_ROOT,
    /* 10 */ TORCH_SLUG_LIMB_RIGHT_UPPER_EYESTALK,
    /* 11 */ TORCH_SLUG_LIMB_RIGHT_LOWER_EYESTALK,
    /* 12 */ TORCH_SLUG_LIMB_MAX
} TorchSlugLimb;
extern SkeletonHeader gTorchSlugSkel;
extern s16 gTorchSlugEyestalkRaiseFrameData[];
extern JointIndex gTorchSlugEyestalkRaiseJointIndices[];
extern AnimationHeader gTorchSlugEyestalkRaiseAnim;
extern s16 gTorchSlugEyestalkFlailFrameData[];
extern JointIndex gTorchSlugEyestalkFlailJointIndices[];
extern AnimationHeader gTorchSlugEyestalkFlailAnim;

#endif
