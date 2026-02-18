#ifndef OBJECT_ZL2_H
#define OBJECT_ZL2_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

//#define gZelda2_0TLUT_TLUT_COUNT 256
extern u64 gZelda2_0TLUT[];
//#define gZelda2_1TLUT_TLUT_COUNT 256
extern u64 gZelda2_1TLUT[];
//#define gZelda2_2TLUT_TLUT_COUNT 256
extern u64 gZelda2_2TLUT[];
#define gZelda2EyeUnusedTex_WIDTH 32
#define gZelda2EyeUnusedTex_HEIGHT 32
extern u64 gZelda2EyeUnusedTex[TEX_LEN(u64, gZelda2EyeUnusedTex_WIDTH, gZelda2EyeUnusedTex_HEIGHT, 16)];
#define object_zl2_000E00_Tex_WIDTH 16
#define object_zl2_000E00_Tex_HEIGHT 16
extern u64 object_zl2_000E00_Tex[TEX_LEN(u64, object_zl2_000E00_Tex_WIDTH, object_zl2_000E00_Tex_HEIGHT, 8)];
#define object_zl2_000F00_Tex_WIDTH 8
#define object_zl2_000F00_Tex_HEIGHT 8
extern u64 object_zl2_000F00_Tex[TEX_LEN(u64, object_zl2_000F00_Tex_WIDTH, object_zl2_000F00_Tex_HEIGHT, 8)];
#define object_zl2_000F40_Tex_WIDTH 16
#define object_zl2_000F40_Tex_HEIGHT 32
extern u64 object_zl2_000F40_Tex[TEX_LEN(u64, object_zl2_000F40_Tex_WIDTH, object_zl2_000F40_Tex_HEIGHT, 8)];
#define object_zl2_001140_Tex_WIDTH 8
#define object_zl2_001140_Tex_HEIGHT 8
extern u64 object_zl2_001140_Tex[TEX_LEN(u64, object_zl2_001140_Tex_WIDTH, object_zl2_001140_Tex_HEIGHT, 8)];
#define object_zl2_001180_Tex_WIDTH 16
#define object_zl2_001180_Tex_HEIGHT 16
extern u64 object_zl2_001180_Tex[TEX_LEN(u64, object_zl2_001180_Tex_WIDTH, object_zl2_001180_Tex_HEIGHT, 8)];
#define object_zl2_001280_Tex_WIDTH 8
#define object_zl2_001280_Tex_HEIGHT 8
extern u64 object_zl2_001280_Tex[TEX_LEN(u64, object_zl2_001280_Tex_WIDTH, object_zl2_001280_Tex_HEIGHT, 8)];
#define object_zl2_0012C0_Tex_WIDTH 16
#define object_zl2_0012C0_Tex_HEIGHT 64
extern u64 object_zl2_0012C0_Tex[TEX_LEN(u64, object_zl2_0012C0_Tex_WIDTH, object_zl2_0012C0_Tex_HEIGHT, 8)];
#define object_zl2_0016C0_Tex_WIDTH 32
#define object_zl2_0016C0_Tex_HEIGHT 32
extern u64 object_zl2_0016C0_Tex[TEX_LEN(u64, object_zl2_0016C0_Tex_WIDTH, object_zl2_0016C0_Tex_HEIGHT, 8)];
#define object_zl2_001AC0_Tex_WIDTH 32
#define object_zl2_001AC0_Tex_HEIGHT 16
extern u64 object_zl2_001AC0_Tex[TEX_LEN(u64, object_zl2_001AC0_Tex_WIDTH, object_zl2_001AC0_Tex_HEIGHT, 8)];
#define object_zl2_001CC0_Tex_WIDTH 32
#define object_zl2_001CC0_Tex_HEIGHT 64
extern u64 object_zl2_001CC0_Tex[TEX_LEN(u64, object_zl2_001CC0_Tex_WIDTH, object_zl2_001CC0_Tex_HEIGHT, 8)];
#define object_zl2_0024C0_Tex_WIDTH 8
#define object_zl2_0024C0_Tex_HEIGHT 8
extern u64 object_zl2_0024C0_Tex[TEX_LEN(u64, object_zl2_0024C0_Tex_WIDTH, object_zl2_0024C0_Tex_HEIGHT, 8)];
#define object_zl2_002500_Tex_WIDTH 16
#define object_zl2_002500_Tex_HEIGHT 16
extern u64 object_zl2_002500_Tex[TEX_LEN(u64, object_zl2_002500_Tex_WIDTH, object_zl2_002500_Tex_HEIGHT, 8)];
#define object_zl2_002600_Tex_WIDTH 32
#define object_zl2_002600_Tex_HEIGHT 8
extern u64 object_zl2_002600_Tex[TEX_LEN(u64, object_zl2_002600_Tex_WIDTH, object_zl2_002600_Tex_HEIGHT, 8)];
#define object_zl2_002700_Tex_WIDTH 8
#define object_zl2_002700_Tex_HEIGHT 8
extern u64 object_zl2_002700_Tex[TEX_LEN(u64, object_zl2_002700_Tex_WIDTH, object_zl2_002700_Tex_HEIGHT, 8)];
#define object_zl2_002740_Tex_WIDTH 8
#define object_zl2_002740_Tex_HEIGHT 8
extern u64 object_zl2_002740_Tex[TEX_LEN(u64, object_zl2_002740_Tex_WIDTH, object_zl2_002740_Tex_HEIGHT, 8)];
#define object_zl2_002780_Tex_WIDTH 16
#define object_zl2_002780_Tex_HEIGHT 16
extern u64 object_zl2_002780_Tex[TEX_LEN(u64, object_zl2_002780_Tex_WIDTH, object_zl2_002780_Tex_HEIGHT, 8)];
#define object_zl2_002880_Tex_WIDTH 8
#define object_zl2_002880_Tex_HEIGHT 16
extern u64 object_zl2_002880_Tex[TEX_LEN(u64, object_zl2_002880_Tex_WIDTH, object_zl2_002880_Tex_HEIGHT, 8)];
#define gZelda2TriforceTex_WIDTH 16
#define gZelda2TriforceTex_HEIGHT 16
extern u64 gZelda2TriforceTex[TEX_LEN(u64, gZelda2TriforceTex_WIDTH, gZelda2TriforceTex_HEIGHT, 16)];
//#define gZelda2EyesTLUT_TLUT_COUNT 256
extern u64 gZelda2EyesTLUT[];
//#define gZelda2_3TLUT_TLUT_COUNT 72
extern u64 gZelda2_3TLUT[];
//#define gZelda2MouthTLUT_TLUT_COUNT 224
extern u64 gZelda2MouthTLUT[];
//#define gZelda2_4TLUT_TLUT_COUNT 188
extern u64 gZelda2_4TLUT[];
#define gZelda2EyeOpenTex_WIDTH 32
#define gZelda2EyeOpenTex_HEIGHT 32
extern u64 gZelda2EyeOpenTex[TEX_LEN(u64, gZelda2EyeOpenTex_WIDTH, gZelda2EyeOpenTex_HEIGHT, 8)];
#define object_zl2_0034C8_Tex_WIDTH 8
#define object_zl2_0034C8_Tex_HEIGHT 8
extern u64 object_zl2_0034C8_Tex[TEX_LEN(u64, object_zl2_0034C8_Tex_WIDTH, object_zl2_0034C8_Tex_HEIGHT, 8)];
#define gZelda2MouthSeriousTex_WIDTH 32
#define gZelda2MouthSeriousTex_HEIGHT 32
extern u64 gZelda2MouthSeriousTex[TEX_LEN(u64, gZelda2MouthSeriousTex_WIDTH, gZelda2MouthSeriousTex_HEIGHT, 8)];
#define object_zl2_003908_Tex_WIDTH 16
#define object_zl2_003908_Tex_HEIGHT 16
extern u64 object_zl2_003908_Tex[TEX_LEN(u64, object_zl2_003908_Tex_WIDTH, object_zl2_003908_Tex_HEIGHT, 8)];
#define gZelda2Tex_003A08_WIDTH 8
#define gZelda2Tex_003A08_HEIGHT 8
extern u64 gZelda2Tex_003A08[TEX_LEN(u64, gZelda2Tex_003A08_WIDTH, gZelda2Tex_003A08_HEIGHT, 8)];
#define object_zl2_003A48_Tex_WIDTH 8
#define object_zl2_003A48_Tex_HEIGHT 16
extern u64 object_zl2_003A48_Tex[TEX_LEN(u64, object_zl2_003A48_Tex_WIDTH, object_zl2_003A48_Tex_HEIGHT, 8)];
#define object_zl2_003AC8_Tex_WIDTH 16
#define object_zl2_003AC8_Tex_HEIGHT 8
extern u64 object_zl2_003AC8_Tex[TEX_LEN(u64, object_zl2_003AC8_Tex_WIDTH, object_zl2_003AC8_Tex_HEIGHT, 8)];
#define object_zl2_003B48_Tex_WIDTH 16
#define object_zl2_003B48_Tex_HEIGHT 16
extern u64 object_zl2_003B48_Tex[TEX_LEN(u64, object_zl2_003B48_Tex_WIDTH, object_zl2_003B48_Tex_HEIGHT, 8)];
#define gZelda2EyeHalfTex_WIDTH 32
#define gZelda2EyeHalfTex_HEIGHT 32
extern u64 gZelda2EyeHalfTex[TEX_LEN(u64, gZelda2EyeHalfTex_WIDTH, gZelda2EyeHalfTex_HEIGHT, 8)];
#define gZelda2EyeShutTex_WIDTH 32
#define gZelda2EyeShutTex_HEIGHT 32
extern u64 gZelda2EyeShutTex[TEX_LEN(u64, gZelda2EyeShutTex_WIDTH, gZelda2EyeShutTex_HEIGHT, 8)];
#define object_zl2_004448_Tex_WIDTH 16
#define object_zl2_004448_Tex_HEIGHT 16
extern u64 object_zl2_004448_Tex[TEX_LEN(u64, object_zl2_004448_Tex_WIDTH, object_zl2_004448_Tex_HEIGHT, 8)];
#define gZelda2Eye03Tex_WIDTH 32
#define gZelda2Eye03Tex_HEIGHT 32
extern u64 gZelda2Eye03Tex[TEX_LEN(u64, gZelda2Eye03Tex_WIDTH, gZelda2Eye03Tex_HEIGHT, 8)];
#define gZelda2Eye04Tex_WIDTH 32
#define gZelda2Eye04Tex_HEIGHT 32
extern u64 gZelda2Eye04Tex[TEX_LEN(u64, gZelda2Eye04Tex_WIDTH, gZelda2Eye04Tex_HEIGHT, 8)];
#define gZelda2Eye05Tex_WIDTH 32
#define gZelda2Eye05Tex_HEIGHT 32
extern u64 gZelda2Eye05Tex[TEX_LEN(u64, gZelda2Eye05Tex_WIDTH, gZelda2Eye05Tex_HEIGHT, 8)];
#define gZelda2Eye06Tex_WIDTH 32
#define gZelda2Eye06Tex_HEIGHT 32
extern u64 gZelda2Eye06Tex[TEX_LEN(u64, gZelda2Eye06Tex_WIDTH, gZelda2Eye06Tex_HEIGHT, 8)];
#define gZelda2MouthHappyTex_WIDTH 32
#define gZelda2MouthHappyTex_HEIGHT 32
extern u64 gZelda2MouthHappyTex[TEX_LEN(u64, gZelda2MouthHappyTex_WIDTH, gZelda2MouthHappyTex_HEIGHT, 8)];
#define gZelda2MouthOpenTex_WIDTH 32
#define gZelda2MouthOpenTex_HEIGHT 32
extern u64 gZelda2MouthOpenTex[TEX_LEN(u64, gZelda2MouthOpenTex_WIDTH, gZelda2MouthOpenTex_HEIGHT, 8)];
#define gZelda2Eye07Tex_WIDTH 32
#define gZelda2Eye07Tex_HEIGHT 32
extern u64 gZelda2Eye07Tex[TEX_LEN(u64, gZelda2Eye07Tex_WIDTH, gZelda2Eye07Tex_HEIGHT, 8)];
#define gZelda2Eye08Tex_WIDTH 32
#define gZelda2Eye08Tex_HEIGHT 32
extern u64 gZelda2Eye08Tex[TEX_LEN(u64, gZelda2Eye08Tex_WIDTH, gZelda2Eye08Tex_HEIGHT, 8)];
#define object_zl2_006548_Tex_WIDTH 32
#define object_zl2_006548_Tex_HEIGHT 16
extern u64 object_zl2_006548_Tex[TEX_LEN(u64, object_zl2_006548_Tex_WIDTH, object_zl2_006548_Tex_HEIGHT, 8)];
extern Vtx object_zl2_Vtx_006748[];
extern Gfx object_zl2_007DC8_DL[729];
//#define gZelda2_5TLUT_TLUT_COUNT 136
extern u64 gZelda2_5TLUT[];
//#define gZelda2_6TLUT_TLUT_COUNT 180
extern u64 gZelda2_6TLUT[];
//#define gZelda2_7TLUT_TLUT_COUNT 24
extern u64 gZelda2_7TLUT[];
#define object_zl2_009738_Tex_WIDTH 16
#define object_zl2_009738_Tex_HEIGHT 32
extern u64 object_zl2_009738_Tex[TEX_LEN(u64, object_zl2_009738_Tex_WIDTH, object_zl2_009738_Tex_HEIGHT, 8)];
#define object_zl2_009938_Tex_WIDTH 16
#define object_zl2_009938_Tex_HEIGHT 16
extern u64 object_zl2_009938_Tex[TEX_LEN(u64, object_zl2_009938_Tex_WIDTH, object_zl2_009938_Tex_HEIGHT, 8)];
#define object_zl2_009A38_Tex_WIDTH 8
#define object_zl2_009A38_Tex_HEIGHT 8
extern u64 object_zl2_009A38_Tex[TEX_LEN(u64, object_zl2_009A38_Tex_WIDTH, object_zl2_009A38_Tex_HEIGHT, 8)];
#define object_zl2_009A78_Tex_WIDTH 32
#define object_zl2_009A78_Tex_HEIGHT 32
extern u64 object_zl2_009A78_Tex[TEX_LEN(u64, object_zl2_009A78_Tex_WIDTH, object_zl2_009A78_Tex_HEIGHT, 8)];
#define object_zl2_009E78_Tex_WIDTH 16
#define object_zl2_009E78_Tex_HEIGHT 16
extern u64 object_zl2_009E78_Tex[TEX_LEN(u64, object_zl2_009E78_Tex_WIDTH, object_zl2_009E78_Tex_HEIGHT, 8)];
#define object_zl2_009F78_Tex_WIDTH 8
#define object_zl2_009F78_Tex_HEIGHT 16
extern u64 object_zl2_009F78_Tex[TEX_LEN(u64, object_zl2_009F78_Tex_WIDTH, object_zl2_009F78_Tex_HEIGHT, 8)];
#define object_zl2_009FF8_Tex_WIDTH 16
#define object_zl2_009FF8_Tex_HEIGHT 16
extern u64 object_zl2_009FF8_Tex[TEX_LEN(u64, object_zl2_009FF8_Tex_WIDTH, object_zl2_009FF8_Tex_HEIGHT, 8)];
#define object_zl2_00A0F8_Tex_WIDTH 32
#define object_zl2_00A0F8_Tex_HEIGHT 32
extern u64 object_zl2_00A0F8_Tex[TEX_LEN(u64, object_zl2_00A0F8_Tex_WIDTH, object_zl2_00A0F8_Tex_HEIGHT, 8)];
extern Vtx object_zl2_Vtx_00A4F8[];
extern Gfx object_zl2_00B068_DL[166];
#define gZelda2OcarinaTex_WIDTH 32
#define gZelda2OcarinaTex_HEIGHT 16
extern u64 gZelda2OcarinaTex[TEX_LEN(u64, gZelda2OcarinaTex_WIDTH, gZelda2OcarinaTex_HEIGHT, 16)];
extern Vtx gZelda2OcarinaVtx[];
extern Gfx gZelda2OcarinaDL[37];
extern Vtx object_zl2_Vtx_00BC10[];
extern Vtx object_zl2_Vtx_00C1B0[];
extern Vtx object_zl2_Vtx_00C370[];
extern Vtx object_zl2_Vtx_00C770[];
extern Vtx object_zl2_Vtx_00CD10[];
extern Vtx object_zl2_Vtx_00CED0[];
extern Vtx object_zl2_Vtx_00D2D0[];
extern Vtx object_zl2_Vtx_00D530[];
extern Vtx object_zl2_Vtx_00D790[];
extern Vtx object_zl2_Vtx_00D9F0[];
extern Vtx object_zl2_Vtx_00DE00[];
extern Gfx object_zl2_00E590_DL[112];
extern Gfx object_zl2_00E910_DL[41];
extern Gfx object_zl2_00EA58_DL[97];
extern Gfx object_zl2_00ED60_DL[112];
extern Gfx object_zl2_00F0E0_DL[41];
extern Gfx object_zl2_00F228_DL[97];
extern Gfx object_zl2_00F530_DL[437];
extern Gfx object_zl2_0102D8_DL[194];
extern Gfx object_zl2_0108E8_DL[39];
extern Gfx object_zl2_010A20_DL[39];
extern Gfx object_zl2_010B58_DL[39];
extern StandardLimb object_zl2_010C90_Limb;
extern StandardLimb object_zl2_010C9C_Limb;
extern StandardLimb object_zl2_010CA8_Limb;
extern StandardLimb object_zl2_010CB4_Limb;
extern StandardLimb object_zl2_010CC0_Limb;
extern StandardLimb object_zl2_010CCC_Limb;
extern StandardLimb object_zl2_010CD8_Limb;
extern StandardLimb object_zl2_010CE4_Limb;
extern StandardLimb object_zl2_010CF0_Limb;
extern StandardLimb object_zl2_010CFC_Limb;
extern StandardLimb object_zl2_010D08_Limb;
extern StandardLimb object_zl2_010D14_Limb;
extern StandardLimb object_zl2_010D20_Limb;
extern StandardLimb object_zl2_010D2C_Limb;
extern void* gZelda2Limbs[];
typedef enum gZelda2SkelLimb {
    /*  0 */ LIMB_OBJECT_ZL2_010D70_NONE,
    /*  1 */ LIMB_OBJECT_ZL2_010C90,
    /*  2 */ LIMB_OBJECT_ZL2_010C9C,
    /*  3 */ LIMB_OBJECT_ZL2_010CA8,
    /*  4 */ LIMB_OBJECT_ZL2_010CB4,
    /*  5 */ LIMB_OBJECT_ZL2_010CC0,
    /*  6 */ LIMB_OBJECT_ZL2_010CCC,
    /*  7 */ LIMB_OBJECT_ZL2_010CD8,
    /*  8 */ LIMB_OBJECT_ZL2_010CE4,
    /*  9 */ LIMB_OBJECT_ZL2_010CF0,
    /* 10 */ LIMB_OBJECT_ZL2_010CFC,
    /* 11 */ LIMB_OBJECT_ZL2_010D08,
    /* 12 */ LIMB_OBJECT_ZL2_010D14,
    /* 13 */ LIMB_OBJECT_ZL2_010D20,
    /* 14 */ LIMB_OBJECT_ZL2_010D2C,
    /* 15 */ LIMB_OBJECT_ZL2_010D70_MAX
} gZelda2SkelLimb;
extern FlexSkeletonHeader gZelda2Skel;

#endif
