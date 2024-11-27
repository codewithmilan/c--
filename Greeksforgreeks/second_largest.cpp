#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int max = INT32_MIN, smax = INT32_MIN;
    if (n < 2)
        return -1;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] != max && arr[i] > smax)
            smax = arr[i];
    }

    cout << smax;
}