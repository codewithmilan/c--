#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    int start = 0, end = v.size() - 1;
    while (start <= end)
    {
        if (v[start] == v[start + 1])
        {
            start++;
        }
        else
            cout << v[start + 1];
    }
}