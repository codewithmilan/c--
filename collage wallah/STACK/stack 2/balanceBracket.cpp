#include <iostream>
#include <stack>
using namespace std;
bool balanceBracket(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else
        {

            if (st.size() == 0)
                return false;
            else
                st.pop();
        }
    }
    if (st.size() == 0)
        return true;
    else
        return false;
}
int main()
{
    string s = "( ())()";
    // cin >> s;
    cout << balanceBracket(s);
}
