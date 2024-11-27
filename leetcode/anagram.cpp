#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isAnagram(string s1, string s2)
{
    vector<int> alpha(26, 0);

    if (s1.size() != s2.size())
        return false;
    for (int i = 0; i < s1.size(); i++)
    {
        alpha[s1[i] - 'a']++;
        alpha[s2[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] != 0)
            return false;
    }
    return true;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (isAnagram(s1, s2))
    {
        cout << "Thhis is Anagram ";
    }
    else
        cout << "not";
}