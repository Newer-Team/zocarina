#ifndef YAZ0_H
#define YAZ0_H

#include "stddef.h"
#include "stdint.h"
#include "ultra64.h"

typedef struct {
    /* 0x00 */ char magic[4]; // Yaz0
    /* 0x04 */ u32 decSize;
    /* 0x08 */ u32 compInfoOffset;   // only used in mio0
    /* 0x0C */ u32 uncompDataOffset; // only used in mio0
    /* 0x10 */ u8 data[];
} Yaz0Header; // size = 0x10 ("data" is not part of the header)

void Yaz0_Decompress(uintptr_t romStart, u8* dst, size_t size);
void Yaz0_DecompressImpl(Yaz0Header* hdr, u8* dst);

#endif
