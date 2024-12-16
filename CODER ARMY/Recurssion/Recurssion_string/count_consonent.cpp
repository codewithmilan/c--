#include <bits/stdc++.h>
using namespace std;

int count_consonent(string &s, int index)
{
    if (index == -1)
        return 0;

    if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u')
        return 1 + count_consonent(s, index - 1);
    return count_consonent(s, index - 1);
}
int main()
{
    string s;
    cin >> s;
    int size = s.size();
    int z = count_consonent(s, size-1);
    cout << " Consonent :" << size - z;
}