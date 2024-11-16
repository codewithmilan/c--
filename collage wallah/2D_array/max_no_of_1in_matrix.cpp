// wap of vactor to find the maximum no of one in the sorted matrix
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int maxone = INT16_MIN;
    int maxrow = -1;

    int col = a[0].size();
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            if (a[i][j] == 1)
            {
                int numberofones = col - j;
                if (numberofones > maxone)
                {
                    maxone = numberofones;
                    maxrow = i;
                }
            }
        }
    }
    cout << "max no. of ones in row number :" << maxrow;
}
