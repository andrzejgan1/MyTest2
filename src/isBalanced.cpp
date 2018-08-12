#include "../inc/isBalanced.hpp"
#include "../inc/equ.hpp"
#include<vector>

bool isBalanced(std::string s)
{
    if(s.size()%2 == 0 && s.size() != 0)
    {
        for (int i = 0; i < s.size()/2; i++)
        {
            if (s[i] != '{') return 0;
            if (s[s.size()-1-i] != '}') return 0;
        }
        return 1;
    }
    return 0;
}
