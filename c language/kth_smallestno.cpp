#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {0, 1, 8, 2, 7, 5, 6};
    int n = 7;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Enter the kth smallest  element :";
    int k;
    cin >> k;
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[k - 1];
        break;
    }
}