#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    vector<int> v;
    while (n != 0)
    {
        int rem = n % 10;
        v.push_back(rem);
        n /= 10;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            v[i] = 5;
        }
    }
    cout << ans;
}