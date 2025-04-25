#include <iostream>
#include <stack>
using namespace std;

void intsertAtBottom(stack<int> &s, int val)
{
    stack<int> temp;
    while (s.size() > 0)
    {
        temp.push(s.top());
        s.pop();
    }
    s.push(val);
    while (temp.size() > 0)
    {
        s.push(temp.top());
        temp.pop();
    }
}
void display(stack<int> s)
{
    while (s.size() > 0)
    {
        cout << s.top() << " ";
        s.pop();
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
    display(s);
    intsertAtBottom(s, 10);
    display(s);
}