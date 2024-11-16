// matrix are sortd in row and coloumn wise
#include <iostream>
#include <vector>
using namespace std;
bool binary_srch(vector<vector<int>> matrix, int target)
{
    int m = matrix.size(), n = matrix[0].size();
    int row = 0, col = n - 1;
    while (row < m && col >= 0)
    {
        if (matrix[row][col] == target)
        {
            return true;
        }
        else if (matrix[row][col] < target)
        {
            row++;
        }
        else
            col--;
    }
    return false;
}
int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int target;
    cin >> target;
    cout << binary_srch(matrix, target);
}