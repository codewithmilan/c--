#include <iostream>
#include <vector>
using namespace std;
void subset(string str, int n, int idx, vector<string> &ans, string &temp)
{
    if (idx == n)
    {
        ans.push_back(temp);
        return;
    }
    subset(str, n, idx + 1, ans, temp);
    temp.push_back(str[idx]);
    subset(str, n, idx + 1, ans, temp);
    temp.pop_back();
}
int main()
{
    string str = "abc";
    vector<string> ans;
    string temp;
    subset(str, 3, 0, ans, temp);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
        // for (int j = 0; j < ans[i].size(); j++)
        // {
        // }
        // cout << endl;
    }
}