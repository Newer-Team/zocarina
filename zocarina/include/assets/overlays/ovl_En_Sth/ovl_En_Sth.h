#ifndef OVL_EN_STH_H
#define OVL_EN_STH_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

#define sNoseTex_WIDTH 8
#define sNoseTex_HEIGHT 8
static u64 sNoseTex[TEX_LEN(u64, sNoseTex_WIDTH, sNoseTex_HEIGHT, 16)];
#define sHair1Tex_WIDTH 8
#define sHair1Tex_HEIGHT 16
static u64 sHair1Tex[TEX_LEN(u64, sHair1Tex_WIDTH, sHair1Tex_HEIGHT, 16)];
#define sEar1Tex_WIDTH 8
#define sEar1Tex_HEIGHT 8
static u64 sEar1Tex[TEX_LEN(u64, sEar1Tex_WIDTH, sEar1Tex_HEIGHT, 16)];
#define sEyeTex_WIDTH 32
#define sEyeTex_HEIGHT 32
static u64 sEyeTex[TEX_LEN(u64, sEyeTex_WIDTH, sEyeTex_HEIGHT, 16)];
#define sMouthTex_WIDTH 32
#define sMouthTex_HEIGHT 16
static u64 sMouthTex[TEX_LEN(u64, sMouthTex_WIDTH, sMouthTex_HEIGHT, 16)];
#define sEar2Tex_WIDTH 8
#define sEar2Tex_HEIGHT 8
static u64 sEar2Tex[TEX_LEN(u64, sEar2Tex_WIDTH, sEar2Tex_HEIGHT, 16)];
#define sHair2Tex_WIDTH 8
#define sHair2Tex_HEIGHT 16
static u64 sHair2Tex[TEX_LEN(u64, sHair2Tex_WIDTH, sHair2Tex_HEIGHT, 16)];
static Vtx ovl_En_Sth_Vtx_000F80[121];
static Vtx ovl_En_Sth_Vtx_001710[81];
static Gfx D_80B0A050[110];
static Gfx D_80B0A3C0[51];
extern s16 sChildDanceFrameData[];
extern JointIndex sChildDanceJointIndices[];
static AnimationHeader sChildDanceAnim;
extern s16 sParentDanceFrameData[];
extern JointIndex sParentDanceJointIndices[];
static AnimationHeader sParentDanceAnim;

#endif
