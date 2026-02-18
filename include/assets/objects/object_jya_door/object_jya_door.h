#ifndef OBJECT_JYA_DOOR_H
#define OBJECT_JYA_DOOR_H

#include "tex_len.h"
#include "ultra64.h"

extern Vtx gSpiritDoorVtx[];
extern Gfx gSpiritDoorDL[22];
extern Vtx gJyaDoorMetalBarsVtx[];
extern Gfx gJyaDoorMetalBarsDL[18];
#define gSpiritDoorTex_WIDTH 64
#define gSpiritDoorTex_HEIGHT 32
extern u64 gSpiritDoorTex[TEX_LEN(u64, gSpiritDoorTex_WIDTH, gSpiritDoorTex_HEIGHT, 16)];
#define gSpiritDoorMetalBarsTex_WIDTH 32
#define gSpiritDoorMetalBarsTex_HEIGHT 64
extern u64 gSpiritDoorMetalBarsTex[TEX_LEN(u64, gSpiritDoorMetalBarsTex_WIDTH, gSpiritDoorMetalBarsTex_HEIGHT, 16)];

#endif
