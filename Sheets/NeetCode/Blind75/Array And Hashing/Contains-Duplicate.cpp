// Given an integer array 'nums', return 'true' if any element appears more than once; otherwise, return 'false'

#include <bits/stdc++.h>
using namespace std;

bool hasDuplicate(vector<int> &nums)
{
    unordered_map<int, int> mp;

    for (int item : nums)
    {
        mp[item]++;

        if (mp[item] > 1)
            return true;
    }

    return false;
}

int main()
{
}