#include <bits/stdc++.h>
using namespace std;
bool checkpal(string s, int start, int end)
{
    if (start > end)
        return true;

    if (s[start] != s[end])
        return false;
    return checkpal(s, start + 1, end - 1);
}
int main()
{
    string s;
    cin >> s;
    int index = s.size() - 1;
    cout << checkpal(s, 0, index);
}