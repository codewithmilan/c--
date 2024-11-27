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

    int start = 0, end = n - 1, mid, first = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
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
    cout << first;
}