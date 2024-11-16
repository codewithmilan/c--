#include <iostream>
#include <vector>
using namespace std;
void printmatrix(vector<vector<int>> &matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    // tc o(n^2) sc o(1)
    cout << "Enter the size of matrix :";
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
    cout << " Enter the rotations time :";
    int k;
    cin >> k;
    if (k % 4 == 1)
    {
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
        printmatrix(matrix, n);
    }
    else if (k % 4 == 2)
    {
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
        printmatrix(matrix, n);
    }
    else if (k % 4 == 3)
    {
        // transpose of matrix
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // column- wise reverse
        for (int i = 0; i < n; i++)
        {
            int start = 0, end = n - 1;
            while (start < end)
            {
                swap(matrix[start][i], matrix[end][i]);
                start++, end--;
            }
        }
        printmatrix(matrix, n);
    }
    else
        printmatrix(matrix, n);

    // printing the matrix
}