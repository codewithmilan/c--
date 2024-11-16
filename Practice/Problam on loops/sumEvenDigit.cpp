// wap to print sum of even digit;
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, r;
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        if (r % 2 == 0)
        {
            sum += r;
        }
        n /= 10;
    }
    cout << sum;
}