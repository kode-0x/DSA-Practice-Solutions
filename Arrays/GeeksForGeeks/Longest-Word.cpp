// Given an array 'arr[]' of strings containing names, return the longest string; if multiple names have the same maximum length, return the first occurring name

#include <bits/stdc++.h>
using namespace std;

string longest(vector<string> &arr)
{
    string ans = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i].size() > ans.size())
            ans = arr[i];
    }

    return ans;
}

int main()
{
}