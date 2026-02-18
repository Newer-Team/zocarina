#ifndef SPOT15_SCENE_H
#define SPOT15_SCENE_H

#include "bgcheck.h"
#include "cutscene.h"
#include "environment.h"
#include "path.h"
#include "romfile.h"
#include "scene.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern SceneCmd spot15_scene[];
#define LENGTH_spot15_scene_02000068_PlayerEntryList 5
extern ActorEntry spot15_scene_02000068_PlayerEntryList[LENGTH_spot15_scene_02000068_PlayerEntryList];
#define LENGTH_spot15_scene_020000B8_TransitionActorEntryList 1
extern TransitionActorEntry spot15_scene_020000B8_TransitionActorEntryList[LENGTH_spot15_scene_020000B8_TransitionActorEntryList];
#define LENGTH_spot15_scene_020000C8_RoomList 1
extern RomFile spot15_scene_020000C8_RoomList[LENGTH_spot15_scene_020000C8_RoomList];
extern Spawn spot15_scene_020000D0_SpawnList[];
extern s16 spot15_scene_020000DC_ExitList[];
#define LENGTH_spot15_scene_020000E4_EnvLightSettingsList 12
extern EnvLightSettings spot15_scene_020000E4_EnvLightSettingsList[LENGTH_spot15_scene_020000E4_EnvLightSettingsList];
extern Vec3s spot15_scene_02000210_PathList_020001EC_Points[];
extern Path spot15_scene_02000210_PathList[];
extern Vec3s spot15_scene_02003CE8_BgCamList_02000220_BgCamFuncData[];
extern BgCamInfo spot15_scene_02003CE8_BgCamList[];
extern u8 spot15_scene_unaccounted_000264[];
extern SurfaceType spot15_scene_02003CE8_SurfaceTypes[];
extern CollisionPoly spot15_scene_02003CE8_PolyList[];
extern Vec3s spot15_scene_02003CE8_VtxList[];
extern WaterBox spot15_scene_02003CE8_WaterBoxes[];
extern CollisionHeader spot15_scene_02003CE8_Col;
extern SceneCmd spot15_scene_unused[];
#define LENGTH_spot15_scene_unused_02003D88_PlayerEntryList 5
extern ActorEntry spot15_scene_unused_02003D88_PlayerEntryList[LENGTH_spot15_scene_unused_02003D88_PlayerEntryList];
#define LENGTH_spot15_scene_unused_02003DD8_TransitionActorEntryList 1
extern TransitionActorEntry spot15_scene_unused_02003DD8_TransitionActorEntryList[LENGTH_spot15_scene_unused_02003DD8_TransitionActorEntryList];
#define LENGTH_spot15_scene_unused_02003DE8_RoomList 1
extern RomFile spot15_scene_unused_02003DE8_RoomList[LENGTH_spot15_scene_unused_02003DE8_RoomList];
extern Spawn spot15_scene_unused_02003DF0_SpawnList[];
extern s16 spot15_scene_unused_02003DFC_ExitList[];
#define LENGTH_spot15_scene_unused_02003E04_EnvLightSettingsList 12
extern EnvLightSettings spot15_scene_unused_02003E04_EnvLightSettingsList[LENGTH_spot15_scene_unused_02003E04_EnvLightSettingsList];
extern Vec3s spot15_scene_unused_02003F30_PathList_02003F0C_Points[];
extern Path spot15_scene_unused_02003F30_PathList[];
extern CutsceneData gHyruleCastleIntroCs[];
#define spot15_scene_00004100_Tex_WIDTH 32
#define spot15_scene_00004100_Tex_HEIGHT 32
extern u64 spot15_scene_00004100_Tex[TEX_LEN(u64, spot15_scene_00004100_Tex_WIDTH, spot15_scene_00004100_Tex_HEIGHT, 16)];
#define spot15_scene_00004900_Tex_WIDTH 32
#define spot15_scene_00004900_Tex_HEIGHT 16
extern u64 spot15_scene_00004900_Tex[TEX_LEN(u64, spot15_scene_00004900_Tex_WIDTH, spot15_scene_00004900_Tex_HEIGHT, 4)];
#define spot15_scene_00004A00_Tex_WIDTH 8
#define spot15_scene_00004A00_Tex_HEIGHT 64
extern u64 spot15_scene_00004A00_Tex[TEX_LEN(u64, spot15_scene_00004A00_Tex_WIDTH, spot15_scene_00004A00_Tex_HEIGHT, 8)];
#define spot15_scene_00004C00_Tex_WIDTH 16
#define spot15_scene_00004C00_Tex_HEIGHT 64
extern u64 spot15_scene_00004C00_Tex[TEX_LEN(u64, spot15_scene_00004C00_Tex_WIDTH, spot15_scene_00004C00_Tex_HEIGHT, 16)];
#define spot15_scene_00005400_Tex_WIDTH 32
#define spot15_scene_00005400_Tex_HEIGHT 64
extern u64 spot15_scene_00005400_Tex[TEX_LEN(u64, spot15_scene_00005400_Tex_WIDTH, spot15_scene_00005400_Tex_HEIGHT, 16)];
#define spot15_scene_00006400_Tex_WIDTH 32
#define spot15_scene_00006400_Tex_HEIGHT 8
extern u64 spot15_scene_00006400_Tex[TEX_LEN(u64, spot15_scene_00006400_Tex_WIDTH, spot15_scene_00006400_Tex_HEIGHT, 8)];
#define spot15_scene_00006500_Tex_WIDTH 32
#define spot15_scene_00006500_Tex_HEIGHT 32
extern u64 spot15_scene_00006500_Tex[TEX_LEN(u64, spot15_scene_00006500_Tex_WIDTH, spot15_scene_00006500_Tex_HEIGHT, 16)];
#define spot15_scene_00006D00_Tex_WIDTH 32
#define spot15_scene_00006D00_Tex_HEIGHT 32
extern u64 spot15_scene_00006D00_Tex[TEX_LEN(u64, spot15_scene_00006D00_Tex_WIDTH, spot15_scene_00006D00_Tex_HEIGHT, 4)];
#define spot15_scene_00006F00_Tex_WIDTH 32
#define spot15_scene_00006F00_Tex_HEIGHT 64
extern u64 spot15_scene_00006F00_Tex[TEX_LEN(u64, spot15_scene_00006F00_Tex_WIDTH, spot15_scene_00006F00_Tex_HEIGHT, 4)];
#define spot15_scene_00007300_Tex_WIDTH 32
#define spot15_scene_00007300_Tex_HEIGHT 128
extern u64 spot15_scene_00007300_Tex[TEX_LEN(u64, spot15_scene_00007300_Tex_WIDTH, spot15_scene_00007300_Tex_HEIGHT, 4)];
#define spot15_scene_00007B00_Tex_WIDTH 16
#define spot15_scene_00007B00_Tex_HEIGHT 32
extern u64 spot15_scene_00007B00_Tex[TEX_LEN(u64, spot15_scene_00007B00_Tex_WIDTH, spot15_scene_00007B00_Tex_HEIGHT, 4)];
#define spot15_scene_00007C00_Tex_WIDTH 32
#define spot15_scene_00007C00_Tex_HEIGHT 8
extern u64 spot15_scene_00007C00_Tex[TEX_LEN(u64, spot15_scene_00007C00_Tex_WIDTH, spot15_scene_00007C00_Tex_HEIGHT, 16)];
#define spot15_scene_00007E00_Tex_WIDTH 32
#define spot15_scene_00007E00_Tex_HEIGHT 64
extern u64 spot15_scene_00007E00_Tex[TEX_LEN(u64, spot15_scene_00007E00_Tex_WIDTH, spot15_scene_00007E00_Tex_HEIGHT, 16)];
#define spot15_scene_00008E00_Tex_WIDTH 32
#define spot15_scene_00008E00_Tex_HEIGHT 32
extern u64 spot15_scene_00008E00_Tex[TEX_LEN(u64, spot15_scene_00008E00_Tex_WIDTH, spot15_scene_00008E00_Tex_HEIGHT, 16)];
#define spot15_scene_00009600_Tex_WIDTH 16
#define spot15_scene_00009600_Tex_HEIGHT 16
extern u64 spot15_scene_00009600_Tex[TEX_LEN(u64, spot15_scene_00009600_Tex_WIDTH, spot15_scene_00009600_Tex_HEIGHT, 16)];
#define spot15_scene_00009800_Tex_WIDTH 16
#define spot15_scene_00009800_Tex_HEIGHT 16
extern u64 spot15_scene_00009800_Tex[TEX_LEN(u64, spot15_scene_00009800_Tex_WIDTH, spot15_scene_00009800_Tex_HEIGHT, 8)];
#define spot15_scene_00009900_Tex_WIDTH 32
#define spot15_scene_00009900_Tex_HEIGHT 32
extern u64 spot15_scene_00009900_Tex[TEX_LEN(u64, spot15_scene_00009900_Tex_WIDTH, spot15_scene_00009900_Tex_HEIGHT, 16)];
#define spot15_scene_0000A100_Tex_WIDTH 32
#define spot15_scene_0000A100_Tex_HEIGHT 32
extern u64 spot15_scene_0000A100_Tex[TEX_LEN(u64, spot15_scene_0000A100_Tex_WIDTH, spot15_scene_0000A100_Tex_HEIGHT, 16)];
#define spot15_scene_0000A900_Tex_WIDTH 64
#define spot15_scene_0000A900_Tex_HEIGHT 32
extern u64 spot15_scene_0000A900_Tex[TEX_LEN(u64, spot15_scene_0000A900_Tex_WIDTH, spot15_scene_0000A900_Tex_HEIGHT, 16)];
#define spot15_scene_0000B900_Tex_WIDTH 16
#define spot15_scene_0000B900_Tex_HEIGHT 16
extern u64 spot15_scene_0000B900_Tex[TEX_LEN(u64, spot15_scene_0000B900_Tex_WIDTH, spot15_scene_0000B900_Tex_HEIGHT, 8)];
#define spot15_scene_0000BA00_Tex_WIDTH 32
#define spot15_scene_0000BA00_Tex_HEIGHT 32
extern u64 spot15_scene_0000BA00_Tex[TEX_LEN(u64, spot15_scene_0000BA00_Tex_WIDTH, spot15_scene_0000BA00_Tex_HEIGHT, 16)];
#define spot15_scene_0000C200_Tex_WIDTH 32
#define spot15_scene_0000C200_Tex_HEIGHT 32
extern u64 spot15_scene_0000C200_Tex[TEX_LEN(u64, spot15_scene_0000C200_Tex_WIDTH, spot15_scene_0000C200_Tex_HEIGHT, 16)];
#define spot15_scene_0000CA00_Tex_WIDTH 64
#define spot15_scene_0000CA00_Tex_HEIGHT 32
extern u64 spot15_scene_0000CA00_Tex[TEX_LEN(u64, spot15_scene_0000CA00_Tex_WIDTH, spot15_scene_0000CA00_Tex_HEIGHT, 16)];
#define spot15_scene_0000DA00_Tex_WIDTH 128
#define spot15_scene_0000DA00_Tex_HEIGHT 16
extern u64 spot15_scene_0000DA00_Tex[TEX_LEN(u64, spot15_scene_0000DA00_Tex_WIDTH, spot15_scene_0000DA00_Tex_HEIGHT, 16)];
#define spot15_scene_0000EA00_Tex_WIDTH 32
#define spot15_scene_0000EA00_Tex_HEIGHT 32
extern u64 spot15_scene_0000EA00_Tex[TEX_LEN(u64, spot15_scene_0000EA00_Tex_WIDTH, spot15_scene_0000EA00_Tex_HEIGHT, 4)];
#define spot15_scene_0000EC00_Tex_WIDTH 128
#define spot15_scene_0000EC00_Tex_HEIGHT 32
extern u64 spot15_scene_0000EC00_Tex[TEX_LEN(u64, spot15_scene_0000EC00_Tex_WIDTH, spot15_scene_0000EC00_Tex_HEIGHT, 8)];
#define spot15_scene_0000FC00_Tex_WIDTH 32
#define spot15_scene_0000FC00_Tex_HEIGHT 32
extern u64 spot15_scene_0000FC00_Tex[TEX_LEN(u64, spot15_scene_0000FC00_Tex_WIDTH, spot15_scene_0000FC00_Tex_HEIGHT, 16)];
#define spot15_scene_00010400_Tex_WIDTH 32
#define spot15_scene_00010400_Tex_HEIGHT 32
extern u64 spot15_scene_00010400_Tex[TEX_LEN(u64, spot15_scene_00010400_Tex_WIDTH, spot15_scene_00010400_Tex_HEIGHT, 16)];
#define spot15_scene_00010C00_Tex_WIDTH 64
#define spot15_scene_00010C00_Tex_HEIGHT 64
extern u64 spot15_scene_00010C00_Tex[TEX_LEN(u64, spot15_scene_00010C00_Tex_WIDTH, spot15_scene_00010C00_Tex_HEIGHT, 4)];
#define spot15_scene_00011400_Tex_WIDTH 32
#define spot15_scene_00011400_Tex_HEIGHT 32
extern u64 spot15_scene_00011400_Tex[TEX_LEN(u64, spot15_scene_00011400_Tex_WIDTH, spot15_scene_00011400_Tex_HEIGHT, 16)];
#define spot15_scene_00011C00_Tex_WIDTH 128
#define spot15_scene_00011C00_Tex_HEIGHT 32
extern u64 spot15_scene_00011C00_Tex[TEX_LEN(u64, spot15_scene_00011C00_Tex_WIDTH, spot15_scene_00011C00_Tex_HEIGHT, 4)];
#define spot15_scene_00012400_Tex_WIDTH 32
#define spot15_scene_00012400_Tex_HEIGHT 64
extern u64 spot15_scene_00012400_Tex[TEX_LEN(u64, spot15_scene_00012400_Tex_WIDTH, spot15_scene_00012400_Tex_HEIGHT, 16)];
#define spot15_scene_00013400_Tex_WIDTH 32
#define spot15_scene_00013400_Tex_HEIGHT 64
extern u64 spot15_scene_00013400_Tex[TEX_LEN(u64, spot15_scene_00013400_Tex_WIDTH, spot15_scene_00013400_Tex_HEIGHT, 16)];
#define spot15_scene_00014400_Tex_WIDTH 32
#define spot15_scene_00014400_Tex_HEIGHT 32
extern u64 spot15_scene_00014400_Tex[TEX_LEN(u64, spot15_scene_00014400_Tex_WIDTH, spot15_scene_00014400_Tex_HEIGHT, 16)];
#define spot15_scene_00014C00_Tex_WIDTH 64
#define spot15_scene_00014C00_Tex_HEIGHT 32
extern u64 spot15_scene_00014C00_Tex[TEX_LEN(u64, spot15_scene_00014C00_Tex_WIDTH, spot15_scene_00014C00_Tex_HEIGHT, 16)];
#define spot15_scene_00015C00_Tex_WIDTH 16
#define spot15_scene_00015C00_Tex_HEIGHT 16
extern u64 spot15_scene_00015C00_Tex[TEX_LEN(u64, spot15_scene_00015C00_Tex_WIDTH, spot15_scene_00015C00_Tex_HEIGHT, 16)];
#define spot15_scene_00015E00_Tex_WIDTH 32
#define spot15_scene_00015E00_Tex_HEIGHT 32
extern u64 spot15_scene_00015E00_Tex[TEX_LEN(u64, spot15_scene_00015E00_Tex_WIDTH, spot15_scene_00015E00_Tex_HEIGHT, 16)];
#define spot15_scene_00016600_Tex_WIDTH 16
#define spot15_scene_00016600_Tex_HEIGHT 16
extern u64 spot15_scene_00016600_Tex[TEX_LEN(u64, spot15_scene_00016600_Tex_WIDTH, spot15_scene_00016600_Tex_HEIGHT, 16)];
#define spot15_scene_00016800_Tex_WIDTH 32
#define spot15_scene_00016800_Tex_HEIGHT 16
extern u64 spot15_scene_00016800_Tex[TEX_LEN(u64, spot15_scene_00016800_Tex_WIDTH, spot15_scene_00016800_Tex_HEIGHT, 16)];
#define spot15_scene_00016C00_Tex_WIDTH 32
#define spot15_scene_00016C00_Tex_HEIGHT 32
extern u64 spot15_scene_00016C00_Tex[TEX_LEN(u64, spot15_scene_00016C00_Tex_WIDTH, spot15_scene_00016C00_Tex_HEIGHT, 16)];
#define spot15_scene_00017400_Tex_WIDTH 32
#define spot15_scene_00017400_Tex_HEIGHT 32
extern u64 spot15_scene_00017400_Tex[TEX_LEN(u64, spot15_scene_00017400_Tex_WIDTH, spot15_scene_00017400_Tex_HEIGHT, 16)];
#define spot15_scene_00017C00_Tex_WIDTH 32
#define spot15_scene_00017C00_Tex_HEIGHT 32
extern u64 spot15_scene_00017C00_Tex[TEX_LEN(u64, spot15_scene_00017C00_Tex_WIDTH, spot15_scene_00017C00_Tex_HEIGHT, 16)];
#define spot15_scene_00018400_Tex_WIDTH 16
#define spot15_scene_00018400_Tex_HEIGHT 16
extern u64 spot15_scene_00018400_Tex[TEX_LEN(u64, spot15_scene_00018400_Tex_WIDTH, spot15_scene_00018400_Tex_HEIGHT, 8)];

#endif
