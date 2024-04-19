(comment) @comment @spell

(character) @type

(character_choice
  (character) @constant)

(character_range
  (character) @constant)

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
  "-"
  ".."
  "="
  (negation)
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
