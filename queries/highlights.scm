(comment) @comment @spell

; consistency with ini and toml
(section_name
  (character) @type)

(expansion_string
  (character) @type)

(character_choice
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
