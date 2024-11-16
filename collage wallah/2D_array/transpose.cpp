#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    int crr[n][m];
    cout << "Enter matrix 1 :";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    cout << " Transpose of Marix is :" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            crr[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << crr[i][j] << " ";
        }
        cout << endl;
    }
}