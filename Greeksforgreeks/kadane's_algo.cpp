// wap to print the largest subarray's sum in array
#include <iostream>
#include <vector>
using namespace std;
int kadanes(int arr[], int n)
{
    int prefix = 0, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];
        maxi = max(prefix, maxi);
        if (prefix < 0)
            prefix = 0;
    }
    return maxi;
}
int main()
{
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];
    cout << "Enter the element of array :";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << kadanes(arr, n);
}