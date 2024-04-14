#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 2
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

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
  aux_sym__glob_expression_token2 = 10,
  anon_sym_LBRACE = 11,
  anon_sym_COMMA = 12,
  anon_sym_RBRACE = 13,
  aux_sym_sequence_expression_token1 = 14,
  anon_sym_DOT_DOT = 15,
  aux_sym_pair_token1 = 16,
  anon_sym_EQ = 17,
  aux_sym_pair_token2 = 18,
  aux_sym__value_token1 = 19,
  aux_sym__value_token2 = 20,
  aux_sym__value_token3 = 21,
  aux_sym__value_token4 = 22,
  aux_sym__value_token5 = 23,
  aux_sym__value_token6 = 24,
  aux_sym__value_token7 = 25,
  aux_sym__value_token8 = 26,
  aux_sym__value_token9 = 27,
  aux_sym__value_token10 = 28,
  aux_sym__value_token11 = 29,
  aux_sym__value_token12 = 30,
  aux_sym__value_token13 = 31,
  aux_sym__value_token14 = 32,
  aux_sym__value_token15 = 33,
  aux_sym__value_token16 = 34,
  sym__newline = 35,
  sym_document = 36,
  sym__line = 37,
  sym_section = 38,
  sym_section_header = 39,
  aux_sym__glob_expression = 40,
  sym_brace_expansion = 41,
  sym_expansion_string = 42,
  sym_sequence_expression = 43,
  sym_pair = 44,
  sym__value = 45,
  aux_sym_document_repeat1 = 46,
  aux_sym_document_repeat2 = 47,
  aux_sym_brace_expansion_repeat1 = 48,
  aux_sym_expansion_string_repeat1 = 49,
  alias_sym_preamble = 50,
  alias_sym_section_name = 51,
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
  [aux_sym__glob_expression_token2] = "escaped_character",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [aux_sym_sequence_expression_token1] = "number",
  [anon_sym_DOT_DOT] = "..",
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
  [sym_section_header] = "section_header",
  [aux_sym__glob_expression] = "_glob_expression",
  [sym_brace_expansion] = "brace_expansion",
  [sym_expansion_string] = "expansion_string",
  [sym_sequence_expression] = "sequence_expression",
  [sym_pair] = "pair",
  [sym__value] = "_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_brace_expansion_repeat1] = "brace_expansion_repeat1",
  [aux_sym_expansion_string_repeat1] = "expansion_string_repeat1",
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
  [aux_sym__glob_expression_token2] = aux_sym__glob_expression_token2,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_sequence_expression_token1] = aux_sym_sequence_expression_token1,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [aux_sym_pair_token1] = aux_sym_pair_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_pair_token2] = aux_sym_pair_token2,
  [aux_sym__value_token1] = aux_sym__value_token1,
  [aux_sym__value_token2] = aux_sym_sequence_expression_token1,
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
  [sym_section_header] = sym_section_header,
  [aux_sym__glob_expression] = aux_sym__glob_expression,
  [sym_brace_expansion] = sym_brace_expansion,
  [sym_expansion_string] = sym_expansion_string,
  [sym_sequence_expression] = sym_sequence_expression,
  [sym_pair] = sym_pair,
  [sym__value] = sym__value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_brace_expansion_repeat1] = aux_sym_brace_expansion_repeat1,
  [aux_sym_expansion_string_repeat1] = aux_sym_expansion_string_repeat1,
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
  [aux_sym__glob_expression_token2] = {
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
  [aux_sym_sequence_expression_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
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
  [sym_section_header] = {
    .visible = true,
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
  [sym_sequence_expression] = {
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
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 3},
  [2] =
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
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 10,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 16,
  [21] = 19,
  [22] = 22,
  [23] = 23,
  [24] = 18,
  [25] = 25,
  [26] = 17,
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
  [41] = 34,
  [42] = 35,
  [43] = 38,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == ']') ADVANCE(19);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == ']') ADVANCE(19);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != '}') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '\f') ADVANCE(46);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '?' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '?' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(28);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '?' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(28);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__glob_expression_token2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__glob_expression_token2);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_sequence_expression_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_sequence_expression_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '=') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_pair_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__value_token2);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 55:
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
      if (lookahead == 'C') ADVANCE(1);
      if (lookahead == 'F') ADVANCE(2);
      if (lookahead == 'L') ADVANCE(3);
      if (lookahead == 'O') ADVANCE(4);
      if (lookahead == 'S') ADVANCE(5);
      if (lookahead == 'T') ADVANCE(6);
      if (lookahead == 'U') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
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
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 49},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
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
    [aux_sym__glob_expression_token2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_sequence_expression_token1] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__value_token1] = ACTIONS(1),
    [aux_sym__value_token2] = ACTIONS(1),
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
    [sym_document] = STATE(40),
    [sym__line] = STATE(32),
    [sym_section] = STATE(31),
    [sym_section_header] = STATE(22),
    [sym_pair] = STATE(32),
    [aux_sym_document_repeat1] = STATE(12),
    [aux_sym_document_repeat2] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [aux_sym_pair_token1] = ACTIONS(9),
    [sym__newline] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(33), 1,
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
  [23] = 9,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_COMMA,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      aux_sym_sequence_expression_token1,
    STATE(9), 1,
      aux_sym_expansion_string_repeat1,
    STATE(11), 1,
      aux_sym__glob_expression,
    STATE(6), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(19), 2,
      sym_brace_expansion,
      sym_sequence_expression,
    ACTIONS(13), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      aux_sym__glob_expression_token2,
  [58] = 9,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_COMMA,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      aux_sym_sequence_expression_token1,
    STATE(9), 1,
      aux_sym_expansion_string_repeat1,
    STATE(11), 1,
      aux_sym__glob_expression,
    STATE(5), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(19), 2,
      sym_brace_expansion,
      sym_sequence_expression,
    ACTIONS(13), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      aux_sym__glob_expression_token2,
  [93] = 8,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_expansion_string_repeat1,
    STATE(11), 1,
      aux_sym__glob_expression,
    STATE(7), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(19), 2,
      sym_brace_expansion,
      sym_sequence_expression,
    ACTIONS(13), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      aux_sym__glob_expression_token2,
  [125] = 8,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_expansion_string_repeat1,
    STATE(11), 1,
      aux_sym__glob_expression,
    STATE(7), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(19), 2,
      sym_brace_expansion,
      sym_sequence_expression,
    ACTIONS(13), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      aux_sym__glob_expression_token2,
  [157] = 8,
    ACTIONS(38), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_expansion_string_repeat1,
    STATE(11), 1,
      aux_sym__glob_expression,
    STATE(7), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(19), 2,
      sym_brace_expansion,
      sym_sequence_expression,
    ACTIONS(35), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      aux_sym__glob_expression_token2,
  [189] = 6,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      aux_sym_expansion_string_repeat1,
    STATE(11), 1,
      aux_sym__glob_expression,
    ACTIONS(52), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym_brace_expansion,
      sym_sequence_expression,
    ACTIONS(46), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      aux_sym__glob_expression_token2,
  [215] = 4,
    STATE(8), 1,
      aux_sym_expansion_string_repeat1,
    STATE(11), 1,
      aux_sym__glob_expression,
    STATE(19), 2,
      sym_brace_expansion,
      sym_sequence_expression,
    ACTIONS(54), 9,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      aux_sym__glob_expression_token2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [237] = 5,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      aux_sym__glob_expression,
    ACTIONS(62), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym_brace_expansion,
      sym_sequence_expression,
    ACTIONS(56), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      aux_sym__glob_expression_token2,
  [260] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      aux_sym__glob_expression,
    ACTIONS(64), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym_brace_expansion,
      sym_sequence_expression,
    ACTIONS(13), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      aux_sym__glob_expression_token2,
  [283] = 8,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      aux_sym_pair_token1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_section_header,
    STATE(25), 1,
      aux_sym_document_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym__newline,
    STATE(28), 2,
      sym_section,
      aux_sym_document_repeat2,
    STATE(32), 2,
      sym__line,
      sym_pair,
  [311] = 5,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      aux_sym__glob_expression,
    STATE(21), 2,
      sym_brace_expansion,
      sym_sequence_expression,
    ACTIONS(70), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      aux_sym__glob_expression_token2,
  [333] = 5,
    ACTIONS(62), 1,
      anon_sym_RBRACK,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      aux_sym__glob_expression,
    STATE(21), 2,
      sym_brace_expansion,
      sym_sequence_expression,
    ACTIONS(74), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      aux_sym__glob_expression_token2,
  [355] = 4,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      aux_sym__glob_expression,
    STATE(21), 2,
      sym_brace_expansion,
      sym_sequence_expression,
    ACTIONS(70), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      aux_sym__glob_expression_token2,
  [374] = 1,
    ACTIONS(80), 9,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      aux_sym__glob_expression_token2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [386] = 1,
    ACTIONS(82), 9,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      aux_sym__glob_expression_token2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [398] = 1,
    ACTIONS(84), 9,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      aux_sym__glob_expression_token2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [410] = 1,
    ACTIONS(86), 9,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      aux_sym__glob_expression_token2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [422] = 1,
    ACTIONS(80), 8,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      aux_sym__glob_expression_token2,
      anon_sym_LBRACE,
  [433] = 1,
    ACTIONS(86), 8,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      aux_sym__glob_expression_token2,
      anon_sym_LBRACE,
  [444] = 5,
    ACTIONS(9), 1,
      aux_sym_pair_token1,
    STATE(23), 1,
      aux_sym_document_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym__newline,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(32), 2,
      sym__line,
      sym_pair,
  [463] = 5,
    ACTIONS(9), 1,
      aux_sym_pair_token1,
    STATE(25), 1,
      aux_sym_document_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym__newline,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(32), 2,
      sym__line,
      sym_pair,
  [482] = 1,
    ACTIONS(84), 8,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      aux_sym__glob_expression_token2,
      anon_sym_LBRACE,
  [493] = 5,
    ACTIONS(97), 1,
      aux_sym_pair_token1,
    STATE(25), 1,
      aux_sym_document_repeat1,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(94), 2,
      sym_comment,
      sym__newline,
    STATE(32), 2,
      sym__line,
      sym_pair,
  [512] = 1,
    ACTIONS(82), 8,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      aux_sym__glob_expression_token2,
      anon_sym_LBRACE,
  [523] = 4,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_section_header,
    STATE(27), 2,
      sym_section,
      aux_sym_document_repeat2,
  [537] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_section_header,
    STATE(27), 2,
      sym_section,
      aux_sym_document_repeat2,
  [551] = 1,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LBRACK,
      aux_sym_pair_token1,
      sym__newline,
  [559] = 1,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LBRACK,
      aux_sym_pair_token1,
      sym__newline,
  [567] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_section_header,
    STATE(27), 2,
      sym_section,
      aux_sym_document_repeat2,
  [581] = 1,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LBRACK,
      aux_sym_pair_token1,
      sym__newline,
  [589] = 1,
    ACTIONS(115), 1,
      sym__newline,
  [593] = 1,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
  [597] = 1,
    ACTIONS(119), 1,
      aux_sym_sequence_expression_token1,
  [601] = 1,
    ACTIONS(121), 1,
      anon_sym_EQ,
  [605] = 1,
    ACTIONS(123), 1,
      aux_sym_pair_token2,
  [609] = 1,
    ACTIONS(125), 1,
      anon_sym_DOT_DOT,
  [613] = 1,
    ACTIONS(127), 1,
      sym__newline,
  [617] = 1,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
  [621] = 1,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
  [625] = 1,
    ACTIONS(133), 1,
      aux_sym_sequence_expression_token1,
  [629] = 1,
    ACTIONS(135), 1,
      anon_sym_DOT_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 125,
  [SMALL_STATE(7)] = 157,
  [SMALL_STATE(8)] = 189,
  [SMALL_STATE(9)] = 215,
  [SMALL_STATE(10)] = 237,
  [SMALL_STATE(11)] = 260,
  [SMALL_STATE(12)] = 283,
  [SMALL_STATE(13)] = 311,
  [SMALL_STATE(14)] = 333,
  [SMALL_STATE(15)] = 355,
  [SMALL_STATE(16)] = 374,
  [SMALL_STATE(17)] = 386,
  [SMALL_STATE(18)] = 398,
  [SMALL_STATE(19)] = 410,
  [SMALL_STATE(20)] = 422,
  [SMALL_STATE(21)] = 433,
  [SMALL_STATE(22)] = 444,
  [SMALL_STATE(23)] = 463,
  [SMALL_STATE(24)] = 482,
  [SMALL_STATE(25)] = 493,
  [SMALL_STATE(26)] = 512,
  [SMALL_STATE(27)] = 523,
  [SMALL_STATE(28)] = 537,
  [SMALL_STATE(29)] = 551,
  [SMALL_STATE(30)] = 559,
  [SMALL_STATE(31)] = 567,
  [SMALL_STATE(32)] = 581,
  [SMALL_STATE(33)] = 589,
  [SMALL_STATE(34)] = 593,
  [SMALL_STATE(35)] = 597,
  [SMALL_STATE(36)] = 601,
  [SMALL_STATE(37)] = 605,
  [SMALL_STATE(38)] = 609,
  [SMALL_STATE(39)] = 613,
  [SMALL_STATE(40)] = 617,
  [SMALL_STATE(41)] = 621,
  [SMALL_STATE(42)] = 625,
  [SMALL_STATE(43)] = 629,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2), SHIFT_REPEAT(19),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2), SHIFT_REPEAT(3),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2), SHIFT_REPEAT(7),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 2), SHIFT_REPEAT(19),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 2), SHIFT_REPEAT(3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_string, 1),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2), SHIFT_REPEAT(19),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2), SHIFT_REPEAT(3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, .production_id = 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2), SHIFT_REPEAT(21),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2), SHIFT_REPEAT(4),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_expression, 5, .production_id = 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_expansion, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_expansion, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__glob_expression, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(32),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(36),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(15),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 4, .production_id = 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 5, .production_id = 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [129] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
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

TS_PUBLIC const TSLanguage *tree_sitter_editorconfig() {
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
