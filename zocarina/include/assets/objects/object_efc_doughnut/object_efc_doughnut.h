#ifndef OBJECT_EFC_DOUGHNUT_H
#define OBJECT_EFC_DOUGHNUT_H

#include "tex_len.h"
#include "ultra64.h"

#define gDeathMountainCloudFireTex_WIDTH 16
#define gDeathMountainCloudFireTex_HEIGHT 32
extern u64 gDeathMountainCloudFireTex[TEX_LEN(u64, gDeathMountainCloudFireTex_WIDTH, gDeathMountainCloudFireTex_HEIGHT, 8)];
extern Vtx gDeathMountainCloudCircleFieryVtx[];
extern Gfx gDeathMountainCloudCircleFieryDL[36];
#define gDeathMountainCloudNormalTex_WIDTH 32
#define gDeathMountainCloudNormalTex_HEIGHT 32
extern u64 gDeathMountainCloudNormalTex[TEX_LEN(u64, gDeathMountainCloudNormalTex_WIDTH, gDeathMountainCloudNormalTex_HEIGHT, 16)];
extern Vtx gDeathMountainCloudCircleNormalVtx[];
extern Gfx gDeathMountainCloudCircleNormalDL[17];

#endif
