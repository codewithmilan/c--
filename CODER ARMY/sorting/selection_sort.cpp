#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];
    cout << "Enter the element of array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Element in assending order : ";
    for (int i = 0; i < n - 1; i++)
    {
        int idx = i;
        for (int j = i + 1; j < n; j++)  //f (arr[j] > arr[idx]) for decreasing
        {
            if (arr[j] < arr[idx])
            {
                idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}