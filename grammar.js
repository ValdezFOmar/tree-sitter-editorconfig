/**
 * @file editorconfig grammar for tree-sitter
 * @author Omar Valdez <omarantoniovaldezf2@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const NEWLINE = /\r?\n/;
const WHITE_SPACE = /[ \t]/;

module.exports = grammar({
  name: 'editorconfig',

  externals: $ => [
    $._end_of_file,
    $._integer_range_start,
  ],

  inline: $ => [
    $._eol,
    $._line,
  ],

  extras: _ => [WHITE_SPACE],

  rules: {
    document: $ => seq(
      optional($.preamble),
      repeat($.section),
    ),

    comment: $ => seq(/[#;].*/, $._eol),

    _line: $ => choice($.pair, $.comment, NEWLINE),

    preamble: $ => repeat1($._line),

    section: $ => seq($._section_header, repeat($._line)),

    _section_header: $ => seq(
      '[',
      alias($._glob_expression, $.section_name),
      ']',
      $._eol,
    ),

    // https://spec.editorconfig.org/#glob-expressions
    _glob_expression: $ => repeat1(choice(
      $.character,
      $.integer_range,
      $.path_separator,
      $.brace_expansion,
      $.character_choice,
      $.escaped_character,
      $.wildcard_characters,
      $.wildcard_any_characters,
      $.wildcard_single_character,
    )),

    wildcard_characters: _ => '*',
    wildcard_any_characters: _ => '**',
    wildcard_single_character: _ => '?',
    path_separator: _ => '/',
    character: _ => /[^?*/\n{}\[\]]/,

    escaped_character: _ => /\\\W/,

    // Empty strings are allowed
    brace_expansion: $ => seq(
      '{',
      repeat(choice(
        ',',
        $.expansion_string,
      )),
      '}'
    ),

    expansion_string: $ => prec.left(repeat1(prec.right($._glob_expression))),

    integer_range: $ => seq(
      '{',
      field('start', alias($._integer_range_start, $.integer)),
      token.immediate('..'),
      field('end', alias(token.immediate(/-?\d+/), $.integer)),
      '}',
    ),

    character_choice: $ => seq(
      '[',
      optional($.negation),
      repeat1(choice(
        $.character_range,
        $.escaped_character,
        alias(/[^\]\r\n/]/, $.character),
      )),
      ']',
    ),

    negation: _ => token.immediate('!'),

    character_range: $ => seq(
      field('start', alias(/[^\]\r\n/]/, $.character)),
      token.immediate('-'),
      field('end', alias(token.immediate(/\w/), $.character)),
    ),

    pair: $ => seq(
      field('key', $.identifier),
      '=',
      token(repeat(WHITE_SPACE)), // Eat all the leading white-space
      field('value', optional(choice(
        $.unset,
        $.unknown,
        $.integer,
        $.boolean,
        $.charset,
        $.end_of_line,
        $.indent_style,
        $.spelling_language,
      ))),
      $._eol,
    ),

    unset: _ => /unset/i,
    integer: _ => /\d+/,
    boolean: _ => /true|false|off/i,
    end_of_line: _ => /lf|cr|crlf/i,
    indent_style: _ => /space|tab/i,
    spelling_language: _ => /[a-z]{2}(-[A-Z]{2})?/,
    charset: _ => /latin1|utf-8|utf-16be|utf-16le|utf-8-bom/i,

    // Starts and ends with a non-whitespace character, with
    // any character (including withespace) in the middle.
    identifier: _ => /[^\s=#;\[]([^\n\r=]*[^\s=])?/,

    // The spec allows the use of arbitrary values even if they are not supported
    // so this capture is used as a fallback if no supported values match
    unknown: _ => /\S([^\n\r]*\S)?/,

    _eol: $ => choice(NEWLINE, $._end_of_file),
  },
});
