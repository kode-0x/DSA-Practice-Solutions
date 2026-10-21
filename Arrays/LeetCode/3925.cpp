// Given an integer array 'nums', return an array 'ans' of length '2 * n' consisting of 'nums' followed by its elements in reverse order

#include <bit/stdc++.h>
using namespace std;

vector<int> concatWithReverse(vector<int> &nums)
{
    int n = nums.size();
    for (int i = n - 1; i >= 0; i--)
    {
        nums.push_back(nums[i]);
    }
    return nums;
}

int main() {}