#ifndef OBJECT_GI_OCARINA_H
#define OBJECT_GI_OCARINA_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiOcarinaTimeHoleTex_WIDTH 16
#define gGiOcarinaTimeHoleTex_HEIGHT 16
extern u64 gGiOcarinaTimeHoleTex[TEX_LEN(u64, gGiOcarinaTimeHoleTex_WIDTH, gGiOcarinaTimeHoleTex_HEIGHT, 8)];
extern Vtx gGiOcarinaTimeVtx[];
extern Vtx gGiOcarinaTimeHolesVtx[];
extern Gfx gGiOcarinaTimeDL[71];
extern Gfx gGiOcarinaTimeHolesDL[23];

#endif
