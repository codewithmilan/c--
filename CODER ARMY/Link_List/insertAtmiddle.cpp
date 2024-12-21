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
node *createlinklist(int arr[], int index, int size)
{
    if (size == index)
        return NULL;
    node *temp;
    temp = new node(arr[index]);
    temp->next = createlinklist(arr, index + 1, size);
    return temp;
}
int main()
{
    node *head;
    head = NULL;
    int arr[] = {1, 2, 3, 4, 5};
    head = createlinklist(arr, 0, 5);

    int x = 3;
    x--;
    node *temp = head;
    while (x--)
    {
        temp = temp->next;
    }
    node *temp2;
    temp2 = new node(300);
    temp2->next = temp->next;
    temp->next = temp2;

    node *temp3 = head;
    while (temp3)
    {
        cout << temp3->data << " ";
        temp3 = temp3->next;
    }
}