#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
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
  aux_sym_brace_expansion_token1 = 12,
  anon_sym_COMMA = 13,
  anon_sym_RBRACE = 14,
  anon_sym_DOT_DOT = 15,
  anon_sym_BANG = 16,
  aux_sym__character_choice_content_token1 = 17,
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
  sym__character_choice_content = 49,
  sym_character_range = 50,
  sym_pair = 51,
  sym__value = 52,
  aux_sym_document_repeat1 = 53,
  aux_sym_document_repeat2 = 54,
  aux_sym_brace_expansion_repeat1 = 55,
  aux_sym_expansion_string_repeat1 = 56,
  aux_sym__character_choice_content_repeat1 = 57,
  alias_sym_preamble = 58,
  alias_sym_section_name = 59,
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
  [aux_sym_brace_expansion_token1] = "brace_expansion_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_BANG] = "negation",
  [aux_sym__character_choice_content_token1] = "character",
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
  [sym__character_choice_content] = "_character_choice_content",
  [sym_character_range] = "character_range",
  [sym_pair] = "pair",
  [sym__value] = "_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_brace_expansion_repeat1] = "brace_expansion_repeat1",
  [aux_sym_expansion_string_repeat1] = "expansion_string_repeat1",
  [aux_sym__character_choice_content_repeat1] = "_character_choice_content_repeat1",
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
  [aux_sym_brace_expansion_token1] = aux_sym_brace_expansion_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym__character_choice_content_token1] = aux_sym__glob_expression_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_character_range_token1] = aux_sym__glob_expression_token1,
  [aux_sym_pair_token1] = aux_sym_pair_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_pair_token2] = aux_sym_pair_token2,
  [aux_sym__value_token1] = aux_sym__value_token1,
  [aux_sym__value_token2] = aux_sym__value_token2,
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
  [sym__character_choice_content] = sym__character_choice_content,
  [sym_character_range] = sym_character_range,
  [sym_pair] = sym_pair,
  [sym__value] = sym__value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_brace_expansion_repeat1] = aux_sym_brace_expansion_repeat1,
  [aux_sym_expansion_string_repeat1] = aux_sym_expansion_string_repeat1,
  [aux_sym__character_choice_content_repeat1] = aux_sym__character_choice_content_repeat1,
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
  [aux_sym_brace_expansion_token1] = {
    .visible = false,
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
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__character_choice_content_token1] = {
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
  [sym__character_choice_content] = {
    .visible = false,
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
  [aux_sym__character_choice_content_repeat1] = {
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
  [5] = {
    [1] = aux_sym__value_token2,
    [3] = aux_sym__value_token2,
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
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 3,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 7,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 24,
  [28] = 21,
  [29] = 22,
  [30] = 20,
  [31] = 23,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 35,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 52,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 53,
  [59] = 59,
  [60] = 59,
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
      if (eof) ADVANCE(16);
      ADVANCE_MAP(
        '\n', 65,
        '\r', 3,
        '!', 49,
        '*', 23,
        ',', 43,
        '-', 54,
        '.', 63,
        '/', 30,
        '=', 59,
        '?', 28,
        '[', 20,
        '\\', 62,
        ']', 22,
        '{', 40,
        '}', 45,
        '\t', 2,
        ' ', 2,
        '#', 17,
        ';', 17,
        0x0b, 14,
        '\f', 14,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(65);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 65,
        '\r', 3,
        '*', 23,
        ',', 43,
        '/', 30,
        '=', 59,
        '?', 28,
        '[', 20,
        '\\', 62,
        ']', 22,
        '{', 40,
        '}', 45,
        '\t', 2,
        ' ', 2,
        '#', 17,
        ';', 17,
        0x0b, 14,
        '\f', 14,
      );
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(50);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '*', 24,
        ',', 42,
        '-', 35,
        '/', 29,
        '?', 27,
        '[', 19,
        '\\', 36,
        '{', 39,
        '}', 44,
        '\t', 32,
        ' ', 32,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(31);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '*', 24,
        ',', 42,
        '.', 33,
        '/', 29,
        '?', 27,
        '[', 19,
        '\\', 36,
        '{', 39,
        '}', 44,
        '\t', 32,
        ' ', 32,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(31);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '*', 24,
        ',', 42,
        '/', 29,
        '?', 27,
        '[', 19,
        '\\', 36,
        '{', 39,
        '}', 44,
        '\t', 32,
        ' ', 32,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(31);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '*', 24,
        '/', 29,
        '?', 27,
        '[', 19,
        '\\', 36,
        ']', 21,
        '{', 39,
        '\t', 34,
        ' ', 34,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(50);
      END_STATE();
    case 11:
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(57);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if ((!eof && set_contains(aux_sym__glob_expression_token1_character_set_1, 9, lookahead))) ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      if (lookahead == '.') ADVANCE(46);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if ((!eof && set_contains(aux_sym__glob_expression_token1_character_set_1, 9, lookahead))) ADVANCE(31);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_escaped_character);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_escaped_character);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_brace_expansion_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__character_choice_content_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__character_choice_content_token1);
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__character_choice_content_token1);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(37);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_character_range_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_character_range_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '=') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_pair_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__value_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead == '\n') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 65:
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
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 60},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
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
    [sym_document] = STATE(57),
    [sym__line] = STATE(38),
    [sym_section] = STATE(40),
    [sym__section_header] = STATE(33),
    [sym_pair] = STATE(38),
    [aux_sym_document_repeat1] = STATE(19),
    [aux_sym_document_repeat2] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [aux_sym_pair_token1] = ACTIONS(9),
    [sym__newline] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(49), 1,
      sym__value,
    ACTIONS(11), 17,
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
  [23] = 10,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      anon_sym_DOT_DOT,
    STATE(12), 1,
      aux_sym_expansion_string_repeat1,
    STATE(14), 1,
      aux_sym__glob_expression,
    STATE(7), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(22), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(15), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [62] = 10,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      aux_sym_brace_expansion_token1,
    ACTIONS(27), 1,
      anon_sym_COMMA,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_expansion_string_repeat1,
    STATE(14), 1,
      aux_sym__glob_expression,
    STATE(8), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(22), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(15), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [101] = 10,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      aux_sym_brace_expansion_token1,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_expansion_string_repeat1,
    STATE(14), 1,
      aux_sym__glob_expression,
    STATE(10), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(22), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(15), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [140] = 10,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    STATE(12), 1,
      aux_sym_expansion_string_repeat1,
    STATE(14), 1,
      aux_sym__glob_expression,
    STATE(11), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(22), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(15), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [179] = 9,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_expansion_string_repeat1,
    STATE(14), 1,
      aux_sym__glob_expression,
    STATE(9), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(22), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(15), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [215] = 9,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_expansion_string_repeat1,
    STATE(14), 1,
      aux_sym__glob_expression,
    STATE(9), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(22), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(15), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [251] = 9,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_expansion_string_repeat1,
    STATE(14), 1,
      aux_sym__glob_expression,
    STATE(9), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(22), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(50), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [287] = 9,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_expansion_string_repeat1,
    STATE(14), 1,
      aux_sym__glob_expression,
    STATE(9), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(22), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(15), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [323] = 9,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_expansion_string_repeat1,
    STATE(14), 1,
      aux_sym__glob_expression,
    STATE(9), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(22), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(15), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [359] = 4,
    STATE(13), 1,
      aux_sym_expansion_string_repeat1,
    STATE(14), 1,
      aux_sym__glob_expression,
    STATE(22), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(63), 10,
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
  [383] = 7,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      aux_sym_expansion_string_repeat1,
    STATE(14), 1,
      aux_sym__glob_expression,
    ACTIONS(74), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(22), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(68), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [413] = 6,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      aux_sym__glob_expression,
    ACTIONS(76), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(22), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(15), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [440] = 6,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      aux_sym__glob_expression,
    ACTIONS(87), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(22), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(81), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [467] = 6,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      aux_sym__glob_expression,
    STATE(29), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(93), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [493] = 6,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      aux_sym__glob_expression,
    STATE(29), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(100), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [519] = 5,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      aux_sym__glob_expression,
    STATE(29), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(93), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [542] = 8,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      aux_sym_pair_token1,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      aux_sym_document_repeat1,
    STATE(33), 1,
      sym__section_header,
    ACTIONS(5), 2,
      sym_comment,
      sym__newline,
    STATE(37), 2,
      sym_section,
      aux_sym_document_repeat2,
    STATE(38), 2,
      sym__line,
      sym_pair,
  [570] = 1,
    ACTIONS(108), 10,
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
  [583] = 1,
    ACTIONS(110), 10,
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
  [596] = 1,
    ACTIONS(112), 10,
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
  [609] = 1,
    ACTIONS(114), 10,
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
  [622] = 1,
    ACTIONS(116), 10,
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
  [635] = 1,
    ACTIONS(118), 10,
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
  [648] = 1,
    ACTIONS(118), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
  [660] = 1,
    ACTIONS(116), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
  [672] = 1,
    ACTIONS(110), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
  [684] = 1,
    ACTIONS(112), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
  [696] = 1,
    ACTIONS(108), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
  [708] = 1,
    ACTIONS(114), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
  [720] = 5,
    ACTIONS(125), 1,
      aux_sym_pair_token1,
    STATE(32), 1,
      aux_sym_document_repeat1,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(122), 2,
      sym_comment,
      sym__newline,
    STATE(38), 2,
      sym__line,
      sym_pair,
  [739] = 5,
    ACTIONS(9), 1,
      aux_sym_pair_token1,
    STATE(34), 1,
      aux_sym_document_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym__newline,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(38), 2,
      sym__line,
      sym_pair,
  [758] = 5,
    ACTIONS(9), 1,
      aux_sym_pair_token1,
    STATE(32), 1,
      aux_sym_document_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym__newline,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(38), 2,
      sym__line,
      sym_pair,
  [777] = 5,
    ACTIONS(132), 1,
      sym_escaped_character,
    ACTIONS(134), 1,
      anon_sym_BANG,
    ACTIONS(136), 1,
      aux_sym__character_choice_content_token1,
    STATE(54), 1,
      sym__character_choice_content,
    STATE(43), 2,
      sym_character_range,
      aux_sym__character_choice_content_repeat1,
  [794] = 5,
    ACTIONS(132), 1,
      sym_escaped_character,
    ACTIONS(134), 1,
      anon_sym_BANG,
    ACTIONS(136), 1,
      aux_sym__character_choice_content_token1,
    STATE(52), 1,
      sym__character_choice_content,
    STATE(43), 2,
      sym_character_range,
      aux_sym__character_choice_content_repeat1,
  [811] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      sym__section_header,
    STATE(45), 2,
      sym_section,
      aux_sym_document_repeat2,
  [825] = 1,
    ACTIONS(140), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LBRACK,
      aux_sym_pair_token1,
      sym__newline,
  [833] = 4,
    ACTIONS(136), 1,
      aux_sym__character_choice_content_token1,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    ACTIONS(144), 1,
      sym_escaped_character,
    STATE(42), 2,
      sym_character_range,
      aux_sym__character_choice_content_repeat1,
  [847] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      sym__section_header,
    STATE(45), 2,
      sym_section,
      aux_sym_document_repeat2,
  [861] = 1,
    ACTIONS(148), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LBRACK,
      aux_sym_pair_token1,
      sym__newline,
  [869] = 4,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    ACTIONS(152), 1,
      sym_escaped_character,
    ACTIONS(155), 1,
      aux_sym__character_choice_content_token1,
    STATE(42), 2,
      sym_character_range,
      aux_sym__character_choice_content_repeat1,
  [883] = 4,
    ACTIONS(136), 1,
      aux_sym__character_choice_content_token1,
    ACTIONS(144), 1,
      sym_escaped_character,
    ACTIONS(158), 1,
      anon_sym_RBRACK,
    STATE(42), 2,
      sym_character_range,
      aux_sym__character_choice_content_repeat1,
  [897] = 1,
    ACTIONS(160), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LBRACK,
      aux_sym_pair_token1,
      sym__newline,
  [905] = 4,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym__section_header,
    STATE(45), 2,
      sym_section,
      aux_sym_document_repeat2,
  [919] = 2,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(167), 3,
      anon_sym_RBRACK,
      sym_escaped_character,
      aux_sym__character_choice_content_token1,
  [928] = 3,
    ACTIONS(136), 1,
      aux_sym__character_choice_content_token1,
    ACTIONS(171), 1,
      sym_escaped_character,
    STATE(39), 2,
      sym_character_range,
      aux_sym__character_choice_content_repeat1,
  [939] = 1,
    ACTIONS(173), 3,
      anon_sym_RBRACK,
      sym_escaped_character,
      aux_sym__character_choice_content_token1,
  [945] = 1,
    ACTIONS(175), 1,
      sym__newline,
  [949] = 1,
    ACTIONS(177), 1,
      aux_sym_character_range_token1,
  [953] = 1,
    ACTIONS(179), 1,
      aux_sym_pair_token2,
  [957] = 1,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
  [961] = 1,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
  [965] = 1,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
  [969] = 1,
    ACTIONS(187), 1,
      sym__newline,
  [973] = 1,
    ACTIONS(189), 1,
      anon_sym_EQ,
  [977] = 1,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
  [981] = 1,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
  [985] = 1,
    ACTIONS(195), 1,
      aux_sym_brace_expansion_token1,
  [989] = 1,
    ACTIONS(197), 1,
      aux_sym_brace_expansion_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 101,
  [SMALL_STATE(6)] = 140,
  [SMALL_STATE(7)] = 179,
  [SMALL_STATE(8)] = 215,
  [SMALL_STATE(9)] = 251,
  [SMALL_STATE(10)] = 287,
  [SMALL_STATE(11)] = 323,
  [SMALL_STATE(12)] = 359,
  [SMALL_STATE(13)] = 383,
  [SMALL_STATE(14)] = 413,
  [SMALL_STATE(15)] = 440,
  [SMALL_STATE(16)] = 467,
  [SMALL_STATE(17)] = 493,
  [SMALL_STATE(18)] = 519,
  [SMALL_STATE(19)] = 542,
  [SMALL_STATE(20)] = 570,
  [SMALL_STATE(21)] = 583,
  [SMALL_STATE(22)] = 596,
  [SMALL_STATE(23)] = 609,
  [SMALL_STATE(24)] = 622,
  [SMALL_STATE(25)] = 635,
  [SMALL_STATE(26)] = 648,
  [SMALL_STATE(27)] = 660,
  [SMALL_STATE(28)] = 672,
  [SMALL_STATE(29)] = 684,
  [SMALL_STATE(30)] = 696,
  [SMALL_STATE(31)] = 708,
  [SMALL_STATE(32)] = 720,
  [SMALL_STATE(33)] = 739,
  [SMALL_STATE(34)] = 758,
  [SMALL_STATE(35)] = 777,
  [SMALL_STATE(36)] = 794,
  [SMALL_STATE(37)] = 811,
  [SMALL_STATE(38)] = 825,
  [SMALL_STATE(39)] = 833,
  [SMALL_STATE(40)] = 847,
  [SMALL_STATE(41)] = 861,
  [SMALL_STATE(42)] = 869,
  [SMALL_STATE(43)] = 883,
  [SMALL_STATE(44)] = 897,
  [SMALL_STATE(45)] = 905,
  [SMALL_STATE(46)] = 919,
  [SMALL_STATE(47)] = 928,
  [SMALL_STATE(48)] = 939,
  [SMALL_STATE(49)] = 945,
  [SMALL_STATE(50)] = 949,
  [SMALL_STATE(51)] = 953,
  [SMALL_STATE(52)] = 957,
  [SMALL_STATE(53)] = 961,
  [SMALL_STATE(54)] = 965,
  [SMALL_STATE(55)] = 969,
  [SMALL_STATE(56)] = 973,
  [SMALL_STATE(57)] = 977,
  [SMALL_STATE(58)] = 981,
  [SMALL_STATE(59)] = 985,
  [SMALL_STATE(60)] = 989,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_string, 1, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 1, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(35),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(22),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(36),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(29),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_choice, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_expansion, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__glob_expression, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_expansion, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_expansion, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_range, 5, 0, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__character_choice_content, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_header, 4, 0, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__character_choice_content_repeat1, 2, 0, 0),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__character_choice_content_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__character_choice_content_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__character_choice_content, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 5, 0, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2, 0, 0),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2, 0, 0), SHIFT_REPEAT(18),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__character_choice_content_repeat1, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_range, 3, 0, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [191] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
