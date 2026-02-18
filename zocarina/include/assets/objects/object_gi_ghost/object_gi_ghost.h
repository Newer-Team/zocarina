#ifndef OBJECT_GI_GHOST_H
#define OBJECT_GI_GHOST_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiGhostFlameTex_WIDTH 16
#define gGiGhostFlameTex_HEIGHT 32
extern u64 gGiGhostFlameTex[TEX_LEN(u64, gGiGhostFlameTex_WIDTH, gGiGhostFlameTex_HEIGHT, 8)];
#define gGiGhostFireEffectTex_WIDTH 16
#define gGiGhostFireEffectTex_HEIGHT 32
extern u64 gGiGhostFireEffectTex[TEX_LEN(u64, gGiGhostFireEffectTex_WIDTH, gGiGhostFireEffectTex_HEIGHT, 8)];
extern Vtx gGiGhostContainerLidVtx[];
extern Vtx gGiGhostContainerGlassVtx[];
extern Vtx gGiGhostContainerContentsVtx[];
extern Gfx gGiPoeColorDL[4];
extern Gfx gGiBigPoeColorDL[4];
extern Gfx gGiGhostContainerLidDL[74];
extern Gfx gGiGhostContainerGlassDL[34];
extern Gfx gGiGhostContainerContentsDL[24];

#endif
