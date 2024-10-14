# tree-sitter-editorconfig

[![CI][ci-badge]][ci-workflow]

Grammar for [`.editorconfig`][editorconfig] files.
The parser tries to be complaint with version 0.16.0 of the [specification][editorconfig-spec].

## References

- EditorConfig [specification][editorconfig-spec]
- EditorConfig [Properties][properties]
- [`.editorconfig` files collection][config-collection] on the editorconfig wiki
- [Testings][core-test] for EditorConfig Core

## Editors

### Neovim

You can install this parser using [`nvim-treesitter`][nvim-treesitter],
run `TSInstall editorconfig`.


[ci-badge]: https://github.com/ValdezFOmar/tree-sitter-editorconfig/actions/workflows/ci.yml/badge.svg
[ci-workflow]: https://github.com/ValdezFOmar/tree-sitter-editorconfig/actions/workflows/ci.yml
[editorconfig]: https://editorconfig.org/
[editorconfig-spec]: https://spec.editorconfig.org/
[config-collection]: https://github.com/editorconfig/editorconfig/wiki/Projects-Using-EditorConfig
[core-test]: https://github.com/editorconfig/editorconfig-core-test
[properties]: https://github.com/editorconfig/editorconfig/wiki/EditorConfig-Properties
[nvim-treesitter]: https://github.com/nvim-treesitter/nvim-treesitter
