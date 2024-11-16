// wap to arrange 0 and 1 in asc

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
    int start = 0, end = n - 1;
    while (start <= end)
    {
        if (v[start] == 0)
            start++;
        else
        {
            if (v[end] == 0)
            {
                swap(v[start], v[end]);
                start++, end--;
            }
            else
                end--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }
}