// wap to print thr factorial of first n  number
#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << "Enter the number ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        cout << fact << endl;
    }
}