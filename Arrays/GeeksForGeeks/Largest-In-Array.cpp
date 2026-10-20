// Given an array 'arr[]', find and return the largest element in the array

#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr)
{
    return *max_element(arr.begin(), arr.end());
}

int main()
{
}