// Given a zero-based permutation 'nums', return an array 'ans' of the same length where 'ans[i] = nums[nums[i]]' for every valid index 'i'

#include <bits/stdc++.h>
using namespace std;

vector<int> buildArray(vector<int> &nums)
{
    vector<int> result(nums.size());

    for (int i = 0; i < nums.size(); i++)
    {
        result[i] = nums[nums[i]];
    }

    return result;
}

int main() {}