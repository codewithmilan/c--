#include <iostream>
#include <vector>
using namespace std;
void permut(vector<int> &arr, int idx, vector<vector<int>> &ans)
{
    if (arr.size() == idx)
    {
        ans.push_back(arr);
        return;
    }
    for (int i = idx; i < arr.size(); i++)
    {
        swap(arr[i], arr[idx]);
        permut(arr, idx + 1, ans);
        swap(arr[i], arr[idx]);
    }
}
int main()
{
    vector<int> arr{1, 2};
    vector<vector<int>> ans;
    permut(arr, 0, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
}