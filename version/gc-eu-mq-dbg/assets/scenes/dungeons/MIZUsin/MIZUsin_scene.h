#ifndef MIZUSIN_SCENE_H
#define MIZUSIN_SCENE_H

#include "bgcheck.h"
#include "environment.h"
#include "path.h"
#include "romfile.h"
#include "scene.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern SceneCmd MIZUsin_scene[];
#define LENGTH_MIZUsin_scene_02000068_PlayerEntryList 1
extern ActorEntry MIZUsin_scene_02000068_PlayerEntryList[LENGTH_MIZUsin_scene_02000068_PlayerEntryList];
#define LENGTH_MIZUsin_scene_02000078_TransitionActorEntryList 27
extern TransitionActorEntry MIZUsin_scene_02000078_TransitionActorEntryList[LENGTH_MIZUsin_scene_02000078_TransitionActorEntryList];
#define LENGTH_MIZUsin_scene_02000228_RoomList 23
extern RomFile MIZUsin_scene_02000228_RoomList[LENGTH_MIZUsin_scene_02000228_RoomList];
extern Spawn MIZUsin_scene_020002E0_SpawnList[];
extern s16 MIZUsin_scene_020002E4_ExitList[];
#define LENGTH_MIZUsin_scene_020002E8_EnvLightSettingsList 5
extern EnvLightSettings MIZUsin_scene_020002E8_EnvLightSettingsList[LENGTH_MIZUsin_scene_020002E8_EnvLightSettingsList];
extern Vec3s MIZUsin_scenePathList_000384_02000358_Points[];
extern Vec3s MIZUsin_scenePathList_000384_02000370_Points[];
extern Path MIZUsin_scenePathList_000384[];
extern BgCamInfo MIZUsin_scene_02013C04_BgCamList[];
extern SurfaceType MIZUsin_scene_02013C04_SurfaceTypes[];
extern CollisionPoly MIZUsin_scene_02013C04_PolyList[];
extern Vec3s MIZUsin_scene_02013C04_VtxList[];
extern WaterBox MIZUsin_scene_02013C04_WaterBoxes[];
extern CollisionHeader MIZUsin_scene_02013C04_Col;
#define MIZUsin_scene_00013C30_Tex_WIDTH 32
#define MIZUsin_scene_00013C30_Tex_HEIGHT 32
extern u64 MIZUsin_scene_00013C30_Tex[TEX_LEN(u64, MIZUsin_scene_00013C30_Tex_WIDTH, MIZUsin_scene_00013C30_Tex_HEIGHT, 16)];
#define MIZUsin_scene_00014430_Tex_WIDTH 32
#define MIZUsin_scene_00014430_Tex_HEIGHT 32
extern u64 MIZUsin_scene_00014430_Tex[TEX_LEN(u64, MIZUsin_scene_00014430_Tex_WIDTH, MIZUsin_scene_00014430_Tex_HEIGHT, 16)];
#define gWaterTempleDayEntranceTex_WIDTH 8
#define gWaterTempleDayEntranceTex_HEIGHT 64
extern u64 gWaterTempleDayEntranceTex[TEX_LEN(u64, gWaterTempleDayEntranceTex_WIDTH, gWaterTempleDayEntranceTex_HEIGHT, 16)];
#define MIZUsin_scene_00015030_Tex_WIDTH 32
#define MIZUsin_scene_00015030_Tex_HEIGHT 32
extern u64 MIZUsin_scene_00015030_Tex[TEX_LEN(u64, MIZUsin_scene_00015030_Tex_WIDTH, MIZUsin_scene_00015030_Tex_HEIGHT, 16)];
#define gWaterTempleNightEntranceTex_WIDTH 8
#define gWaterTempleNightEntranceTex_HEIGHT 64
extern u64 gWaterTempleNightEntranceTex[TEX_LEN(u64, gWaterTempleNightEntranceTex_WIDTH, gWaterTempleNightEntranceTex_HEIGHT, 16)];

#endif
