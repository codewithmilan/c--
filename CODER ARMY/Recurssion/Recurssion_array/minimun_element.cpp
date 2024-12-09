#include <iostream>
using namespace std;
int minimun(int arr[], int index)
{
    if (index == 0)
        return arr[0];
    return min(arr[index], minimun(arr, index - 1));
}
int main()
{
    int arr[] = {8, 2, 3, 4, 5};
    int index = (sizeof(arr) / (sizeof(arr[0])) - 1);
    cout << index;
    cout << minimun(arr, index);
}