#ifndef OBJECT_BLKOBJ_H
#define OBJECT_BLKOBJ_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gIllusionRoomNormalVtx[];
extern Gfx gIllusionRoomNormalDL[329];
extern Vtx gIllusionRoomIllusionVtx[];
extern Gfx gIllusionRoomIllusionDL[787];
extern BgCamInfo gIllusionRoomBgCamList[];
extern SurfaceType gIllusionRoomSurfaceTypes[];
extern CollisionPoly gIllusionRoomPolyList[];
extern Vec3s gIllusionRoomVtxList[];
extern CollisionHeader gIllusionRoomCol;
extern Vtx gIllusionRoomTreeVtx[];
extern Gfx gIllusionRoomTreeDL[60];
#define object_blkobj_008090_Tex_WIDTH 32
#define object_blkobj_008090_Tex_HEIGHT 32
extern u64 object_blkobj_008090_Tex[TEX_LEN(u64, object_blkobj_008090_Tex_WIDTH, object_blkobj_008090_Tex_HEIGHT, 16)];
#define object_blkobj_008890_Tex_WIDTH 32
#define object_blkobj_008890_Tex_HEIGHT 32
extern u64 object_blkobj_008890_Tex[TEX_LEN(u64, object_blkobj_008890_Tex_WIDTH, object_blkobj_008890_Tex_HEIGHT, 16)];
#define object_blkobj_009090_Tex_WIDTH 32
#define object_blkobj_009090_Tex_HEIGHT 32
extern u64 object_blkobj_009090_Tex[TEX_LEN(u64, object_blkobj_009090_Tex_WIDTH, object_blkobj_009090_Tex_HEIGHT, 16)];
#define object_blkobj_009890_Tex_WIDTH 32
#define object_blkobj_009890_Tex_HEIGHT 32
extern u64 object_blkobj_009890_Tex[TEX_LEN(u64, object_blkobj_009890_Tex_WIDTH, object_blkobj_009890_Tex_HEIGHT, 16)];
#define object_blkobj_00A090_Tex_WIDTH 32
#define object_blkobj_00A090_Tex_HEIGHT 32
extern u64 object_blkobj_00A090_Tex[TEX_LEN(u64, object_blkobj_00A090_Tex_WIDTH, object_blkobj_00A090_Tex_HEIGHT, 16)];
#define object_blkobj_00A890_Tex_WIDTH 32
#define object_blkobj_00A890_Tex_HEIGHT 32
extern u64 object_blkobj_00A890_Tex[TEX_LEN(u64, object_blkobj_00A890_Tex_WIDTH, object_blkobj_00A890_Tex_HEIGHT, 16)];
#define object_blkobj_00B090_Tex_WIDTH 32
#define object_blkobj_00B090_Tex_HEIGHT 32
extern u64 object_blkobj_00B090_Tex[TEX_LEN(u64, object_blkobj_00B090_Tex_WIDTH, object_blkobj_00B090_Tex_HEIGHT, 16)];
#define object_blkobj_00B890_Tex_WIDTH 32
#define object_blkobj_00B890_Tex_HEIGHT 32
extern u64 object_blkobj_00B890_Tex[TEX_LEN(u64, object_blkobj_00B890_Tex_WIDTH, object_blkobj_00B890_Tex_HEIGHT, 16)];
#define object_blkobj_00C090_Tex_WIDTH 32
#define object_blkobj_00C090_Tex_HEIGHT 32
extern u64 object_blkobj_00C090_Tex[TEX_LEN(u64, object_blkobj_00C090_Tex_WIDTH, object_blkobj_00C090_Tex_HEIGHT, 16)];
#define object_blkobj_00C890_Tex_WIDTH 32
#define object_blkobj_00C890_Tex_HEIGHT 32
extern u64 object_blkobj_00C890_Tex[TEX_LEN(u64, object_blkobj_00C890_Tex_WIDTH, object_blkobj_00C890_Tex_HEIGHT, 16)];
#define object_blkobj_00D090_Tex_WIDTH 32
#define object_blkobj_00D090_Tex_HEIGHT 32
extern u64 object_blkobj_00D090_Tex[TEX_LEN(u64, object_blkobj_00D090_Tex_WIDTH, object_blkobj_00D090_Tex_HEIGHT, 16)];
#define object_blkobj_00D890_Tex_WIDTH 32
#define object_blkobj_00D890_Tex_HEIGHT 32
extern u64 object_blkobj_00D890_Tex[TEX_LEN(u64, object_blkobj_00D890_Tex_WIDTH, object_blkobj_00D890_Tex_HEIGHT, 16)];
#define object_blkobj_00E090_Tex_WIDTH 32
#define object_blkobj_00E090_Tex_HEIGHT 32
extern u64 object_blkobj_00E090_Tex[TEX_LEN(u64, object_blkobj_00E090_Tex_WIDTH, object_blkobj_00E090_Tex_HEIGHT, 16)];
#define object_blkobj_00E890_Tex_WIDTH 32
#define object_blkobj_00E890_Tex_HEIGHT 64
extern u64 object_blkobj_00E890_Tex[TEX_LEN(u64, object_blkobj_00E890_Tex_WIDTH, object_blkobj_00E890_Tex_HEIGHT, 16)];
#define object_blkobj_00F890_Tex_WIDTH 32
#define object_blkobj_00F890_Tex_HEIGHT 32
extern u64 object_blkobj_00F890_Tex[TEX_LEN(u64, object_blkobj_00F890_Tex_WIDTH, object_blkobj_00F890_Tex_HEIGHT, 16)];
#define object_blkobj_010090_Tex_WIDTH 32
#define object_blkobj_010090_Tex_HEIGHT 32
extern u64 object_blkobj_010090_Tex[TEX_LEN(u64, object_blkobj_010090_Tex_WIDTH, object_blkobj_010090_Tex_HEIGHT, 16)];
#define object_blkobj_010890_Tex_WIDTH 32
#define object_blkobj_010890_Tex_HEIGHT 32
extern u64 object_blkobj_010890_Tex[TEX_LEN(u64, object_blkobj_010890_Tex_WIDTH, object_blkobj_010890_Tex_HEIGHT, 16)];
#define object_blkobj_011090_Tex_WIDTH 32
#define object_blkobj_011090_Tex_HEIGHT 32
extern u64 object_blkobj_011090_Tex[TEX_LEN(u64, object_blkobj_011090_Tex_WIDTH, object_blkobj_011090_Tex_HEIGHT, 16)];
#define object_blkobj_011890_Tex_WIDTH 32
#define object_blkobj_011890_Tex_HEIGHT 32
extern u64 object_blkobj_011890_Tex[TEX_LEN(u64, object_blkobj_011890_Tex_WIDTH, object_blkobj_011890_Tex_HEIGHT, 16)];
#define object_blkobj_012090_Tex_WIDTH 32
#define object_blkobj_012090_Tex_HEIGHT 32
extern u64 object_blkobj_012090_Tex[TEX_LEN(u64, object_blkobj_012090_Tex_WIDTH, object_blkobj_012090_Tex_HEIGHT, 16)];
#define object_blkobj_012890_Tex_WIDTH 32
#define object_blkobj_012890_Tex_HEIGHT 32
extern u64 object_blkobj_012890_Tex[TEX_LEN(u64, object_blkobj_012890_Tex_WIDTH, object_blkobj_012890_Tex_HEIGHT, 16)];
#define object_blkobj_013090_Tex_WIDTH 32
#define object_blkobj_013090_Tex_HEIGHT 32
extern u64 object_blkobj_013090_Tex[TEX_LEN(u64, object_blkobj_013090_Tex_WIDTH, object_blkobj_013090_Tex_HEIGHT, 16)];

#endif
