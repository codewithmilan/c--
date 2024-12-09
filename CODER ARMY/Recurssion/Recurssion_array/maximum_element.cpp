#include <iostream>
using namespace std;
int maximun(int arr[], int index)
{
    if (index == 0)
        return arr[0];
    return max(arr[index], maximun(arr, index - 1));
}
int main()
{
    int arr[] = {1, 2, 9, 4, 5};
    int index = (sizeof(arr) / (sizeof(arr[0]))) - 1;
    cout << maximun(arr, index);
    // cout<<maximun(arr,0,5);
}