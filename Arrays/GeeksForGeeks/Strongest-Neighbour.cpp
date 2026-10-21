// Given an array arr[] of positive integers, return an array containing the maximum value of each pair of adjacent elements

#include <bits/stdc++.h>
using namespace std;

vector<int> maxAdj(vector<int> &arr)
{
    vector<int> result;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        result.push_back(max(arr[i], arr[i + 1]));
    }

    return result;
}

int main()
{
}