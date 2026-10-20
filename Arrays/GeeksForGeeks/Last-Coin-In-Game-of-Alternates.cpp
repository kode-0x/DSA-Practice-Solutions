// Given an array 'arr[]' of coin values, two players alternately pick the maximum-valued coin from either end until one coin remains; find the value of the last remaining coin

#include <bits.stdc++.h>
using namespace std;

int coin(vector<int> &arr)
{
    return *min_element(arr.begin(), arr.end());
}

int main()
{
}