#include <iostream>
using namespace std;
void printArray(int arr[], int index, int size)
{
    if (index == size)
        return;
    cout << arr[index] << " ";
    printArray(arr, index + 1, size);
    // cout << arr[index] << " ";/// if i put the cout then it print in reverse order 
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    // for(int i=0;i<6;i++)
    printArray(arr, 0, 6);
}