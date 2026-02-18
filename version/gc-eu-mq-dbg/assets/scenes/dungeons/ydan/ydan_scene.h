#ifndef YDAN_SCENE_H
#define YDAN_SCENE_H

#include "bgcheck.h"
#include "cutscene.h"
#include "environment.h"
#include "romfile.h"
#include "scene.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern SceneCmd ydan_scene[];
#define LENGTH_ydan_scene_02000060_PlayerEntryList 2
extern ActorEntry ydan_scene_02000060_PlayerEntryList[LENGTH_ydan_scene_02000060_PlayerEntryList];
#define LENGTH_ydan_scene_02000080_TransitionActorEntryList 12
extern TransitionActorEntry ydan_scene_02000080_TransitionActorEntryList[LENGTH_ydan_scene_02000080_TransitionActorEntryList];
#define LENGTH_ydan_scene_02000140_RoomList 12
extern RomFile ydan_scene_02000140_RoomList[LENGTH_ydan_scene_02000140_RoomList];
extern Spawn ydan_scene_020001A0_SpawnList[];
extern s16 ydan_scene_020001A4_ExitList[];
#define LENGTH_ydan_scene_020001A8_EnvLightSettingsList 7
extern EnvLightSettings ydan_scene_020001A8_EnvLightSettingsList[LENGTH_ydan_scene_020001A8_EnvLightSettingsList];
extern Vec3s ydan_scene_0200B618_BgCamList_02000250_BgCamFuncData[];
extern BgCamInfo ydan_scene_0200B618_BgCamList[];
extern SurfaceType ydan_scene_0200B618_SurfaceTypes[];
extern CollisionPoly ydan_scene_0200B618_PolyList[];
extern Vec3s ydan_scene_0200B618_VtxList[];
extern WaterBox ydan_scene_0200B618_WaterBoxes[];
extern CollisionHeader ydan_scene_0200B618_Col;
extern CutsceneData gDekuTreeIntroCs[];
//#define ydan_scene_0000B810_TLUT_TLUT_COUNT 256
extern u64 ydan_scene_0000B810_TLUT[];
extern u8 ydan_scene_unaccounted_00BA10[];
#define gDekuTreeDayEntranceTex_WIDTH 32
#define gDekuTreeDayEntranceTex_HEIGHT 64
extern u64 gDekuTreeDayEntranceTex[TEX_LEN(u64, gDekuTreeDayEntranceTex_WIDTH, gDekuTreeDayEntranceTex_HEIGHT, 16)];
#define gDekuTreeNightEntranceTex_WIDTH 32
#define gDekuTreeNightEntranceTex_HEIGHT 64
extern u64 gDekuTreeNightEntranceTex[TEX_LEN(u64, gDekuTreeNightEntranceTex_WIDTH, gDekuTreeNightEntranceTex_HEIGHT, 16)];

#endif
