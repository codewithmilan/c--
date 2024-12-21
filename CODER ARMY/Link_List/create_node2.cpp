#include <bits/stdc++.h>
using namespace std;

// dynamically created node;
class node
{
public:
    int data;
    node *next;
};
int main()
{
    node *head;
    head = new node();
    head->data = 4;
    head->next = NULL;
    cout << head->data;
    cout << head->next;
}
