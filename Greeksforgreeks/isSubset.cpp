#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> v(a);
    vector<int> v1(b);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin >> v1[i];
    }
    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());
    int count = 0;
    for (int j = 0; j < b; j++)
    {
        int start = 0, end = a - 1, mid;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (v[mid] == v1[j])
            {
                count++;
                break;
            }
            else if (v[mid] < v1[j])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    cout << v1.size() << " ";
    cout << count;
    if (count == v1.size())
        cout << " yes";
    else
        cout << " not";
}