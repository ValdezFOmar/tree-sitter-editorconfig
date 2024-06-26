/**
 * @file EditorConfig specification v0.16.0 grammar for tree-sitter
 * @author Omar Valdez <omarantoniovaldezf2@gmail.com>
 * @license MIT
 * @see {@link https://spec.editorconfig.org/ EditorConfig Especification}
 * @see {@link https://github.com/editorconfig/editorconfig/wiki/EditorConfig-Properties EditorConfig Properties}
 *
 * @description Some rules where taken/adapted from other tree-sitter parsers:
 * @see {@link https://github.com/justinmk/tree-sitter-ini}
 * @see {@link https://github.com/shunsambongi/tree-sitter-gitignore}
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'editorconfig',

  extras: _ => [/[ \t]/],
  word: $ => $._anything,

  rules: {
    document: $ => seq(
      alias(repeat($._line), $.preamble),
      repeat($.section),
    ),

    comment: _ => /[#;].*/,

    _line: $ => choice(
      $.pair,
      $.comment,
      $._newline,
    ),

    section: $ => seq(
      $._section_header,
      repeat($._line)
    ),

    _section_header: $ => seq(
      '[',
      alias($._glob_expression, $.section_name),
      ']',
      $._newline
    ),

    // https://spec.editorconfig.org/#glob-expressions
    _glob_expression: $ => repeat1(choice(
      alias('*', $.wildcard_chars),
      alias('**', $.wildcard_chars_allow_slash),
      alias('?', $.wildcard_char_single),
      alias('/', $.path_separator),
      alias(/[^?*/\n{}\[\]]/, $.character),
      $.escaped_character,
      $.integer_range,
      $.brace_expansion,
      $.character_choice,
    )),

    escaped_character: _ => token(seq('\\', token.immediate(/\W/))),

    brace_expansion: $ => seq(
      '{',
      repeat(choice(',', $.expansion_string)), // Empty expansions are allowed
      '}',
    ),

    expansion_string: $ => prec.left(repeat1(prec.right($._glob_expression))),

    integer_range: $ => seq(
      '{',
      field('start', alias(/-?\d+/, $.number)),
      '..',
      field('end', alias(/-?\d+/, $.number)),
      '}',
    ),

    character_choice: $ => seq(
      '[',
      optional(alias(token.immediate('!'), $.negation)),
      repeat1(choice(
        $.character_range,
        $.escaped_character,
        alias(/[^\]\n/]/, $.character),
      )),
      ']',
    ),

    character_range: $ => seq(
      field('start', alias(/[^\]\n/]/, $.character)),
      token.immediate('-'),
      field('end', alias(token.immediate(/\w/), $.character)),
    ),

    pair: $ => seq(
      field('key', alias(/[^;#=\s\[][^=\n]*/, $.identifier)),
      '=',
      /[ \t]*/, // Eat all the leading white-space
      field('value', $._value),
      $._newline,
    ),

    _value: $ => choice(
      // The spec allows the use of arbitrary values even if they are not supported
      // so this capture is used as a fallback if no supported values match
      alias($._anything, $.other),
      alias(toCaseInsensitive('unset'), $.unset),
      alias(/\d+/, $.number),
      alias(/[a-z]{2}-[A-Z]{2}/, $.spelling_language),
      ...makeValues($.boolean, 'true', 'false', 'off'),
      ...makeValues($.indent_style, 'space', 'tab'),
      ...makeValues($.end_of_line, 'lf', 'cr', 'crlf'),
      ...makeValues($.charset, 'latin1', 'utf-8', 'utf-16be', 'utf-16le', 'utf-8-bom'),
    ),

    _anything: _ => /.*\S/,
    _newline: _ => /\r?\n/,
  }
});


/**
 * @param {SymbolRule<string>} namedNode The name of the node to alias these values
 * @param {...string} values Supported values defined in the spec
 */
function makeValues(namedNode, ...values) {
  return values.map(v => alias(toCaseInsensitive(v), namedNode))
}


/**
 * @param {string} str String to make case insensitive
 * @returns {RegExp} Case insensitive regex
 */
function toCaseInsensitive(str) {
  const alphaChar = /[a-zA-Z]/;
  return new RegExp(str.split('').map(
    char => alphaChar.test(char)
      ? '[' + char.toLowerCase() + char.toUpperCase() + ']'
      : char
  ).join(''));
}
