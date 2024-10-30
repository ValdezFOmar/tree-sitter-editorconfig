#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 1
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  aux_sym_comment_token1 = 1,
  aux_sym__line_token1 = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  sym_wildcard_characters = 5,
  sym_wildcard_any_characters = 6,
  sym_wildcard_single_character = 7,
  sym_path_separator = 8,
  sym_character = 9,
  sym_escaped_character = 10,
  anon_sym_LBRACE = 11,
  anon_sym_COMMA = 12,
  anon_sym_RBRACE = 13,
  anon_sym_DOT_DOT = 14,
  aux_sym_integer_range_token1 = 15,
  aux_sym_character_choice_token1 = 16,
  sym_negation = 17,
  anon_sym_DASH = 18,
  aux_sym_character_range_token1 = 19,
  anon_sym_EQ = 20,
  aux_sym_pair_token1 = 21,
  sym_unset = 22,
  sym_integer = 23,
  sym_boolean = 24,
  sym_end_of_line = 25,
  sym_indent_style = 26,
  sym_spelling_language = 27,
  sym_charset = 28,
  sym_identifier = 29,
  sym_unknown = 30,
  sym__end_of_file = 31,
  sym__integer_range_start = 32,
  sym_document = 33,
  sym_comment = 34,
  sym_preamble = 35,
  sym_section = 36,
  sym__section_header = 37,
  aux_sym__glob_expression = 38,
  sym_brace_expansion = 39,
  sym_expansion_string = 40,
  sym_integer_range = 41,
  sym_character_choice = 42,
  sym_character_range = 43,
  sym_pair = 44,
  aux_sym_document_repeat1 = 45,
  aux_sym_preamble_repeat1 = 46,
  aux_sym_brace_expansion_repeat1 = 47,
  aux_sym_expansion_string_repeat1 = 48,
  aux_sym_character_choice_repeat1 = 49,
  alias_sym_section_name = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym__line_token1] = "_line_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_wildcard_characters] = "wildcard_characters",
  [sym_wildcard_any_characters] = "wildcard_any_characters",
  [sym_wildcard_single_character] = "wildcard_single_character",
  [sym_path_separator] = "path_separator",
  [sym_character] = "character",
  [sym_escaped_character] = "escaped_character",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT_DOT] = "..",
  [aux_sym_integer_range_token1] = "integer",
  [aux_sym_character_choice_token1] = "character",
  [sym_negation] = "negation",
  [anon_sym_DASH] = "-",
  [aux_sym_character_range_token1] = "character",
  [anon_sym_EQ] = "=",
  [aux_sym_pair_token1] = "pair_token1",
  [sym_unset] = "unset",
  [sym_integer] = "integer",
  [sym_boolean] = "boolean",
  [sym_end_of_line] = "end_of_line",
  [sym_indent_style] = "indent_style",
  [sym_spelling_language] = "spelling_language",
  [sym_charset] = "charset",
  [sym_identifier] = "identifier",
  [sym_unknown] = "unknown",
  [sym__end_of_file] = "_end_of_file",
  [sym__integer_range_start] = "integer",
  [sym_document] = "document",
  [sym_comment] = "comment",
  [sym_preamble] = "preamble",
  [sym_section] = "section",
  [sym__section_header] = "_section_header",
  [aux_sym__glob_expression] = "_glob_expression",
  [sym_brace_expansion] = "brace_expansion",
  [sym_expansion_string] = "expansion_string",
  [sym_integer_range] = "integer_range",
  [sym_character_choice] = "character_choice",
  [sym_character_range] = "character_range",
  [sym_pair] = "pair",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_preamble_repeat1] = "preamble_repeat1",
  [aux_sym_brace_expansion_repeat1] = "brace_expansion_repeat1",
  [aux_sym_expansion_string_repeat1] = "expansion_string_repeat1",
  [aux_sym_character_choice_repeat1] = "character_choice_repeat1",
  [alias_sym_section_name] = "section_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_wildcard_characters] = sym_wildcard_characters,
  [sym_wildcard_any_characters] = sym_wildcard_any_characters,
  [sym_wildcard_single_character] = sym_wildcard_single_character,
  [sym_path_separator] = sym_path_separator,
  [sym_character] = sym_character,
  [sym_escaped_character] = sym_escaped_character,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [aux_sym_integer_range_token1] = sym_integer,
  [aux_sym_character_choice_token1] = sym_character,
  [sym_negation] = sym_negation,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_character_range_token1] = sym_character,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_pair_token1] = aux_sym_pair_token1,
  [sym_unset] = sym_unset,
  [sym_integer] = sym_integer,
  [sym_boolean] = sym_boolean,
  [sym_end_of_line] = sym_end_of_line,
  [sym_indent_style] = sym_indent_style,
  [sym_spelling_language] = sym_spelling_language,
  [sym_charset] = sym_charset,
  [sym_identifier] = sym_identifier,
  [sym_unknown] = sym_unknown,
  [sym__end_of_file] = sym__end_of_file,
  [sym__integer_range_start] = sym_integer,
  [sym_document] = sym_document,
  [sym_comment] = sym_comment,
  [sym_preamble] = sym_preamble,
  [sym_section] = sym_section,
  [sym__section_header] = sym__section_header,
  [aux_sym__glob_expression] = aux_sym__glob_expression,
  [sym_brace_expansion] = sym_brace_expansion,
  [sym_expansion_string] = sym_expansion_string,
  [sym_integer_range] = sym_integer_range,
  [sym_character_choice] = sym_character_choice,
  [sym_character_range] = sym_character_range,
  [sym_pair] = sym_pair,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_preamble_repeat1] = aux_sym_preamble_repeat1,
  [aux_sym_brace_expansion_repeat1] = aux_sym_brace_expansion_repeat1,
  [aux_sym_expansion_string_repeat1] = aux_sym_expansion_string_repeat1,
  [aux_sym_character_choice_repeat1] = aux_sym_character_choice_repeat1,
  [alias_sym_section_name] = alias_sym_section_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_wildcard_characters] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard_any_characters] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard_single_character] = {
    .visible = true,
    .named = true,
  },
  [sym_path_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
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
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integer_range_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_character_choice_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_negation] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unset] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_end_of_line] = {
    .visible = true,
    .named = true,
  },
  [sym_indent_style] = {
    .visible = true,
    .named = true,
  },
  [sym_spelling_language] = {
    .visible = true,
    .named = true,
  },
  [sym_charset] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_unknown] = {
    .visible = true,
    .named = true,
  },
  [sym__end_of_file] = {
    .visible = false,
    .named = true,
  },
  [sym__integer_range_start] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_preamble] = {
    .visible = true,
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
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_preamble_repeat1] = {
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
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
  [1] =
    {field_end, 2},
    {field_start, 0},
  [3] =
    {field_key, 0},
    {field_value, 3},
  [5] =
    {field_end, 3},
    {field_start, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_section_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__glob_expression, 2,
    aux_sym__glob_expression,
    alias_sym_section_name,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 9,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 17,
  [22] = 15,
  [23] = 16,
  [24] = 19,
  [25] = 20,
  [26] = 18,
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
  [40] = 32,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 36,
  [45] = 42,
  [46] = 46,
  [47] = 47,
  [48] = 46,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 56,
  [61] = 54,
  [62] = 55,
};

static TSCharacterRange sym_character_character_set_1[] = {
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
        '\n', 18,
        '\r', 1,
        '!', 38,
        '*', 21,
        ',', 31,
        '-', 39,
        '.', 8,
        '/', 24,
        '=', 41,
        '?', 23,
        '[', 19,
        '\\', 13,
        ']', 20,
        '{', 30,
        '}', 32,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(18);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 18,
        '\r', 1,
        'C', 98,
        'F', 75,
        'L', 76,
        'O', 89,
        'S', 97,
        'T', 77,
        'U', 94,
        'c', 74,
        'f', 68,
        'l', 69,
        'o', 71,
        's', 73,
        't', 70,
        'u', 72,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '/' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(35);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '*', 21,
        ',', 31,
        '/', 24,
        '?', 23,
        '[', 19,
        '\\', 28,
        '{', 30,
        '}', 32,
        '\t', 26,
        ' ', 26,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(25);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '*', 21,
        '/', 24,
        '?', 23,
        '[', 19,
        '\\', 28,
        ']', 20,
        '{', 30,
        '\t', 27,
        ' ', 27,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '/') ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '/') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '=') ADVANCE(54);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(29);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      ADVANCE_MAP(
        '\n', 18,
        '\r', 1,
        '*', 21,
        ',', 31,
        '/', 24,
        '=', 41,
        '?', 23,
        '[', 19,
        '\\', 13,
        ']', 20,
        '{', 30,
        '}', 32,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(17);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '=') ADVANCE(54);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_wildcard_characters);
      if (lookahead == '*') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_wildcard_any_characters);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_wildcard_single_character);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_path_separator);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if ((!eof && set_contains(sym_character_character_set_1, 9, lookahead))) ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if ((!eof && set_contains(sym_character_character_set_1, 9, lookahead))) ADVANCE(25);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_character);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_escaped_character);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_integer_range_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_character_choice_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_character_choice_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '/' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_character_choice_token1);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(29);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_negation);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_character_range_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_unset);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_end_of_line);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_end_of_line);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_end_of_line);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_end_of_line);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_indent_style);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_spelling_language);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_charset);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_charset);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '=') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '1') ADVANCE(67);
      if (lookahead == '8') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '1') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '6') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'A') ADVANCE(101);
      if (lookahead == 'F') ADVANCE(49);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'R') ADVANCE(103);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'F') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'N') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'P') ADVANCE(78);
      if (lookahead == 'p') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'R') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(85);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 4, .external_lex_state = 2},
  [3] = {.lex_state = 4, .external_lex_state = 2},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 2, .external_lex_state = 3},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 42},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_wildcard_characters] = ACTIONS(1),
    [sym_wildcard_any_characters] = ACTIONS(1),
    [sym_wildcard_single_character] = ACTIONS(1),
    [sym_path_separator] = ACTIONS(1),
    [sym_escaped_character] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [sym_negation] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_character_range_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__end_of_file] = ACTIONS(1),
    [sym__integer_range_start] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(53),
    [sym_comment] = STATE(28),
    [sym_preamble] = STATE(33),
    [sym_section] = STATE(43),
    [sym__section_header] = STATE(30),
    [sym_pair] = STATE(28),
    [aux_sym_document_repeat1] = STATE(43),
    [aux_sym_preamble_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym__line_token1] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      sym__integer_range_start,
    STATE(8), 1,
      aux_sym_expansion_string_repeat1,
    STATE(10), 1,
      aux_sym__glob_expression,
    STATE(4), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(17), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(15), 6,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
  [39] = 10,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      sym__integer_range_start,
    STATE(8), 1,
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
    ACTIONS(15), 6,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
  [78] = 9,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
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
    ACTIONS(15), 6,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
  [114] = 9,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
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
    ACTIONS(15), 6,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
  [150] = 9,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
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
    ACTIONS(40), 6,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
  [186] = 7,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
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
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
  [216] = 4,
    STATE(7), 1,
      aux_sym_expansion_string_repeat1,
    STATE(10), 1,
      aux_sym__glob_expression,
    STATE(17), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(62), 10,
      anon_sym_LBRACK,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [240] = 6,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      aux_sym__glob_expression,
    ACTIONS(73), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(17), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(67), 6,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
  [267] = 6,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      aux_sym__glob_expression,
    ACTIONS(75), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(17), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(15), 6,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
  [294] = 6,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym__glob_expression,
    STATE(21), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(81), 6,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
  [320] = 6,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym__glob_expression,
    STATE(21), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(88), 6,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
  [346] = 5,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      aux_sym__glob_expression,
    STATE(21), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(81), 6,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
  [369] = 2,
    ACTIONS(94), 2,
      sym__end_of_file,
      aux_sym__line_token1,
    ACTIONS(96), 8,
      sym_unset,
      sym_integer,
      sym_boolean,
      sym_end_of_line,
      sym_indent_style,
      sym_spelling_language,
      sym_charset,
      sym_unknown,
  [384] = 1,
    ACTIONS(98), 10,
      anon_sym_LBRACK,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [397] = 1,
    ACTIONS(100), 10,
      anon_sym_LBRACK,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [410] = 1,
    ACTIONS(102), 10,
      anon_sym_LBRACK,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [423] = 1,
    ACTIONS(104), 10,
      anon_sym_LBRACK,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [436] = 1,
    ACTIONS(106), 10,
      anon_sym_LBRACK,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [449] = 1,
    ACTIONS(108), 10,
      anon_sym_LBRACK,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [462] = 1,
    ACTIONS(102), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
      anon_sym_LBRACE,
  [474] = 1,
    ACTIONS(98), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
      anon_sym_LBRACE,
  [486] = 1,
    ACTIONS(100), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
      anon_sym_LBRACE,
  [498] = 1,
    ACTIONS(106), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
      anon_sym_LBRACE,
  [510] = 1,
    ACTIONS(108), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
      anon_sym_LBRACE,
  [522] = 1,
    ACTIONS(104), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_wildcard_characters,
      sym_wildcard_any_characters,
      sym_wildcard_single_character,
      sym_path_separator,
      sym_character,
      sym_escaped_character,
      anon_sym_LBRACE,
  [534] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(112), 1,
      aux_sym__line_token1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(29), 3,
      sym_comment,
      sym_pair,
      aux_sym_preamble_repeat1,
  [553] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(112), 1,
      aux_sym__line_token1,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(29), 3,
      sym_comment,
      sym_pair,
      aux_sym_preamble_repeat1,
  [572] = 5,
    ACTIONS(118), 1,
      aux_sym_comment_token1,
    ACTIONS(121), 1,
      aux_sym__line_token1,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(29), 3,
      sym_comment,
      sym_pair,
      aux_sym_preamble_repeat1,
  [591] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(129), 1,
      aux_sym__line_token1,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(27), 3,
      sym_comment,
      sym_pair,
      aux_sym_preamble_repeat1,
  [610] = 4,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    ACTIONS(133), 1,
      sym_escaped_character,
    ACTIONS(136), 1,
      aux_sym_character_choice_token1,
    STATE(31), 2,
      sym_character_range,
      aux_sym_character_choice_repeat1,
  [624] = 4,
    ACTIONS(139), 1,
      sym_escaped_character,
    ACTIONS(141), 1,
      aux_sym_character_choice_token1,
    ACTIONS(143), 1,
      sym_negation,
    STATE(36), 2,
      sym_character_range,
      aux_sym_character_choice_repeat1,
  [638] = 4,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym__section_header,
    STATE(39), 2,
      sym_section,
      aux_sym_document_repeat1,
  [652] = 1,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym__line_token1,
      anon_sym_LBRACK,
      sym_identifier,
  [660] = 1,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym__line_token1,
      anon_sym_LBRACK,
      sym_identifier,
  [668] = 4,
    ACTIONS(141), 1,
      aux_sym_character_choice_token1,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    ACTIONS(153), 1,
      sym_escaped_character,
    STATE(31), 2,
      sym_character_range,
      aux_sym_character_choice_repeat1,
  [682] = 1,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym__line_token1,
      anon_sym_LBRACK,
      sym_identifier,
  [690] = 1,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym__line_token1,
      anon_sym_LBRACK,
      sym_identifier,
  [698] = 4,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym__section_header,
    STATE(41), 2,
      sym_section,
      aux_sym_document_repeat1,
  [712] = 4,
    ACTIONS(141), 1,
      aux_sym_character_choice_token1,
    ACTIONS(161), 1,
      sym_escaped_character,
    ACTIONS(163), 1,
      sym_negation,
    STATE(44), 2,
      sym_character_range,
      aux_sym_character_choice_repeat1,
  [726] = 4,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym__section_header,
    STATE(41), 2,
      sym_section,
      aux_sym_document_repeat1,
  [740] = 4,
    ACTIONS(141), 1,
      aux_sym_character_choice_token1,
    ACTIONS(153), 1,
      sym_escaped_character,
    ACTIONS(170), 1,
      anon_sym_RBRACK,
    STATE(31), 2,
      sym_character_range,
      aux_sym_character_choice_repeat1,
  [754] = 4,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym__section_header,
    STATE(41), 2,
      sym_section,
      aux_sym_document_repeat1,
  [768] = 4,
    ACTIONS(141), 1,
      aux_sym_character_choice_token1,
    ACTIONS(153), 1,
      sym_escaped_character,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    STATE(31), 2,
      sym_character_range,
      aux_sym_character_choice_repeat1,
  [782] = 4,
    ACTIONS(141), 1,
      aux_sym_character_choice_token1,
    ACTIONS(153), 1,
      sym_escaped_character,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
    STATE(31), 2,
      sym_character_range,
      aux_sym_character_choice_repeat1,
  [796] = 3,
    ACTIONS(141), 1,
      aux_sym_character_choice_token1,
    ACTIONS(176), 1,
      sym_escaped_character,
    STATE(42), 2,
      sym_character_range,
      aux_sym_character_choice_repeat1,
  [807] = 2,
    ACTIONS(180), 1,
      anon_sym_DASH,
    ACTIONS(178), 3,
      anon_sym_RBRACK,
      sym_escaped_character,
      aux_sym_character_choice_token1,
  [816] = 3,
    ACTIONS(141), 1,
      aux_sym_character_choice_token1,
    ACTIONS(182), 1,
      sym_escaped_character,
    STATE(45), 2,
      sym_character_range,
      aux_sym_character_choice_repeat1,
  [827] = 1,
    ACTIONS(184), 3,
      anon_sym_RBRACK,
      sym_escaped_character,
      aux_sym_character_choice_token1,
  [833] = 1,
    ACTIONS(186), 2,
      sym__end_of_file,
      aux_sym__line_token1,
  [838] = 1,
    ACTIONS(188), 2,
      sym__end_of_file,
      aux_sym__line_token1,
  [843] = 1,
    ACTIONS(190), 2,
      sym__end_of_file,
      aux_sym__line_token1,
  [848] = 1,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
  [852] = 1,
    ACTIONS(194), 1,
      aux_sym_integer_range_token1,
  [856] = 1,
    ACTIONS(196), 1,
      anon_sym_DOT_DOT,
  [860] = 1,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
  [864] = 1,
    ACTIONS(200), 1,
      anon_sym_EQ,
  [868] = 1,
    ACTIONS(202), 1,
      aux_sym_character_range_token1,
  [872] = 1,
    ACTIONS(204), 1,
      aux_sym_pair_token1,
  [876] = 1,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
  [880] = 1,
    ACTIONS(208), 1,
      aux_sym_integer_range_token1,
  [884] = 1,
    ACTIONS(210), 1,
      anon_sym_DOT_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 150,
  [SMALL_STATE(7)] = 186,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 240,
  [SMALL_STATE(10)] = 267,
  [SMALL_STATE(11)] = 294,
  [SMALL_STATE(12)] = 320,
  [SMALL_STATE(13)] = 346,
  [SMALL_STATE(14)] = 369,
  [SMALL_STATE(15)] = 384,
  [SMALL_STATE(16)] = 397,
  [SMALL_STATE(17)] = 410,
  [SMALL_STATE(18)] = 423,
  [SMALL_STATE(19)] = 436,
  [SMALL_STATE(20)] = 449,
  [SMALL_STATE(21)] = 462,
  [SMALL_STATE(22)] = 474,
  [SMALL_STATE(23)] = 486,
  [SMALL_STATE(24)] = 498,
  [SMALL_STATE(25)] = 510,
  [SMALL_STATE(26)] = 522,
  [SMALL_STATE(27)] = 534,
  [SMALL_STATE(28)] = 553,
  [SMALL_STATE(29)] = 572,
  [SMALL_STATE(30)] = 591,
  [SMALL_STATE(31)] = 610,
  [SMALL_STATE(32)] = 624,
  [SMALL_STATE(33)] = 638,
  [SMALL_STATE(34)] = 652,
  [SMALL_STATE(35)] = 660,
  [SMALL_STATE(36)] = 668,
  [SMALL_STATE(37)] = 682,
  [SMALL_STATE(38)] = 690,
  [SMALL_STATE(39)] = 698,
  [SMALL_STATE(40)] = 712,
  [SMALL_STATE(41)] = 726,
  [SMALL_STATE(42)] = 740,
  [SMALL_STATE(43)] = 754,
  [SMALL_STATE(44)] = 768,
  [SMALL_STATE(45)] = 782,
  [SMALL_STATE(46)] = 796,
  [SMALL_STATE(47)] = 807,
  [SMALL_STATE(48)] = 816,
  [SMALL_STATE(49)] = 827,
  [SMALL_STATE(50)] = 833,
  [SMALL_STATE(51)] = 838,
  [SMALL_STATE(52)] = 843,
  [SMALL_STATE(53)] = 848,
  [SMALL_STATE(54)] = 852,
  [SMALL_STATE(55)] = 856,
  [SMALL_STATE(56)] = 860,
  [SMALL_STATE(57)] = 864,
  [SMALL_STATE(58)] = 868,
  [SMALL_STATE(59)] = 872,
  [SMALL_STATE(60)] = 876,
  [SMALL_STATE(61)] = 880,
  [SMALL_STATE(62)] = 884,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_string, 1, 0, 0),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(40),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(17),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(32),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(21),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_expansion, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_choice, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__glob_expression, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_expansion, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_choice, 4, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_range, 5, 0, 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_choice_repeat1, 2, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_choice_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_choice_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_header, 4, 0, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 4, 0, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 5, 0, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_choice_repeat1, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_range, 3, 0, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [192] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__end_of_file = 0,
  ts_external_token__integer_range_start = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__end_of_file] = sym__end_of_file,
  [ts_external_token__integer_range_start] = sym__integer_range_start,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__end_of_file] = true,
    [ts_external_token__integer_range_start] = true,
  },
  [2] = {
    [ts_external_token__integer_range_start] = true,
  },
  [3] = {
    [ts_external_token__end_of_file] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_editorconfig_external_scanner_create(void);
void tree_sitter_editorconfig_external_scanner_destroy(void *);
bool tree_sitter_editorconfig_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_editorconfig_external_scanner_serialize(void *, char *);
void tree_sitter_editorconfig_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_editorconfig_external_scanner_create,
      tree_sitter_editorconfig_external_scanner_destroy,
      tree_sitter_editorconfig_external_scanner_scan,
      tree_sitter_editorconfig_external_scanner_serialize,
      tree_sitter_editorconfig_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
