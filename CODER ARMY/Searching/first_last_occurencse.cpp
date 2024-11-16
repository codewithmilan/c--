#include <iostream>
using namespace std;
int firstLastOccurence(int arr[], int n, int target)
{

    int start = 0, end = n - 1, mid, first = -1, last = -1;
    // firt occurane;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
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

    // last occurane
    start = 0, end = n - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
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
    if (first == -1 && last == -1)
        cout << "Element not present ";
    else
        cout << first << " " << last;
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
    firstLastOccurence(arr, n, target);
    return 0;
}