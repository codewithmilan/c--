#include <iostream>
#include <stack>
using namespace std;

string solve(string val1, string val2, char ch)
{
    string s = "";
    s += val1;
    s.push_back(ch);
    s += val2;
    return s;
}
int main()
{
    string s = "26+4*8/3-";
    // string s = "2+6*4/8-3";
    stack<string> val;
    stack<char> op;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            val.push(to_string(s[i] - 48));
        }
        else
        {

            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            string ans = solve(val1, val2, s[i]);
            val.push(ans);
        }
    }

    cout << val.top();
    cout << endl
         << "2+6*4/8-3";
}