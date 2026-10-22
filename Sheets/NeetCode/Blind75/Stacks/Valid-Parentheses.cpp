// Given a string 's' containing parentheses, curly braces, and square brackets, return 'true' if all brackets are correctly matched and closed in the proper order; otherwise, return 'false'

#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;

    for (char ch : s)
    {
        if (ch == '(' || ch == '{' || ch == '[')
            st.push(ch);
        else
        {
            if (st.empty())
                return false;

            if ((ch == ')' && st.top() == '(') ||
                (ch == '}' && st.top() == '{') ||
                (ch == ']' && st.top() == '['))
                st.pop();
            else
                return false;
        }
    }

    return st.empty();
}

int main()
{
}