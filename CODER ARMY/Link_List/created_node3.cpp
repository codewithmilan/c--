#include <bits/stdc++.h>
using namespace std;

// dynamically created node using constructor;
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()
{
    node *head;
    head = new node(4);
    cout << head->data;
    cout << head->next;
}
