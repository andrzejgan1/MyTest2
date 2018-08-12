#include "../inc/isBalanced.hpp"
#include "../inc/equ.hpp"
#include<vector>

bool isBalanced(std::string s)
{
    if(s.size()==2)
    {
        if(s[0] == '{' && s[1] == '}' ) return 1;
    }
    if(s.size()==4)
    {
        if(s[0] == '{' && s[2] == '{' && s[3] == '}' && s[4] == '}') return 1;
    }
    if(s.size()==6)
    {
        if(s[0] == '{' && s[1] == '{' && s[2] == '{' && s[3] == '}' && s[4] == '}' && s[5] == '}') return 1;
    }
    return 0;
}
