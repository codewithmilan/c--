// wap to print sum of revers and original number digit;
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arm = 0, r, rev = 0;
    cin >> n;
    int temp = n;
    while (n > 0)
    {
        r = n % 10;
        arm = arm + (r * r * r);
        n /= 10;
    }
    if (temp == arm)
        cout << "yes";
    else
        cout << "not";
  
}