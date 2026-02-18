#ifndef OBJECT_GI_TICKETSTONE_H
#define OBJECT_GI_TICKETSTONE_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiClaimCheckWriting1Tex_WIDTH 48
#define gGiClaimCheckWriting1Tex_HEIGHT 24
extern u64 gGiClaimCheckWriting1Tex[TEX_LEN(u64, gGiClaimCheckWriting1Tex_WIDTH, gGiClaimCheckWriting1Tex_HEIGHT, 4)];
#define gGiClaimCheckWriting2Tex_WIDTH 32
#define gGiClaimCheckWriting2Tex_HEIGHT 24
extern u64 gGiClaimCheckWriting2Tex[TEX_LEN(u64, gGiClaimCheckWriting2Tex_WIDTH, gGiClaimCheckWriting2Tex_HEIGHT, 8)];
extern Vtx gGiClaimCheckVtx[];
extern Vtx gGiClaimCheckWritingVtx[];
extern Gfx gGiClaimCheckDL[81];
extern Gfx gGiClaimCheckWritingDL[34];

#endif
