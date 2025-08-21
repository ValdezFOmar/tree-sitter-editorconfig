(comment) @comment

(section_name) @markup.heading

(property) @property

(string) @string

(character) @character

(escaped_character) @string.special

(integer) @number

[
  "*"
  "?"
  "**"
] @character.special

[
  "="
  "!"
] @operator

[
  ","
  "-"
  "/"
  ".."
] @punctuation.delimiter

[
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket

; Special values
((pair
  key: (property) @_key
  value: (string) @string.special)
  (#eq? @_key "indent_style")
  (#any-of? @string.special "space" "tab"))

((pair
  key: (property) @_key
  value: (string) @string.special)
  (#eq? @_key "indent_size")
  (#eq? @string.special "tab"))

((pair
  key: (property) @_key
  value: (string) @string.special)
  (#eq? @_key "end_of_line")
  (#any-of? @string.special "lf" "cr" "crlf"))

((pair
  key: (property) @_key
  value: (string) @string.special)
  (#eq? @_key "charset")
  (#any-of? @string.special "latin1" "utf-8" "utf-8-bom" "utf-16be" "utf-16le"))

((string) @boolean
  (#any-of? @boolean "true" "false" "off"))

((string) @number
  (#lua-match? @number "^[0-9]+$"))

((string) @constant.builtin
  (#eq? @constant.builtin "unset"))
