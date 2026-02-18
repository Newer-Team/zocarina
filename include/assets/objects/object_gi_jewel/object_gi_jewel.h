#ifndef OBJECT_GI_JEWEL_H
#define OBJECT_GI_JEWEL_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiKokiriEmeraldScintillationTex_WIDTH 64
#define gGiKokiriEmeraldScintillationTex_HEIGHT 64
extern u64 gGiKokiriEmeraldScintillationTex[TEX_LEN(u64, gGiKokiriEmeraldScintillationTex_WIDTH, gGiKokiriEmeraldScintillationTex_HEIGHT, 4)];
extern Vtx gGiKokiriEmeraldSettingVtx[];
extern Vtx gGiKokiriEmeraldGemVtx[];
extern Gfx gGiKokiriEmeraldSettingDL[44];
extern Gfx gGiKokiriEmeraldGemDL[51];
#define gGiGoronRubyScintillationTex_WIDTH 32
#define gGiGoronRubyScintillationTex_HEIGHT 64
extern u64 gGiGoronRubyScintillationTex[TEX_LEN(u64, gGiGoronRubyScintillationTex_WIDTH, gGiGoronRubyScintillationTex_HEIGHT, 8)];
extern Vtx gGiGoronRubySettingVtx[];
extern Vtx gGiGoronRubyGemVtx[];
extern Gfx gGiGoronRubySettingDL[30];
extern Gfx gGiGoronRubyGemDL[41];
#define gGiZoraSapphireScintillationTex_WIDTH 64
#define gGiZoraSapphireScintillationTex_HEIGHT 64
extern u64 gGiZoraSapphireScintillationTex[TEX_LEN(u64, gGiZoraSapphireScintillationTex_WIDTH, gGiZoraSapphireScintillationTex_HEIGHT, 4)];
extern Vtx gGiZoraSapphireSettingVtx[];
extern Vtx gGiZoraSapphireGemVtx[];
extern Gfx gGiZoraSapphireSettingDL[56];
extern Gfx gGiZoraSapphireGemDL[42];

#endif
