#ifndef OBJECT_JYA_OBJ_H
#define OBJECT_JYA_OBJ_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx g1fliftVtx[];
extern Gfx g1fliftDL[36];
extern BgCamInfo g1fliftBgCamList[];
extern SurfaceType g1fliftSurfaceTypes[];
extern CollisionPoly g1fliftPolyList[];
extern Vec3s g1fliftVtxList[];
extern CollisionHeader g1fliftCol;
//#define gMegamiCrumbleTLUT_TLUT_COUNT 16
extern u64 gMegamiCrumbleTLUT[];
#define gMegamiLeftCrumble5Tex_WIDTH 64
#define gMegamiLeftCrumble5Tex_HEIGHT 64
extern u64 gMegamiLeftCrumble5Tex[TEX_LEN(u64, gMegamiLeftCrumble5Tex_WIDTH, gMegamiLeftCrumble5Tex_HEIGHT, 4)];
#define gMegamiRightCrumble1Tex_WIDTH 64
#define gMegamiRightCrumble1Tex_HEIGHT 64
extern u64 gMegamiRightCrumble1Tex[TEX_LEN(u64, gMegamiRightCrumble1Tex_WIDTH, gMegamiRightCrumble1Tex_HEIGHT, 4)];
#define gMegamiLeftCrumble1Tex_WIDTH 64
#define gMegamiLeftCrumble1Tex_HEIGHT 64
extern u64 gMegamiLeftCrumble1Tex[TEX_LEN(u64, gMegamiLeftCrumble1Tex_WIDTH, gMegamiLeftCrumble1Tex_HEIGHT, 4)];
#define gMegamiRightCrumble2Tex_WIDTH 64
#define gMegamiRightCrumble2Tex_HEIGHT 64
extern u64 gMegamiRightCrumble2Tex[TEX_LEN(u64, gMegamiRightCrumble2Tex_WIDTH, gMegamiRightCrumble2Tex_HEIGHT, 4)];
#define gMegamiRightCrumble3Tex_WIDTH 64
#define gMegamiRightCrumble3Tex_HEIGHT 64
extern u64 gMegamiRightCrumble3Tex[TEX_LEN(u64, gMegamiRightCrumble3Tex_WIDTH, gMegamiRightCrumble3Tex_HEIGHT, 4)];
#define gMegamiRightCrumble4Tex_WIDTH 64
#define gMegamiRightCrumble4Tex_HEIGHT 64
extern u64 gMegamiRightCrumble4Tex[TEX_LEN(u64, gMegamiRightCrumble4Tex_WIDTH, gMegamiRightCrumble4Tex_HEIGHT, 4)];
#define gMegamiLeftCrumble2Tex_WIDTH 64
#define gMegamiLeftCrumble2Tex_HEIGHT 64
extern u64 gMegamiLeftCrumble2Tex[TEX_LEN(u64, gMegamiLeftCrumble2Tex_WIDTH, gMegamiLeftCrumble2Tex_HEIGHT, 4)];
#define gMegamiLeftCrumble3Tex_WIDTH 64
#define gMegamiLeftCrumble3Tex_HEIGHT 64
extern u64 gMegamiLeftCrumble3Tex[TEX_LEN(u64, gMegamiLeftCrumble3Tex_WIDTH, gMegamiLeftCrumble3Tex_HEIGHT, 4)];
#define gMegamiLeftCrumble4Tex_WIDTH 64
#define gMegamiLeftCrumble4Tex_HEIGHT 64
extern u64 gMegamiLeftCrumble4Tex[TEX_LEN(u64, gMegamiLeftCrumble4Tex_WIDTH, gMegamiLeftCrumble4Tex_HEIGHT, 4)];
#define gMegamiRightCrumble5Tex_WIDTH 64
#define gMegamiRightCrumble5Tex_HEIGHT 64
extern u64 gMegamiRightCrumble5Tex[TEX_LEN(u64, gMegamiRightCrumble5Tex_WIDTH, gMegamiRightCrumble5Tex_HEIGHT, 4)];
extern Vtx gMegami1Vtx[];
extern Gfx gMegami1DL[52];
extern BgCamInfo GMegamiBgCamList[];
extern SurfaceType GMegamiSurfaceTypes[];
extern CollisionPoly GMegamiPolyList[];
extern Vec3s GMegamiVtxList[];
extern CollisionHeader GMegamiCol;
//#define gMegami1TLUT_TLUT_COUNT 16
extern u64 gMegami1TLUT[];
//#define gMegami4TLUT_TLUT_COUNT 36
extern u64 gMegami4TLUT[];
#define gMegami1Tex_WIDTH 64
#define gMegami1Tex_HEIGHT 64
extern u64 gMegami1Tex[TEX_LEN(u64, gMegami1Tex_WIDTH, gMegami1Tex_HEIGHT, 4)];
#define gMegami3Tex_WIDTH 64
#define gMegami3Tex_HEIGHT 64
extern u64 gMegami3Tex[TEX_LEN(u64, gMegami3Tex_WIDTH, gMegami3Tex_HEIGHT, 4)];
#define gMegamiTex_006CE8_WIDTH 32
#define gMegamiTex_006CE8_HEIGHT 32
extern u64 gMegamiTex_006CE8[TEX_LEN(u64, gMegamiTex_006CE8_WIDTH, gMegamiTex_006CE8_HEIGHT, 8)];
extern Vtx gMegamiPiece1Vtx[];
extern Vtx gMegamiPiece2Vtx[];
extern Vtx gMegamiPiece3Vtx[];
extern Vtx gMegamiPiece4Vtx[];
extern Vtx gMegamiPiece5Vtx[];
extern Vtx gMegamiPiece6Vtx[];
extern Vtx gMegamiPiece7Vtx[];
extern Vtx gMegamiPiece8Vtx[];
extern Vtx gMegamiPiece9Vtx[];
extern Vtx gMegamiPiece10Vtx[];
extern Vtx gMegamiPiece11Vtx[];
extern Vtx gMegamiPiece12Vtx[];
extern Vtx gMegamiPiece13Vtx[];
extern Gfx gMegamiPiece1DL[51];
extern Gfx gMegamiPiece2DL[56];
extern Gfx gMegamiPiece3DL[45];
extern Gfx gMegamiPiece4DL[47];
extern Gfx gMegamiPiece5DL[41];
extern Gfx gMegamiPiece6DL[58];
extern Gfx gMegamiPiece7DL[52];
extern Gfx gMegamiPiece8DL[42];
extern Gfx gMegamiPiece9DL[39];
extern Gfx gMegamiPiece10DL[40];
extern Gfx gMegamiPiece11DL[51];
extern Gfx gMegamiPiece12DL[42];
extern Gfx gMegamiPiece13DL[48];
//#define gMegami2TLUT_TLUT_COUNT 16
extern u64 gMegami2TLUT[];
//#define gMegami5TLUT_TLUT_COUNT 36
extern u64 gMegami5TLUT[];
#define gMegami2Tex_WIDTH 64
#define gMegami2Tex_HEIGHT 64
extern u64 gMegami2Tex[TEX_LEN(u64, gMegami2Tex_WIDTH, gMegami2Tex_HEIGHT, 4)];
#define object_jya_obj_00B4B8_Tex_WIDTH 32
#define object_jya_obj_00B4B8_Tex_HEIGHT 32
extern u64 object_jya_obj_00B4B8_Tex[TEX_LEN(u64, object_jya_obj_00B4B8_Tex_WIDTH, object_jya_obj_00B4B8_Tex_HEIGHT, 8)];
extern Vtx gMegami2Vtx[];
extern Gfx gMegami2DL[42];
extern Vtx gBigMirror1Vtx[];
extern Gfx gBigMirror1DL[25];
extern Vtx gBigMirror2Vtx[];
extern Gfx gBigMirror2DL[18];
extern Vtx gAmishutterVtx[];
extern Gfx gAmishutterDL[40];
extern BgCamInfo gAmishutterBgCamList[];
extern SurfaceType gAmishutterSurfaceTypes[];
extern CollisionPoly gAmishutterPolyList[];
extern Vec3s gAmishutterVtxList[];
extern CollisionHeader gAmishutterCol;
extern Vtx gLiftVtx[];
extern Gfx gLiftDL[117];
extern BgCamInfo gLiftBgCamList[];
extern SurfaceType gLiftSurfaceTypes[];
extern CollisionPoly gLiftPolyList[];
extern Vec3s gLiftVtxList[];
extern CollisionHeader gLiftCol;
extern Vtx gBombchuiwaLight2Vtx[];
extern Vtx gBombchuiwaLight1Vtx[];
extern Gfx gBombchuiwaLight2DL[28];
extern Gfx gBombchuiwaLight1DL[27];
extern Vtx gBigMirror3Vtx[];
extern Vtx gBigMirror4Vtx[];
extern Gfx gBigMirror3DL[36];
extern Gfx gBigMirror4DL[23];
extern Vtx gBombiwaVtx[];
extern Gfx gBombiwaDL[27];
extern BgCamInfo gBombiwaBgCamList[];
extern SurfaceType gBombiwaSurfaceTypes[];
extern CollisionPoly gBombiwaPolyList[];
extern Vec3s gBombiwaVtxList[];
extern CollisionHeader gBombiwaCol;
extern Vtx gBombchuiwaVtx[];
extern Gfx gBombchuiwaDL[35];
extern Vtx gBombiwaEffectVtx[];
extern Gfx gBombiwaEffectDL[30];
extern Vtx gKanaamiVtx[];
extern Gfx gKanaamiDL[32];
extern BgCamInfo gKanaamiBgCamList[];
extern SurfaceType gKanaamiSurfaceTypes[];
extern CollisionPoly gKanaamiPolyList[];
extern Vec3s gKanaamiVtxList[];
extern CollisionHeader gKanaamiCol;
extern Vtx gCobra1Vtx[];
extern Vtx gCobra2Vtx[];
extern Gfx gCobra1DL[146];
extern Gfx gCobra2DL[33];
extern BgCamInfo gCobraBgCamList[];
extern SurfaceType gCobraSurfaceTypes[];
extern CollisionPoly gCobraPolyList[];
extern Vec3s gCobraVtxList[];
extern CollisionHeader gCobraCol;
extern Vtx gCobra3Vtx[];
extern Gfx gCobra3DL[24];
extern Vtx gBombchuiwa2Vtx[];
extern Gfx gBombchuiwa2DL[22];
//#define object_jya_obj_011A60_TLUT_TLUT_COUNT 16
extern u64 object_jya_obj_011A60_TLUT[];
#define object_jya_obj_011A80_Tex_WIDTH 64
#define object_jya_obj_011A80_Tex_HEIGHT 64
extern u64 object_jya_obj_011A80_Tex[TEX_LEN(u64, object_jya_obj_011A80_Tex_WIDTH, object_jya_obj_011A80_Tex_HEIGHT, 4)];
extern Vtx gZurerukabeVtx[];
extern Gfx gZurerukabeDL[36];
extern BgCamInfo gZurerukabeBgCamList[];
extern SurfaceType gZurerukabeSurfaceTypes[];
extern CollisionPoly gZurerukabePolyList[];
extern Vec3s gZurerukabeVtxList[];
extern CollisionHeader gZurerukabeCol;
#define gKanaamiTopTex_WIDTH 32
#define gKanaamiTopTex_HEIGHT 64
extern u64 gKanaamiTopTex[TEX_LEN(u64, gKanaamiTopTex_WIDTH, gKanaamiTopTex_HEIGHT, 16)];
#define gKanaamiMiddleTex_WIDTH 32
#define gKanaamiMiddleTex_HEIGHT 32
extern u64 gKanaamiMiddleTex[TEX_LEN(u64, gKanaamiMiddleTex_WIDTH, gKanaamiMiddleTex_HEIGHT, 16)];
#define gCobraMirrorStoneTex_WIDTH 32
#define gCobraMirrorStoneTex_HEIGHT 32
extern u64 gCobraMirrorStoneTex[TEX_LEN(u64, gCobraMirrorStoneTex_WIDTH, gCobraMirrorStoneTex_HEIGHT, 16)];
#define gCobraMirrorMirrorTex_WIDTH 32
#define gCobraMirrorMirrorTex_HEIGHT 32
extern u64 gCobraMirrorMirrorTex[TEX_LEN(u64, gCobraMirrorMirrorTex_WIDTH, gCobraMirrorMirrorTex_HEIGHT, 16)];
#define gCobraMirrorToothTex_WIDTH 64
#define gCobraMirrorToothTex_HEIGHT 32
extern u64 gCobraMirrorToothTex[TEX_LEN(u64, gCobraMirrorToothTex_WIDTH, gCobraMirrorToothTex_HEIGHT, 8)];
#define gCobraMirrorEyeTex_WIDTH 32
#define gCobraMirrorEyeTex_HEIGHT 32
extern u64 gCobraMirrorEyeTex[TEX_LEN(u64, gCobraMirrorEyeTex_WIDTH, gCobraMirrorEyeTex_HEIGHT, 16)];
#define gCobraMirrorBorderTex_WIDTH 16
#define gCobraMirrorBorderTex_HEIGHT 16
extern u64 gCobraMirrorBorderTex[TEX_LEN(u64, gCobraMirrorBorderTex_WIDTH, gCobraMirrorBorderTex_HEIGHT, 16)];
#define gCobraMirrorHandleTex_WIDTH 32
#define gCobraMirrorHandleTex_HEIGHT 8
extern u64 gCobraMirrorHandleTex[TEX_LEN(u64, gCobraMirrorHandleTex_WIDTH, gCobraMirrorHandleTex_HEIGHT, 16)];
#define object_jya_obj_016140_Tex_WIDTH 64
#define object_jya_obj_016140_Tex_HEIGHT 32
extern u64 object_jya_obj_016140_Tex[TEX_LEN(u64, object_jya_obj_016140_Tex_WIDTH, object_jya_obj_016140_Tex_HEIGHT, 16)];
#define object_jya_obj_017140_Tex_WIDTH 32
#define object_jya_obj_017140_Tex_HEIGHT 16
extern u64 object_jya_obj_017140_Tex[TEX_LEN(u64, object_jya_obj_017140_Tex_WIDTH, object_jya_obj_017140_Tex_HEIGHT, 16)];
#define g1fLiftBottomTex_WIDTH 32
#define g1fLiftBottomTex_HEIGHT 32
extern u64 g1fLiftBottomTex[TEX_LEN(u64, g1fLiftBottomTex_WIDTH, g1fLiftBottomTex_HEIGHT, 16)];
#define gLiftChainTex_WIDTH 16
#define gLiftChainTex_HEIGHT 32
extern u64 gLiftChainTex[TEX_LEN(u64, gLiftChainTex_WIDTH, gLiftChainTex_HEIGHT, 16)];
#define gLiftTopTex_WIDTH 16
#define gLiftTopTex_HEIGHT 64
extern u64 gLiftTopTex[TEX_LEN(u64, gLiftTopTex_WIDTH, gLiftTopTex_HEIGHT, 16)];
#define gLiftUpperChainTex_WIDTH 8
#define gLiftUpperChainTex_HEIGHT 32
extern u64 gLiftUpperChainTex[TEX_LEN(u64, gLiftUpperChainTex_WIDTH, gLiftUpperChainTex_HEIGHT, 16)];
#define gBombiwaRockTex_WIDTH 32
#define gBombiwaRockTex_HEIGHT 64
extern u64 gBombiwaRockTex[TEX_LEN(u64, gBombiwaRockTex_WIDTH, gBombiwaRockTex_HEIGHT, 16)];
#define gBombiwaLight1Tex_WIDTH 32
#define gBombiwaLight1Tex_HEIGHT 64
extern u64 gBombiwaLight1Tex[TEX_LEN(u64, gBombiwaLight1Tex_WIDTH, gBombiwaLight1Tex_HEIGHT, 16)];
#define gBigMirrorGradientTex_WIDTH 8
#define gBigMirrorGradientTex_HEIGHT 128
extern u64 gBigMirrorGradientTex[TEX_LEN(u64, gBigMirrorGradientTex_WIDTH, gBigMirrorGradientTex_HEIGHT, 16)];
#define object_jya_obj_01B340_Tex_WIDTH 32
#define object_jya_obj_01B340_Tex_HEIGHT 32
extern u64 object_jya_obj_01B340_Tex[TEX_LEN(u64, object_jya_obj_01B340_Tex_WIDTH, object_jya_obj_01B340_Tex_HEIGHT, 8)];
#define object_jya_obj_01B740_Tex_WIDTH 16
#define object_jya_obj_01B740_Tex_HEIGHT 16
extern u64 object_jya_obj_01B740_Tex[TEX_LEN(u64, object_jya_obj_01B740_Tex_WIDTH, object_jya_obj_01B740_Tex_HEIGHT, 16)];
#define g1f1fiftTopTex_WIDTH 32
#define g1f1fiftTopTex_HEIGHT 32
extern u64 g1f1fiftTopTex[TEX_LEN(u64, g1f1fiftTopTex_WIDTH, g1f1fiftTopTex_HEIGHT, 16)];

#endif
