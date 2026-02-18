#ifndef OBJECT_GOD_LGT_H
#define OBJECT_GOD_LGT_H

#include "tex_len.h"
#include "ultra64.h"

extern Vtx gGoldenGoddessAuraVtx[];
extern Gfx gGoldenGoddessAuraDL[64];
#define gGoldenGoddessAuraHTailTex_WIDTH 32
#define gGoldenGoddessAuraHTailTex_HEIGHT 32
extern u64 gGoldenGoddessAuraHTailTex[TEX_LEN(u64, gGoldenGoddessAuraHTailTex_WIDTH, gGoldenGoddessAuraHTailTex_HEIGHT, 8)];
#define gGoldenGoddessAuraHeadTex_WIDTH 64
#define gGoldenGoddessAuraHeadTex_HEIGHT 64
extern u64 gGoldenGoddessAuraHeadTex[TEX_LEN(u64, gGoldenGoddessAuraHeadTex_WIDTH, gGoldenGoddessAuraHeadTex_HEIGHT, 8)];
#define gGoldenGoddessAuraMaskTex_WIDTH 16
#define gGoldenGoddessAuraMaskTex_HEIGHT 96
extern u64 gGoldenGoddessAuraMaskTex[TEX_LEN(u64, gGoldenGoddessAuraMaskTex_WIDTH, gGoldenGoddessAuraMaskTex_HEIGHT, 8)];
extern Vtx gGoldenGoddessBodyVtx[];
extern Gfx gGoldenGoddessBodyDL[224];

#endif
