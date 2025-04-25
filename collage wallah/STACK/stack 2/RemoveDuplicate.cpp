#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
string removeDuplicaty(string &s)
{
    stack<char> st;
    string str = "";
    st.push(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        if (st.top() != s[i])
            st.push(s[i]);
    }
    while (st.size() > 0)
    {
        str += st.top();
        st.pop();
    }
    cout << str<<endl;

    reverse(str.begin(), str.end());
    cout << str;
}

int main()
{
    string s = "aaaabbbb";
    // cin >> s;
    removeDuplicaty(s);
}
