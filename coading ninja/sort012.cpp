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

    int start = 0, end = n-1;
    for (int i = 0; i < n; i++)
    {
        if (v[start] > v[end])
            swap(v[start], v[end]);
        start++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}