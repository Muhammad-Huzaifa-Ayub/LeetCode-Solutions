/*
20. Valid Parentheses

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.


Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true

Example 5:

Input: s = "([)]"

Output: false

*/

#include <iostream>
#include<stack>

using namespace std;

bool isValid ( const string &s )
{
    if (s.size() % 2 != 0)
    {
        return false;
    }
    stack<char> str;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '[' || s[i] == '{' || s[i] == '(')
        {
            str.push(s[i]);
        }
        else
        {
            if (str.empty())
            {
                return false;
            }
            else
            {
                if ( s[i] == ']' && str.top() == '[' )
                {
                    str.pop();
                }
                else if ( s[i] == '}' && str.top() == '{' )
                {
                    str.pop();
                }
                else if ( s[i] == ')' && str.top() == '(' )
                {
                    str.pop();
                }
                else return false;
            }
        }
    }
    if (str.empty()) return true;
    return false;
}


int main()
{
    string s = "()";
    isValid(s);

    return 0;
}