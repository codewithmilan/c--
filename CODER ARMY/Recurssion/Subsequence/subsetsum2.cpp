#include <iostream>
#include <vector>
using namespace std;
void subsum(int arr[], int i, int n, int sum)
{
    if (i == n)
    {
        cout << sum << " ";
        return;
    }

    subsum(arr, i + 1, n, sum);
    subsum(arr, i + 1, n, sum + arr[i]);
}
int main()
{
    int arr[] = {1, 2, 3};
    subsum(arr, 0, 3, 0);
}