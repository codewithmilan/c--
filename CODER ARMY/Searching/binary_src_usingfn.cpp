#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int target)
{
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    // THIS WILL WORK ON SORTED ARRAY
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
    cout << binarysearch(arr, n, target);
    return 0;
}