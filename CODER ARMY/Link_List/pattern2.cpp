#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    // cin >> n;
    // top
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        // right

        for (int j = 0; j < (n - i) * 2; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    // bottom

    // left
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < (n - i-1) * 2; j++)
        {
            cout << " ";
        }

        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}