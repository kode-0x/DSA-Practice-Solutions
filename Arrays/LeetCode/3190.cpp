// Given an integer array `nums`, return the minimum number of operations required to make every element divisible by 3, where each operation adds or subtracts 1 from any element

#include <bits/stdc++>
using namespace std;

int minimumOperations(vector<int> &nums)
{
    int cnt = 0;

    for (int x : nums)
        cnt += min(x % 3, 3 - (x % 3));

    return cnt;
}

int main()
{
}