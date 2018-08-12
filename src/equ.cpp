#include "equ.hpp"

char equ(char a)
{
    if (a == '{') return '}';
    if (a == '[') return ']';
    if (a == '(') return ')';
    return 0;
}

