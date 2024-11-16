#include <iostream>
using namespace std;
string reversestr(string s)
{
    string reserved;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        reserved += s[i];
    }
    return reserved;
}
int main()
{
    string s;
    cin >> s;
    cout<< reversestr(s);
}