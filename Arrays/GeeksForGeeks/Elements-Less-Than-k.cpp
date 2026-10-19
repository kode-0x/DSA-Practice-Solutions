// Given an array 'arr[]' and an integer 'k', return all elements less than 'k' in their original order. If no such elements exist, return an empty vector

#include <bits/stdc++.h>
using namespace std;

vector<int> elementsLessThanK(vector<int> &arr, int k)
{
    vector<int> result;

    for (int item : arr)
    {
        if (item < k)
            result.push_back(item);
    }

    return result;
}

int main()
{
}