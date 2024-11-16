#include <iostream>
using namespace std;
void linearSearch(int arr[], int target, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << " Element is found at index :" << i;
            return;
        }
    }
    cout << "Element is not present in the array :";
}
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
    cout << "Enter the target of element : ";
    int target;
    cin >> target;
    linearSearch(arr, target, n);
}
