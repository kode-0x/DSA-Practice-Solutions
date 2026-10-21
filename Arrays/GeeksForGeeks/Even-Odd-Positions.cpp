// Given arrays 'car[]' and 'fine[]' and an integer 'date', return the total fine collected from odd-numbered cars on even dates and even-numbered cars on odd dates

#include <bits/stdc++.h>
using namespace std;

int totalFine(int date, vector<int> &car, vector<int> &fine)
{
    int total = 0;

    for (int i = 0; i < car.size(); i++)
    {
        if (date % 2 == 0 && car[i] % 2 != 0)
        {
            total += fine[i];
        }
        else if (date % 2 != 0 && car[i] % 2 == 0)
        {
            total += fine[i];
        }
    }

    return total;
}

int main()
{
}