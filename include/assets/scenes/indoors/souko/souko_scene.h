#ifndef SOUKO_SCENE_H
#define SOUKO_SCENE_H

#include "bgcheck.h"
#include "environment.h"
#include "romfile.h"
#include "scene.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern SceneCmd souko_scene[];
#define LENGTH_souko_scene_02000060_PlayerEntryList 3
extern ActorEntry souko_scene_02000060_PlayerEntryList[LENGTH_souko_scene_02000060_PlayerEntryList];
#define LENGTH_souko_scene_02000090_TransitionActorEntryList 3
extern TransitionActorEntry souko_scene_02000090_TransitionActorEntryList[LENGTH_souko_scene_02000090_TransitionActorEntryList];
#define LENGTH_souko_scene_020000C0_RoomList 3
extern RomFile souko_scene_020000C0_RoomList[LENGTH_souko_scene_020000C0_RoomList];
extern Spawn souko_scene_020000D8_SpawnList[];
extern s16 souko_scene_020000E0_ExitList[];
#define LENGTH_souko_scene_020000E4_EnvLightSettingsList 4
extern EnvLightSettings souko_scene_020000E4_EnvLightSettingsList[LENGTH_souko_scene_020000E4_EnvLightSettingsList];
extern Vec3s souko_scene_020043E0_BgCamList_02000140_BgCamFuncData[];
extern BgCamInfo souko_scene_020043E0_BgCamList[];
extern SurfaceType souko_scene_020043E0_SurfaceTypes[];
extern CollisionPoly souko_scene_020043E0_PolyList[];
extern Vec3s souko_scene_020043E0_VtxList[];
extern CollisionHeader souko_scene_020043E0_Col;
#define souko_scene_00004410_Tex_WIDTH 32
#define souko_scene_00004410_Tex_HEIGHT 32
extern u64 souko_scene_00004410_Tex[TEX_LEN(u64, souko_scene_00004410_Tex_WIDTH, souko_scene_00004410_Tex_HEIGHT, 16)];
#define souko_scene_00004C10_Tex_WIDTH 32
#define souko_scene_00004C10_Tex_HEIGHT 16
extern u64 souko_scene_00004C10_Tex[TEX_LEN(u64, souko_scene_00004C10_Tex_WIDTH, souko_scene_00004C10_Tex_HEIGHT, 16)];
#define gLonLonHouseNightEntranceTex_WIDTH 64
#define gLonLonHouseNightEntranceTex_HEIGHT 4
extern u64 gLonLonHouseNightEntranceTex[TEX_LEN(u64, gLonLonHouseNightEntranceTex_WIDTH, gLonLonHouseNightEntranceTex_HEIGHT, 16)];
#define gLonLonHouseDayEntranceTex_WIDTH 64
#define gLonLonHouseDayEntranceTex_HEIGHT 4
extern u64 gLonLonHouseDayEntranceTex[TEX_LEN(u64, gLonLonHouseDayEntranceTex_WIDTH, gLonLonHouseDayEntranceTex_HEIGHT, 16)];
#define souko_scene_00005410_Tex_WIDTH 32
#define souko_scene_00005410_Tex_HEIGHT 32
extern u64 souko_scene_00005410_Tex[TEX_LEN(u64, souko_scene_00005410_Tex_WIDTH, souko_scene_00005410_Tex_HEIGHT, 16)];
#define souko_scene_00005C10_Tex_WIDTH 64
#define souko_scene_00005C10_Tex_HEIGHT 32
extern u64 souko_scene_00005C10_Tex[TEX_LEN(u64, souko_scene_00005C10_Tex_WIDTH, souko_scene_00005C10_Tex_HEIGHT, 16)];

#endif
