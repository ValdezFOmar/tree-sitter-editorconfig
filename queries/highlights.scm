(comment) @comment @spell

(character) @type

[
 "["
 "]"
 "{"
 "}"
] @punctuation.bracket

[
  (path_separator)
  ","
] @punctuation.delimiter

[
  ".."
  "="
  (wildcard_chars)
  (wildcard_chars_allow_slash)
  (wildcard_char_single)
] @operator

(escaped_character) @string.escape

(pair
  key: (identifier) @property)

(boolean) @boolean
(number) @number

[
  (unset)
  (spelling_language)
  (indent_style)
  (end_of_line)
  (charset)
] @constant.builtin
