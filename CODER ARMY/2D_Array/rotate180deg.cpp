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

    // coloumn reverse
    for (int j = 0; j < n; j++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(matrix[start][j], matrix[end][j]);
            start++, end--;
        }
    }
    // row reverse
    for (int j = 0; j < n; j++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(matrix[j][start], matrix[j][end]);
            start++, end--;
        }
    }
    cout << " Rotate 180 deg matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}