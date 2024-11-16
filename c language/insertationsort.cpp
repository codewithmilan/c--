#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {5, 6, 8, 2, 7, 5, 6};
    int n = 7;
    for (int i = 1; i <= n - 1; i++)
    {
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}