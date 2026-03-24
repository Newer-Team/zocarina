#ifndef Z_OCARINA_H
#define Z_OCARINA_H

#include "stddef.h"
#include "stdint.h"
#include "ultra64.h"
#include "object.h"
#include "actor_profile.h"
#include "play_state.h"
#include "gfx.h"
#include "yaz0.h"

typedef struct {
    /* 0x00 */ s16 id;
    /* 0x02 */ u8 category;
    /* 0x04 */ u32 flags;
    /* 0x08 */ s16 objectId;
    /* 0x0A */ u16 padding;
    /* 0x0C */ u32 instanceSize;
    /* 0x10 */ ActorFunc init;
    /* 0x14 */ ActorFunc destroy;
    /* 0x18 */ ActorFunc update;
    /* 0x1C */ ActorFunc draw;
} ActorInitExplPad; // size = 0x20

s32 Object_SpawnPersistent(ObjectContext* objectCtx, s16 objectId);
void Cutscene_SetupScripted(PlayState* play, CutsceneContext* csCtx);

#endif