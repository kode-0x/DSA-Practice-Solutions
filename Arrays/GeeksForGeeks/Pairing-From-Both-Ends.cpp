// Pair the first element with the last, moving inward; if the array length is odd, pair the middle element with itself. Return pairs in order.

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> arrayOfPairs(vector<int> &arr)
{
    vector<vector<int>> result;

    int ptr_start = 0;
    int ptr_end = arr.size() - 1;

    while (ptr_start <= ptr_end)
    {
        result.push_back({arr[ptr_start], arr[ptr_end]});
        ptr_start++;
        ptr_end--;
    }

    return result;
}

int main()
{
}