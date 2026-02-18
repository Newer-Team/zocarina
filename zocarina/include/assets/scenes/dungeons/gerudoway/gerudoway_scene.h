#ifndef GERUDOWAY_SCENE_H
#define GERUDOWAY_SCENE_H

#include "bgcheck.h"
#include "environment.h"
#include "path.h"
#include "romfile.h"
#include "scene.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern SceneCmd gerudoway_scene[];
#define LENGTH_gerudoway_scene_02000060_PlayerEntryList 13
extern ActorEntry gerudoway_scene_02000060_PlayerEntryList[LENGTH_gerudoway_scene_02000060_PlayerEntryList];
#define LENGTH_gerudoway_scene_02000130_RoomList 6
extern RomFile gerudoway_scene_02000130_RoomList[LENGTH_gerudoway_scene_02000130_RoomList];
extern Spawn gerudoway_scene_02000160_SpawnList[];
extern s16 gerudoway_scene_0200017C_ExitList[];
#define LENGTH_gerudoway_scene_02000198_EnvLightSettingsList 4
extern EnvLightSettings gerudoway_scene_02000198_EnvLightSettingsList[LENGTH_gerudoway_scene_02000198_EnvLightSettingsList];
extern Vec3s gerudoway_scenePathList_0002AC_020001F0_Points[];
extern Vec3s gerudoway_scenePathList_0002AC_0200021C_Points[];
extern Vec3s gerudoway_scenePathList_0002AC_02000248_Points[];
extern Vec3s gerudoway_scenePathList_0002AC_02000274_Points[];
extern Path gerudoway_scenePathList_0002AC[];
extern Vec3s gerudoway_scene_020074EC_BgCamList_020002D0_BgCamFuncData[];
extern BgCamInfo gerudoway_scene_020074EC_BgCamList[];
extern SurfaceType gerudoway_scene_020074EC_SurfaceTypes[];
extern CollisionPoly gerudoway_scene_020074EC_PolyList[];
extern Vec3s gerudoway_scene_020074EC_VtxList[];
extern CollisionHeader gerudoway_scene_020074EC_Col;
#define gerudoway_scene_00007520_Tex_WIDTH 32
#define gerudoway_scene_00007520_Tex_HEIGHT 64
extern u64 gerudoway_scene_00007520_Tex[TEX_LEN(u64, gerudoway_scene_00007520_Tex_WIDTH, gerudoway_scene_00007520_Tex_HEIGHT, 16)];
#define gerudoway_scene_00008520_Tex_WIDTH 128
#define gerudoway_scene_00008520_Tex_HEIGHT 32
extern u64 gerudoway_scene_00008520_Tex[TEX_LEN(u64, gerudoway_scene_00008520_Tex_WIDTH, gerudoway_scene_00008520_Tex_HEIGHT, 4)];
#define gerudoway_scene_00008D20_Tex_WIDTH 64
#define gerudoway_scene_00008D20_Tex_HEIGHT 32
extern u64 gerudoway_scene_00008D20_Tex[TEX_LEN(u64, gerudoway_scene_00008D20_Tex_WIDTH, gerudoway_scene_00008D20_Tex_HEIGHT, 8)];
#define gerudoway_scene_00009520_Tex_WIDTH 32
#define gerudoway_scene_00009520_Tex_HEIGHT 64
extern u64 gerudoway_scene_00009520_Tex[TEX_LEN(u64, gerudoway_scene_00009520_Tex_WIDTH, gerudoway_scene_00009520_Tex_HEIGHT, 8)];
#define gerudoway_scene_00009D20_Tex_WIDTH 32
#define gerudoway_scene_00009D20_Tex_HEIGHT 32
extern u64 gerudoway_scene_00009D20_Tex[TEX_LEN(u64, gerudoway_scene_00009D20_Tex_WIDTH, gerudoway_scene_00009D20_Tex_HEIGHT, 16)];
#define gerudoway_scene_0000A520_Tex_WIDTH 32
#define gerudoway_scene_0000A520_Tex_HEIGHT 16
extern u64 gerudoway_scene_0000A520_Tex[TEX_LEN(u64, gerudoway_scene_0000A520_Tex_WIDTH, gerudoway_scene_0000A520_Tex_HEIGHT, 16)];
#define gerudoway_scene_0000A920_Tex_WIDTH 32
#define gerudoway_scene_0000A920_Tex_HEIGHT 64
extern u64 gerudoway_scene_0000A920_Tex[TEX_LEN(u64, gerudoway_scene_0000A920_Tex_WIDTH, gerudoway_scene_0000A920_Tex_HEIGHT, 16)];
#define gThievesHideoutNightEntranceTex_WIDTH 128
#define gThievesHideoutNightEntranceTex_HEIGHT 4
extern u64 gThievesHideoutNightEntranceTex[TEX_LEN(u64, gThievesHideoutNightEntranceTex_WIDTH, gThievesHideoutNightEntranceTex_HEIGHT, 16)];
#define gThievesHideoutDayEntranceTex_WIDTH 128
#define gThievesHideoutDayEntranceTex_HEIGHT 4
extern u64 gThievesHideoutDayEntranceTex[TEX_LEN(u64, gThievesHideoutDayEntranceTex_WIDTH, gThievesHideoutDayEntranceTex_HEIGHT, 16)];
#define gerudoway_scene_0000C120_Tex_WIDTH 64
#define gerudoway_scene_0000C120_Tex_HEIGHT 32
extern u64 gerudoway_scene_0000C120_Tex[TEX_LEN(u64, gerudoway_scene_0000C120_Tex_WIDTH, gerudoway_scene_0000C120_Tex_HEIGHT, 16)];
#define gerudoway_scene_0000D120_Tex_WIDTH 32
#define gerudoway_scene_0000D120_Tex_HEIGHT 32
extern u64 gerudoway_scene_0000D120_Tex[TEX_LEN(u64, gerudoway_scene_0000D120_Tex_WIDTH, gerudoway_scene_0000D120_Tex_HEIGHT, 16)];

#endif
