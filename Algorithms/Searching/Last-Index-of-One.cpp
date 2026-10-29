// Given a binary string 's' consisting only of '0' and '1', find the last index of '1', or return '-1' if '1' is not present

#include <bits/stdc++.h>
using namespace std;

int lastIndex(string &s)
{
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '1')
            return i;
    }

    return -1;
}

int main()
{
}