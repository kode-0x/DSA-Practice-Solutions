// Given an integer array nums and an integer k, find the minimum number of operations required to make the sum of the array divisible by k, where each operation decreases any element by 1

#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int> &nums, int k)
{
    int sum = 0;

    for (int x : nums)
        sum += x;

    return sum % k;
}

int main() {}