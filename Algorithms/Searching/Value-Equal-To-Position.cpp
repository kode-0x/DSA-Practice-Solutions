// Given an array 'arr[]', which elements have values equal to their 1-based positions, and what are their positions

#include <bits/stdc++.h>
using namespace std;

vector<int> valEqualToPos(vector<int> &arr)
{
    vector<int> result;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == i + 1)
            result.push_back(arr[i]);
    }

    return result;
}

int main()
{
}