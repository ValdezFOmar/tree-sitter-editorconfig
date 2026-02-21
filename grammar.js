/**
 * @file editorconfig grammar for tree-sitter
 * @author Omar Valdez <omarantoniovaldezf2@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const NEWLINE = /\r?\n/;
const WHITE_SPACE = /[ \t]/;
const CHOICE_CHARACTER = /[^\]\r\n]/;

export default grammar({
  name: 'editorconfig',

  externals: $ => [
    $._end_of_file,
    $._integer_range_start,
  ],

  extras: _ => [WHITE_SPACE],

  rules: {
    editorconfig: $ => seq(
      optional($.preamble),
      repeat($.section),
    ),

    comment: $ => seq(/[#;].*/, $._eol),

    _line: $ => choice($.pair, $.comment, NEWLINE),

    preamble: $ => repeat1($._line),

    section: $ => seq(
      $.header,
      repeat($._line),
    ),

    header: $ => seq('[', $.glob, ']', $._eol),

    // https://spec.editorconfig.org/#glob-expressions
    glob: $ => prec.right(repeat1(choice(
      '/',
      $.wildcard,
      $.integer_range,
      $.brace_expansion,
      $.character_choice,
      $.character_escape,
      /[^?*{}\[\]/\r\n]/,
    ))),

    wildcard: _ => token(choice('*', '**', '?')),

    character_escape: _ => /\\[?*{},\[\]\\]/,

    // Empty strings are allowed
    brace_expansion: $ => seq('{', repeat(choice(',', $.glob)), '}'),

    integer_range: $ => seq(
      '{',
      field('start', alias($._integer_range_start, $.integer)),
      token.immediate('..'),
      field('end', alias(token.immediate(/-?\d+/), $.integer)),
      '}',
    ),

    character: _ => CHOICE_CHARACTER,

    character_range: $ => seq(
      field('start', $.character),
      token.immediate('-'),
      field('end', alias(token.immediate(CHOICE_CHARACTER), $.character)),
    ),

    character_choice: $ => seq(
      '[',
      optional(token.immediate('!')),
      repeat1(choice(
        $.character,
        $.character_range,
        alias(/\\[-\]\\]/, $.character_escape),
      )),
      ']',
    ),

    pair: $ => seq(
      field('key', $.property),
      '=',
      token(repeat(WHITE_SPACE)), // Eat all the leading white-space
      optional(field('value', $.string)),
      $._eol,
    ),

    // Starts and ends with a non-whitespace character,
    // with any character (including whitespace) in the middle.
    property: _ => /[^\s=#;\[]([^\n\r=]*[^\s=])?/,

    string: _ => /\S([^\n\r]*\S)?/,

    _eol: $ => choice(NEWLINE, $._end_of_file),
  },
});
