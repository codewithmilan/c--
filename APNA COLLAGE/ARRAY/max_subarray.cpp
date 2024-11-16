// wap to print the max subarray sum
// by:- kadane's approch;
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int maxSum = INT16_MIN;
    int currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << "The maximun sum of subarry is :"<< maxSum;
}
