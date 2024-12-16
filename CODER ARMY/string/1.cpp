#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 1234, sum = 0, rev;
    while (n > 0)
    {
        rev = n %10;
        sum += rev;
        n=n/10;
    }
    cout << sum;
}