/*
    Made by Noah Van Miert
    7/12/2022

    Apollo Compiler
*/

#include "ast.h"

#include "../../core.h"

#include <stdlib.h>


struct Ast *create_ast(enum AstType type)
{
    struct Ast *ast = xmalloc(sizeof(struct Ast));

    ast->type = type;

    /* AST_STRING */
    ast->string_value = NULL;

    /* AST_FUNCTION_DEF */
    ast->fn_name = NULL;
    ast->fn_body = NULL;

    /* AST_FUNCTION_CALL */
    ast->fn_call_name = NULL;

    /* AST_COMPOUND */
    ast->compound_value = NULL;
    ast->compound_size = 0;

    return ast;
}


void ast_compound_add(struct Ast *ast, struct Ast *item)
{
    ast->compound_size++;

    if (ast->compound_value == NULL)
        ast->compound_value = xmalloc(sizeof(struct Ast *));
    else
        ast->compound_value = xrealloc(ast->compound_value, sizeof(struct Ast *) * ast->compound_size);

    ast->compound_value[ast->compound_size - 1] = item;
}