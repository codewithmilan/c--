#include <iostream>
using namespace std;
void print(int arr[], int index)
{
    if (index == -1)
        return;
    print(arr, index - 1);
    cout << arr[index] << " ";
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int index = (sizeof(arr) / (sizeof(arr[0]))) - 1;
    print(arr, index);
}