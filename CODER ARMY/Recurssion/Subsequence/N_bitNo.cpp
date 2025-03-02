#include <iostream>
#include <vector>
using namespace std;
void find(string s, vector<string> &ans, string &temp, int ones, int zero)
{

    if (temp.size() == s.size())
    {
        ans.push_back(temp);
        return;
    }
    if (zero < ones)
    {
        temp.push_back('0');
        find(s, ans, temp, ones, zero + 1);
        temp.pop_back();
    }
    temp.push_back('1');
    find(s, ans, temp, ones + 1, zero);
    temp.pop_back();
}
int main()
{
    string s;
    cin >> s;
    vector<string> ans;
    string temp;
    find(s, ans, temp, 0, 0);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}