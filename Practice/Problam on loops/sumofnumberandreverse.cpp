// wap to print sum of revers and original number digit;
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, r, rev = 0;
    cin >> n;
    int temp = n;
    while (n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }
    int totalSum = temp + rev;
    cout << "Sum of number and reverse is " << totalSum;
}