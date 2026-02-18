#ifndef OBJECT_RR_H
#define OBJECT_RR_H

#include "tex_len.h"
#include "ultra64.h"

extern Vtx gLikeLikeVtx[];
extern Gfx gLikeLikeDL[113];
#define gLikeLikeBodyPattern1Tex_WIDTH 16
#define gLikeLikeBodyPattern1Tex_HEIGHT 16
extern u64 gLikeLikeBodyPattern1Tex[TEX_LEN(u64, gLikeLikeBodyPattern1Tex_WIDTH, gLikeLikeBodyPattern1Tex_HEIGHT, 16)];
#define gLikeLikeBodyPattern2Tex_WIDTH 16
#define gLikeLikeBodyPattern2Tex_HEIGHT 16
extern u64 gLikeLikeBodyPattern2Tex[TEX_LEN(u64, gLikeLikeBodyPattern2Tex_WIDTH, gLikeLikeBodyPattern2Tex_HEIGHT, 16)];
#define gLikeLikeHoleTex_WIDTH 16
#define gLikeLikeHoleTex_HEIGHT 16
extern u64 gLikeLikeHoleTex[TEX_LEN(u64, gLikeLikeHoleTex_WIDTH, gLikeLikeHoleTex_HEIGHT, 16)];

#endif
