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
    vector<int> digit(n, 0);
    for (int i = 0; i < n; i++)
    {
        digit[v[i] - 1]++;
    }
    cout << " Mising number is :  ";
    for (int i = 0; i < n; i++)
    {
        if (digit[i] == 0)
            cout << i + 1 << " ";
    }
    cout << " repeated number is : ";
    for (int i = 0; i < n; i++)
    {
        if (digit[i] > 1)
            cout << i + 1 << " ";
    }
}
