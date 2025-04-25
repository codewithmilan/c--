#include <iostream>
#include <stack>
using namespace std;
// BRUTE FORCE APPROACH 
int main()
{
    int arr[] = {2, 3, 1, 0, 7, 6, 5, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int nge[n];
    for (int i = 0; i < n; i++)
    {
        nge[i] = -1;
        for (int j = i + 1; j < n ; j++)
        {
            if (arr[j] > arr[i])
            {
                nge[i] = arr[j];
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << nge[i] << " ";
    }
}
