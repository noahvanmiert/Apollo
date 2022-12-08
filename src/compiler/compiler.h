/*
    Made by Noah Van Miert
    8/12/2022

    Apollo Compiler
*/

#ifndef __COMPILER_H_
#define __COMPILER_H_

#include "../parser/ast/ast.h"

void nasm_init();

const char *nasm_compile(struct Ast *node);

void nasm_compile_statements(struct Ast *node);
void nasm_compile_compound(struct Ast *node);
void nasm_compile_fn_def(struct Ast *node);
void nasm_compile_fn_call(struct Ast *node);

#endif