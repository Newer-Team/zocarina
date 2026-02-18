#ifndef OBJECT_FA_H
#define OBJECT_FA_H

#include "tex_len.h"
#include "ultra64.h"

//#define gFaTLUT_TLUT_COUNT 256
extern u64 gFaTLUT[];
#define gFaSkinTex_WIDTH 8
#define gFaSkinTex_HEIGHT 8
extern u64 gFaSkinTex[TEX_LEN(u64, gFaSkinTex_WIDTH, gFaSkinTex_HEIGHT, 8)];
#define gFaEyeOpenTex_WIDTH 32
#define gFaEyeOpenTex_HEIGHT 32
extern u64 gFaEyeOpenTex[TEX_LEN(u64, gFaEyeOpenTex_WIDTH, gFaEyeOpenTex_HEIGHT, 8)];
#define gFaMouthTex_WIDTH 32
#define gFaMouthTex_HEIGHT 16
extern u64 gFaMouthTex[TEX_LEN(u64, gFaMouthTex_WIDTH, gFaMouthTex_HEIGHT, 8)];
#define gFaHair1Tex_WIDTH 8
#define gFaHair1Tex_HEIGHT 16
extern u64 gFaHair1Tex[TEX_LEN(u64, gFaHair1Tex_WIDTH, gFaHair1Tex_HEIGHT, 8)];
#define gFaEarTex_WIDTH 8
#define gFaEarTex_HEIGHT 8
extern u64 gFaEarTex[TEX_LEN(u64, gFaEarTex_WIDTH, gFaEarTex_HEIGHT, 8)];
#define gFaHair2Tex_WIDTH 32
#define gFaHair2Tex_HEIGHT 16
extern u64 gFaHair2Tex[TEX_LEN(u64, gFaHair2Tex_WIDTH, gFaHair2Tex_HEIGHT, 16)];
#define gFaHeadbandTex_WIDTH 8
#define gFaHeadbandTex_HEIGHT 8
extern u64 gFaHeadbandTex[TEX_LEN(u64, gFaHeadbandTex_WIDTH, gFaHeadbandTex_HEIGHT, 8)];
#define gFaEyeHalfTex_WIDTH 32
#define gFaEyeHalfTex_HEIGHT 32
extern u64 gFaEyeHalfTex[TEX_LEN(u64, gFaEyeHalfTex_WIDTH, gFaEyeHalfTex_HEIGHT, 8)];
#define gFaEyeClosedTex_WIDTH 32
#define gFaEyeClosedTex_HEIGHT 32
extern u64 gFaEyeClosedTex[TEX_LEN(u64, gFaEyeClosedTex_WIDTH, gFaEyeClosedTex_HEIGHT, 8)];
extern Vtx gFaVtx[];
extern Gfx gFaDL[586];

#endif
