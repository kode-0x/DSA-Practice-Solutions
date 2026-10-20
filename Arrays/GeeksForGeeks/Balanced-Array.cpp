// Given an even-sized array 'arr[]', find the minimum non-negative value to add to any one element so that the sum of the left half equals the sum of the right half

#include <bits/stdc++.h>
using namespace std;

int minValueToBalance(vector<int> &arr)
{
    int n = arr.size(), diff = 0;

    for (int i = 0; i < n / 2; i++)
        diff += arr[i] - arr[i + n / 2];

    return abs(diff);
}

int main() {}