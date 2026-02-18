#ifndef OBJECT_SPOT09_OBJ_H
#define OBJECT_SPOT09_OBJ_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gValleyBridgeSidesVtx[];
extern Gfx gValleyBridgeSidesDL[48];
extern Vtx gValleyBridgeChildVtx[];
extern Gfx gValleyBridgeChildDL[428];
extern BgCamInfo gValleyObjects2BgCamList[];
extern SurfaceType gValleyObjects2SurfaceTypes[];
extern CollisionPoly gValleyObjects2PolyList[];
extern Vec3s gValleyObjects2VtxList[];
extern CollisionHeader gValleyObjects2Col;
extern Vtx gValleyBrokenBridgeVtx[];
extern Gfx gValleyBrokenBridgeDL[515];
extern BgCamInfo gValleyObjects1BgCamList[];
extern SurfaceType gValleyObjects1SurfaceTypes[];
extern CollisionPoly gValleyObjects1PolyList[];
extern Vec3s gValleyObjects1VtxList[];
extern CollisionHeader gValleyObjects1Col;
extern Vtx gValleyRepairedBridgeVtx[];
extern Gfx gValleyRepairedBridgeDL[385];
extern BgCamInfo gValleyObjects4BgCamList[];
extern SurfaceType gValleyObjects4SurfaceTypes[];
extern CollisionPoly gValleyObjects4PolyList[];
extern Vec3s gValleyObjects4VtxList[];
extern CollisionHeader gValleyObjects4Col;
extern Vtx gCarpentersTentVtx[];
extern Vtx gCarpentersTentEntranceVtx[];
extern Gfx gCarpentersTentDL[90];
extern Gfx gCarpentersTentEntranceDL[33];
extern BgCamInfo gValleyObjects3BgCamList[];
extern SurfaceType gValleyObjects3SurfaceTypes[];
extern CollisionPoly gValleyObjects3PolyList[];
extern Vec3s gValleyObjects3VtxList[];
extern CollisionHeader gValleyObjects3Col;
#define object_spot09_obj_008490_Tex_WIDTH 32
#define object_spot09_obj_008490_Tex_HEIGHT 32
extern u64 object_spot09_obj_008490_Tex[TEX_LEN(u64, object_spot09_obj_008490_Tex_WIDTH, object_spot09_obj_008490_Tex_HEIGHT, 16)];
#define object_spot09_obj_008C90_Tex_WIDTH 32
#define object_spot09_obj_008C90_Tex_HEIGHT 32
extern u64 object_spot09_obj_008C90_Tex[TEX_LEN(u64, object_spot09_obj_008C90_Tex_WIDTH, object_spot09_obj_008C90_Tex_HEIGHT, 16)];
#define object_spot09_obj_009490_Tex_WIDTH 64
#define object_spot09_obj_009490_Tex_HEIGHT 32
extern u64 object_spot09_obj_009490_Tex[TEX_LEN(u64, object_spot09_obj_009490_Tex_WIDTH, object_spot09_obj_009490_Tex_HEIGHT, 16)];
#define object_spot09_obj_00A490_Tex_WIDTH 32
#define object_spot09_obj_00A490_Tex_HEIGHT 32
extern u64 object_spot09_obj_00A490_Tex[TEX_LEN(u64, object_spot09_obj_00A490_Tex_WIDTH, object_spot09_obj_00A490_Tex_HEIGHT, 16)];
#define object_spot09_obj_00AC90_Tex_WIDTH 32
#define object_spot09_obj_00AC90_Tex_HEIGHT 32
extern u64 object_spot09_obj_00AC90_Tex[TEX_LEN(u64, object_spot09_obj_00AC90_Tex_WIDTH, object_spot09_obj_00AC90_Tex_HEIGHT, 16)];
#define object_spot09_obj_00B490_Tex_WIDTH 32
#define object_spot09_obj_00B490_Tex_HEIGHT 32
extern u64 object_spot09_obj_00B490_Tex[TEX_LEN(u64, object_spot09_obj_00B490_Tex_WIDTH, object_spot09_obj_00B490_Tex_HEIGHT, 16)];
#define object_spot09_obj_00BC90_Tex_WIDTH 32
#define object_spot09_obj_00BC90_Tex_HEIGHT 64
extern u64 object_spot09_obj_00BC90_Tex[TEX_LEN(u64, object_spot09_obj_00BC90_Tex_WIDTH, object_spot09_obj_00BC90_Tex_HEIGHT, 16)];
#define object_spot09_obj_00CC90_Tex_WIDTH 64
#define object_spot09_obj_00CC90_Tex_HEIGHT 32
extern u64 object_spot09_obj_00CC90_Tex[TEX_LEN(u64, object_spot09_obj_00CC90_Tex_WIDTH, object_spot09_obj_00CC90_Tex_HEIGHT, 16)];
#define object_spot09_obj_00DC90_Tex_WIDTH 32
#define object_spot09_obj_00DC90_Tex_HEIGHT 64
extern u64 object_spot09_obj_00DC90_Tex[TEX_LEN(u64, object_spot09_obj_00DC90_Tex_WIDTH, object_spot09_obj_00DC90_Tex_HEIGHT, 16)];
#define object_spot09_obj_00EC90_Tex_WIDTH 64
#define object_spot09_obj_00EC90_Tex_HEIGHT 32
extern u64 object_spot09_obj_00EC90_Tex[TEX_LEN(u64, object_spot09_obj_00EC90_Tex_WIDTH, object_spot09_obj_00EC90_Tex_HEIGHT, 16)];
#define object_spot09_obj_00FC90_Tex_WIDTH 16
#define object_spot09_obj_00FC90_Tex_HEIGHT 32
extern u64 object_spot09_obj_00FC90_Tex[TEX_LEN(u64, object_spot09_obj_00FC90_Tex_WIDTH, object_spot09_obj_00FC90_Tex_HEIGHT, 16)];
#define object_spot09_obj_010090_Tex_WIDTH 64
#define object_spot09_obj_010090_Tex_HEIGHT 32
extern u64 object_spot09_obj_010090_Tex[TEX_LEN(u64, object_spot09_obj_010090_Tex_WIDTH, object_spot09_obj_010090_Tex_HEIGHT, 16)];
#define object_spot09_obj_011090_Tex_WIDTH 32
#define object_spot09_obj_011090_Tex_HEIGHT 64
extern u64 object_spot09_obj_011090_Tex[TEX_LEN(u64, object_spot09_obj_011090_Tex_WIDTH, object_spot09_obj_011090_Tex_HEIGHT, 16)];
#define object_spot09_obj_012090_Tex_WIDTH 64
#define object_spot09_obj_012090_Tex_HEIGHT 32
extern u64 object_spot09_obj_012090_Tex[TEX_LEN(u64, object_spot09_obj_012090_Tex_WIDTH, object_spot09_obj_012090_Tex_HEIGHT, 16)];
#define object_spot09_obj_013090_Tex_WIDTH 64
#define object_spot09_obj_013090_Tex_HEIGHT 32
extern u64 object_spot09_obj_013090_Tex[TEX_LEN(u64, object_spot09_obj_013090_Tex_WIDTH, object_spot09_obj_013090_Tex_HEIGHT, 16)];
#define object_spot09_obj_014090_Tex_WIDTH 64
#define object_spot09_obj_014090_Tex_HEIGHT 32
extern u64 object_spot09_obj_014090_Tex[TEX_LEN(u64, object_spot09_obj_014090_Tex_WIDTH, object_spot09_obj_014090_Tex_HEIGHT, 16)];
#define object_spot09_obj_015090_Tex_WIDTH 32
#define object_spot09_obj_015090_Tex_HEIGHT 64
extern u64 object_spot09_obj_015090_Tex[TEX_LEN(u64, object_spot09_obj_015090_Tex_WIDTH, object_spot09_obj_015090_Tex_HEIGHT, 16)];
#define object_spot09_obj_016090_Tex_WIDTH 32
#define object_spot09_obj_016090_Tex_HEIGHT 64
extern u64 object_spot09_obj_016090_Tex[TEX_LEN(u64, object_spot09_obj_016090_Tex_WIDTH, object_spot09_obj_016090_Tex_HEIGHT, 16)];
#define object_spot09_obj_017090_Tex_WIDTH 32
#define object_spot09_obj_017090_Tex_HEIGHT 32
extern u64 object_spot09_obj_017090_Tex[TEX_LEN(u64, object_spot09_obj_017090_Tex_WIDTH, object_spot09_obj_017090_Tex_HEIGHT, 8)];
#define object_spot09_obj_017490_Tex_WIDTH 32
#define object_spot09_obj_017490_Tex_HEIGHT 32
extern u64 object_spot09_obj_017490_Tex[TEX_LEN(u64, object_spot09_obj_017490_Tex_WIDTH, object_spot09_obj_017490_Tex_HEIGHT, 8)];
#define object_spot09_obj_017890_Tex_WIDTH 128
#define object_spot09_obj_017890_Tex_HEIGHT 64
extern u64 object_spot09_obj_017890_Tex[TEX_LEN(u64, object_spot09_obj_017890_Tex_WIDTH, object_spot09_obj_017890_Tex_HEIGHT, 4)];

#endif
