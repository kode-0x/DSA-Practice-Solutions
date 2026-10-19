// Given an array 'arr[]' and a value 'x', return all elements smaller than 'x' in their original order

#include <bits/stdc++.h>
using namespace std;

vector<int> getSmaller(vector<int> &arr, int target)
{
    vector<int> result;

    for (int item : arr)
    {
        if (item < target)
        {
            result.push_back(item);
        }
    }

    return result;
}

int main()
{
}