#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class Linklist
{
public:
    node *head;
    node *tail;
    int size;
    Linklist()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtBegin(int val)
    {
        node *temp = new node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtEnd(int val)
    {
        node *temp = new node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtMiddle(int idx, int val)
    {
        node *t = new node(val);
        node *temp = head;
        if (idx == 0)
            insertAtBegin(val);
        else if (idx == size)
            insertAtEnd(val);
        else if (idx < 0 || idx >= size)
            cout << "Invilid index";
        else
        {
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
        }
        size++;
    }

    void deleteAtBegin()
    {
        head = head->next;
        size--;
    }

    void deleteAtEnd()
    {
        node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
    }
    void deleteAtIdx(int idx)
    {
        node *temp = head;
        for (int i = 1; i <= idx - 1; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;

    }

    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // print the ink list recurssievely
    void display2(node *head)
    {

        if (head == NULL)
            return;
        // print in rever order
        // display2(head->next);
        cout << head->val << " ";
        display2(head->next);
    }
};
int main()
{
    Linklist l;
    l.insertAtBegin(5);
    l.insertAtBegin(15);
    l.insertAtEnd(35);
    l.display();
    l.insertAtMiddle(2, 25);
    // l.display2(l.head);
    l.display();
    l.deleteAtBegin();
    l.deleteAtEnd();

    l.display();
    l.deleteAtIdx(1);
    l.display();
}