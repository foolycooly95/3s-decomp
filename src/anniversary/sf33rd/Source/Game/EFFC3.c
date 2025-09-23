#include "sf33rd/Source/Game/EFFC3.h"
#include "common.h"

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFC3", effect_C3_move);
#else
void effect_C3_move(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFC3", bs2_display_C3);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFC3", set_display_car_parts);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFC3", clear_parts_hit_data);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFC3", effC3_main_process);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFC3", get_efffC3_nsc);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFC3", effect_C3_init);

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFC3", effC3_nsc);

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFC3", car_parts);
