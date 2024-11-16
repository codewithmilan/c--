#include <iostream>
#include <vector>
using namespace std;
void waaveForm(vector<vector<int>> wave, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << wave[j][i] << " ";
            }
        }
        else
            for (int j = n - 1; j >= 0; j--)
            {
                cout << wave[j][i] << " ";
            }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> wave(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> wave[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << wave[i][j] << " ";
        }
        cout << "\n";
    }
    waaveForm(wave,n);
}