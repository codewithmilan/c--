#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[n];
    int min, max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }
    }
    cout << min;
}