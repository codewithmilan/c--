#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr1[5] = {1, 9, 3, 7, 6};
    int arr2[10];
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr[i];
        arr2[i + 5] = arr1[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr2[i] << " ";
    }
}
