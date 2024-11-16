#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // tc o(n^2) sc o(1)
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    // transpose of matrix
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // row wise- reverse
    for (int j = 0; j < n - 1; j++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(matrix[j][start], matrix[j][end]);
            start++, end--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j];
        }
        cout << "\n";
    }
}
