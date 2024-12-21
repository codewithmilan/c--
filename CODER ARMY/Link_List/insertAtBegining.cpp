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
node *createlinklist(int arr[], int index, int size, node *prev)
{

    if (index == size)
        return prev;
    node *temp;
    temp = new node(arr[index]);
    temp->next = prev;
    return createlinklist(arr, index + 1, size, temp);
}
int main()
{
    node *head = NULL;
    int arr[] = {1, 2, 3, 4, 5};
    head = createlinklist(arr, 0, 5, head);
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}