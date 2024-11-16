#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    // element of array are in sorted order

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int k;
    cin >> k;

    int start = 0, end = n - 1;
    while (start < end)
    {
        if (v[start] + v[end] == k)
        {
            cout << start << " " << end;
        }
        else if (v[start] + v[end] > k)
            end--;
        else
            start++;
    }
    return 0;
}