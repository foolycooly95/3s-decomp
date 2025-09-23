#include "sf33rd/Source/Game/EFF90.h"
#include "common.h"

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF90", effect_90_move);
#else
void effect_90_move(WORK_Other_CONN *ewk) {
    not_implemented(__func__);
}
#endif

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF90", Check_Disp_90);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF90", Check_Disp_Pos_90);
