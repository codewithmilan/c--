#include <iostream>
// #include
using namespace std;
int targetsum(int arr[], int i, int n, int target)
{
    if (target == 0)
        return 1;
    if (n == i || target < 0)
        return 0;
    return targetsum(arr, i + 1, n, target) + targetsum(arr, i + 1, n, target - arr[i]);
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int target = 11;
    cin >> target;
    cout << targetsum(arr, 0, 4, target);
    // arr,idx,size,target
}