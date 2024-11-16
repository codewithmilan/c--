#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Maximun row sum and index index :";
    int sum = 0;
    int idx = 0;
    for (int i = 0; i < m; i++)
    {
        int total = 0;
        for (int j = 0; j < n; j++)
        {
            total += matrix[i][j];
            if (sum < total)
                sum = total;
            idx = i;
        }
    }
    cout << sum << " " << idx;
}