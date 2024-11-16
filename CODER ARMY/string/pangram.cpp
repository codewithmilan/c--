#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string str;
    // cin >> str;
    getline(cin, str);

    vector<int> alpha(26, 0);
    for (int i = 0; i < str.size(); i++)
    {
        alpha[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] == 0)
        {
            cout << " This si not pangram ";
            return 0;
        }
    }
    cout << " pangram";
}
