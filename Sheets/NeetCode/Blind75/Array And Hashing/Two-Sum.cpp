// Given an integer array 'nums' and an integer 'target', return the two distinct indices 'i' and 'j' where 'nums[i] + nums[j] == target', with the smaller index first

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        int diff = target - nums[i];

        if (mp.find(diff) != mp.end())
            return {mp[diff], i};

        mp[nums[i]] = i;
    }

    return {};
}

int main()
{
}