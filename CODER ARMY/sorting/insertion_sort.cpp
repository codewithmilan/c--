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
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j > 0; j--) //  (arr[j] > arr[idx]) for decreasing
        {
            if (arr[j] < arr[j - 1])
            {

                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}