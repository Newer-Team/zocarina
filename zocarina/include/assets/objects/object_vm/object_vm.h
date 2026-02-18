#ifndef OBJECT_VM_H
#define OBJECT_VM_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gBeamosFrameData[];
extern JointIndex gBeamosJointIndices[];
extern AnimationHeader gBeamosAnim;
extern Vtx gBeamosBodyVtx[];
extern Vtx gBeamosTopEyelidVtx[];
extern Vtx gBeamosBottomEyelidVtx[];
extern Vtx gBeamosEyeVtx[];
extern Vtx gBeamosLaserVtx[];
extern Gfx gBeamosBodyDL[150];
extern Gfx gBeamosTopEyelidDL[54];
extern Gfx gBeamosBottomEyelidDL[54];
extern Gfx gBeamosEyeDL[35];
extern Gfx gBeamosLaserDL[19];
#define gBeamosBodyGradientTex_WIDTH 8
#define gBeamosBodyGradientTex_HEIGHT 8
extern u64 gBeamosBodyGradientTex[TEX_LEN(u64, gBeamosBodyGradientTex_WIDTH, gBeamosBodyGradientTex_HEIGHT, 16)];
#define gBeamosGrayMetalTex_WIDTH 16
#define gBeamosGrayMetalTex_HEIGHT 32
extern u64 gBeamosGrayMetalTex[TEX_LEN(u64, gBeamosGrayMetalTex_WIDTH, gBeamosGrayMetalTex_HEIGHT, 4)];
#define gBeamosBoltAndMetalTex_WIDTH 16
#define gBeamosBoltAndMetalTex_HEIGHT 32
extern u64 gBeamosBoltAndMetalTex[TEX_LEN(u64, gBeamosBoltAndMetalTex_WIDTH, gBeamosBoltAndMetalTex_HEIGHT, 16)];
#define gBeamosTex_2D40_WIDTH 16
#define gBeamosTex_2D40_HEIGHT 8
extern u64 gBeamosTex_2D40[TEX_LEN(u64, gBeamosTex_2D40_WIDTH, gBeamosTex_2D40_HEIGHT, 16)];
#define gBeamosEyeOutlineTex_WIDTH 16
#define gBeamosEyeOutlineTex_HEIGHT 16
extern u64 gBeamosEyeOutlineTex[TEX_LEN(u64, gBeamosEyeOutlineTex_WIDTH, gBeamosEyeOutlineTex_HEIGHT, 16)];
#define gBeamosEyeTex_WIDTH 32
#define gBeamosEyeTex_HEIGHT 16
extern u64 gBeamosEyeTex[TEX_LEN(u64, gBeamosEyeTex_WIDTH, gBeamosEyeTex_HEIGHT, 16)];
#define gBeamosBodyTex_WIDTH 16
#define gBeamosBodyTex_HEIGHT 16
extern u64 gBeamosBodyTex[TEX_LEN(u64, gBeamosBodyTex_WIDTH, gBeamosBodyTex_HEIGHT, 16)];
#define gBeamosLaserTex_WIDTH 8
#define gBeamosLaserTex_HEIGHT 8
extern u64 gBeamosLaserTex[TEX_LEN(u64, gBeamosLaserTex_WIDTH, gBeamosLaserTex_HEIGHT, 16)];
#define gBeamosTeethTex_WIDTH 32
#define gBeamosTeethTex_HEIGHT 32
extern u64 gBeamosTeethTex[TEX_LEN(u64, gBeamosTeethTex_WIDTH, gBeamosTeethTex_HEIGHT, 16)];
extern StandardLimb gBeamosRootLimb;
extern StandardLimb gBeamosLimb_3ECC;
extern StandardLimb gBeamosLimb_3ED8;
extern StandardLimb gBeamosLimb_3EE4;
extern StandardLimb gBeamosTopEyelidLimb;
extern StandardLimb gBeamosLimb_3EFC;
extern StandardLimb gBeamosLimb_3F08;
extern StandardLimb gBeamosBottomEyelidLimb;
extern StandardLimb gBeamosEyeLimb;
extern StandardLimb gBeamosBodyLimb;
extern void* gBeamosLimbs[];
typedef enum gBeamosSkelLimb {
    /*  0 */ LIMB_OBJECT_VM_003F60_NONE,
    /*  1 */ LIMB_OBJECT_VM_003EC0,
    /*  2 */ LIMB_OBJECT_VM_003ECC,
    /*  3 */ LIMB_OBJECT_VM_003ED8,
    /*  4 */ LIMB_OBJECT_VM_003EE4,
    /*  5 */ LIMB_OBJECT_VM_003EF0,
    /*  6 */ LIMB_OBJECT_VM_003EFC,
    /*  7 */ LIMB_OBJECT_VM_003F08,
    /*  8 */ LIMB_OBJECT_VM_003F14,
    /*  9 */ LIMB_OBJECT_VM_003F20,
    /* 10 */ LIMB_OBJECT_VM_003F2C,
    /* 11 */ LIMB_OBJECT_VM_003F60_MAX
} gBeamosSkelLimb;
extern SkeletonHeader gBeamosSkel;

#endif
