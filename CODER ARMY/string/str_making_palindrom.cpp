#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// abba - it return 0 it means it is already a palindrom

int minchar(string s)
{
    int size = s.size();
    string temp = s;
    string rev = s;
    reverse(rev.begin(), rev.end());
    s += '$';
    s += rev;
    // find longest prefix
    int n = s.size();
    vector<int> lps(n, 0);
    int pre = 0, suf = 1;
    while (suf < n)
    {
        if (s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            pre++, suf++;
        }
        else
        {
            if (pre == 0)
            {
                lps[suf] = 0;
                suf++;
            }
            else
                pre = lps[pre - 1];
        }
    }
    // string ans = "";
    // while (s.size())
    // {
    //     ans += temp[lps[n - 1]]++;
    // }
    // cout << ans;
    return size - lps[n - 1];
}
int main()
{
    string s;
    cin >> s;
    cout << minchar(s);
}