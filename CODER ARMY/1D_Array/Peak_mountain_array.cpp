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
    //*************** */
    // int max = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (v[i] > max)
    //         max = v[i];
    // }
    // cout << max;
    // ************************

    int start = 0, end = n-1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (v[mid] > v[mid - 1] && v[mid] > v[mid + 1])
        {
            cout << v[mid];
            break;
        }
        else if (v[mid] > v[mid - 1])
            start = mid + 1;
        else
            end = mid - 1;
    }
}