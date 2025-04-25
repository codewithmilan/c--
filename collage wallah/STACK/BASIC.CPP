#include <iostream>
#include <stack>
using namespace std;
void display(stack<int> &s)
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
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    // s.pop();
    cout << s.size();
// ****** simple method in reverse way

    // // while (s.size() > 0)
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    cout << endl;
    display(s);
}