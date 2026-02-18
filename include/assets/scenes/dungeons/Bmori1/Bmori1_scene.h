#ifndef BMORI1_SCENE_H
#define BMORI1_SCENE_H

#include "bgcheck.h"
#include "environment.h"
#include "romfile.h"
#include "scene.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern SceneCmd Bmori1_scene[];
#define LENGTH_Bmori1_scene_02000060_PlayerEntryList 3
extern ActorEntry Bmori1_scene_02000060_PlayerEntryList[LENGTH_Bmori1_scene_02000060_PlayerEntryList];
#define LENGTH_Bmori1_scene_02000090_TransitionActorEntryList 29
extern TransitionActorEntry Bmori1_scene_02000090_TransitionActorEntryList[LENGTH_Bmori1_scene_02000090_TransitionActorEntryList];
#define LENGTH_Bmori1_scene_02000260_RoomList 23
extern RomFile Bmori1_scene_02000260_RoomList[LENGTH_Bmori1_scene_02000260_RoomList];
extern Spawn Bmori1_scene_02000318_SpawnList[];
extern s16 Bmori1_scene_02000320_ExitList[];
#define LENGTH_Bmori1_scene_02000324_EnvLightSettingsList 15
extern EnvLightSettings Bmori1_scene_02000324_EnvLightSettingsList[LENGTH_Bmori1_scene_02000324_EnvLightSettingsList];
extern BgCamInfo Bmori1_scene_02014054_BgCamList[];
extern SurfaceType Bmori1_scene_02014054_SurfaceTypes[];
extern CollisionPoly Bmori1_scene_02014054_PolyList[];
extern Vec3s Bmori1_scene_02014054_VtxList[];
extern WaterBox Bmori1_scene_02014054_WaterBoxes[];
extern CollisionHeader Bmori1_scene_02014054_Col;
//#define Bmori1_scene_00014080_TLUT_TLUT_COUNT 256
extern u64 Bmori1_scene_00014080_TLUT[];
extern u8 Bmori1_scene_unaccounted_014280[];
//#define Bmori1_scene_00014288_TLUT_TLUT_COUNT 256
extern u64 Bmori1_scene_00014288_TLUT[];
extern u8 Bmori1_scene_unaccounted_014488[];
#define Bmori1_scene_00014490_CITex_WIDTH 32
#define Bmori1_scene_00014490_CITex_HEIGHT 8
extern u64 Bmori1_scene_00014490_CITex[TEX_LEN(u64, Bmori1_scene_00014490_CITex_WIDTH, Bmori1_scene_00014490_CITex_HEIGHT, 8)];
#define gForestTempleNightEntranceTex_WIDTH 8
#define gForestTempleNightEntranceTex_HEIGHT 128
extern u64 gForestTempleNightEntranceTex[TEX_LEN(u64, gForestTempleNightEntranceTex_WIDTH, gForestTempleNightEntranceTex_HEIGHT, 16)];
#define gForestTempleDayEntranceTex_WIDTH 8
#define gForestTempleDayEntranceTex_HEIGHT 128
extern u64 gForestTempleDayEntranceTex[TEX_LEN(u64, gForestTempleDayEntranceTex_WIDTH, gForestTempleDayEntranceTex_HEIGHT, 16)];
#define Bmori1_scene_00015590_CITex_WIDTH 16
#define Bmori1_scene_00015590_CITex_HEIGHT 16
extern u64 Bmori1_scene_00015590_CITex[TEX_LEN(u64, Bmori1_scene_00015590_CITex_WIDTH, Bmori1_scene_00015590_CITex_HEIGHT, 8)];
#define Bmori1_scene_00015690_CITex_WIDTH 32
#define Bmori1_scene_00015690_CITex_HEIGHT 32
extern u64 Bmori1_scene_00015690_CITex[TEX_LEN(u64, Bmori1_scene_00015690_CITex_WIDTH, Bmori1_scene_00015690_CITex_HEIGHT, 8)];
#define Bmori1_scene_00015A90_CITex_WIDTH 16
#define Bmori1_scene_00015A90_CITex_HEIGHT 16
extern u64 Bmori1_scene_00015A90_CITex[TEX_LEN(u64, Bmori1_scene_00015A90_CITex_WIDTH, Bmori1_scene_00015A90_CITex_HEIGHT, 8)];
#define Bmori1_scene_00015B90_CITex_WIDTH 32
#define Bmori1_scene_00015B90_CITex_HEIGHT 32
extern u64 Bmori1_scene_00015B90_CITex[TEX_LEN(u64, Bmori1_scene_00015B90_CITex_WIDTH, Bmori1_scene_00015B90_CITex_HEIGHT, 8)];

#endif
