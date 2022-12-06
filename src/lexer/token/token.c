#include "token.h"

#include "../../core.h"

#include <stdlib.h>


struct Token *create_token(struct Location location, enum TokenType type, const char *value)
{
    struct Token *token = malloc(sizeof (struct Token));
    assert_memory(token);

    token->location = location;
    token->type = type;
    token->value = value;

    return token;
}


const char *get_type_str(enum TokenType type)
{
    switch (type)
    {
        case TOKEN_WORD:   return "TOKEN_WORD";
        case TOKEN_STRING: return "TOKEN_STRING";
        case TOKEN_END:    return "TOKEN_END";

        default: assert(0);
    }
}