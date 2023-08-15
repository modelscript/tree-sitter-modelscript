#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 7

enum {
  sym_logical_literal = 1,
  sym_null_literal = 2,
  sym_binary_integer_literal = 3,
  sym_octal_integer_literal = 4,
  sym_decimal_integer_literal = 5,
  sym_hexadecimal_integer_literal = 6,
  sym_single_quoted_string_literal = 7,
  sym_double_quoted_string_literal = 8,
  anon_sym_LBRACK = 9,
  anon_sym_COMMA = 10,
  anon_sym_RBRACK = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_COLON = 14,
  sym_module = 15,
  sym__expression = 16,
  sym__literal = 17,
  sym__number_literal = 18,
  sym__integer_literal = 19,
  sym__string_literal = 20,
  sym_array_constructor = 21,
  sym_object_constructor = 22,
  sym__element = 23,
  sym_keyed_element = 24,
  sym_unkeyed_element = 25,
  aux_sym_array_constructor_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_logical_literal] = "logical_literal",
  [sym_null_literal] = "null_literal",
  [sym_binary_integer_literal] = "binary_integer_literal",
  [sym_octal_integer_literal] = "octal_integer_literal",
  [sym_decimal_integer_literal] = "decimal_integer_literal",
  [sym_hexadecimal_integer_literal] = "hexadecimal_integer_literal",
  [sym_single_quoted_string_literal] = "single_quoted_string_literal",
  [sym_double_quoted_string_literal] = "double_quoted_string_literal",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_module] = "module",
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [sym__number_literal] = "_number_literal",
  [sym__integer_literal] = "_integer_literal",
  [sym__string_literal] = "_string_literal",
  [sym_array_constructor] = "array_constructor",
  [sym_object_constructor] = "object_constructor",
  [sym__element] = "_element",
  [sym_keyed_element] = "keyed_element",
  [sym_unkeyed_element] = "unkeyed_element",
  [aux_sym_array_constructor_repeat1] = "array_constructor_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_logical_literal] = sym_logical_literal,
  [sym_null_literal] = sym_null_literal,
  [sym_binary_integer_literal] = sym_binary_integer_literal,
  [sym_octal_integer_literal] = sym_octal_integer_literal,
  [sym_decimal_integer_literal] = sym_decimal_integer_literal,
  [sym_hexadecimal_integer_literal] = sym_hexadecimal_integer_literal,
  [sym_single_quoted_string_literal] = sym_single_quoted_string_literal,
  [sym_double_quoted_string_literal] = sym_double_quoted_string_literal,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_module] = sym_module,
  [sym__expression] = sym__expression,
  [sym__literal] = sym__literal,
  [sym__number_literal] = sym__number_literal,
  [sym__integer_literal] = sym__integer_literal,
  [sym__string_literal] = sym__string_literal,
  [sym_array_constructor] = sym_array_constructor,
  [sym_object_constructor] = sym_object_constructor,
  [sym__element] = sym__element,
  [sym_keyed_element] = sym_keyed_element,
  [sym_unkeyed_element] = sym_unkeyed_element,
  [aux_sym_array_constructor_repeat1] = aux_sym_array_constructor_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_logical_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__number_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__integer_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_array_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_object_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_keyed_element] = {
    .visible = true,
    .named = true,
  },
  [sym_unkeyed_element] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_array_constructor_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_element = 1,
  field_expression = 2,
  field_key = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_element] = "element",
  [field_expression] = "expression",
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_expression, 0},
  [1] =
    {field_value, 0},
  [2] =
    {field_element, 1},
  [3] =
    {field_key, 0},
    {field_value, 2},
  [5] =
    {field_element, 1},
    {field_element, 2, .inherited = true},
  [7] =
    {field_element, 0, .inherited = true},
    {field_element, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '0') ADVANCE(4);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'b') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(19);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_logical_literal);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_hexadecimal_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_single_quoted_string_literal);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_double_quoted_string_literal);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_logical_literal] = ACTIONS(1),
    [sym_null_literal] = ACTIONS(1),
    [sym_binary_integer_literal] = ACTIONS(1),
    [sym_octal_integer_literal] = ACTIONS(1),
    [sym_decimal_integer_literal] = ACTIONS(1),
    [sym_hexadecimal_integer_literal] = ACTIONS(1),
    [sym_single_quoted_string_literal] = ACTIONS(1),
    [sym_double_quoted_string_literal] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(20),
    [sym__expression] = STATE(21),
    [sym__literal] = STATE(21),
    [sym__number_literal] = STATE(21),
    [sym__integer_literal] = STATE(21),
    [sym__string_literal] = STATE(21),
    [sym_array_constructor] = STATE(21),
    [sym_object_constructor] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_logical_literal] = ACTIONS(5),
    [sym_null_literal] = ACTIONS(5),
    [sym_binary_integer_literal] = ACTIONS(5),
    [sym_octal_integer_literal] = ACTIONS(5),
    [sym_decimal_integer_literal] = ACTIONS(5),
    [sym_hexadecimal_integer_literal] = ACTIONS(5),
    [sym_single_quoted_string_literal] = ACTIONS(5),
    [sym_double_quoted_string_literal] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [2] = {
    [sym__expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym__number_literal] = STATE(13),
    [sym__integer_literal] = STATE(13),
    [sym__string_literal] = STATE(13),
    [sym_array_constructor] = STATE(13),
    [sym_object_constructor] = STATE(13),
    [sym__element] = STATE(19),
    [sym_keyed_element] = STATE(19),
    [sym_unkeyed_element] = STATE(19),
    [sym_logical_literal] = ACTIONS(11),
    [sym_null_literal] = ACTIONS(11),
    [sym_binary_integer_literal] = ACTIONS(11),
    [sym_octal_integer_literal] = ACTIONS(11),
    [sym_decimal_integer_literal] = ACTIONS(11),
    [sym_hexadecimal_integer_literal] = ACTIONS(11),
    [sym_single_quoted_string_literal] = ACTIONS(11),
    [sym_double_quoted_string_literal] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [3] = {
    [sym__expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym__number_literal] = STATE(13),
    [sym__integer_literal] = STATE(13),
    [sym__string_literal] = STATE(13),
    [sym_array_constructor] = STATE(13),
    [sym_object_constructor] = STATE(13),
    [sym__element] = STATE(14),
    [sym_keyed_element] = STATE(14),
    [sym_unkeyed_element] = STATE(14),
    [sym_logical_literal] = ACTIONS(11),
    [sym_null_literal] = ACTIONS(11),
    [sym_binary_integer_literal] = ACTIONS(11),
    [sym_octal_integer_literal] = ACTIONS(11),
    [sym_decimal_integer_literal] = ACTIONS(11),
    [sym_hexadecimal_integer_literal] = ACTIONS(11),
    [sym_single_quoted_string_literal] = ACTIONS(11),
    [sym_double_quoted_string_literal] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(15),
  },
  [4] = {
    [sym__expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym__number_literal] = STATE(13),
    [sym__integer_literal] = STATE(13),
    [sym__string_literal] = STATE(13),
    [sym_array_constructor] = STATE(13),
    [sym_object_constructor] = STATE(13),
    [sym__element] = STATE(18),
    [sym_keyed_element] = STATE(18),
    [sym_unkeyed_element] = STATE(18),
    [sym_logical_literal] = ACTIONS(11),
    [sym_null_literal] = ACTIONS(11),
    [sym_binary_integer_literal] = ACTIONS(11),
    [sym_octal_integer_literal] = ACTIONS(11),
    [sym_decimal_integer_literal] = ACTIONS(11),
    [sym_hexadecimal_integer_literal] = ACTIONS(11),
    [sym_single_quoted_string_literal] = ACTIONS(11),
    [sym_double_quoted_string_literal] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [5] = {
    [sym__expression] = STATE(17),
    [sym__literal] = STATE(17),
    [sym__number_literal] = STATE(17),
    [sym__integer_literal] = STATE(17),
    [sym__string_literal] = STATE(17),
    [sym_array_constructor] = STATE(17),
    [sym_object_constructor] = STATE(17),
    [sym_logical_literal] = ACTIONS(17),
    [sym_null_literal] = ACTIONS(17),
    [sym_binary_integer_literal] = ACTIONS(17),
    [sym_octal_integer_literal] = ACTIONS(17),
    [sym_decimal_integer_literal] = ACTIONS(17),
    [sym_hexadecimal_integer_literal] = ACTIONS(17),
    [sym_single_quoted_string_literal] = ACTIONS(17),
    [sym_double_quoted_string_literal] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(19), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [8] = 1,
    ACTIONS(21), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [16] = 1,
    ACTIONS(23), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [24] = 1,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [32] = 1,
    ACTIONS(27), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [40] = 1,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [48] = 3,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_array_constructor_repeat1,
    ACTIONS(34), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [59] = 2,
    ACTIONS(38), 1,
      anon_sym_COLON,
    ACTIONS(36), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [68] = 3,
    ACTIONS(40), 1,
      anon_sym_COMMA,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_array_constructor_repeat1,
  [78] = 3,
    ACTIONS(40), 1,
      anon_sym_COMMA,
    ACTIONS(44), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym_array_constructor_repeat1,
  [88] = 3,
    ACTIONS(40), 1,
      anon_sym_COMMA,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_array_constructor_repeat1,
  [98] = 1,
    ACTIONS(48), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [104] = 1,
    ACTIONS(50), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [110] = 3,
    ACTIONS(40), 1,
      anon_sym_COMMA,
    ACTIONS(52), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      aux_sym_array_constructor_repeat1,
  [120] = 1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
  [124] = 1,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 8,
  [SMALL_STATE(8)] = 16,
  [SMALL_STATE(9)] = 24,
  [SMALL_STATE(10)] = 32,
  [SMALL_STATE(11)] = 40,
  [SMALL_STATE(12)] = 48,
  [SMALL_STATE(13)] = 59,
  [SMALL_STATE(14)] = 68,
  [SMALL_STATE(15)] = 78,
  [SMALL_STATE(16)] = 88,
  [SMALL_STATE(17)] = 98,
  [SMALL_STATE(18)] = 104,
  [SMALL_STATE(19)] = 110,
  [SMALL_STATE(20)] = 120,
  [SMALL_STATE(21)] = 124,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_constructor, 3, .production_id = 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_constructor, 4, .production_id = 5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_constructor, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_constructor, 4, .production_id = 5),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_constructor, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_constructor, 3, .production_id = 3),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_constructor_repeat1, 2, .production_id = 6), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_constructor_repeat1, 2, .production_id = 6),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unkeyed_element, 1, .production_id = 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyed_element, 3, .production_id = 4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_constructor_repeat1, 2, .production_id = 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [54] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1, .production_id = 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_modelscript(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
