#include <iostream>
#include <vector>
using namespace std;
void subsum(int arr[], int i, int n, int sum, vector<int> &ans)
{
    if (i == n)
    {
        ans.push_back(sum);
        return;
    }

    subsum(arr, i + 1, n, sum, ans);
    subsum(arr, i + 1, n, sum + arr[i], ans);
}
int main()
{
    int arr[] = {1, 2, 3};
    vector<int> ans;
    subsum(arr, 0, 3, 0, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}