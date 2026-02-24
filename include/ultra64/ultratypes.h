#ifndef ULTRA64_ULTRATYPES_H
#define ULTRA64_ULTRATYPES_H

#ifdef _LANGUAGE_C

typedef __INT8_TYPE__    s8;
typedef __UINT8_TYPE__   u8;
typedef __INT16_TYPE__  s16;
typedef __UINT16_TYPE__ u16;
typedef __INT32_TYPE__  s32;
typedef __UINT32_TYPE__ u32;
typedef __INT64_TYPE__  s64;
typedef __UINT64_TYPE__ u64;

typedef volatile u8  vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8  vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;

typedef float  f32;
typedef double f64;


typedef float MtxF_t[4][4];
typedef union MtxF {
    MtxF_t mf;
    struct {
        // Note: The order displayed here is the transpose of the order in which matrices are typically written.
        // For example, [xw, yw, zw] is the translation part of the matrix, not [wx, wy, wz].
        float xx, yx, zx, wx,
              xy, yy, zy, wy,
              xz, yz, zz, wz,
              xw, yw, zw, ww;
    };
} MtxF;

#endif

#endif
