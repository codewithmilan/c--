#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 3;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (v[0] == v[1] && v[1] == v[2] && v[2] == v[0])
        cout << "equlitral";
    else if (v[0] == v[1] || v[1] == v[2] || v[0] == v[2])
    {
        cout << "isoscelecs";
    }
    else
        cout << "scelence";
}
