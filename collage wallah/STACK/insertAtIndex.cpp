#include <iostream>
#include <stack>
using namespace std;

void intsertAtIndex(stack<int> &s, int idx, int val)
{
    stack<int> temp;
    while (s.size() > idx)
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
    display(s);
    intsertAtIndex(s, 2, 7000);
    display(s);
}