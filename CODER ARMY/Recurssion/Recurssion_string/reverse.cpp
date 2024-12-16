#include <bits/stdc++.h>
using namespace std;

void reverse_str(string &s, int index)
{
    if (index == -1)
        return;
    cout << s[index];
    reverse_str(s, index - 1);
}
int main()
{
    string s;
    cin >> s;
    int size = s.size() - 1;
    reverse_str(s, size);
}