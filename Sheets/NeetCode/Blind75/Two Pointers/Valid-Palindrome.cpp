// Given a string 's', return 'true' if it reads the same forward and backward, ignoring case and non-alphanumeric characters; otherwise, return 'false'

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int l = 0, r = s.size() - 1;

    while (l < r)
    {
        if (!isalnum(s[l]))
        {
            l++;
            continue;
        }

        if (!isalnum(s[r]))
        {
            r--;
            continue;
        }

        if (tolower(s[l]) != tolower(s[r]))
            return false;

        l++;
        r--;
    }

    return true;
}

int main()
{
}