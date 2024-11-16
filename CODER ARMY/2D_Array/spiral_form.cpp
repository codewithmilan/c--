#include <iostream>
#include <vector>
using namespace std;
vector<int> spiralMatrix(vector<vector<int>> Matrix)
{
    int row = Matrix.size(), col = Matrix[0].size();
    int top = 0, bottom = row - 1, left = 0, right = col - 1;
    vector<int> ans;
    while (top <= bottom && left <= right)
    {
        // top
        for (int i = left; i <= right; i++)
        {
            // cout << Matrix[top][i] << " ";
            ans.push_back(Matrix[top][i]);
        }
        top++;
        // right
        for (int i = top; i <= bottom; i++)
        {
            // cout << Matrix[i][right] << " ";
            ans.push_back(Matrix[i][right]);
        }
        right--;
        // bottom
        for (int i = right; i >= left; i--)
        {
            // cout << Matrix[bottom][i] << " ";
            ans.push_back(Matrix[bottom][i]);
        }
        bottom--;
        // left
        for (int i = bottom; i >= top; i--)
        {
            // cout << Matrix[i][left] << " ";
            ans.push_back(Matrix[i][left]);
        }
        left++;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> Matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> Matrix[i][j];
        }
    }
    cout << "------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << Matrix[i][j] << " ";
        }
        cout << "\n";
    }
    vector<int> printans = spiralMatrix(Matrix);
    for (int i = 0; i < printans.size(); i++)
    {
        cout << printans[i] << " ";
    }
    return 0;
}