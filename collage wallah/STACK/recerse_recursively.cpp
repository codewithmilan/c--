#include <iostream>
#include <stack>
using namespace std;
void reverse(stack<int> &s)
{
    if (s.size() == 0)
        return;
    int x = s.top();
    s.pop();
    reverse(s);
    cout << x << " ";
}
void display(stack<int> s)
{
    while (s.size() > 0)
    {
        cout << s.top()<<" ";
        s.pop();
    }
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
    cout << endl;
    reverse(s);

}