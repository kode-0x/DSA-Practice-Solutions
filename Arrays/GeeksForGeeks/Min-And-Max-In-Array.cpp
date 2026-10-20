// Given an array 'arr[]', find the minimum and maximum elements in the array

#include <bits/stdc++.h>
using namespace std;

vector<int> getMinMax(vector<int> &arr)
{
    return {
        *min_element(arr.begin(), arr.end()),
        *max_element(arr.begin(), arr.end())};
}

int main()
{
}