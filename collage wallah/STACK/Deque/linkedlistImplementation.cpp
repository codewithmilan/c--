#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next, *prev;
    node(int val)
    {
        data = val;
        prev = next = NULL;
    }
};
class deque
{
    node *front, *rear;

public:
    deque()
    {
        front = NULL;
        rear = NULL;
    }

    void push_front(int x)
    {

        if (front == NULL)
        {
            node *temp = new node(x);
            rear = front = temp;
        }
        else
        {
            node *temp = new node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
        }
    }
    void push_back(int x)
    {

        if (front == NULL)
        {
            node *temp = new node(x);
            rear = front = temp;
        }
        else
        {
            node *temp = new node(x);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
        }
    }
    void pop_front()
    {
        if (front == NULL)
            return;
        else
        {
            node *temp = front;
            front = front->next;
            delete temp;

            if (front)
                front->prev = NULL;
            else
                rear = NULL;
        }
    }
    void pop_back()
    {
        if (front == NULL)
            return;
        else
        {
            node *temp = rear;
            rear = rear->prev;
            delete temp;

            if (rear)
                rear->next = NULL;
            else
                front = NULL;
        }
    }
    int Front()
    {
        if (front == NULL)
            return -1;
        else
            return front->data;
    }
    int back()
    {
        if (front == NULL)
            return -1;
        else
            return rear->data;
    }
    void display()
    {
        node *temp = front;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{

    deque d;
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_back(4);
    d.display();
    d.pop_back();
    d.pop_front();
    d.display();
}