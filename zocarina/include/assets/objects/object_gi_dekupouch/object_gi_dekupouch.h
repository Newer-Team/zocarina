#ifndef OBJECT_GI_DEKUPOUCH_H
#define OBJECT_GI_DEKUPOUCH_H

#include "tex_len.h"
#include "ultra64.h"

#define object_gi_dekupouch_000000_Tex_WIDTH 32
#define object_gi_dekupouch_000000_Tex_HEIGHT 16
extern u64 object_gi_dekupouch_000000_Tex[TEX_LEN(u64, object_gi_dekupouch_000000_Tex_WIDTH, object_gi_dekupouch_000000_Tex_HEIGHT, 4)];
#define gGiBulletBagWritingTex_WIDTH 32
#define gGiBulletBagWritingTex_HEIGHT 32
extern u64 gGiBulletBagWritingTex[TEX_LEN(u64, gGiBulletBagWritingTex_WIDTH, gGiBulletBagWritingTex_HEIGHT, 4)];
extern Vtx gGiBulletBagVtx[];
extern Vtx gGiBulletBagStringVtx[];
extern Vtx gGiBulletBagWritingVtx[];
extern Gfx gGiBulletBagColorDL[4];
extern Gfx gGiBulletBag50ColorDL[4];
extern Gfx gGiBulletBagStringColorDL[4];
extern Gfx gGiBulletBag50StringColorDL[4];
extern Gfx gGiBulletBagDL[123];
extern Gfx gGiBulletBagStringDL[21];
extern Gfx gGiBulletBagWritingDL[12];

#endif
