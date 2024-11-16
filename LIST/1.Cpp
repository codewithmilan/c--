#include <iostream>
using namespace std;
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
    // node m1;
    // m1.data = 4;
    // m1.next = NULL;
    node *head;
    head = new node(4);
    // head->data = 4;
    // head->next = NULL;
    cout << head->data << endl;
    cout << head->next;
}