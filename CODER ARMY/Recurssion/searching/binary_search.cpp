#include <bits/stdc++.h>
using namespace std;
bool binary_srch(int arr[], int start, int end, int target, int n)
{

    if (start > end)
        return 0;

    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
        return 1;
    else if (arr[mid] < target)
        return binary_srch(arr, mid + 1, end, target, n);
    else
        return binary_srch(arr, start, end - 1, target, n);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int start = 0, end = sizeof(arr) / sizeof(arr[0]) - 1 ,n=end;
    int x = 11;
    cout << binary_srch(arr, start, end, x, n);
}