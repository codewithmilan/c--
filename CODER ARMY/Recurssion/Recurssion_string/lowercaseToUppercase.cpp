#include <bits/stdc++.h>
using namespace std;
void lowerToUpper(string &s, int index)
{
    if (index == -1)
        return;
    s[index] = 'A' + (s[index] - 'a');
    lowerToUpper(s, index - 1);
}
int main()
{
    string s;
    cin >> s;
    int lastIndex = s.size() - 1;
    lowerToUpper(s, lastIndex);
    cout << s;
}