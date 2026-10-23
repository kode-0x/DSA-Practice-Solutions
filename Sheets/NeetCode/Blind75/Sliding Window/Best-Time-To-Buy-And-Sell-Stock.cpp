// Given an integer array 'prices', return the maximum profit achievable by buying once and selling on a later day, or '0' if no profit is possible

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int minPrice = INT_MAX;
    int profit = 0;

    for (int price : prices)
    {
        minPrice = min(minPrice, price);
        profit = max(profit, price - minPrice);
    }

    return profit;
}

int main()
{
}