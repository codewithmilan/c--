#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        s[i] = 'a' + (s[i] - 'A');
    }
    cout << s;
}