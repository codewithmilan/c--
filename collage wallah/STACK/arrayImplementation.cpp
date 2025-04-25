#include <iostream>
using namespace std;
class myStack
{
public:
    int arr[5];
    int size, idx;
    myStack()
    {
        idx = -1;
        size = 0;
    }
    void push(int val)
    {
        if (idx == size)
        {
            cout << "Stack if full" << endl;
            return;
        }
        idx++, size++;
        arr[idx] = val;
    }
    void pop()
    {
        if (idx == -1)
        {
            cout << "Stack if empty" << endl;
            return;
        }
        idx--;
        size--;
    }
    int top()
    {
        if (idx == -1)
        {
            cout << "myStack is empty";
            return -1;
        }
        return arr[idx];
    }
    void display()
    {
        for (int i = 0; i <= idx; i++)
        {
            cout << arr[i] << " ";
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
    cout << endl;
    cout << s.size;
    s.pop();
    s.pop();
    cout << s.size;
    cout << s.top();
    s.display();
}