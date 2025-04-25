#include <iostream>
#include <queue>
using namespace std;

// this is create in lavel order 
class node
{
public:
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
int main()
{
    int x;
    cout << "Enter the root element :";

    cin >> x;
    int first, second;

    queue<node *> q;
    node *root = new node(x);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << "Enter first child of " << temp->data << " ";
        cin >> first;
        if (first != -1)
        {
            temp->left = new node(first);
            q.push(temp->left);
        }
        cout << "Enter second child of " << temp->data << " ";
        cin >> second;
        if (second != -1)
        {
            temp->right = new node(second);
            q.push(temp->right);
        }
    }
}
