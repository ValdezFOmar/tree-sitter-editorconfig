/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const NEWLINE = /\r?\n/;
const WHITE_SPACE = /[ \t]/;

export default grammar({
  name: 'editorconfig',

  externals: $ => [$._end_of_file, $._integer_range_start, $._key_name_trimmed],

  extras: _ => [WHITE_SPACE],
  word: $ => $._anything,

  rules: {
    document: $ => seq(alias(repeat($._line), $.preamble), repeat($.section)),

    comment: _ => /[#;].*/,
    _line: $ => choice($.pair, $.comment, NEWLINE),

    section: $ => seq($._section_header, repeat($._line)),
    _section_header: $ => seq('[', alias($._glob_expression, $.section_name), ']', $._newline),

    // https://spec.editorconfig.org/#glob-expressions
    _glob_expression: $ =>
      repeat1(
        choice(
          alias('*', $.wildcard_characters),
          alias('**', $.wildcard_any_characters),
          alias('?', $.wildcard_single_character),
          alias('/', $.path_separator),
          alias(/[^?*/\n{}\[\]]/, $.character),
          $.escaped_character,
          $.integer_range,
          $.brace_expansion,
          $.character_choice,
        ),
      ),

    escaped_character: _ => token(seq('\\', token.immediate(/\W/))),

    // Empty strings are allowed
    brace_expansion: $ => seq('{', repeat(choice(',', $.expansion_string)), '}'),
    expansion_string: $ => prec.left(repeat1(prec.right($._glob_expression))),

    integer_range: $ =>
      seq(
        '{',
        field('start', alias($._integer_range_start, $.integer)),
        token.immediate('..'),
        field('end', alias(token.immediate(/-?\d+/), $.integer)),
        '}',
      ),

    character_choice: $ => seq('[', $._character_choice_content, ']'),

    _character_choice_content: $ =>
      seq(
        optional(alias(token.immediate('!'), $.negation)),
        repeat1(choice($.character_range, $.escaped_character, alias(/[^\]\r\n/]/, $.character))),
      ),

    character_range: $ =>
      seq(
        field('start', alias(/[^\]\r\n/]/, $.character)),
        token.immediate('-'),
        field('end', alias(token.immediate(/\w/), $.character)),
      ),

    pair: $ =>
      seq(
        field('key', alias($._key_name_trimmed, $.identifier)),
        '=',
        token(repeat(WHITE_SPACE)), // Eat all the leading white-space
        field('value', optional($._value)),
        $._newline,
      ),

    _value: $ =>
      choice(
        // The spec allows the use of arbitrary values even if they are not supported
        // so this capture is used as a fallback if no supported values match
        alias($._anything, $.unknown),
        alias(/unset/i, $.unset),
        alias(/\d+/, $.integer),
        // FIXME:
        // spelling_language accepts specifying only the language part without the region:
        // spelling_language = en
        alias(/[a-z]{2}-[A-Z]{2}/, $.spelling_language),
        alias(choice(/true/i, /false/i, /off/i), $.boolean),
        alias(choice(/space/i, /tab/i), $.indent_style),
        alias(choice(/lf/i, /cr/i, /crlf/i), $.end_of_line),
        alias(choice(/latin1/i, /utf-8/i, /utf-16be/i, /utf-16le/i, /utf-8-bom/i), $.charset),
      ),

    _anything: _ => /.*\S/,
    _newline: $ => choice(NEWLINE, $._end_of_file),
  },
});
