#ifndef OBJECT_GI_LETTER_H
#define OBJECT_GI_LETTER_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiLetterPaperTex_WIDTH 48
#define gGiLetterPaperTex_HEIGHT 32
extern u64 gGiLetterPaperTex[TEX_LEN(u64, gGiLetterPaperTex_WIDTH, gGiLetterPaperTex_HEIGHT, 8)];
#define gGiLetterWritingTex_WIDTH 48
#define gGiLetterWritingTex_HEIGHT 32
extern u64 gGiLetterWritingTex[TEX_LEN(u64, gGiLetterWritingTex_WIDTH, gGiLetterWritingTex_HEIGHT, 8)];
extern Vtx gGiLetterVtx[];
extern Vtx gGiLetterWritingVtx[];
extern Gfx gGiLetterDL[20];
extern Gfx gGiLetterWritingDL[19];

#endif
