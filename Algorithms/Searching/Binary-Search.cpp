// Given a sorted array arr[] of distinct integers and an integer k, find the 0-based index of k if present in the array, or return -1 otherwise

#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> &arr, int k)
{
    int low = 0, high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == k)
            return true;
        else if (arr[mid] < k)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return false;
}

int main()
{
}