#ifndef OBJECT_HAKA_DOOR_H
#define OBJECT_HAKA_DOOR_H

#include "tex_len.h"
#include "ultra64.h"

#define object_haka_door_Tex_000000_WIDTH 32
#define object_haka_door_Tex_000000_HEIGHT 64
extern u64 object_haka_door_Tex_000000[TEX_LEN(u64, object_haka_door_Tex_000000_WIDTH, object_haka_door_Tex_000000_HEIGHT, 16)];
extern Vtx gShadowDoorLeftVtx[];
extern Vtx gShadowDoorRightVtx[];
extern Vtx object_haka_door_Vtx_001220[];
extern Gfx object_haka_door_DL_001310[21];
extern Gfx gShadowDoorLeftDL[13];
extern Gfx gShadowDoorRightDL[13];
#define object_haka_door_Tex_001490_WIDTH 32
#define object_haka_door_Tex_001490_HEIGHT 64
extern u64 object_haka_door_Tex_001490[TEX_LEN(u64, object_haka_door_Tex_001490_WIDTH, object_haka_door_Tex_001490_HEIGHT, 16)];
extern Vtx object_haka_door_Vtx_002490[];
extern Gfx object_haka_door_DL_002620[27];
#define object_haka_door_Tex_002700_WIDTH 32
#define object_haka_door_Tex_002700_HEIGHT 64
extern u64 object_haka_door_Tex_002700[TEX_LEN(u64, object_haka_door_Tex_002700_WIDTH, object_haka_door_Tex_002700_HEIGHT, 16)];
extern Vtx object_haka_door_Vtx_003700[];
extern Gfx object_haka_door_DL_003890[27];

#endif
