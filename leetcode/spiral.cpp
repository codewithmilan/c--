#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> spiral(n, vector<int>(n));
    // vector<vector<int>> v(n, vector<int>(n));
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> spiral[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << spiral[i][j] << " ";
        }
        cout << "\n";
    }

    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            v.push_back(spiral[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            v.push_back(spiral[i][right]);
        }
        right--;
        // bottom
        for (int i = right; i >= left; i--)
        {
            v.push_back(spiral[bottom][i]);
        }
        bottom--;
        // left
        for (int i = bottom; i >= top; i--)
        {
            v.push_back(spiral[i][left]);
        }
        left++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
