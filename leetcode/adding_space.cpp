#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> v(2);
    for (int i = 0; i < 2; i++)
    {
        cin >> v[i];
    }

    string ans;
    int index = 0, i = 0;
    while (index < s.size())
    {
        if (index == v[i] && i < 2)
        {
            ans += ' ';
            i++;
        }
        ans += s[index];
        index++;
    }
    cout << ans;
}