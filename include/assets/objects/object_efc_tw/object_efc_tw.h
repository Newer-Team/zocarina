#ifndef OBJECT_EFC_TW_H
#define OBJECT_EFC_TW_H

#include "curve.h"
#include "tex_len.h"
#include "ultra64.h"

extern u8 gTimeWarpAnim_06000000_KnotCounts[];
extern s16 gTimeWarpAnim_06000014_ConstantData[];
extern CurveInterpKnot gTimeWarpAnim_06000038_InterpolationData[];
extern CurveAnimationHeader gTimeWarpAnim;
extern Vtx gTimeWarpVtx[];
extern Gfx gTimeWarpDL[35];
#define gTimeWarpTex_WIDTH 64
#define gTimeWarpTex_HEIGHT 64
extern u64 gTimeWarpTex[TEX_LEN(u64, gTimeWarpTex_WIDTH, gTimeWarpTex_HEIGHT, 8)];
extern SkelCurveLimb gTimeWarpSkel_Limbs__060012C8;
extern SkelCurveLimb gTimeWarpSkel_Limbs__060012D4;
extern SkelCurveLimb* gTimeWarpSkel_Limbs_[];
extern CurveSkeletonHeader gTimeWarpSkel;

#endif
