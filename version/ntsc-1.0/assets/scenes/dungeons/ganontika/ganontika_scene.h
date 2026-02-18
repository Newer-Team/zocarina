#ifndef GANONTIKA_SCENE_H
#define GANONTIKA_SCENE_H

#include "bgcheck.h"
#include "cutscene.h"
#include "environment.h"
#include "path.h"
#include "romfile.h"
#include "scene.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern SceneCmd ganontika_scene[];
#define LENGTH_ganontika_scene_02000068_PlayerEntryList 9
extern ActorEntry ganontika_scene_02000068_PlayerEntryList[LENGTH_ganontika_scene_02000068_PlayerEntryList];
#define LENGTH_ganontika_scene_020000F8_TransitionActorEntryList 21
extern TransitionActorEntry ganontika_scene_020000F8_TransitionActorEntryList[LENGTH_ganontika_scene_020000F8_TransitionActorEntryList];
#define LENGTH_ganontika_scene_02000248_RoomList 20
extern RomFile ganontika_scene_02000248_RoomList[LENGTH_ganontika_scene_02000248_RoomList];
extern Spawn ganontika_scene_020002E8_SpawnList[];
extern u8 ganontika_scene_unaccounted_0002F8[];
extern s16 ganontika_scene_020002FC_ExitList[];
#define LENGTH_ganontika_scene_02000300_EnvLightSettingsList 26
extern EnvLightSettings ganontika_scene_02000300_EnvLightSettingsList[LENGTH_ganontika_scene_02000300_EnvLightSettingsList];
extern Vec3s ganontika_scenePathList_000674_0200053C_Points[];
extern Vec3s ganontika_scenePathList_000674_020005D4_Points[];
extern Vec3s ganontika_scenePathList_000674_0200066C_Points[];
extern Path ganontika_scenePathList_000674[];
extern Vec3s ganontika_scene_02019E9C_BgCamList_02000690_BgCamFuncData[];
extern BgCamInfo ganontika_scene_02019E9C_BgCamList[];
extern SurfaceType ganontika_scene_02019E9C_SurfaceTypes[];
extern CollisionPoly ganontika_scene_02019E9C_PolyList[];
extern Vec3s ganontika_scene_02019E9C_VtxList[];
extern CollisionHeader ganontika_scene_02019E9C_Col;
extern CutsceneData gForestTrialSageCs[];
extern CutsceneData gWaterTrialSageCs[];
extern CutsceneData gShadowTrialSageCs[];
extern CutsceneData gFireTrialSageCs[];
extern CutsceneData gLightTrialSageCs[];
extern CutsceneData gSpiritTrialSageCs[];
extern CutsceneData gTowerBarrierCs[];
extern CutsceneData gLightBarrierCs[];
extern CutsceneData gFireBarrierCs[];
extern CutsceneData gForestBarrierCs[];
extern CutsceneData gSpiritBarrierCs[];
extern CutsceneData gWaterBarrierCs[];
//#define ganontika_scene_0001F370_TLUT_TLUT_COUNT 252
extern u64 ganontika_scene_0001F370_TLUT[];
extern u8 ganontika_scene_unaccounted_01F568[];
#define ganontika_scene_0001F570_Tex_WIDTH 16
#define ganontika_scene_0001F570_Tex_HEIGHT 16
extern u64 ganontika_scene_0001F570_Tex[TEX_LEN(u64, ganontika_scene_0001F570_Tex_WIDTH, ganontika_scene_0001F570_Tex_HEIGHT, 16)];
#define ganontika_scene_0001F770_CITex_WIDTH 32
#define ganontika_scene_0001F770_CITex_HEIGHT 64
extern u64 ganontika_scene_0001F770_CITex[TEX_LEN(u64, ganontika_scene_0001F770_CITex_WIDTH, ganontika_scene_0001F770_CITex_HEIGHT, 8)];
#define ganontika_scene_0001FF70_CITex_WIDTH 32
#define ganontika_scene_0001FF70_CITex_HEIGHT 32
extern u64 ganontika_scene_0001FF70_CITex[TEX_LEN(u64, ganontika_scene_0001FF70_CITex_WIDTH, ganontika_scene_0001FF70_CITex_HEIGHT, 8)];
#define ganontika_scene_00020370_CITex_WIDTH 64
#define ganontika_scene_00020370_CITex_HEIGHT 32
extern u64 ganontika_scene_00020370_CITex[TEX_LEN(u64, ganontika_scene_00020370_CITex_WIDTH, ganontika_scene_00020370_CITex_HEIGHT, 8)];
#define ganontika_scene_00020B70_Tex_WIDTH 32
#define ganontika_scene_00020B70_Tex_HEIGHT 32
extern u64 ganontika_scene_00020B70_Tex[TEX_LEN(u64, ganontika_scene_00020B70_Tex_WIDTH, ganontika_scene_00020B70_Tex_HEIGHT, 16)];
extern CutsceneData gShadowBarrierCs[];

#endif
