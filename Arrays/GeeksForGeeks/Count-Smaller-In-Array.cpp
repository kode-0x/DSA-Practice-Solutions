// Given an unsorted array 'arr[]' and an integer 'x', return the count of elements in 'arr[]' that are less than or equal to 'x'

#include <bits/stdc++.h>
using namespace std;

int countOfElements(int x, vector<int> &arr)
{
    int cnt = 0;

    for (int items : arr)
    {
        if (items <= x)
            cnt++;
    }

    return cnt;
}

int main() {}