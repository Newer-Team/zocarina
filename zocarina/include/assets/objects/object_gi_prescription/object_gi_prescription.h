#ifndef OBJECT_GI_PRESCRIPTION_H
#define OBJECT_GI_PRESCRIPTION_H

#include "tex_len.h"
#include "ultra64.h"

#define gGiPrescriptionWritingTex_WIDTH 32
#define gGiPrescriptionWritingTex_HEIGHT 48
extern u64 gGiPrescriptionWritingTex[TEX_LEN(u64, gGiPrescriptionWritingTex_WIDTH, gGiPrescriptionWritingTex_HEIGHT, 8)];
extern Vtx gGiPrescriptionVtx[];
extern Vtx gGiPrescriptionWritingVtx[];
extern Gfx gGiPrescriptionDL[38];
extern Gfx gGiPrescriptionWritingDL[38];

#endif
