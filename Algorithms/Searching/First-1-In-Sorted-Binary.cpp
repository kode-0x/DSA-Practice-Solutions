// Given a sorted binary array 'arr' containing only 0s and 1s, find the 0-based index of the first '1', or return '-1' if no '1' is present

#include <bits/stdc++.h>
using namespace std;

int firstIndex(vector<int> &arr)
{
    int l = 0, r = arr.size();
    int ans = -1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == 1)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return ans;
}

int main()
{
}