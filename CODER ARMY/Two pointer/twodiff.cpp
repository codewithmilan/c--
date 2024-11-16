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
    int key;
    cin >> key;
    int start = 0, end = n - 1;
    while (start < end)
    {
        if (v[end] - v[start] == key)
        {
            cout << start << end;
            cout << "Got it";
            return 1;
        }
        else if (v[end] - v[start] < key)
        {
            end--;
        }
        else
            start++;
    }
    // return -1;
    cout << " n Got it";
}