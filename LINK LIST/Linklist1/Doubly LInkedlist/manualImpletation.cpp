#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node *prev;

    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void deleteAtHead(node*head){
    
}
void display(node *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void displayRec(node *head)
{

    if (head == NULL)
    {
        return;
    }

    cout << head->val << " ";
    displayRec(head->next);
    // reverse ordeer
    // cout << head->val << " ";
}

int main()
{
    node *a = new node(10);
    node *b = new node(20);
    node *c = new node(30);
    node *d = new node(40);
    node *e = new node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // previous linked
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;

    display(a);
    displayRec(a);
}