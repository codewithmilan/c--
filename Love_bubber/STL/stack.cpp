#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // it follow LIFO technique

    stack<string> s;
    s.push("MILAN");
    s.push("KUMAR");
    s.push("VERMA");

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
    // cout << s.front() << endl;
    cout << s.empty() << endl;
    for (int i = 0; i < s.size(); i++)
        cout << i << " ";
}