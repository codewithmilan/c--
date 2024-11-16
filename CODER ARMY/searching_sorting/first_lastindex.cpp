#include <iostream>
using namespace std;
int main()
{
    // in sorted array 2 3 3 3 3 5 6 6 
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int start=0, end=n-1, mid, first = -1, last = -1;
    while (start <= end)
    {
        mid = (start + end) / 2;
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
            end = mid - 1;
    }
    // last occurance
     start = 0, end = n - 1;
    while (start <= end)
    {
       
        mid = (start + end) / 2;
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
            end = mid - 1;
    }
    cout << first << " " << last;
}