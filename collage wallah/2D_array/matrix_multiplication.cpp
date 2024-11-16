#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    int brr[m][n];
    int crr[m][n];
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
    cout << "Enter matrix 2 :";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> brr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << "\n";
    }
    cout << " Multiplication of Marix is :"<<endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
               crr[i][j]=0;
            for (int k = 0; k < m; k++)
            {
                crr[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << crr[i][j] << " ";
        }
        cout << endl;
    }
}