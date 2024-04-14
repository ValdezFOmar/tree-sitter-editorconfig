#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 1
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym__anything = 1,
  sym_comment = 2,
  anon_sym_LBRACK = 3,
  aux_sym_section_header_token1 = 4,
  anon_sym_RBRACK = 5,
  aux_sym_pair_token1 = 6,
  anon_sym_EQ = 7,
  aux_sym_pair_token2 = 8,
  anon_sym_unset = 9,
  aux_sym__value_token1 = 10,
  aux_sym__value_token2 = 11,
  aux_sym__value_token3 = 12,
  aux_sym__value_token4 = 13,
  aux_sym__value_token5 = 14,
  aux_sym__value_token6 = 15,
  aux_sym__value_token7 = 16,
  aux_sym__value_token8 = 17,
  aux_sym__value_token9 = 18,
  aux_sym__value_token10 = 19,
  aux_sym__value_token11 = 20,
  aux_sym__value_token12 = 21,
  aux_sym__value_token13 = 22,
  aux_sym__value_token14 = 23,
  aux_sym__value_token15 = 24,
  sym__newline = 25,
  sym_document = 26,
  sym__line = 27,
  sym_section = 28,
  sym_section_header = 29,
  sym_pair = 30,
  sym__value = 31,
  aux_sym_document_repeat1 = 32,
  aux_sym_document_repeat2 = 33,
  alias_sym_preamble = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__anything] = "other",
  [sym_comment] = "comment",
  [anon_sym_LBRACK] = "[",
  [aux_sym_section_header_token1] = "section_name",
  [anon_sym_RBRACK] = "]",
  [aux_sym_pair_token1] = "identifier",
  [anon_sym_EQ] = "=",
  [aux_sym_pair_token2] = "pair_token2",
  [anon_sym_unset] = "unset",
  [aux_sym__value_token1] = "number",
  [aux_sym__value_token2] = "spelling_language",
  [aux_sym__value_token3] = "boolean",
  [aux_sym__value_token4] = "boolean",
  [aux_sym__value_token5] = "boolean",
  [aux_sym__value_token6] = "indent_style",
  [aux_sym__value_token7] = "indent_style",
  [aux_sym__value_token8] = "end_of_line",
  [aux_sym__value_token9] = "end_of_line",
  [aux_sym__value_token10] = "end_of_line",
  [aux_sym__value_token11] = "charset",
  [aux_sym__value_token12] = "charset",
  [aux_sym__value_token13] = "charset",
  [aux_sym__value_token14] = "charset",
  [aux_sym__value_token15] = "charset",
  [sym__newline] = "_newline",
  [sym_document] = "document",
  [sym__line] = "_line",
  [sym_section] = "section",
  [sym_section_header] = "section_header",
  [sym_pair] = "pair",
  [sym__value] = "_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [alias_sym_preamble] = "preamble",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__anything] = sym__anything,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_section_header_token1] = aux_sym_section_header_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_pair_token1] = aux_sym_pair_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_pair_token2] = aux_sym_pair_token2,
  [anon_sym_unset] = anon_sym_unset,
  [aux_sym__value_token1] = aux_sym__value_token1,
  [aux_sym__value_token2] = aux_sym__value_token2,
  [aux_sym__value_token3] = aux_sym__value_token3,
  [aux_sym__value_token4] = aux_sym__value_token3,
  [aux_sym__value_token5] = aux_sym__value_token3,
  [aux_sym__value_token6] = aux_sym__value_token6,
  [aux_sym__value_token7] = aux_sym__value_token6,
  [aux_sym__value_token8] = aux_sym__value_token8,
  [aux_sym__value_token9] = aux_sym__value_token8,
  [aux_sym__value_token10] = aux_sym__value_token8,
  [aux_sym__value_token11] = aux_sym__value_token11,
  [aux_sym__value_token12] = aux_sym__value_token11,
  [aux_sym__value_token13] = aux_sym__value_token11,
  [aux_sym__value_token14] = aux_sym__value_token11,
  [aux_sym__value_token15] = aux_sym__value_token11,
  [sym__newline] = sym__newline,
  [sym_document] = sym_document,
  [sym__line] = sym__line,
  [sym_section] = sym_section,
  [sym_section_header] = sym_section_header,
  [sym_pair] = sym_pair,
  [sym__value] = sym__value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [alias_sym_preamble] = alias_sym_preamble,
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
  [aux_sym_section_header_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_unset] = {
    .visible = true,
    .named = true,
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
  [alias_sym_preamble] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_preamble,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == ']') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '[') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '\f') ADVANCE(18);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '=') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_pair_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__value_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
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
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == 'R') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(27);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'F') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(29);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'F') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'P') ADVANCE(21);
      if (lookahead == 'p') ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(22);
      if (lookahead == 'R') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(33);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'T') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 't') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 15:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__value_token9);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__value_token8);
      END_STATE();
    case 20:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__value_token9);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__value_token8);
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__value_token5);
      END_STATE();
    case 40:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__value_token7);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 44:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__value_token10);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__value_token3);
      END_STATE();
    case 51:
      if (lookahead == '1') ADVANCE(57);
      if (lookahead == '8') ADVANCE(58);
      END_STATE();
    case 52:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__value_token4);
      END_STATE();
    case 55:
      if (lookahead == '1') ADVANCE(61);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__value_token6);
      END_STATE();
    case 57:
      if (lookahead == '6') ADVANCE(62);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__value_token12);
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__value_token2);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_unset);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__value_token11);
      END_STATE();
    case 62:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(64);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 63:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(66);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__value_token13);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__value_token14);
      END_STATE();
    case 69:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__value_token15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__anything] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_unset] = ACTIONS(1),
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
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(15),
    [sym__line] = STATE(7),
    [sym_section] = STATE(8),
    [sym_section_header] = STATE(4),
    [sym_pair] = STATE(7),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_document_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [aux_sym_pair_token1] = ACTIONS(9),
    [sym__newline] = ACTIONS(5),
  },
  [2] = {
    [sym__value] = STATE(19),
    [sym__anything] = ACTIONS(11),
    [anon_sym_unset] = ACTIONS(11),
    [aux_sym__value_token1] = ACTIONS(11),
    [aux_sym__value_token2] = ACTIONS(11),
    [aux_sym__value_token3] = ACTIONS(11),
    [aux_sym__value_token4] = ACTIONS(11),
    [aux_sym__value_token5] = ACTIONS(11),
    [aux_sym__value_token6] = ACTIONS(11),
    [aux_sym__value_token7] = ACTIONS(11),
    [aux_sym__value_token8] = ACTIONS(11),
    [aux_sym__value_token9] = ACTIONS(11),
    [aux_sym__value_token10] = ACTIONS(11),
    [aux_sym__value_token11] = ACTIONS(11),
    [aux_sym__value_token12] = ACTIONS(11),
    [aux_sym__value_token13] = ACTIONS(11),
    [aux_sym__value_token14] = ACTIONS(11),
    [aux_sym__value_token15] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      aux_sym_pair_token1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_section_header,
    STATE(6), 1,
      aux_sym_document_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym__newline,
    STATE(7), 2,
      sym__line,
      sym_pair,
    STATE(9), 2,
      sym_section,
      aux_sym_document_repeat2,
  [28] = 5,
    ACTIONS(9), 1,
      aux_sym_pair_token1,
    STATE(5), 1,
      aux_sym_document_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym__newline,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(7), 2,
      sym__line,
      sym_pair,
  [47] = 5,
    ACTIONS(9), 1,
      aux_sym_pair_token1,
    STATE(6), 1,
      aux_sym_document_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym__newline,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(7), 2,
      sym__line,
      sym_pair,
  [66] = 5,
    ACTIONS(24), 1,
      aux_sym_pair_token1,
    STATE(6), 1,
      aux_sym_document_repeat1,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(21), 2,
      sym_comment,
      sym__newline,
    STATE(7), 2,
      sym__line,
      sym_pair,
  [85] = 1,
    ACTIONS(27), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LBRACK,
      aux_sym_pair_token1,
      sym__newline,
  [93] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_section_header,
    STATE(10), 2,
      sym_section,
      aux_sym_document_repeat2,
  [107] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_section_header,
    STATE(10), 2,
      sym_section,
      aux_sym_document_repeat2,
  [121] = 4,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      sym_section_header,
    STATE(10), 2,
      sym_section,
      aux_sym_document_repeat2,
  [135] = 1,
    ACTIONS(38), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LBRACK,
      aux_sym_pair_token1,
      sym__newline,
  [143] = 1,
    ACTIONS(40), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LBRACK,
      aux_sym_pair_token1,
      sym__newline,
  [151] = 1,
    ACTIONS(42), 1,
      aux_sym_section_header_token1,
  [155] = 1,
    ACTIONS(44), 1,
      anon_sym_EQ,
  [159] = 1,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
  [163] = 1,
    ACTIONS(48), 1,
      anon_sym_RBRACK,
  [167] = 1,
    ACTIONS(50), 1,
      aux_sym_pair_token2,
  [171] = 1,
    ACTIONS(52), 1,
      sym__newline,
  [175] = 1,
    ACTIONS(54), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 85,
  [SMALL_STATE(8)] = 93,
  [SMALL_STATE(9)] = 107,
  [SMALL_STATE(10)] = 121,
  [SMALL_STATE(11)] = 135,
  [SMALL_STATE(12)] = 143,
  [SMALL_STATE(13)] = 151,
  [SMALL_STATE(14)] = 155,
  [SMALL_STATE(15)] = 159,
  [SMALL_STATE(16)] = 163,
  [SMALL_STATE(17)] = 167,
  [SMALL_STATE(18)] = 171,
  [SMALL_STATE(19)] = 175,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, .production_id = 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(13),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 5, .production_id = 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [46] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
