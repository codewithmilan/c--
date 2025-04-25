#include <iostream>
#include <queue>
using namespace std;

// this is create in first solve left then right
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

node *BinaryTree()
{

    int x;
    cin >> x;
    node *temp = new node(x);
    if (x == -1)
        return NULL;
    // left
    cout << "Enter the left child of " << temp->data << " :";
    temp->left = BinaryTree();
    // right
    cout << "Enter the right child of " << temp->data << " :";
    temp->right = BinaryTree();
    return temp;
}
int main()
{
    int x;
    cout << "Enter the root element :";
    node *root = new node(x);
    root = BinaryTree();
}
