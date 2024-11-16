// wap to add two array in increasing order
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 6, 7, 8};
    int brr[5] = {3, 4, 5, 9, 11};
    int crr[10];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i] <= brr[j])
            {
                crr[i] = arr[i];
            }
        }
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         if (brr[i] > brr[j])
    //         {
    //             int temp = brr[i];
    //             brr[i] = brr[j];
    //             brr[j] = temp;
    //         }
    //     }
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << "\n";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << brr[i] << " ";
    // }
    // cout << "\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            crr[i] = arr[i] = brr[i];
            cout << crr[i] << " ";
        }
    }
}