#include <bits/stdc++.h>
using namespace std;

int count_vowel(string &s, int index)
{
    if (index == -1)
        return 0;

    if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u')
        return 1 + count_vowel(s, index - 1);
    return count_vowel(s, index - 1);
}
int main()
{
    string s;
    cin >> s;
    int size = s.size() - 1;
    cout << count_vowel(s, size);
}