#include <bits/stdc++.h>
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
    node *head = NULL;
    int arr[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 4; i++)
    {
        if (head == NULL)
        {
            head = new node(arr[i]);
        }
        else
        {

            node *temp;
            temp = new node(arr[i]);
            temp->next = head;
            head = temp;
        }
        node *temp = head;
        while (temp)
        {
            cout << temp->data << " ";
            head = temp;
        }
    }
}