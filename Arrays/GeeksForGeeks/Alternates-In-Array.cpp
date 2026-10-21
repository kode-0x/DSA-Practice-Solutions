// Given an array 'arr[]', return a list of its elements in alternate order, starting from index '0'

#include <bits/stdc++.h>
using namespace std;

vector<int> getAlternates(vector<int> &arr)
{
    vector<int> ans;

    for (int i = 0; i < arr.size(); i += 2)
        ans.push_back(arr[i]);

    return ans;
}

int main()
{
}