#include <iostream>
#include <vector>
using namespace std;
bool binary_search(vector<vector<int>> matrix, int target)
{
    int n = matrix.size(), m = matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        if (matrix[i][0] <= target && target <= matrix[i][m - 1])
        {
            int start = 0, end = m - 1, mid;
            mid = (start + end) / 2;
            while (start <= end)
            {
                if (matrix[i][mid] == target)
                {
                    return true;
                }
                else if (matrix[i][mid] < target)
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }
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