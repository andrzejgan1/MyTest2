#include "../inc/isBalanced.hpp"
#include "../inc/equ.hpp"
#include<vector>

bool isBalanced(std::string s)
{
    if(s.front() == '{' && s.back() == '}') return 1;
    return 0;
}
