#include <iostream>
#include <vector>
using namespace std;
 void subset(int arr[], int n, int idx, vector<vector<int>> &ans, vector<int> &temp)
{
    if (idx == n)
    {
        ans.push_back(temp);
        return;
    }
    subset(arr, n, idx + 1, ans, temp);
    temp.push_back(arr[idx]);
    subset(arr, n, idx + 1, ans, temp);
    temp.pop_back();
}
int main()
{
    int arr[] = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> temp;
    subset(arr, 3, 0, ans, temp);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}