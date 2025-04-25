#include <iostream>
#include <stack>
using namespace std;
void insertAtBottom(stack<int> &s, int val)
{
    if (s.size() == 0)
    {
        s.push(val);
        return;
    }
    int x = s.top();
    s.pop();
    insertAtBottom(s, val);
    s.push(x);
}
void display(stack<int> s)
{
    stack<int> temp;

    while (s.size() > 0)
    {
        temp.push(s.top());
        s.pop();
    }
    while (temp.size() > 0)
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    insertAtBottom(s, 300);
    cout << endl;
    display(s);
}