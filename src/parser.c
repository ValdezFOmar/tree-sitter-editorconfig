#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 2
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  sym__anything = 1,
  sym_comment = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_STAR = 5,
  anon_sym_STAR_STAR = 6,
  anon_sym_QMARK = 7,
  anon_sym_SLASH = 8,
  aux_sym__glob_expression_token1 = 9,
  sym_escaped_character = 10,
  anon_sym_LBRACE = 11,
  anon_sym_COMMA = 12,
  anon_sym_RBRACE = 13,
  aux_sym_integer_range_token1 = 14,
  anon_sym_DOT_DOT = 15,
  anon_sym_BANG = 16,
  aux_sym_character_choice_token1 = 17,
  anon_sym_DASH = 18,
  aux_sym_character_range_token1 = 19,
  aux_sym_pair_token1 = 20,
  anon_sym_EQ = 21,
  aux_sym_pair_token2 = 22,
  aux_sym__value_token1 = 23,
  aux_sym__value_token2 = 24,
  aux_sym__value_token3 = 25,
  aux_sym__value_token4 = 26,
  aux_sym__value_token5 = 27,
  aux_sym__value_token6 = 28,
  aux_sym__value_token7 = 29,
  aux_sym__value_token8 = 30,
  aux_sym__value_token9 = 31,
  aux_sym__value_token10 = 32,
  aux_sym__value_token11 = 33,
  aux_sym__value_token12 = 34,
  aux_sym__value_token13 = 35,
  aux_sym__value_token14 = 36,
  aux_sym__value_token15 = 37,
  aux_sym__value_token16 = 38,
  sym__newline = 39,
  sym_document = 40,
  sym__line = 41,
  sym_section = 42,
  sym__section_header = 43,
  aux_sym__glob_expression = 44,
  sym_brace_expansion = 45,
  sym_expansion_string = 46,
  sym_integer_range = 47,
  sym_character_choice = 48,
  sym_character_range = 49,
  sym_pair = 50,
  sym__value = 51,
  aux_sym_document_repeat1 = 52,
  aux_sym_document_repeat2 = 53,
  aux_sym_brace_expansion_repeat1 = 54,
  aux_sym_expansion_string_repeat1 = 55,
  aux_sym_character_choice_repeat1 = 56,
  alias_sym_preamble = 57,
  alias_sym_section_name = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__anything] = "other",
  [sym_comment] = "comment",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_STAR] = "wildcard_chars",
  [anon_sym_STAR_STAR] = "wildcard_chars_allow_slash",
  [anon_sym_QMARK] = "wildcard_char_single",
  [anon_sym_SLASH] = "path_separator",
  [aux_sym__glob_expression_token1] = "character",
  [sym_escaped_character] = "escaped_character",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [aux_sym_integer_range_token1] = "number",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_BANG] = "negation",
  [aux_sym_character_choice_token1] = "character",
  [anon_sym_DASH] = "-",
  [aux_sym_character_range_token1] = "character",
  [aux_sym_pair_token1] = "identifier",
  [anon_sym_EQ] = "=",
  [aux_sym_pair_token2] = "pair_token2",
  [aux_sym__value_token1] = "unset",
  [aux_sym__value_token2] = "number",
  [aux_sym__value_token3] = "spelling_language",
  [aux_sym__value_token4] = "boolean",
  [aux_sym__value_token5] = "boolean",
  [aux_sym__value_token6] = "boolean",
  [aux_sym__value_token7] = "indent_style",
  [aux_sym__value_token8] = "indent_style",
  [aux_sym__value_token9] = "end_of_line",
  [aux_sym__value_token10] = "end_of_line",
  [aux_sym__value_token11] = "end_of_line",
  [aux_sym__value_token12] = "charset",
  [aux_sym__value_token13] = "charset",
  [aux_sym__value_token14] = "charset",
  [aux_sym__value_token15] = "charset",
  [aux_sym__value_token16] = "charset",
  [sym__newline] = "_newline",
  [sym_document] = "document",
  [sym__line] = "_line",
  [sym_section] = "section",
  [sym__section_header] = "_section_header",
  [aux_sym__glob_expression] = "_glob_expression",
  [sym_brace_expansion] = "brace_expansion",
  [sym_expansion_string] = "expansion_string",
  [sym_integer_range] = "integer_range",
  [sym_character_choice] = "character_choice",
  [sym_character_range] = "character_range",
  [sym_pair] = "pair",
  [sym__value] = "_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_brace_expansion_repeat1] = "brace_expansion_repeat1",
  [aux_sym_expansion_string_repeat1] = "expansion_string_repeat1",
  [aux_sym_character_choice_repeat1] = "character_choice_repeat1",
  [alias_sym_preamble] = "preamble",
  [alias_sym_section_name] = "section_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__anything] = sym__anything,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym__glob_expression_token1] = aux_sym__glob_expression_token1,
  [sym_escaped_character] = sym_escaped_character,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_integer_range_token1] = aux_sym_integer_range_token1,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_character_choice_token1] = aux_sym__glob_expression_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_character_range_token1] = aux_sym__glob_expression_token1,
  [aux_sym_pair_token1] = aux_sym_pair_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_pair_token2] = aux_sym_pair_token2,
  [aux_sym__value_token1] = aux_sym__value_token1,
  [aux_sym__value_token2] = aux_sym_integer_range_token1,
  [aux_sym__value_token3] = aux_sym__value_token3,
  [aux_sym__value_token4] = aux_sym__value_token4,
  [aux_sym__value_token5] = aux_sym__value_token4,
  [aux_sym__value_token6] = aux_sym__value_token4,
  [aux_sym__value_token7] = aux_sym__value_token7,
  [aux_sym__value_token8] = aux_sym__value_token7,
  [aux_sym__value_token9] = aux_sym__value_token9,
  [aux_sym__value_token10] = aux_sym__value_token9,
  [aux_sym__value_token11] = aux_sym__value_token9,
  [aux_sym__value_token12] = aux_sym__value_token12,
  [aux_sym__value_token13] = aux_sym__value_token12,
  [aux_sym__value_token14] = aux_sym__value_token12,
  [aux_sym__value_token15] = aux_sym__value_token12,
  [aux_sym__value_token16] = aux_sym__value_token12,
  [sym__newline] = sym__newline,
  [sym_document] = sym_document,
  [sym__line] = sym__line,
  [sym_section] = sym_section,
  [sym__section_header] = sym__section_header,
  [aux_sym__glob_expression] = aux_sym__glob_expression,
  [sym_brace_expansion] = sym_brace_expansion,
  [sym_expansion_string] = sym_expansion_string,
  [sym_integer_range] = sym_integer_range,
  [sym_character_choice] = sym_character_choice,
  [sym_character_range] = sym_character_range,
  [sym_pair] = sym_pair,
  [sym__value] = sym__value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_brace_expansion_repeat1] = aux_sym_brace_expansion_repeat1,
  [aux_sym_expansion_string_repeat1] = aux_sym_expansion_string_repeat1,
  [aux_sym_character_choice_repeat1] = aux_sym_character_choice_repeat1,
  [alias_sym_preamble] = alias_sym_preamble,
  [alias_sym_section_name] = alias_sym_section_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__anything] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__glob_expression_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integer_range_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_character_choice_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_character_range_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pair_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_pair_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__value_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token4] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token5] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token6] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token7] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token8] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token9] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token10] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token11] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token12] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token13] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token14] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token15] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token16] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym__section_header] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__glob_expression] = {
    .visible = false,
    .named = false,
  },
  [sym_brace_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion_string] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_range] = {
    .visible = true,
    .named = true,
  },
  [sym_character_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_character_range] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_brace_expansion_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expansion_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_choice_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_preamble] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_section_name] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_end = 1,
  field_key = 2,
  field_start = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_end] = "end",
  [field_key] = "key",
  [field_start] = "start",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 2},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_end, 2},
    {field_start, 0},
  [2] =
    {field_key, 0},
    {field_value, 3},
  [4] =
    {field_end, 3},
    {field_start, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_preamble,
  },
  [2] = {
    [1] = alias_sym_section_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__glob_expression, 2,
    aux_sym__glob_expression,
    alias_sym_section_name,
  aux_sym_document_repeat1, 2,
    aux_sym_document_repeat1,
    alias_sym_preamble,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 18,
  [23] = 21,
  [24] = 16,
  [25] = 20,
  [26] = 17,
  [27] = 19,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 31,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 33,
  [44] = 44,
  [45] = 45,
  [46] = 44,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 52,
  [56] = 56,
  [57] = 57,
  [58] = 51,
  [59] = 56,
};

static TSCharacterRange aux_sym__glob_expression_token1_character_set_1[] = {
  {0, '\t'}, {0x0b, ')'}, {'+', '.'}, {'0', '>'}, {'@', 'Z'}, {'\\', '\\'}, {'^', 'z'}, {'|', '|'},
  {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '\n', 67,
        '\r', 3,
        '!', 51,
        '*', 25,
        ',', 44,
        '-', 56,
        '.', 65,
        '/', 32,
        '=', 61,
        '?', 30,
        '[', 22,
        '\\', 64,
        ']', 24,
        '{', 42,
        '}', 46,
        '\t', 2,
        ' ', 2,
        '#', 19,
        ';', 19,
        0x0b, 15,
        '\f', 15,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(67);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 67,
        '\r', 3,
        '*', 25,
        ',', 44,
        '.', 65,
        '/', 32,
        '=', 61,
        '?', 30,
        '[', 22,
        '\\', 64,
        ']', 24,
        '{', 42,
        '}', 46,
        '\t', 2,
        ' ', 2,
        '#', 19,
        ';', 19,
        0x0b, 15,
        '\f', 15,
      );
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(52);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '*', 26,
        ',', 43,
        '-', 37,
        '/', 31,
        '?', 29,
        '[', 21,
        '\\', 38,
        '{', 41,
        '}', 45,
        '\t', 34,
        ' ', 34,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(33);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '*', 26,
        ',', 43,
        '/', 31,
        '?', 29,
        '[', 21,
        '\\', 38,
        '{', 41,
        '}', 45,
        '\t', 35,
        ' ', 35,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(33);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '*', 26,
        '/', 31,
        '?', 29,
        '[', 21,
        '\\', 38,
        ']', 23,
        '{', 41,
        '\t', 36,
        ' ', 36,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(52);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(52);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(20);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(59);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if ((!eof && set_contains(aux_sym__glob_expression_token1_character_set_1, 9, lookahead))) ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if ((!eof && set_contains(aux_sym__glob_expression_token1_character_set_1, 9, lookahead))) ADVANCE(33);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if ((!eof && set_contains(aux_sym__glob_expression_token1_character_set_1, 9, lookahead))) ADVANCE(33);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_escaped_character);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_escaped_character);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_integer_range_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_character_choice_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_character_choice_token1);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_character_choice_token1);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(39);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_character_range_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_character_range_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '=') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_pair_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__value_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead == '\n') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'C', 1,
        'F', 2,
        'L', 3,
        'O', 4,
        'S', 5,
        'T', 6,
        'U', 7,
        'c', 8,
        'f', 9,
        'l', 10,
        'o', 11,
        's', 12,
        't', 13,
        'u', 14,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(18);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(22);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(24);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'R') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(28);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'F') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(30);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'F') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'P') ADVANCE(21);
      if (lookahead == 'p') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(22);
      if (lookahead == 'R') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(34);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(24);
      if (lookahead == 'T') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 't') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 15:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__value_token10);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__value_token9);
      END_STATE();
    case 20:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__value_token10);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__value_token9);
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__value_token6);
      END_STATE();
    case 41:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__value_token8);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 46:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__value_token11);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__value_token4);
      END_STATE();
    case 52:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == '1') ADVANCE(59);
      if (lookahead == '8') ADVANCE(60);
      END_STATE();
    case 54:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__value_token5);
      END_STATE();
    case 56:
      if (lookahead == '1') ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__value_token7);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__value_token1);
      END_STATE();
    case 59:
      if (lookahead == '6') ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__value_token13);
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__value_token3);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__value_token12);
      END_STATE();
    case 63:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(65);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 64:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(67);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 67:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__value_token14);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__value_token15);
      END_STATE();
    case 70:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__value_token16);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 62},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__anything] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_escaped_character] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_character_range_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__value_token1] = ACTIONS(1),
    [aux_sym__value_token3] = ACTIONS(1),
    [aux_sym__value_token4] = ACTIONS(1),
    [aux_sym__value_token5] = ACTIONS(1),
    [aux_sym__value_token6] = ACTIONS(1),
    [aux_sym__value_token7] = ACTIONS(1),
    [aux_sym__value_token8] = ACTIONS(1),
    [aux_sym__value_token9] = ACTIONS(1),
    [aux_sym__value_token10] = ACTIONS(1),
    [aux_sym__value_token11] = ACTIONS(1),
    [aux_sym__value_token12] = ACTIONS(1),
    [aux_sym__value_token13] = ACTIONS(1),
    [aux_sym__value_token14] = ACTIONS(1),
    [aux_sym__value_token15] = ACTIONS(1),
    [aux_sym__value_token16] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(53),
    [sym__line] = STATE(38),
    [sym_section] = STATE(32),
    [sym__section_header] = STATE(30),
    [sym_pair] = STATE(38),
    [aux_sym_document_repeat1] = STATE(15),
    [aux_sym_document_repeat2] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [aux_sym_pair_token1] = ACTIONS(9),
    [sym__newline] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_COMMA,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      aux_sym_integer_range_token1,
    STATE(9), 1,
      aux_sym_expansion_string_repeat1,
    STATE(10), 1,
      aux_sym__glob_expression,
    STATE(5), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(17), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(13), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [39] = 10,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_COMMA,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      aux_sym_integer_range_token1,
    STATE(9), 1,
      aux_sym_expansion_string_repeat1,
    STATE(10), 1,
      aux_sym__glob_expression,
    STATE(6), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(17), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(13), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [78] = 2,
    STATE(54), 1,
      sym__value,
    ACTIONS(29), 17,
      aux_sym__value_token1,
      aux_sym__value_token2,
      aux_sym__value_token3,
      aux_sym__value_token4,
      aux_sym__value_token5,
      aux_sym__value_token6,
      aux_sym__value_token7,
      aux_sym__value_token8,
      aux_sym__value_token9,
      aux_sym__value_token10,
      aux_sym__value_token11,
      aux_sym__value_token12,
      aux_sym__value_token13,
      aux_sym__value_token14,
      aux_sym__value_token15,
      aux_sym__value_token16,
      sym__anything,
  [101] = 9,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_expansion_string_repeat1,
    STATE(10), 1,
      aux_sym__glob_expression,
    STATE(7), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(17), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(13), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [137] = 9,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_expansion_string_repeat1,
    STATE(10), 1,
      aux_sym__glob_expression,
    STATE(7), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(17), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(13), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [173] = 9,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_expansion_string_repeat1,
    STATE(10), 1,
      aux_sym__glob_expression,
    STATE(7), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(17), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(40), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [209] = 7,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      aux_sym_expansion_string_repeat1,
    STATE(10), 1,
      aux_sym__glob_expression,
    ACTIONS(60), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(17), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(54), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [239] = 4,
    STATE(8), 1,
      aux_sym_expansion_string_repeat1,
    STATE(10), 1,
      aux_sym__glob_expression,
    STATE(17), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(62), 10,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [263] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      aux_sym__glob_expression,
    ACTIONS(64), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(17), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(13), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [290] = 6,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      aux_sym__glob_expression,
    ACTIONS(75), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(17), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(69), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [317] = 6,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym__glob_expression,
    STATE(26), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(80), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [343] = 6,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym__glob_expression,
    STATE(26), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(90), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [369] = 5,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      aux_sym__glob_expression,
    STATE(26), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(90), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [392] = 8,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      aux_sym_pair_token1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      aux_sym_document_repeat1,
    STATE(30), 1,
      sym__section_header,
    ACTIONS(5), 2,
      sym_comment,
      sym__newline,
    STATE(38), 2,
      sym__line,
      sym_pair,
    STATE(42), 2,
      sym_section,
      aux_sym_document_repeat2,
  [420] = 1,
    ACTIONS(96), 10,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [433] = 1,
    ACTIONS(98), 10,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [446] = 1,
    ACTIONS(100), 10,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [459] = 1,
    ACTIONS(102), 10,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [472] = 1,
    ACTIONS(104), 10,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [485] = 1,
    ACTIONS(106), 10,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [498] = 1,
    ACTIONS(100), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
  [510] = 1,
    ACTIONS(106), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
  [522] = 1,
    ACTIONS(96), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
  [534] = 1,
    ACTIONS(104), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
  [546] = 1,
    ACTIONS(98), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
  [558] = 1,
    ACTIONS(102), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
  [570] = 5,
    ACTIONS(113), 1,
      aux_sym_pair_token1,
    STATE(28), 1,
      aux_sym_document_repeat1,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(110), 2,
      sym_comment,
      sym__newline,
    STATE(38), 2,
      sym__line,
      sym_pair,
  [589] = 5,
    ACTIONS(9), 1,
      aux_sym_pair_token1,
    STATE(28), 1,
      aux_sym_document_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym__newline,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(38), 2,
      sym__line,
      sym_pair,
  [608] = 5,
    ACTIONS(9), 1,
      aux_sym_pair_token1,
    STATE(29), 1,
      aux_sym_document_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym__newline,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(38), 2,
      sym__line,
      sym_pair,
  [627] = 4,
    ACTIONS(120), 1,
      anon_sym_RBRACK,
    ACTIONS(122), 1,
      sym_escaped_character,
    ACTIONS(124), 1,
      aux_sym_character_choice_token1,
    STATE(41), 2,
      sym_character_range,
      aux_sym_character_choice_repeat1,
  [641] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym__section_header,
    STATE(40), 2,
      sym_section,
      aux_sym_document_repeat2,
  [655] = 4,
    ACTIONS(124), 1,
      aux_sym_character_choice_token1,
    ACTIONS(128), 1,
      sym_escaped_character,
    ACTIONS(130), 1,
      anon_sym_BANG,
    STATE(37), 2,
      sym_character_range,
      aux_sym_character_choice_repeat1,
  [669] = 4,
    ACTIONS(122), 1,
      sym_escaped_character,
    ACTIONS(124), 1,
      aux_sym_character_choice_token1,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(41), 2,
      sym_character_range,
      aux_sym_character_choice_repeat1,
  [683] = 4,
    ACTIONS(122), 1,
      sym_escaped_character,
    ACTIONS(124), 1,
      aux_sym_character_choice_token1,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(41), 2,
      sym_character_range,
      aux_sym_character_choice_repeat1,
  [697] = 1,
    ACTIONS(136), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LBRACK,
      aux_sym_pair_token1,
      sym__newline,
  [705] = 4,
    ACTIONS(122), 1,
      sym_escaped_character,
    ACTIONS(124), 1,
      aux_sym_character_choice_token1,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    STATE(41), 2,
      sym_character_range,
      aux_sym_character_choice_repeat1,
  [719] = 1,
    ACTIONS(140), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LBRACK,
      aux_sym_pair_token1,
      sym__newline,
  [727] = 1,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LBRACK,
      aux_sym_pair_token1,
      sym__newline,
  [735] = 4,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym__section_header,
    STATE(40), 2,
      sym_section,
      aux_sym_document_repeat2,
  [749] = 4,
    ACTIONS(149), 1,
      anon_sym_RBRACK,
    ACTIONS(151), 1,
      sym_escaped_character,
    ACTIONS(154), 1,
      aux_sym_character_choice_token1,
    STATE(41), 2,
      sym_character_range,
      aux_sym_character_choice_repeat1,
  [763] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym__section_header,
    STATE(40), 2,
      sym_section,
      aux_sym_document_repeat2,
  [777] = 4,
    ACTIONS(124), 1,
      aux_sym_character_choice_token1,
    ACTIONS(159), 1,
      sym_escaped_character,
    ACTIONS(161), 1,
      anon_sym_BANG,
    STATE(31), 2,
      sym_character_range,
      aux_sym_character_choice_repeat1,
  [791] = 3,
    ACTIONS(124), 1,
      aux_sym_character_choice_token1,
    ACTIONS(163), 1,
      sym_escaped_character,
    STATE(34), 2,
      sym_character_range,
      aux_sym_character_choice_repeat1,
  [802] = 2,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(165), 3,
      anon_sym_RBRACK,
      sym_escaped_character,
      aux_sym_character_choice_token1,
  [811] = 3,
    ACTIONS(124), 1,
      aux_sym_character_choice_token1,
    ACTIONS(169), 1,
      sym_escaped_character,
    STATE(35), 2,
      sym_character_range,
      aux_sym_character_choice_repeat1,
  [822] = 1,
    ACTIONS(171), 3,
      anon_sym_RBRACK,
      sym_escaped_character,
      aux_sym_character_choice_token1,
  [828] = 1,
    ACTIONS(173), 1,
      anon_sym_EQ,
  [832] = 1,
    ACTIONS(175), 1,
      aux_sym_pair_token2,
  [836] = 1,
    ACTIONS(177), 1,
      aux_sym_character_range_token1,
  [840] = 1,
    ACTIONS(179), 1,
      aux_sym_integer_range_token1,
  [844] = 1,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
  [848] = 1,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
  [852] = 1,
    ACTIONS(185), 1,
      sym__newline,
  [856] = 1,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
  [860] = 1,
    ACTIONS(189), 1,
      anon_sym_DOT_DOT,
  [864] = 1,
    ACTIONS(191), 1,
      sym__newline,
  [868] = 1,
    ACTIONS(193), 1,
      aux_sym_integer_range_token1,
  [872] = 1,
    ACTIONS(195), 1,
      anon_sym_DOT_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 101,
  [SMALL_STATE(6)] = 137,
  [SMALL_STATE(7)] = 173,
  [SMALL_STATE(8)] = 209,
  [SMALL_STATE(9)] = 239,
  [SMALL_STATE(10)] = 263,
  [SMALL_STATE(11)] = 290,
  [SMALL_STATE(12)] = 317,
  [SMALL_STATE(13)] = 343,
  [SMALL_STATE(14)] = 369,
  [SMALL_STATE(15)] = 392,
  [SMALL_STATE(16)] = 420,
  [SMALL_STATE(17)] = 433,
  [SMALL_STATE(18)] = 446,
  [SMALL_STATE(19)] = 459,
  [SMALL_STATE(20)] = 472,
  [SMALL_STATE(21)] = 485,
  [SMALL_STATE(22)] = 498,
  [SMALL_STATE(23)] = 510,
  [SMALL_STATE(24)] = 522,
  [SMALL_STATE(25)] = 534,
  [SMALL_STATE(26)] = 546,
  [SMALL_STATE(27)] = 558,
  [SMALL_STATE(28)] = 570,
  [SMALL_STATE(29)] = 589,
  [SMALL_STATE(30)] = 608,
  [SMALL_STATE(31)] = 627,
  [SMALL_STATE(32)] = 641,
  [SMALL_STATE(33)] = 655,
  [SMALL_STATE(34)] = 669,
  [SMALL_STATE(35)] = 683,
  [SMALL_STATE(36)] = 697,
  [SMALL_STATE(37)] = 705,
  [SMALL_STATE(38)] = 719,
  [SMALL_STATE(39)] = 727,
  [SMALL_STATE(40)] = 735,
  [SMALL_STATE(41)] = 749,
  [SMALL_STATE(42)] = 763,
  [SMALL_STATE(43)] = 777,
  [SMALL_STATE(44)] = 791,
  [SMALL_STATE(45)] = 802,
  [SMALL_STATE(46)] = 811,
  [SMALL_STATE(47)] = 822,
  [SMALL_STATE(48)] = 828,
  [SMALL_STATE(49)] = 832,
  [SMALL_STATE(50)] = 836,
  [SMALL_STATE(51)] = 840,
  [SMALL_STATE(52)] = 844,
  [SMALL_STATE(53)] = 848,
  [SMALL_STATE(54)] = 852,
  [SMALL_STATE(55)] = 856,
  [SMALL_STATE(56)] = 860,
  [SMALL_STATE(57)] = 864,
  [SMALL_STATE(58)] = 868,
  [SMALL_STATE(59)] = 872,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_string, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 1, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(33),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(17),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(43),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(26),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(3),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_expansion, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__glob_expression, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_range, 5, 0, 5),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_choice, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_expansion, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_choice, 4, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_header, 4, 0, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 5, 0, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2, 0, 0),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2, 0, 0), SHIFT_REPEAT(14),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_choice_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_choice_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_choice_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_choice_repeat1, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_range, 3, 0, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [183] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_editorconfig(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__anything,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
