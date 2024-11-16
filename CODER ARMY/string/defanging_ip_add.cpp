#include <iostream>
using namespace std;
int main()
{
    // 1.1.1.1 input
    // 1[.]1[.]1[.]1 output
    string str;
    cin >> str;
    int start = 0;
    string ans;
    while (str[start] != '\0')
    {
        if (str[start] == '.')
        {
            ans += "[.]";
        }
        else
        {
            ans += str[start];
        }
        start++;
    }
    cout << ans;
}
