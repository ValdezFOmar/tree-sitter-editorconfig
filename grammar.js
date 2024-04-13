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

  rules: {
    document: $ => repeat(choice(
        $.any,
        $.comment,
        $._white_space,
        $._newline
    )),
    comment: _ => /[#;].*/,

    any: _ => /.+/,
    _white_space: _ => /\s+/,
    _newline: _ => /\r?\n/,
  }
});
