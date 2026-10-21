// Given an array 'arr[]', return all elements whose value is equal to their position in the array, using 1-based indexing

#include <bits/stdc++.h>
using namespace std;

vector<int> valEqualToPos(vector<int> &arr)
{
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == i + 1)
            ans.push_back(arr[i]);

    return ans;
}

int main()
{
}