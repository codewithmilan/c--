#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int arr[5];
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int min = __INT32_MAX__;
        int minidx = -1;
        for (int j = i; j <= n - 1; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                minidx = j;
            }
        }
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}