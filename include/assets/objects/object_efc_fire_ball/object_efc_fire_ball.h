#ifndef OBJECT_EFC_FIRE_BALL_H
#define OBJECT_EFC_FIRE_BALL_H

#include "tex_len.h"
#include "ultra64.h"

extern Vtx gCreationFireBallVtx[];
extern Gfx gCreationFireBallDL[24];
#define gCreationFireBallMaskTex_WIDTH 32
#define gCreationFireBallMaskTex_HEIGHT 32
extern u64 gCreationFireBallMaskTex[TEX_LEN(u64, gCreationFireBallMaskTex_WIDTH, gCreationFireBallMaskTex_HEIGHT, 8)];
#define gCreationFireBallFlameEffectTex_WIDTH 32
#define gCreationFireBallFlameEffectTex_HEIGHT 64
extern u64 gCreationFireBallFlameEffectTex[TEX_LEN(u64, gCreationFireBallFlameEffectTex_WIDTH, gCreationFireBallFlameEffectTex_HEIGHT, 8)];

#endif
