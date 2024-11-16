// other approach
#include <iostream>
#include <vector>
using namespace std;
bool binary_search(vector<vector<int>> matrix, int target)
{
    int n = matrix.size(), m = matrix[0].size();

    int start = 0, end = m - 1, mid;
    int ridx, cidx;
    while (start <= end)
    {
        mid = (start + end) / 2;
        ridx = mid / m;
        cidx = mid % m;
        if (matrix[ridx][cidx] == target)
        {
            return true;
        }
        else if (matrix[ridx][cidx] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int target;
    cin >> target;

    cout << binary_search(matrix, target);
}