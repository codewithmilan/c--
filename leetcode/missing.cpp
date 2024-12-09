#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int sum = n * (n + 1) / 2;
    int b = accumulate(v.begin(), v.end(), 0);
    cout << sum - b;
}