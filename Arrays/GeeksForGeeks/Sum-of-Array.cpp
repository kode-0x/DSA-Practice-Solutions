// Given an integer array 'arr[]', return the sum of all its elements.

#include <bits/stdc++.h>
using namespace std;

int arraySum(vector<int> &arr)
{
    return accumulate(arr.begin(), arr.end(), 0);
}
