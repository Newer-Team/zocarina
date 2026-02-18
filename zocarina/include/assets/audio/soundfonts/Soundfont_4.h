#ifndef SOUNDFONT_4_H_
#define SOUNDFONT_4_H_

#ifdef _LANGUAGE_ASEQ
.pushsection .note.fonts, "", @note
    .byte 4 /*sf id*/
.popsection
#endif

#define Soundfont_4_ID 4

#define SF4_NUM_INSTRUMENTS 2
#define SF4_NUM_DRUMS       0
#define SF4_NUM_SFX         0

#define SF4_INST_0 0
#define SF4_INST_1 1

#endif
