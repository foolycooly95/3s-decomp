#include "sf33rd/Source/Game/effb3.h"
#include "common.h"

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/effb3", effect_B3_move);
#else
void effect_B3_move(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/effb3", round_move_init);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/effb3", round_move);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/effb3", fight_move);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/effb3", fight_col_move);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/effb3", fight_vanish);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/effb3", effect_B3_init);
