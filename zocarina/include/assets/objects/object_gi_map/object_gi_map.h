#ifndef OBJECT_GI_MAP_H
#define OBJECT_GI_MAP_H

#include "tex_len.h"
#include "ultra64.h"

extern Vtx gGiDungeonMapVtx[];
extern Gfx gGiDungeonMapDL[64];
extern Vtx gGiStoneOfAgonyVtx[];
extern Gfx gGiStoneOfAgonyDL[61];
#define object_gi_map_00000D60_Tex_WIDTH 32
#define object_gi_map_00000D60_Tex_HEIGHT 32
extern u64 object_gi_map_00000D60_Tex[TEX_LEN(u64, object_gi_map_00000D60_Tex_WIDTH, object_gi_map_00000D60_Tex_HEIGHT, 8)];

#endif
