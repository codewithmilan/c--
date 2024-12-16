#include <bits/stdc++.h>
using namespace std;
int linearsearch(int arr[], int start, int x, int n)
{
    if (start == n)
        return -1;

    if (arr[start] == x)
        return start;
    return linearsearch(arr, start + 1, x, n);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x = 8;
    int start = 0,  n = sizeof(arr) / sizeof(arr[0])-1;
    cout << linearsearch(arr, start, x, n);
}