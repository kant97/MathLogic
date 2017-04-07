#ifndef TOKEN_H
#define TOKEN_H

#include <iostream>

enum token {
    IMPL, OR, AND, NOT, BRACKET_OPEN,  BRACKET_CLOSE, BRACKET_OPEN_EXPR, BRACKET_OPEN_TERM,
    VARIABLE, END, EXIST, ANY, PLUS, MULTIPLY, PREDICATE_NAME, COMMA, EQUAL, HATCH
};

#endif