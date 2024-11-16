// wap to sort array on assending array
// sum of two number = target
// this is big o of n notataion
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int target = 8;
    // cin>>target;
    int arr[5] = {1, 3, 4, 5, 9};
    int i = 0;
    int j = 5 - 1;
    int pair = 0;
    while (i < j)
    {
        if (arr[i] + arr[j] == target)
        {
            // cout << arr[i];
            pair++;
            break;
        }
        if (arr[i] + arr[j] > target)
        {
            j--;
        }
        if (arr[i] + arr[j] < target)
        {
            i++;
        }
    }
    cout << arr[i] << " + " << arr[j] << " = " << target;
}