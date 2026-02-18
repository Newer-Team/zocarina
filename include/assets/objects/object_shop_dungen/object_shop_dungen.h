#ifndef OBJECT_SHOP_DUNGEN_H
#define OBJECT_SHOP_DUNGEN_H

#include "tex_len.h"
#include "ultra64.h"

extern Vtx gShopDungenWoodenShelvesVtx[];
extern Gfx gShopDungenWoodenShelvesDL[76];
//#define gShopDungenStoneTLUT_TLUT_COUNT 16
extern u64 gShopDungenStoneTLUT[];
#define gShopDungenStone1Tex_WIDTH 64
#define gShopDungenStone1Tex_HEIGHT 64
extern u64 gShopDungenStone1Tex[TEX_LEN(u64, gShopDungenStone1Tex_WIDTH, gShopDungenStone1Tex_HEIGHT, 4)];
#define gShopDungenStone2Tex_WIDTH 64
#define gShopDungenStone2Tex_HEIGHT 64
extern u64 gShopDungenStone2Tex[TEX_LEN(u64, gShopDungenStone2Tex_WIDTH, gShopDungenStone2Tex_HEIGHT, 4)];
extern Vtx gShopDungenStoneShelvesVtx[];
extern Gfx gShopDungenStoneShelvesDL[70];
#define gShopDungenWoodPlankTex_WIDTH 64
#define gShopDungenWoodPlankTex_HEIGHT 32
extern u64 gShopDungenWoodPlankTex[TEX_LEN(u64, gShopDungenWoodPlankTex_WIDTH, gShopDungenWoodPlankTex_HEIGHT, 16)];

#endif
