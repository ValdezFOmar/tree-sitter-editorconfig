#include "tree_sitter/parser.h"

enum TokenType {
    END_OF_FILE,
    INTEGER_RANGE_START,
    ERROR_SENTINEL,
};

static bool is_digit(int32_t character)
{
    return character >= '0' && character <= '9';
}

static bool parse_integer_range(TSLexer *lexer, const bool *valid_symbols)
{
    int32_t previous = lexer->lookahead;
    lexer->advance(lexer, false);

    if (!is_digit(previous) && !(previous == '-' && is_digit(lexer->lookahead))) {
        return false;
    }

    while (is_digit(lexer->lookahead)) {
        previous = lexer->lookahead;
        lexer->advance(lexer, false);
    }
    // Integer ends here, but keep parsing to see if its a valid integer range
    lexer->mark_end(lexer);

    previous = lexer->lookahead;
    lexer->advance(lexer, false);

    if (!(previous == '.' && lexer->lookahead == '.')) {
        return false;
    }

    lexer->result_symbol = INTEGER_RANGE_START;
    return true;
}

bool tree_sitter_editorconfig_external_scanner_scan(
    void *payload, TSLexer *lexer, const bool *valid_symbols)
{
    if (valid_symbols[ERROR_SENTINEL]) {
        // Tree-sitter is in error correction mode, don't parse anything
        return false;
    }
    if (valid_symbols[END_OF_FILE]) {
        if (!lexer->eof(lexer)) {
            return false;
        }
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        lexer->result_symbol = END_OF_FILE;
        return true;
    }
    const int32_t first_char = lexer->lookahead;
    if (valid_symbols[INTEGER_RANGE_START] && (first_char == '-' || is_digit(first_char))) {
        return parse_integer_range(lexer, valid_symbols);
    }
    return false;
}

void *tree_sitter_editorconfig_external_scanner_create()
{
    return NULL;
}

void tree_sitter_editorconfig_external_scanner_destroy(void *payload)
{
    /* NOOP */
}

unsigned tree_sitter_editorconfig_external_scanner_serialize(void *payload, char *buffer)
{
    return 0;
}

void tree_sitter_editorconfig_external_scanner_deserialize(
    void *payload, const char *buffer, unsigned length)
{
    /* NOOP */
}
