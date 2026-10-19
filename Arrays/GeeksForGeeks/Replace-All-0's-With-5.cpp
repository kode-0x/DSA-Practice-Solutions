// Replace every '0' digit in 'n' with '5' and return the modified number; if there are no zeroes, return 'n' unchanged

#include <bits/stdc++.h>
using namespace std;

int convertFive(int n)
{
    if (n == 0)
        return 5;

    int ans = 0, place = 1;

    while (n > 0)
    {
        int digit = n % 10;
        if (digit == 0)
            digit = 5;
        ans += digit * place;
        place *= 10;
        n /= 10;
    }
    return ans;
}

int main()
{
}