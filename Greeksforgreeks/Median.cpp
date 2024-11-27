#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
        // first of all sort the given array;
    int median, start = 0, end = n - 1, mid;
    if (n % 2 != 0)
    {
        mid = start + (end - start) / 2;
        return arr[mid];
    }
    else
    {
        mid = start + (end - start) / 2;
        return median = (arr[mid] + arr[mid - 1]) / 2;
    }
}