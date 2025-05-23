#include <iostream>
#include <vector>
using namespace std;

// it will return the size of suffix and prefix avilable in the string

int lpsfind(string s)
{
    vector<int> lps(s.size(), 0);

    int pre = 0, suf = 1;
    while (suf < s.size())
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
            {
                pre = lps[pre - 1];
            }
        }
    }
    return lps[s.size() - 1];
}
int main()
{
    string s;
    cin >> s;
    cout << lpsfind(s);
}