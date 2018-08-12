#include "../inc/isBalanced.hpp"
#include "../inc/equ.hpp"
#include<vector>

bool isBalanced(std::string s)
{
    std::vector<int> a;
    std::vector<int> b;
    std::vector<int> c;
    if(s.size()%2 == 0 && s.size() != 0)
    {
        for (int i = 0; i < s.size(); i++)
        {
            switch (s[i])
            {
                case '{' : a.push_back(1); break;
                case '[' : b.push_back(1); break;
                case '(' : c.push_back(1); break;

                case '}' : 
                           {
                               if (a.empty()) return 0;
                               a.pop_back(); 
                               break;
                           }
                case ']' : 
                           {
                               if (b.empty()) return 0;
                               b.pop_back(); 
                               break;
                           }
                case ')' : 
                           {
                               if (c.empty()) return 0;
                               c.pop_back(); 
                               break;
                           }
            }
        }
        if(a.empty() && b.empty() && c.empty()) return 1;
    }
    return 0;
}
