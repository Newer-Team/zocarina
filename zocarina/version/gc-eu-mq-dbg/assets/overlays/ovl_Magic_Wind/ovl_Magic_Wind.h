#ifndef OVL_MAGIC_WIND_H
#define OVL_MAGIC_WIND_H

#include "curve.h"
#include "tex_len.h"
#include "ultra64.h"

static Vtx sCylinderVtx[36];
#define sTex_WIDTH 64
#define sTex_HEIGHT 64
static u64 sTex[TEX_LEN(u64, sTex_WIDTH, sTex_HEIGHT, 8)];
static Gfx sInnerCylinderDL[33];
static Gfx sOuterCylinderDL[33];
extern u8 sAnim_80B8CCD0_KnotCounts[];
extern s16 sAnim_80B8CCEC_ConstantData[];
extern CurveInterpKnot sAnim_80B8CD20_InterpolationData[];
static CurveAnimationHeader sAnim;
static SkelCurveLimb sRootLimb;
static SkelCurveLimb sInnerCylinderLimb;
static SkelCurveLimb sOuterCylinderLimb;
extern SkelCurveLimb* sSkel_Limbs_[];
static CurveSkeletonHeader sSkel;

#endif
