#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;
    cin >> k;
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (v[mid] == k)
        {
            cout << mid;
            
        }
        else if (v[mid] < k)
        {
            cout << mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
}