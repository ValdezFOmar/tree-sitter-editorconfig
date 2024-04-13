/**
 * @file EditorConfig specification v0.16.0 grammar for tree-sitter
 * @author Omar Valdez <omarantoniovaldezf2@gmail.com> 
 * @license MIT
 * @see {@link https://spec.editorconfig.org/|EditorConfig Especification}
 * @see {@link https://github.com/editorconfig/editorconfig/wiki/EditorConfig-Properties}
 *
 * Some rules where taken/adapted from other tree-sitter parsers:
 * @see {@link https://github.com/justinmk/tree-sitter-ini}
 * @see {@link https://github.com/shunsambongi/tree-sitter-gitignore}
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'editorconfig',

  extras: _ => [/[ \t]/],

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
      $.section_header,
      repeat(seq($._line))
    ),

    section_header: $ => seq(
      '[',
      alias(/[^\[\]\n]+/, $.section_name),
      ']',
      $._newline
    ),

    pair: $ => seq(
      alias(/[^;#=\s\[]+/, $.key),
      '=',
      $.value,
      $._newline,
    ),

    value: $ => choice(
      alias('unset', $.unset),
      alias(/\d+/, $.number),
      alias(/[a-z]{2}-[A-Z]{2}/, $.spelling_language),
      ...makeValues($.boolean, 'true', 'false', 'off'),
      ...makeValues($.indent_style, 'space', 'tab'),
      ...makeValues($.end_of_line, 'lf', 'cr', 'crlf'),
      ...makeValues($.charset, 'latin1', 'utf-8', 'utf-16be', 'utf-16le', 'utf-8-bom'),
    ),

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
