#include <iostream>
#include <vector>
using namespace std;
class myStack
{
public:
    vector<int> v;
    myStack() {}
    void push(int val)
    {

        v.push_back(val);
    }
    void pop()
    {
        if (v.size() == 0)
        {
            cout << "Stack if empty" << endl;
            return;
        }
        v.pop_back();
    }
    int top()
    {
        if (v.size() == -1)
        {
            cout << "myStack is empty";
            return -1;
        }
        return v[v.size() - 1];
    }
    int size(){
        return v.size();
    }
    void display()
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    myStack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.top();
    cout<<endl;

    s.pop();

    cout<<s.top();
    cout<<endl;

    s.display();
    s.pop();
    cout<<s.size();
    cout<<endl;

    cout<<s.top();
    cout<<endl;

    s.display();
}