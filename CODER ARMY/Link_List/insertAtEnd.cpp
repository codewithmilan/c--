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
node *createLinklist(int arr[], int index, int size)
{
    if (index == size)
        return NULL;
    node *temp;
    temp = new node(arr[index]);
    temp->next = createLinklist(arr, index + 1, size);
    return temp;
}
int main()
{
    node *head;
    head = NULL;
    int arr[] = {1, 2, 3, 4, 5};
    head = createLinklist(arr, 0, 5);

    node *temp=head;
    // temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}