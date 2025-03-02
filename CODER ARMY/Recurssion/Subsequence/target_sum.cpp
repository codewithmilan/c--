#include <iostream>
// #include
using namespace std;
bool targetsum(int arr[], int i, int n, int target)
{
    if (target == 0)
        return 1;
    if (n == i || target < 0)
        return 0;
    return targetsum(arr, i + 1, n, target) || targetsum(arr, i + 1, n, target - arr[i]);
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int target;
    cin >> target;
    int z = targetsum(arr, 0, 4, target);
    if (z == 1)
    {
        cout << "yes";
    }
    else
        cout << "no";
}