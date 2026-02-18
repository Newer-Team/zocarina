#ifndef OBJECT_DEKUBABA_H
#define OBJECT_DEKUBABA_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gDekuBabaPauseChompFrameData[];
extern JointIndex gDekuBabaPauseChompJointIndices[];
extern AnimationHeader gDekuBabaPauseChompAnim;
extern s16 gDekuBabaFastChompFrameData[];
extern JointIndex gDekuBabaFastChompJointIndices[];
extern AnimationHeader gDekuBabaFastChompAnim;
extern Vtx gDekuBabaLowerJawVtx[];
extern Gfx gDekuBabaLowerJawDL[37];
extern Vtx gDekuBabaUpperJawVtx[];
extern Gfx gDekuBabaUpperJawDL[51];
extern Vtx gDekuBabaBaseLeavesVtx[];
extern Gfx gDekuBabaBaseLeavesDL[40];
extern Vtx gDekuBabaStemTopVtx[];
extern Gfx gDekuBabaStemTopDL[23];
extern Vtx gDekuBabaStemMiddleVtx[];
extern Gfx gDekuBabaStemMiddleDL[32];
extern Vtx gDekuBabaStemBaseVtx[];
extern Gfx gDekuBabaStemBaseDL[21];
#define gDekuBabaJawOuterTex_WIDTH 16
#define gDekuBabaJawOuterTex_HEIGHT 32
extern u64 gDekuBabaJawOuterTex[TEX_LEN(u64, gDekuBabaJawOuterTex_WIDTH, gDekuBabaJawOuterTex_HEIGHT, 16)];
#define gDekuBabaJawInnerTex_WIDTH 32
#define gDekuBabaJawInnerTex_HEIGHT 32
extern u64 gDekuBabaJawInnerTex[TEX_LEN(u64, gDekuBabaJawInnerTex_WIDTH, gDekuBabaJawInnerTex_HEIGHT, 16)];
#define gDekuBabaLeafTex_WIDTH 16
#define gDekuBabaLeafTex_HEIGHT 32
extern u64 gDekuBabaLeafTex[TEX_LEN(u64, gDekuBabaLeafTex_WIDTH, gDekuBabaLeafTex_HEIGHT, 16)];
#define gDekuBabaBulbTex_WIDTH 8
#define gDekuBabaBulbTex_HEIGHT 8
extern u64 gDekuBabaBulbTex[TEX_LEN(u64, gDekuBabaBulbTex_WIDTH, gDekuBabaBulbTex_HEIGHT, 16)];
#define gDekuBabaStemTex_WIDTH 8
#define gDekuBabaStemTex_HEIGHT 8
extern u64 gDekuBabaStemTex[TEX_LEN(u64, gDekuBabaStemTex_WIDTH, gDekuBabaStemTex_HEIGHT, 16)];
extern StandardLimb object_dekubaba_Limb_0029D0;
extern StandardLimb object_dekubaba_Limb_0029DC;
extern StandardLimb object_dekubaba_Limb_0029E8;
extern StandardLimb object_dekubaba_Limb_0029F4;
extern StandardLimb object_dekubaba_Limb_002A00;
extern StandardLimb object_dekubaba_Limb_002A0C;
extern StandardLimb object_dekubaba_Limb_002A18;
extern void* gDekuBabaLimbs[];
typedef enum gDekuBabaSkelLimb {
    /*  0 */ LIMB_OBJECT_DEKUBABA_002A40_NONE,
    /*  1 */ LIMB_OBJECT_DEKUBABA_0029D0,
    /*  2 */ LIMB_OBJECT_DEKUBABA_0029DC,
    /*  3 */ LIMB_OBJECT_DEKUBABA_0029E8,
    /*  4 */ LIMB_OBJECT_DEKUBABA_0029F4,
    /*  5 */ LIMB_OBJECT_DEKUBABA_002A00,
    /*  6 */ LIMB_OBJECT_DEKUBABA_002A0C,
    /*  7 */ LIMB_OBJECT_DEKUBABA_002A18,
    /*  8 */ LIMB_OBJECT_DEKUBABA_002A40_MAX
} gDekuBabaSkelLimb;
extern SkeletonHeader gDekuBabaSkel;
extern Vtx gDekuBabaStickDropVtx[];
extern Gfx gDekuBabaStickDropDL[41];
#define gDekuBabaStickDropTex_WIDTH 32
#define gDekuBabaStickDropTex_HEIGHT 32
extern u64 gDekuBabaStickDropTex[TEX_LEN(u64, gDekuBabaStickDropTex_WIDTH, gDekuBabaStickDropTex_HEIGHT, 16)];

#endif
