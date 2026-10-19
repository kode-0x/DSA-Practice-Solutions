// Given an n × n adjacency matrix 'matrix' representing an undirected graph, return an array 'ans' where 'ans[i]' is the degree of vertex 'i', calculated by counting the number of '1's in row 'i'

#include <bits/stdc++.h>
using namespace std;

vector<int> findDegrees(vector<vector<int>> &matrix)
{
    vector<int> result;

    for (int i = 0; i < matrix.size(); i++)
    {
        int cnt = 0;
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == 1)
            {
                cnt++;
            }
        }
        result.push_back(cnt);
    }

    return result;
}

int main()
{
}