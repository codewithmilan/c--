#include <bits/stdc++.h>
using namespace std;

int count_vowel(string s)
{
    int size = 1;
    while (s[size] != '\0')
    {
        size++;
    }
    return size;
}
int main()
{
    string s;
    cin >> s;
    cout << count_vowel(s);
}