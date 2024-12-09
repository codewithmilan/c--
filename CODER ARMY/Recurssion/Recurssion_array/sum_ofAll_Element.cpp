#include <iostream>
using namespace std;
int sumElement(int arr[], int size)
{
    if (size == -1)
        return 0;
    return arr[size] + sumElement(arr, size - 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = (sizeof(arr) / (sizeof(arr[0])) - 1);
    cout << sumElement(arr, size);
    // cout << sumElement(arr,0, size); if you wantn to sole this problam using three argument DO YOUR SELF
}