#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 22
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 9

enum {
  sym_binary_integer_literal = 1,
  sym_octal_integer_literal = 2,
  sym_decimal_integer_literal = 3,
  sym_hexadecimal_integer_literal = 4,
  sym_double_quoted_string_literal = 5,
  sym_single_quoted_string_literal = 6,
  sym_logical_literal = 7,
  sym_null_literal = 8,
  anon_sym_LBRACK = 9,
  anon_sym_COMMA = 10,
  anon_sym_RBRACK = 11,
  anon_sym_EQ = 12,
  anon_sym_STAR_EQ = 13,
  anon_sym_SLASH_EQ = 14,
  anon_sym_PERCENT_EQ = 15,
  anon_sym_PLUS_EQ = 16,
  anon_sym_DASH_EQ = 17,
  anon_sym_LT_LT_EQ = 18,
  anon_sym_GT_GT_EQ = 19,
  anon_sym_AMP_EQ = 20,
  anon_sym_PIPE_EQ = 21,
  anon_sym_CARET_EQ = 22,
  anon_sym_PIPE_PIPE = 23,
  anon_sym_AMP_AMP = 24,
  anon_sym_PIPE = 25,
  anon_sym_CARET = 26,
  anon_sym_AMP = 27,
  anon_sym_EQ_EQ = 28,
  anon_sym_BANG_EQ = 29,
  anon_sym_LT = 30,
  anon_sym_GT = 31,
  anon_sym_LT_EQ = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_LT_LT = 34,
  anon_sym_GT_GT = 35,
  anon_sym_PLUS = 36,
  anon_sym_DASH = 37,
  anon_sym_STAR = 38,
  anon_sym_SLASH = 39,
  anon_sym_PERCENT = 40,
  anon_sym_LBRACE = 41,
  anon_sym_RBRACE = 42,
  anon_sym_TILDE = 43,
  anon_sym_BANG = 44,
  anon_sym_COLON = 45,
  sym_module = 46,
  sym__expression = 47,
  sym__literal = 48,
  sym__number_literal = 49,
  sym__integer_literal = 50,
  sym__string_literal = 51,
  sym_array_constructor = 52,
  sym_binary_expression = 53,
  sym_object_constructor = 54,
  sym_unary_expression = 55,
  sym__element = 56,
  sym_keyed_element = 57,
  sym_unkeyed_element = 58,
  aux_sym_array_constructor_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_binary_integer_literal] = "binary_integer_literal",
  [sym_octal_integer_literal] = "octal_integer_literal",
  [sym_decimal_integer_literal] = "decimal_integer_literal",
  [sym_hexadecimal_integer_literal] = "hexadecimal_integer_literal",
  [sym_double_quoted_string_literal] = "double_quoted_string_literal",
  [sym_single_quoted_string_literal] = "single_quoted_string_literal",
  [sym_logical_literal] = "logical_literal",
  [sym_null_literal] = "null_literal",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG] = "!",
  [anon_sym_COLON] = ":",
  [sym_module] = "module",
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [sym__number_literal] = "_number_literal",
  [sym__integer_literal] = "_integer_literal",
  [sym__string_literal] = "_string_literal",
  [sym_array_constructor] = "array_constructor",
  [sym_binary_expression] = "binary_expression",
  [sym_object_constructor] = "object_constructor",
  [sym_unary_expression] = "unary_expression",
  [sym__element] = "_element",
  [sym_keyed_element] = "keyed_element",
  [sym_unkeyed_element] = "unkeyed_element",
  [aux_sym_array_constructor_repeat1] = "array_constructor_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_binary_integer_literal] = sym_binary_integer_literal,
  [sym_octal_integer_literal] = sym_octal_integer_literal,
  [sym_decimal_integer_literal] = sym_decimal_integer_literal,
  [sym_hexadecimal_integer_literal] = sym_hexadecimal_integer_literal,
  [sym_double_quoted_string_literal] = sym_double_quoted_string_literal,
  [sym_single_quoted_string_literal] = sym_single_quoted_string_literal,
  [sym_logical_literal] = sym_logical_literal,
  [sym_null_literal] = sym_null_literal,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_module] = sym_module,
  [sym__expression] = sym__expression,
  [sym__literal] = sym__literal,
  [sym__number_literal] = sym__number_literal,
  [sym__integer_literal] = sym__integer_literal,
  [sym__string_literal] = sym__string_literal,
  [sym_array_constructor] = sym_array_constructor,
  [sym_binary_expression] = sym_binary_expression,
  [sym_object_constructor] = sym_object_constructor,
  [sym_unary_expression] = sym_unary_expression,
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
  [sym_double_quoted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string_literal] = {
    .visible = true,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
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
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
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
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_object_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
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
  field_operand = 4,
  field_operand1 = 5,
  field_operand2 = 6,
  field_operator = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_element] = "element",
  [field_expression] = "expression",
  [field_key] = "key",
  [field_operand] = "operand",
  [field_operand1] = "operand1",
  [field_operand2] = "operand2",
  [field_operator] = "operator",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_expression, 0},
  [1] =
    {field_value, 0},
  [2] =
    {field_operand, 1},
    {field_operator, 0},
  [4] =
    {field_element, 1},
  [5] =
    {field_operand1, 0},
    {field_operand2, 2},
    {field_operator, 1},
  [8] =
    {field_key, 0},
    {field_value, 2},
  [10] =
    {field_element, 1},
    {field_element, 2, .inherited = true},
  [12] =
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
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '&') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == '^') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(20);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(21);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 17:
      if (eof) ADVANCE(19);
      if (lookahead == '!') ADVANCE(65);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '&') ADVANCE(46);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == '^') ADVANCE(45);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_hexadecimal_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_double_quoted_string_literal);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_single_quoted_string_literal);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_logical_literal);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '|') ADVANCE(42);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '>') ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_binary_integer_literal] = ACTIONS(1),
    [sym_octal_integer_literal] = ACTIONS(1),
    [sym_decimal_integer_literal] = ACTIONS(1),
    [sym_hexadecimal_integer_literal] = ACTIONS(1),
    [sym_double_quoted_string_literal] = ACTIONS(1),
    [sym_single_quoted_string_literal] = ACTIONS(1),
    [sym_logical_literal] = ACTIONS(1),
    [sym_null_literal] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(45),
    [sym__expression] = STATE(22),
    [sym__literal] = STATE(22),
    [sym__number_literal] = STATE(22),
    [sym__integer_literal] = STATE(22),
    [sym__string_literal] = STATE(22),
    [sym_array_constructor] = STATE(22),
    [sym_binary_expression] = STATE(22),
    [sym_object_constructor] = STATE(22),
    [sym_unary_expression] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_binary_integer_literal] = ACTIONS(5),
    [sym_octal_integer_literal] = ACTIONS(5),
    [sym_decimal_integer_literal] = ACTIONS(5),
    [sym_hexadecimal_integer_literal] = ACTIONS(5),
    [sym_double_quoted_string_literal] = ACTIONS(5),
    [sym_single_quoted_string_literal] = ACTIONS(5),
    [sym_logical_literal] = ACTIONS(5),
    [sym_null_literal] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(15),
    [anon_sym_STAR_EQ] = ACTIONS(17),
    [anon_sym_SLASH_EQ] = ACTIONS(17),
    [anon_sym_PERCENT_EQ] = ACTIONS(17),
    [anon_sym_PLUS_EQ] = ACTIONS(17),
    [anon_sym_DASH_EQ] = ACTIONS(17),
    [anon_sym_LT_LT_EQ] = ACTIONS(17),
    [anon_sym_GT_GT_EQ] = ACTIONS(17),
    [anon_sym_AMP_EQ] = ACTIONS(17),
    [anon_sym_PIPE_EQ] = ACTIONS(17),
    [anon_sym_CARET_EQ] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(15),
    [anon_sym_STAR_EQ] = ACTIONS(17),
    [anon_sym_SLASH_EQ] = ACTIONS(17),
    [anon_sym_PERCENT_EQ] = ACTIONS(17),
    [anon_sym_PLUS_EQ] = ACTIONS(17),
    [anon_sym_DASH_EQ] = ACTIONS(17),
    [anon_sym_LT_LT_EQ] = ACTIONS(17),
    [anon_sym_GT_GT_EQ] = ACTIONS(17),
    [anon_sym_AMP_EQ] = ACTIONS(17),
    [anon_sym_PIPE_EQ] = ACTIONS(17),
    [anon_sym_CARET_EQ] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_STAR_EQ] = ACTIONS(29),
    [anon_sym_SLASH_EQ] = ACTIONS(29),
    [anon_sym_PERCENT_EQ] = ACTIONS(29),
    [anon_sym_PLUS_EQ] = ACTIONS(29),
    [anon_sym_DASH_EQ] = ACTIONS(29),
    [anon_sym_LT_LT_EQ] = ACTIONS(29),
    [anon_sym_GT_GT_EQ] = ACTIONS(29),
    [anon_sym_AMP_EQ] = ACTIONS(29),
    [anon_sym_PIPE_EQ] = ACTIONS(29),
    [anon_sym_CARET_EQ] = ACTIONS(29),
    [anon_sym_PIPE_PIPE] = ACTIONS(29),
    [anon_sym_AMP_AMP] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_LT_LT] = ACTIONS(31),
    [anon_sym_GT_GT] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(29),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_EQ] = ACTIONS(35),
    [anon_sym_STAR_EQ] = ACTIONS(33),
    [anon_sym_SLASH_EQ] = ACTIONS(33),
    [anon_sym_PERCENT_EQ] = ACTIONS(33),
    [anon_sym_PLUS_EQ] = ACTIONS(33),
    [anon_sym_DASH_EQ] = ACTIONS(33),
    [anon_sym_LT_LT_EQ] = ACTIONS(33),
    [anon_sym_GT_GT_EQ] = ACTIONS(33),
    [anon_sym_AMP_EQ] = ACTIONS(33),
    [anon_sym_PIPE_EQ] = ACTIONS(33),
    [anon_sym_CARET_EQ] = ACTIONS(33),
    [anon_sym_PIPE_PIPE] = ACTIONS(33),
    [anon_sym_AMP_AMP] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_CARET] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_BANG_EQ] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(33),
    [anon_sym_GT_EQ] = ACTIONS(33),
    [anon_sym_LT_LT] = ACTIONS(35),
    [anon_sym_GT_GT] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_STAR_EQ] = ACTIONS(13),
    [anon_sym_SLASH_EQ] = ACTIONS(13),
    [anon_sym_PERCENT_EQ] = ACTIONS(13),
    [anon_sym_PLUS_EQ] = ACTIONS(13),
    [anon_sym_DASH_EQ] = ACTIONS(13),
    [anon_sym_LT_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_GT_EQ] = ACTIONS(13),
    [anon_sym_AMP_EQ] = ACTIONS(13),
    [anon_sym_PIPE_EQ] = ACTIONS(13),
    [anon_sym_CARET_EQ] = ACTIONS(13),
    [anon_sym_PIPE_PIPE] = ACTIONS(13),
    [anon_sym_AMP_AMP] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_EQ] = ACTIONS(39),
    [anon_sym_STAR_EQ] = ACTIONS(37),
    [anon_sym_SLASH_EQ] = ACTIONS(37),
    [anon_sym_PERCENT_EQ] = ACTIONS(37),
    [anon_sym_PLUS_EQ] = ACTIONS(37),
    [anon_sym_DASH_EQ] = ACTIONS(37),
    [anon_sym_LT_LT_EQ] = ACTIONS(37),
    [anon_sym_GT_GT_EQ] = ACTIONS(37),
    [anon_sym_AMP_EQ] = ACTIONS(37),
    [anon_sym_PIPE_EQ] = ACTIONS(37),
    [anon_sym_CARET_EQ] = ACTIONS(37),
    [anon_sym_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_AMP_AMP] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_LT_LT] = ACTIONS(39),
    [anon_sym_GT_GT] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(15),
    [anon_sym_STAR_EQ] = ACTIONS(17),
    [anon_sym_SLASH_EQ] = ACTIONS(17),
    [anon_sym_PERCENT_EQ] = ACTIONS(17),
    [anon_sym_PLUS_EQ] = ACTIONS(17),
    [anon_sym_DASH_EQ] = ACTIONS(17),
    [anon_sym_LT_LT_EQ] = ACTIONS(17),
    [anon_sym_GT_GT_EQ] = ACTIONS(17),
    [anon_sym_AMP_EQ] = ACTIONS(17),
    [anon_sym_PIPE_EQ] = ACTIONS(17),
    [anon_sym_CARET_EQ] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(13),
    [anon_sym_AMP_AMP] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_STAR_EQ] = ACTIONS(41),
    [anon_sym_SLASH_EQ] = ACTIONS(41),
    [anon_sym_PERCENT_EQ] = ACTIONS(41),
    [anon_sym_PLUS_EQ] = ACTIONS(41),
    [anon_sym_DASH_EQ] = ACTIONS(41),
    [anon_sym_LT_LT_EQ] = ACTIONS(41),
    [anon_sym_GT_GT_EQ] = ACTIONS(41),
    [anon_sym_AMP_EQ] = ACTIONS(41),
    [anon_sym_PIPE_EQ] = ACTIONS(41),
    [anon_sym_CARET_EQ] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(41),
    [anon_sym_AMP_AMP] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(43),
    [anon_sym_CARET] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_EQ_EQ] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_LT_LT] = ACTIONS(43),
    [anon_sym_GT_GT] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_PERCENT] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_COLON] = ACTIONS(41),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_EQ] = ACTIONS(15),
    [anon_sym_STAR_EQ] = ACTIONS(17),
    [anon_sym_SLASH_EQ] = ACTIONS(17),
    [anon_sym_PERCENT_EQ] = ACTIONS(17),
    [anon_sym_PLUS_EQ] = ACTIONS(17),
    [anon_sym_DASH_EQ] = ACTIONS(17),
    [anon_sym_LT_LT_EQ] = ACTIONS(17),
    [anon_sym_GT_GT_EQ] = ACTIONS(17),
    [anon_sym_AMP_EQ] = ACTIONS(17),
    [anon_sym_PIPE_EQ] = ACTIONS(17),
    [anon_sym_CARET_EQ] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(53),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(45),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_STAR_EQ] = ACTIONS(61),
    [anon_sym_SLASH_EQ] = ACTIONS(61),
    [anon_sym_PERCENT_EQ] = ACTIONS(61),
    [anon_sym_PLUS_EQ] = ACTIONS(61),
    [anon_sym_DASH_EQ] = ACTIONS(61),
    [anon_sym_LT_LT_EQ] = ACTIONS(61),
    [anon_sym_GT_GT_EQ] = ACTIONS(61),
    [anon_sym_AMP_EQ] = ACTIONS(61),
    [anon_sym_PIPE_EQ] = ACTIONS(61),
    [anon_sym_CARET_EQ] = ACTIONS(61),
    [anon_sym_PIPE_PIPE] = ACTIONS(61),
    [anon_sym_AMP_AMP] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(63),
    [anon_sym_AMP] = ACTIONS(63),
    [anon_sym_EQ_EQ] = ACTIONS(61),
    [anon_sym_BANG_EQ] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_GT_GT] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(61),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(15),
    [anon_sym_STAR_EQ] = ACTIONS(17),
    [anon_sym_SLASH_EQ] = ACTIONS(17),
    [anon_sym_PERCENT_EQ] = ACTIONS(17),
    [anon_sym_PLUS_EQ] = ACTIONS(17),
    [anon_sym_DASH_EQ] = ACTIONS(17),
    [anon_sym_LT_LT_EQ] = ACTIONS(17),
    [anon_sym_GT_GT_EQ] = ACTIONS(17),
    [anon_sym_AMP_EQ] = ACTIONS(17),
    [anon_sym_PIPE_EQ] = ACTIONS(17),
    [anon_sym_CARET_EQ] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_AMP_AMP] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(15),
    [anon_sym_STAR_EQ] = ACTIONS(17),
    [anon_sym_SLASH_EQ] = ACTIONS(17),
    [anon_sym_PERCENT_EQ] = ACTIONS(17),
    [anon_sym_PLUS_EQ] = ACTIONS(17),
    [anon_sym_DASH_EQ] = ACTIONS(17),
    [anon_sym_LT_LT_EQ] = ACTIONS(17),
    [anon_sym_GT_GT_EQ] = ACTIONS(17),
    [anon_sym_AMP_EQ] = ACTIONS(17),
    [anon_sym_PIPE_EQ] = ACTIONS(17),
    [anon_sym_CARET_EQ] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(53),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(15),
    [anon_sym_STAR_EQ] = ACTIONS(17),
    [anon_sym_SLASH_EQ] = ACTIONS(17),
    [anon_sym_PERCENT_EQ] = ACTIONS(17),
    [anon_sym_PLUS_EQ] = ACTIONS(17),
    [anon_sym_DASH_EQ] = ACTIONS(17),
    [anon_sym_LT_LT_EQ] = ACTIONS(17),
    [anon_sym_GT_GT_EQ] = ACTIONS(17),
    [anon_sym_AMP_EQ] = ACTIONS(17),
    [anon_sym_PIPE_EQ] = ACTIONS(17),
    [anon_sym_CARET_EQ] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(53),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(15),
    [anon_sym_STAR_EQ] = ACTIONS(17),
    [anon_sym_SLASH_EQ] = ACTIONS(17),
    [anon_sym_PERCENT_EQ] = ACTIONS(17),
    [anon_sym_PLUS_EQ] = ACTIONS(17),
    [anon_sym_DASH_EQ] = ACTIONS(17),
    [anon_sym_LT_LT_EQ] = ACTIONS(17),
    [anon_sym_GT_GT_EQ] = ACTIONS(17),
    [anon_sym_AMP_EQ] = ACTIONS(17),
    [anon_sym_PIPE_EQ] = ACTIONS(17),
    [anon_sym_CARET_EQ] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(53),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(15),
    [anon_sym_STAR_EQ] = ACTIONS(17),
    [anon_sym_SLASH_EQ] = ACTIONS(17),
    [anon_sym_PERCENT_EQ] = ACTIONS(17),
    [anon_sym_PLUS_EQ] = ACTIONS(17),
    [anon_sym_DASH_EQ] = ACTIONS(17),
    [anon_sym_LT_LT_EQ] = ACTIONS(17),
    [anon_sym_GT_GT_EQ] = ACTIONS(17),
    [anon_sym_AMP_EQ] = ACTIONS(17),
    [anon_sym_PIPE_EQ] = ACTIONS(17),
    [anon_sym_CARET_EQ] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(15),
    [anon_sym_STAR_EQ] = ACTIONS(17),
    [anon_sym_SLASH_EQ] = ACTIONS(17),
    [anon_sym_PERCENT_EQ] = ACTIONS(17),
    [anon_sym_PLUS_EQ] = ACTIONS(17),
    [anon_sym_DASH_EQ] = ACTIONS(17),
    [anon_sym_LT_LT_EQ] = ACTIONS(17),
    [anon_sym_GT_GT_EQ] = ACTIONS(17),
    [anon_sym_AMP_EQ] = ACTIONS(17),
    [anon_sym_PIPE_EQ] = ACTIONS(17),
    [anon_sym_CARET_EQ] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(67),
    [anon_sym_STAR_EQ] = ACTIONS(65),
    [anon_sym_SLASH_EQ] = ACTIONS(65),
    [anon_sym_PERCENT_EQ] = ACTIONS(65),
    [anon_sym_PLUS_EQ] = ACTIONS(65),
    [anon_sym_DASH_EQ] = ACTIONS(65),
    [anon_sym_LT_LT_EQ] = ACTIONS(65),
    [anon_sym_GT_GT_EQ] = ACTIONS(65),
    [anon_sym_AMP_EQ] = ACTIONS(65),
    [anon_sym_PIPE_EQ] = ACTIONS(65),
    [anon_sym_CARET_EQ] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_AMP] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_GT_EQ] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(15),
    [anon_sym_STAR_EQ] = ACTIONS(17),
    [anon_sym_SLASH_EQ] = ACTIONS(17),
    [anon_sym_PERCENT_EQ] = ACTIONS(17),
    [anon_sym_PLUS_EQ] = ACTIONS(17),
    [anon_sym_DASH_EQ] = ACTIONS(17),
    [anon_sym_LT_LT_EQ] = ACTIONS(17),
    [anon_sym_GT_GT_EQ] = ACTIONS(17),
    [anon_sym_AMP_EQ] = ACTIONS(17),
    [anon_sym_PIPE_EQ] = ACTIONS(17),
    [anon_sym_CARET_EQ] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
  },
  [20] = {
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(15),
    [anon_sym_STAR_EQ] = ACTIONS(17),
    [anon_sym_SLASH_EQ] = ACTIONS(17),
    [anon_sym_PERCENT_EQ] = ACTIONS(17),
    [anon_sym_PLUS_EQ] = ACTIONS(17),
    [anon_sym_DASH_EQ] = ACTIONS(17),
    [anon_sym_LT_LT_EQ] = ACTIONS(17),
    [anon_sym_GT_GT_EQ] = ACTIONS(17),
    [anon_sym_AMP_EQ] = ACTIONS(17),
    [anon_sym_PIPE_EQ] = ACTIONS(17),
    [anon_sym_CARET_EQ] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(53),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(71),
  },
  [21] = {
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(15),
    [anon_sym_STAR_EQ] = ACTIONS(17),
    [anon_sym_SLASH_EQ] = ACTIONS(17),
    [anon_sym_PERCENT_EQ] = ACTIONS(17),
    [anon_sym_PLUS_EQ] = ACTIONS(17),
    [anon_sym_DASH_EQ] = ACTIONS(17),
    [anon_sym_LT_LT_EQ] = ACTIONS(17),
    [anon_sym_GT_GT_EQ] = ACTIONS(17),
    [anon_sym_AMP_EQ] = ACTIONS(17),
    [anon_sym_PIPE_EQ] = ACTIONS(17),
    [anon_sym_CARET_EQ] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(53),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(73),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(15), 1,
      anon_sym_EQ,
    ACTIONS(19), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(21), 1,
      anon_sym_AMP_AMP,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(27), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_AMP,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(59), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(17), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
  [59] = 7,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(44), 3,
      sym__element,
      sym_keyed_element,
      sym_unkeyed_element,
    ACTIONS(9), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(77), 8,
      sym_binary_integer_literal,
      sym_octal_integer_literal,
      sym_decimal_integer_literal,
      sym_hexadecimal_integer_literal,
      sym_double_quoted_string_literal,
      sym_single_quoted_string_literal,
      sym_logical_literal,
      sym_null_literal,
    STATE(20), 9,
      sym__expression,
      sym__literal,
      sym__number_literal,
      sym__integer_literal,
      sym__string_literal,
      sym_array_constructor,
      sym_binary_expression,
      sym_object_constructor,
      sym_unary_expression,
  [101] = 7,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(43), 3,
      sym__element,
      sym_keyed_element,
      sym_unkeyed_element,
    ACTIONS(9), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(77), 8,
      sym_binary_integer_literal,
      sym_octal_integer_literal,
      sym_decimal_integer_literal,
      sym_hexadecimal_integer_literal,
      sym_double_quoted_string_literal,
      sym_single_quoted_string_literal,
      sym_logical_literal,
      sym_null_literal,
    STATE(20), 9,
      sym__expression,
      sym__literal,
      sym__number_literal,
      sym__integer_literal,
      sym__string_literal,
      sym_array_constructor,
      sym_binary_expression,
      sym_object_constructor,
      sym_unary_expression,
  [143] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(42), 3,
      sym__element,
      sym_keyed_element,
      sym_unkeyed_element,
    ACTIONS(9), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(77), 8,
      sym_binary_integer_literal,
      sym_octal_integer_literal,
      sym_decimal_integer_literal,
      sym_hexadecimal_integer_literal,
      sym_double_quoted_string_literal,
      sym_single_quoted_string_literal,
      sym_logical_literal,
      sym_null_literal,
    STATE(20), 9,
      sym__expression,
      sym__literal,
      sym__number_literal,
      sym__integer_literal,
      sym__string_literal,
      sym_array_constructor,
      sym_binary_expression,
      sym_object_constructor,
      sym_unary_expression,
  [182] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(83), 8,
      sym_binary_integer_literal,
      sym_octal_integer_literal,
      sym_decimal_integer_literal,
      sym_hexadecimal_integer_literal,
      sym_double_quoted_string_literal,
      sym_single_quoted_string_literal,
      sym_logical_literal,
      sym_null_literal,
    STATE(6), 9,
      sym__expression,
      sym__literal,
      sym__number_literal,
      sym__integer_literal,
      sym__string_literal,
      sym_array_constructor,
      sym_binary_expression,
      sym_object_constructor,
      sym_unary_expression,
  [216] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(85), 8,
      sym_binary_integer_literal,
      sym_octal_integer_literal,
      sym_decimal_integer_literal,
      sym_hexadecimal_integer_literal,
      sym_double_quoted_string_literal,
      sym_single_quoted_string_literal,
      sym_logical_literal,
      sym_null_literal,
    STATE(13), 9,
      sym__expression,
      sym__literal,
      sym__number_literal,
      sym__integer_literal,
      sym__string_literal,
      sym_array_constructor,
      sym_binary_expression,
      sym_object_constructor,
      sym_unary_expression,
  [250] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(87), 8,
      sym_binary_integer_literal,
      sym_octal_integer_literal,
      sym_decimal_integer_literal,
      sym_hexadecimal_integer_literal,
      sym_double_quoted_string_literal,
      sym_single_quoted_string_literal,
      sym_logical_literal,
      sym_null_literal,
    STATE(10), 9,
      sym__expression,
      sym__literal,
      sym__number_literal,
      sym__integer_literal,
      sym__string_literal,
      sym_array_constructor,
      sym_binary_expression,
      sym_object_constructor,
      sym_unary_expression,
  [284] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(89), 8,
      sym_binary_integer_literal,
      sym_octal_integer_literal,
      sym_decimal_integer_literal,
      sym_hexadecimal_integer_literal,
      sym_double_quoted_string_literal,
      sym_single_quoted_string_literal,
      sym_logical_literal,
      sym_null_literal,
    STATE(21), 9,
      sym__expression,
      sym__literal,
      sym__number_literal,
      sym__integer_literal,
      sym__string_literal,
      sym_array_constructor,
      sym_binary_expression,
      sym_object_constructor,
      sym_unary_expression,
  [318] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(91), 8,
      sym_binary_integer_literal,
      sym_octal_integer_literal,
      sym_decimal_integer_literal,
      sym_hexadecimal_integer_literal,
      sym_double_quoted_string_literal,
      sym_single_quoted_string_literal,
      sym_logical_literal,
      sym_null_literal,
    STATE(15), 9,
      sym__expression,
      sym__literal,
      sym__number_literal,
      sym__integer_literal,
      sym__string_literal,
      sym_array_constructor,
      sym_binary_expression,
      sym_object_constructor,
      sym_unary_expression,
  [352] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(93), 8,
      sym_binary_integer_literal,
      sym_octal_integer_literal,
      sym_decimal_integer_literal,
      sym_hexadecimal_integer_literal,
      sym_double_quoted_string_literal,
      sym_single_quoted_string_literal,
      sym_logical_literal,
      sym_null_literal,
    STATE(16), 9,
      sym__expression,
      sym__literal,
      sym__number_literal,
      sym__integer_literal,
      sym__string_literal,
      sym_array_constructor,
      sym_binary_expression,
      sym_object_constructor,
      sym_unary_expression,
  [386] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(95), 8,
      sym_binary_integer_literal,
      sym_octal_integer_literal,
      sym_decimal_integer_literal,
      sym_hexadecimal_integer_literal,
      sym_double_quoted_string_literal,
      sym_single_quoted_string_literal,
      sym_logical_literal,
      sym_null_literal,
    STATE(17), 9,
      sym__expression,
      sym__literal,
      sym__number_literal,
      sym__integer_literal,
      sym__string_literal,
      sym_array_constructor,
      sym_binary_expression,
      sym_object_constructor,
      sym_unary_expression,
  [420] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(97), 8,
      sym_binary_integer_literal,
      sym_octal_integer_literal,
      sym_decimal_integer_literal,
      sym_hexadecimal_integer_literal,
      sym_double_quoted_string_literal,
      sym_single_quoted_string_literal,
      sym_logical_literal,
      sym_null_literal,
    STATE(3), 9,
      sym__expression,
      sym__literal,
      sym__number_literal,
      sym__integer_literal,
      sym__string_literal,
      sym_array_constructor,
      sym_binary_expression,
      sym_object_constructor,
      sym_unary_expression,
  [454] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(99), 8,
      sym_binary_integer_literal,
      sym_octal_integer_literal,
      sym_decimal_integer_literal,
      sym_hexadecimal_integer_literal,
      sym_double_quoted_string_literal,
      sym_single_quoted_string_literal,
      sym_logical_literal,
      sym_null_literal,
    STATE(19), 9,
      sym__expression,
      sym__literal,
      sym__number_literal,
      sym__integer_literal,
      sym__string_literal,
      sym_array_constructor,
      sym_binary_expression,
      sym_object_constructor,
      sym_unary_expression,
  [488] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(101), 8,
      sym_binary_integer_literal,
      sym_octal_integer_literal,
      sym_decimal_integer_literal,
      sym_hexadecimal_integer_literal,
      sym_double_quoted_string_literal,
      sym_single_quoted_string_literal,
      sym_logical_literal,
      sym_null_literal,
    STATE(2), 9,
      sym__expression,
      sym__literal,
      sym__number_literal,
      sym__integer_literal,
      sym__string_literal,
      sym_array_constructor,
      sym_binary_expression,
      sym_object_constructor,
      sym_unary_expression,
  [522] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(103), 8,
      sym_binary_integer_literal,
      sym_octal_integer_literal,
      sym_decimal_integer_literal,
      sym_hexadecimal_integer_literal,
      sym_double_quoted_string_literal,
      sym_single_quoted_string_literal,
      sym_logical_literal,
      sym_null_literal,
    STATE(12), 9,
      sym__expression,
      sym__literal,
      sym__number_literal,
      sym__integer_literal,
      sym__string_literal,
      sym_array_constructor,
      sym_binary_expression,
      sym_object_constructor,
      sym_unary_expression,
  [556] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(105), 8,
      sym_binary_integer_literal,
      sym_octal_integer_literal,
      sym_decimal_integer_literal,
      sym_hexadecimal_integer_literal,
      sym_double_quoted_string_literal,
      sym_single_quoted_string_literal,
      sym_logical_literal,
      sym_null_literal,
    STATE(8), 9,
      sym__expression,
      sym__literal,
      sym__number_literal,
      sym__integer_literal,
      sym__string_literal,
      sym_array_constructor,
      sym_binary_expression,
      sym_object_constructor,
      sym_unary_expression,
  [590] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(107), 8,
      sym_binary_integer_literal,
      sym_octal_integer_literal,
      sym_decimal_integer_literal,
      sym_hexadecimal_integer_literal,
      sym_double_quoted_string_literal,
      sym_single_quoted_string_literal,
      sym_logical_literal,
      sym_null_literal,
    STATE(14), 9,
      sym__expression,
      sym__literal,
      sym__number_literal,
      sym__integer_literal,
      sym__string_literal,
      sym_array_constructor,
      sym_binary_expression,
      sym_object_constructor,
      sym_unary_expression,
  [624] = 3,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_array_constructor_repeat1,
    ACTIONS(112), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [635] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(116), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      aux_sym_array_constructor_repeat1,
  [645] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_array_constructor_repeat1,
  [655] = 1,
    ACTIONS(120), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [661] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_array_constructor_repeat1,
  [671] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(124), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      aux_sym_array_constructor_repeat1,
  [681] = 1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(22)] = 0,
  [SMALL_STATE(23)] = 59,
  [SMALL_STATE(24)] = 101,
  [SMALL_STATE(25)] = 143,
  [SMALL_STATE(26)] = 182,
  [SMALL_STATE(27)] = 216,
  [SMALL_STATE(28)] = 250,
  [SMALL_STATE(29)] = 284,
  [SMALL_STATE(30)] = 318,
  [SMALL_STATE(31)] = 352,
  [SMALL_STATE(32)] = 386,
  [SMALL_STATE(33)] = 420,
  [SMALL_STATE(34)] = 454,
  [SMALL_STATE(35)] = 488,
  [SMALL_STATE(36)] = 522,
  [SMALL_STATE(37)] = 556,
  [SMALL_STATE(38)] = 590,
  [SMALL_STATE(39)] = 624,
  [SMALL_STATE(40)] = 635,
  [SMALL_STATE(41)] = 645,
  [SMALL_STATE(42)] = 655,
  [SMALL_STATE(43)] = 661,
  [SMALL_STATE(44)] = 671,
  [SMALL_STATE(45)] = 681,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_constructor, 3, .production_id = 4),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_constructor, 3, .production_id = 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_constructor, 4, .production_id = 7),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_constructor, 4, .production_id = 7),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_constructor, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_constructor, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_constructor, 4, .production_id = 7),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_constructor, 4, .production_id = 7),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_constructor, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_constructor, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_constructor, 3, .production_id = 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_constructor, 3, .production_id = 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unkeyed_element, 1, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyed_element, 3, .production_id = 6),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_constructor_repeat1, 2, .production_id = 8), SHIFT_REPEAT(25),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_constructor_repeat1, 2, .production_id = 8),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_constructor_repeat1, 2, .production_id = 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [126] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
