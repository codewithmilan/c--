#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int k;
    cin >> k;
    int start = 0, end = n - 1, first = -1, last = -1, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (v[mid] == k)
        {
            first = mid;
            end = mid - 1;
        }
        else if (v[mid] < k)
            start = mid + 1;
        else
            end = mid - 1;
    }
    // last occurance
    start = 0, end = n - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (v[mid] == k)
        {
            last = mid;
            start = mid + 1;
        }
        else if (v[mid] < k)
            start = mid + 1;
        else
            end = mid - 1;
    }
    cout << first << " " << last;
    cout << "Total no. of occurance " << (last - first) + 1;
}