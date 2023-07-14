#ifndef LEVEL_TABLE_H
#define LEVEL_TABLE_H

// For LEVEL_NAME defines, see level_defines.h.
// Please include this file if you want to use them.

#define STUB_LEVEL(_0, levelenum, _2, _3, _4, _5, _6, _7, _8) levelenum,
#define DEFINE_LEVEL(_0, levelenum, _2, _3, _4, _5, _6, _7, _8, _9, _10) levelenum,

enum LevelNum {
    LEVEL_RESTART_GAME = -1,
    LEVEL_NONE,
#include "levels/level_defines.h"
    LEVEL_COUNT,
    LEVEL_MAX = LEVEL_COUNT - 1,
    LEVEL_MIN = LEVEL_NONE + 1,
    LEVEL_FILE_SELECT = LEVEL_COUNT + 1,
    LEVEL_LEVEL_SELECT = LEVEL_FILE_SELECT + 1,
};

#undef STUB_LEVEL
#undef DEFINE_LEVEL

enum SMG23IH2Levels {
    SMG23IH2_LEVEL_1 = LEVEL_CASTLE_GROUNDS,
    SMG23IH2_LEVEL_2 = LEVEL_WF,
    SMG23IH2_LEVEL_3 = -128, // TODO:
    SMG23IH2_LEVEL_4, // TODO:
    SMG23IH2_LEVEL_5, // TODO:
};

#endif // LEVEL_TABLE_H
