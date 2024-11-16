// wap to print the max subarray sum
// by:- brute froce approch
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        int currentSum = 0;
        for (int j = i; j < n; j++)
        {
            currentSum += arr[j];
            maxSum = max(currentSum, maxSum);
        }
    }
    cout << maxSum;
}
