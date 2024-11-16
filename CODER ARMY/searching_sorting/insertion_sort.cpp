#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array :";
    cin >> n;
    int arr[n];

    cout << "Enter the element of array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] > arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
    cout << "Sorted the element in descending order :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}