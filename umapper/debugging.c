
#include "debugging.h"

char const * const key_names[MAX_KEYS] = {
  [KC_A] = "KC_A",
  [KC_B] = "KC_B",
  [KC_C] = "KC_C",
  [KC_D] = "KC_D",
  [KC_E] = "KC_E",
  [KC_F] = "KC_F",
  [KC_G] = "KC_G",
  [KC_H] = "KC_H",
  [KC_I] = "KC_I",
  [KC_J] = "KC_J",
  [KC_K] = "KC_K",
  [KC_L] = "KC_L",
  [KC_M] = "KC_M",
  [KC_N] = "KC_N",
  [KC_O] = "KC_O",
  [KC_P] = "KC_P",
  [KC_Q] = "KC_Q",
  [KC_R] = "KC_R",
  [KC_S] = "KC_S",
  [KC_T] = "KC_T",
  [KC_U] = "KC_U",
  [KC_V] = "KC_V",
  [KC_W] = "KC_W",
  [KC_X] = "KC_X",
  [KC_Y] = "KC_Y",
  [KC_Z] = "KC_Z",
  [KC_1] = "KC_1",
  [KC_2] = "KC_2",
  [KC_3] = "KC_3",
  [KC_4] = "KC_4",
  [KC_5] = "KC_5",
  [KC_6] = "KC_6",
  [KC_7] = "KC_7",
  [KC_8] = "KC_8",
  [KC_9] = "KC_9",
  [KC_0] = "KC_0",
  [KC_ENTER] = "KC_ENTER",
  [KC_ESCAPE] = "KC_ESCAPE",
  [KC_BACKSPACE] = "KC_BACKSPACE",
  [KC_TAB] = "KC_TAB",
  [KC_SPACE] = "KC_SPACE",
  [KC_MINUS] = "KC_MINUS",
  [KC_EQUAL] = "KC_EQUAL",
  [KC_LEFT_BRACKET] = "KC_LEFT_BRACKET",
  [KC_RIGHT_BRACKET] = "KC_RIGHT_BRACKET",
  [KC_BACKSLASH] = "KC_BACKSLASH",
  [KC_NONUS_HASH] = "KC_NONUS_HASH",
  [KC_SEMICOLON] = "KC_SEMICOLON",
  [KC_QUOTE] = "KC_QUOTE",
  [KC_GRAVE] = "KC_GRAVE",
  [KC_COMMA] = "KC_COMMA",
  [KC_DOT] = "KC_DOT",
  [KC_SLASH] = "KC_SLASH",
  [KC_CAPS_LOCK] = "KC_CAPS_LOCK",
  [KC_F1] = "KC_F1",
  [KC_F2] = "KC_F2",
  [KC_F3] = "KC_F3",
  [KC_F4] = "KC_F4",
  [KC_F5] = "KC_F5",
  [KC_F6] = "KC_F6",
  [KC_F7] = "KC_F7",
  [KC_F8] = "KC_F8",
  [KC_F9] = "KC_F9",
  [KC_F10] = "KC_F10",
  [KC_F11] = "KC_F11",
  [KC_F12] = "KC_F12",
  [KC_PRINT_SCREEN] = "KC_PRINT_SCREEN",
  [KC_SCROLL_LOCK] = "KC_SCROLL_LOCK",
  [KC_PAUSE] = "KC_PAUSE",
  [KC_INSERT] = "KC_INSERT",
  [KC_HOME] = "KC_HOME",
  [KC_PGUP] = "KC_PGUP",
  [KC_DELETE] = "KC_DELETE",
  [KC_END] = "KC_END",
  [KC_PAGE_DOWN] = "KC_PAGE_DOWN",
  [KC_RIGHT] = "KC_RIGHT",
  [KC_LEFT] = "KC_LEFT",
  [KC_DOWN] = "KC_DOWN",
  [KC_UP] = "KC_UP",
  [KC_NUM_LOCK] = "KC_NUM_LOCK",
  [KC_KP_SLASH] = "KC_KP_SLASH",
  [KC_KP_ASTERISK] = "KC_KP_ASTERISK",
  [KC_KP_MINUS] = "KC_KP_MINUS",
  [KC_KP_PLUS] = "KC_KP_PLUS",
  [KC_KP_ENTER] = "KC_KP_ENTER",
  [KC_KP_1] = "KC_KP_1",
  [KC_KP_2] = "KC_KP_2",
  [KC_KP_3] = "KC_KP_3",
  [KC_KP_4] = "KC_KP_4",
  [KC_KP_5] = "KC_KP_5",
  [KC_KP_6] = "KC_KP_6",
  [KC_KP_7] = "KC_KP_7",
  [KC_KP_8] = "KC_KP_8",
  [KC_KP_9] = "KC_KP_9",
  [KC_KP_0] = "KC_KP_0",
  [KC_KP_DOT] = "KC_KP_DOT",
  [KC_NONUS_BACKSLASH] = "KC_NONUS_BACKSLASH",
  [KC_APPLICATION] = "KC_APPLICATION",
  [KC_KB_POWER] = "KC_KB_POWER",
  [KC_KP_EQUAL] = "KC_KP_EQUAL",
  [KC_F13] = "KC_F13",
  [KC_F14] = "KC_F14",
  [KC_F15] = "KC_F15",
  [KC_F16] = "KC_F16",
  [KC_F17] = "KC_F17",
  [KC_F18] = "KC_F18",
  [KC_F19] = "KC_F19",
  [KC_F20] = "KC_F20",
  [KC_F21] = "KC_F21",
  [KC_F22] = "KC_F22",
  [KC_F23] = "KC_F23",
  [KC_F24] = "KC_F24",
  [KC_EXECUTE] = "KC_EXECUTE",
  [KC_HELP] = "KC_HELP",
  [KC_MENU] = "KC_MENU",
  [KC_SELECT] = "KC_SELECT",
  [KC_STOP] = "KC_STOP",
  [KC_AGAIN] = "KC_AGAIN",
  [KC_UNDO] = "KC_UNDO",
  [KC_CUT] = "KC_CUT",
  [KC_COPY] = "KC_COPY",
  [KC_PASTE] = "KC_PASTE",
  [KC_FIND] = "KC_FIND",
  [KC_MUTE] = "KC_MUTE",
  [KC_KB_VOLUME_UP] = "KC_KB_VOLUME_UP",
  [KC_KB_VOLUME_DOWN] = "KC_KB_VOLUME_DOWN",
  [KC_KP_COMMA] = "KC_KP_COMMA",
  [KC_KP_EQUAL_AS400] = "KC_KP_EQUAL_AS400",
  [KC_INT1] = "KC_INT1",
  [KC_INT2] = "KC_INT2",
  [KC_INT3] = "KC_INT3",
  [KC_INT4] = "KC_INT4",
  [KC_INT5] = "KC_INT5",
  [KC_INT6] = "KC_INT6",
  [KC_INT7] = "KC_INT7",
  [KC_INT8] = "KC_INT8",
  [KC_INT9] = "KC_INT9",
  [KC_CANCEL] = "KC_CANCEL",
  [KC_CLEAR] = "KC_CLEAR",
  [KC_PRIOR] = "KC_PRIOR",
  [KC_RETURN] = "KC_RETURN",
  [KC_SEPARATOR] = "KC_SEPARATOR",
  [KC_OUT] = "KC_OUT",
  [KC_OPER] = "KC_OPER",
  [KC_CLEAR_AGAIN] = "KC_CLEAR_AGAIN",
  [KC_CRSEL] = "KC_CRSEL",
  [KC_EXSEL] = "KC_EXSEL",
  //[KC_KP_000] = "KC_KP_000",
  //[KC_THOUSANDS_SEPARATOR] = "KC_THOUSANDS_SEPARATOR",
  //[KC_DECIMAL_SEPARATOR] = "KC_DECIMAL_SEPARATOR",
  //[KC_CURRENCY_UNIT] = "KC_CURRENCY_UNIT",
  //[KC_CURRENCY_SUB_UNIT] = "KC_CURRENCY_SUB_UNIT",
  //[KC_KP_LPAREN] = "KC_KP_LPAREN",
  //[KC_KP_RPAREN] = "KC_KP_RPAREN",
  //[KC_KP_LCBRACKET] = "KC_KP_LCBRACKET",
  //[KC_KP_RCBRACKET] = "KC_KP_RCBRACKET",
  //[KC_KP_TAB] = "KC_KP_TAB",
  //[KC_KP_BSPACE] = "KC_KP_BSPACE",
  //[KC_KP_A] = "KC_KP_A",
  //[KC_KP_B] = "KC_KP_B",
  //[KC_KP_C] = "KC_KP_C",
  //[KC_KP_D] = "KC_KP_D",
  //[KC_KP_E] = "KC_KP_E",
  //[KC_KP_F] = "KC_KP_F",
  //[KC_KP_XOR] = "KC_KP_XOR",
  //[KC_KP_HAT] = "KC_KP_HAT",
  //[KC_KP_PERC] = "KC_KP_PERC",
  //[KC_KP_LT] = "KC_KP_LT",
  //[KC_KP_GT] = "KC_KP_GT",
  //[KC_KP_AND] = "KC_KP_AND",
  //[KC_KP_LAZYAND] = "KC_KP_LAZYAND",
  //[KC_KP_OR] = "KC_KP_OR",
  //[KC_KP_LAZYOR] = "KC_KP_LAZYOR",
  //[KC_KP_COLON] = "KC_KP_COLON",
  //[KC_KP_HASH] = "KC_KP_HASH",
  //[KC_KP_SPACE] = "KC_KP_SPACE",
  //[KC_KP_ATMARK] = "KC_KP_ATMARK",
  //[KC_KP_EXCLAMATION] = "KC_KP_EXCLAMATION",
  //[KC_KP_MEM_STORE] = "KC_KP_MEM_STORE",
  //[KC_KP_MEM_RECALL] = "KC_KP_MEM_RECALL",
  //[KC_KP_MEM_CLEAR] = "KC_KP_MEM_CLEAR",
  //[KC_KP_MEM_ADD] = "KC_KP_MEM_ADD",
  //[KC_KP_MEM_SUB] = "KC_KP_MEM_SUB",
  //[KC_KP_MEM_MUL] = "KC_KP_MEM_MUL",
  //[KC_KP_MEM_DIV] = "KC_KP_MEM_DIV",
  //[KC_KP_PLUS_MINUS] = "KC_KP_PLUS_MINUS",
  //[KC_KP_CLEAR] = "KC_KP_CLEAR",
  //[KC_KP_CLEAR_ENTRY] = "KC_KP_CLEAR_ENTRY",
  //[KC_KP_BINARY] = "KC_KP_BINARY",
  //[KC_KP_OCTAL] = "KC_KP_OCTAL",
  //[KC_KP_DECIMAL] = "KC_KP_DECIMAL",
  //[KC_KP_HEXADECIMAL] = "KC_KP_HEXADECIMAL",
  [KC_LALT] = "KC_LALT",
  [KC_LGUI] = "KC_LGUI",
  [KC_RALT] = "KC_RALT",
  [KC_RGUI] = "KC_RGUI",
};

char const * const event_type_names[2] = {
  "PRESSED",
  "RELEASED"
};

