#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 1
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_LBRACK = 2,
  aux_sym_section_header_token1 = 3,
  anon_sym_RBRACK = 4,
  aux_sym_pair_token1 = 5,
  anon_sym_EQ = 6,
  anon_sym_unset = 7,
  aux_sym_value_token1 = 8,
  aux_sym_value_token2 = 9,
  aux_sym_value_token3 = 10,
  aux_sym_value_token4 = 11,
  aux_sym_value_token5 = 12,
  aux_sym_value_token6 = 13,
  aux_sym_value_token7 = 14,
  aux_sym_value_token8 = 15,
  aux_sym_value_token9 = 16,
  aux_sym_value_token10 = 17,
  aux_sym_value_token11 = 18,
  aux_sym_value_token12 = 19,
  aux_sym_value_token13 = 20,
  aux_sym_value_token14 = 21,
  aux_sym_value_token15 = 22,
  sym__newline = 23,
  sym_document = 24,
  sym__line = 25,
  sym_section = 26,
  sym_section_header = 27,
  sym_pair = 28,
  sym_value = 29,
  aux_sym_document_repeat1 = 30,
  aux_sym_document_repeat2 = 31,
  aux_sym_section_repeat1 = 32,
  alias_sym_preamble = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LBRACK] = "[",
  [aux_sym_section_header_token1] = "section_name",
  [anon_sym_RBRACK] = "]",
  [aux_sym_pair_token1] = "key",
  [anon_sym_EQ] = "=",
  [anon_sym_unset] = "unset",
  [aux_sym_value_token1] = "number",
  [aux_sym_value_token2] = "spelling_language",
  [aux_sym_value_token3] = "boolean",
  [aux_sym_value_token4] = "boolean",
  [aux_sym_value_token5] = "boolean",
  [aux_sym_value_token6] = "indent_style",
  [aux_sym_value_token7] = "indent_style",
  [aux_sym_value_token8] = "end_of_line",
  [aux_sym_value_token9] = "end_of_line",
  [aux_sym_value_token10] = "end_of_line",
  [aux_sym_value_token11] = "charset",
  [aux_sym_value_token12] = "charset",
  [aux_sym_value_token13] = "charset",
  [aux_sym_value_token14] = "charset",
  [aux_sym_value_token15] = "charset",
  [sym__newline] = "_newline",
  [sym_document] = "document",
  [sym__line] = "_line",
  [sym_section] = "section",
  [sym_section_header] = "section_header",
  [sym_pair] = "pair",
  [sym_value] = "value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_section_repeat1] = "section_repeat1",
  [alias_sym_preamble] = "preamble",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_section_header_token1] = aux_sym_section_header_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_pair_token1] = aux_sym_pair_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_unset] = anon_sym_unset,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [aux_sym_value_token2] = aux_sym_value_token2,
  [aux_sym_value_token3] = aux_sym_value_token3,
  [aux_sym_value_token4] = aux_sym_value_token3,
  [aux_sym_value_token5] = aux_sym_value_token3,
  [aux_sym_value_token6] = aux_sym_value_token6,
  [aux_sym_value_token7] = aux_sym_value_token6,
  [aux_sym_value_token8] = aux_sym_value_token8,
  [aux_sym_value_token9] = aux_sym_value_token8,
  [aux_sym_value_token10] = aux_sym_value_token8,
  [aux_sym_value_token11] = aux_sym_value_token11,
  [aux_sym_value_token12] = aux_sym_value_token11,
  [aux_sym_value_token13] = aux_sym_value_token11,
  [aux_sym_value_token14] = aux_sym_value_token11,
  [aux_sym_value_token15] = aux_sym_value_token11,
  [sym__newline] = sym__newline,
  [sym_document] = sym_document,
  [sym__line] = sym__line,
  [sym_section] = sym_section,
  [sym_section_header] = sym_section_header,
  [sym_pair] = sym_pair,
  [sym_value] = sym_value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [alias_sym_preamble] = alias_sym_preamble,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_unset] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token4] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token5] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token6] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token7] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token8] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token9] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token10] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token11] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token12] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token13] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token14] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token15] = {
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
  [sym_value] = {
    .visible = true,
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
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_preamble] = {
    .visible = true,
    .named = true,
  },
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
  [20] = 20,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'F') ADVANCE(92);
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(89);
      if (lookahead == 'U') ADVANCE(111);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '\f') ADVANCE(117);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(138);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(127);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(125);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '1') ADVANCE(14);
      if (lookahead == '8') ADVANCE(134);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(133);
      END_STATE();
    case 14:
      if (lookahead == '6') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(8);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(30);
      if (lookahead == 'R') ADVANCE(53);
      if (lookahead == 'a') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(10);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(51);
      if (lookahead == 'F') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(129);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'L') ADVANCE(29);
      if (lookahead == 'O') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(27);
      if (lookahead == 'U') ADVANCE(52);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 's') ADVANCE(20);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == 'F') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 20:
      if (lookahead == 'P') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 21:
      if (lookahead == 'R') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(130);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 22:
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(3);
      if (lookahead == 't') ADVANCE(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(62);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(30);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(128);
      END_STATE();
    case 30:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(127);
      END_STATE();
    case 31:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 39:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(125);
      END_STATE();
    case 40:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(132);
      END_STATE();
    case 41:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(11);
      END_STATE();
    case 43:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 46:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 47:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 50:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(35);
      END_STATE();
    case 51:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 54:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 55:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 56:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '\f' &&
          lookahead != '=') ADVANCE(117);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '1') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '8') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '6') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(112);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(73);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'A') ADVANCE(110);
      if (lookahead == 'F') ADVANCE(117);
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(74);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'a') ADVANCE(70);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'F') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(68);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'P') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'R') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(71);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'T') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 't') ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(110);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_unset);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_unset);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(117);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_value_token2);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_value_token3);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_value_token4);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_value_token5);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_value_token6);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_value_token7);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_value_token8);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_value_token8);
      if (lookahead == '-') ADVANCE(55);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_value_token9);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_value_token9);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_value_token10);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_value_token11);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_value_token12);
      if (lookahead == '-') ADVANCE(31);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_value_token13);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_value_token14);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_value_token15);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 57},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 57},
  [4] = {.lex_state = 57},
  [5] = {.lex_state = 57},
  [6] = {.lex_state = 57},
  [7] = {.lex_state = 57},
  [8] = {.lex_state = 57},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 57},
  [13] = {.lex_state = 57},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_pair_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_unset] = ACTIONS(1),
    [aux_sym_value_token1] = ACTIONS(1),
    [aux_sym_value_token2] = ACTIONS(1),
    [aux_sym_value_token3] = ACTIONS(1),
    [aux_sym_value_token4] = ACTIONS(1),
    [aux_sym_value_token5] = ACTIONS(1),
    [aux_sym_value_token6] = ACTIONS(1),
    [aux_sym_value_token7] = ACTIONS(1),
    [aux_sym_value_token8] = ACTIONS(1),
    [aux_sym_value_token9] = ACTIONS(1),
    [aux_sym_value_token10] = ACTIONS(1),
    [aux_sym_value_token11] = ACTIONS(1),
    [aux_sym_value_token12] = ACTIONS(1),
    [aux_sym_value_token13] = ACTIONS(1),
    [aux_sym_value_token14] = ACTIONS(1),
    [aux_sym_value_token15] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(16),
    [sym__line] = STATE(8),
    [sym_section] = STATE(9),
    [sym_section_header] = STATE(7),
    [sym_pair] = STATE(8),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_document_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [aux_sym_pair_token1] = ACTIONS(9),
    [sym__newline] = ACTIONS(5),
  },
  [2] = {
    [sym_value] = STATE(19),
    [anon_sym_unset] = ACTIONS(11),
    [aux_sym_value_token1] = ACTIONS(11),
    [aux_sym_value_token2] = ACTIONS(11),
    [aux_sym_value_token3] = ACTIONS(11),
    [aux_sym_value_token4] = ACTIONS(11),
    [aux_sym_value_token5] = ACTIONS(11),
    [aux_sym_value_token6] = ACTIONS(11),
    [aux_sym_value_token7] = ACTIONS(11),
    [aux_sym_value_token8] = ACTIONS(13),
    [aux_sym_value_token9] = ACTIONS(13),
    [aux_sym_value_token10] = ACTIONS(11),
    [aux_sym_value_token11] = ACTIONS(11),
    [aux_sym_value_token12] = ACTIONS(13),
    [aux_sym_value_token13] = ACTIONS(11),
    [aux_sym_value_token14] = ACTIONS(11),
    [aux_sym_value_token15] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      aux_sym_pair_token1,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_document_repeat1,
    STATE(7), 1,
      sym_section_header,
    ACTIONS(5), 2,
      sym_comment,
      sym__newline,
    STATE(8), 2,
      sym__line,
      sym_pair,
    STATE(10), 2,
      sym_section,
      aux_sym_document_repeat2,
  [28] = 4,
    ACTIONS(22), 1,
      aux_sym_pair_token1,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(19), 2,
      sym_comment,
      sym__newline,
    STATE(4), 3,
      sym__line,
      sym_pair,
      aux_sym_section_repeat1,
  [45] = 5,
    ACTIONS(30), 1,
      aux_sym_pair_token1,
    STATE(5), 1,
      aux_sym_document_repeat1,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(27), 2,
      sym_comment,
      sym__newline,
    STATE(8), 2,
      sym__line,
      sym_pair,
  [64] = 4,
    ACTIONS(9), 1,
      aux_sym_pair_token1,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(35), 2,
      sym_comment,
      sym__newline,
    STATE(4), 3,
      sym__line,
      sym_pair,
      aux_sym_section_repeat1,
  [81] = 4,
    ACTIONS(9), 1,
      aux_sym_pair_token1,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(39), 2,
      sym_comment,
      sym__newline,
    STATE(6), 3,
      sym__line,
      sym_pair,
      aux_sym_section_repeat1,
  [98] = 1,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LBRACK,
      aux_sym_pair_token1,
      sym__newline,
  [106] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_section_header,
    STATE(11), 2,
      sym_section,
      aux_sym_document_repeat2,
  [120] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_section_header,
    STATE(11), 2,
      sym_section,
      aux_sym_document_repeat2,
  [134] = 4,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      sym_section_header,
    STATE(11), 2,
      sym_section,
      aux_sym_document_repeat2,
  [148] = 1,
    ACTIONS(52), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LBRACK,
      aux_sym_pair_token1,
      sym__newline,
  [156] = 1,
    ACTIONS(54), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LBRACK,
      aux_sym_pair_token1,
      sym__newline,
  [164] = 1,
    ACTIONS(56), 1,
      anon_sym_RBRACK,
  [168] = 1,
    ACTIONS(58), 1,
      aux_sym_section_header_token1,
  [172] = 1,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
  [176] = 1,
    ACTIONS(62), 1,
      sym__newline,
  [180] = 1,
    ACTIONS(64), 1,
      sym__newline,
  [184] = 1,
    ACTIONS(66), 1,
      sym__newline,
  [188] = 1,
    ACTIONS(68), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 81,
  [SMALL_STATE(8)] = 98,
  [SMALL_STATE(9)] = 106,
  [SMALL_STATE(10)] = 120,
  [SMALL_STATE(11)] = 134,
  [SMALL_STATE(12)] = 148,
  [SMALL_STATE(13)] = 156,
  [SMALL_STATE(14)] = 164,
  [SMALL_STATE(15)] = 168,
  [SMALL_STATE(16)] = 172,
  [SMALL_STATE(17)] = 176,
  [SMALL_STATE(18)] = 180,
  [SMALL_STATE(19)] = 184,
  [SMALL_STATE(20)] = 188,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(4),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(15),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 4),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [60] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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
