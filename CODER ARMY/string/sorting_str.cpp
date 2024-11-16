#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    vector<int> alpha(26, 0);
    for (int i = 0; i < 26; i++)
    {
        alpha[str[i] - 'a']++;
    }
    string ans;
    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        while (alpha[i] > 0)
        {
            ans += c;
            alpha[i]--;
        }
    }
    cout << ans;
}