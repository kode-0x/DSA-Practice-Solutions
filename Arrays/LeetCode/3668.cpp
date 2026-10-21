// Given an array 'order' representing race finishing order and a sorted array 'friends' containing your friends' IDs, return an array of your friends' IDs in their finishing order

#include <bits/stdc++.h>
using namespace std;

vector<int> recoverOrder(vector<int> &order, vector<int> &friends)
{
    vector<int> ans;

    for (int x : order)
    {
        for (int y : friends)
        {
            if (x == y)
            {
                ans.push_back(x);
                break;
            }
        }
    }

    return ans;
}
    
int main()
{
}