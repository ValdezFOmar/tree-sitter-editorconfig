(comment) @comment @spell

[
 "["
 "]"
] @punctuation.bracket

"=" @operator

(section_header
  (section_name) @type)

(pair
  key: (identifier) @property)

(boolean) @boolean
(number) @number
(other) @string

[
  (unset)
  (spelling_language)
  (indent_style)
  (end_of_line)
  (charset)
] @constant.builtin
