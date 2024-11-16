#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> diagonal(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> diagonal[i][j];
        }
    }
    int dsum1 = 0, dsum2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                dsum1 += diagonal[i][j];
            }
            else if (i + j == n - 1)
                dsum2 += diagonal[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << diagonal[i][j] << " ";
        }
        cout << "\n";
    }
    cout << dsum1 << " " << dsum2;
}