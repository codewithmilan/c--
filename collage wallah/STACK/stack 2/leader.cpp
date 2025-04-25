#include <iostream>
#include <vector>
// #include <stack>
using namespace std;
// BRUTE FORCE APPROACH
void leader(int arr[], int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                ans.push_back(arr[j]);
                break;
            }
        }
    }
    ans.push_back(arr[n - 1]);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int arr[] = {10, 17, 4, 5, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    leader(arr, n);
}
