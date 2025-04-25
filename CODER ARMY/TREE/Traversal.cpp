#include <iostream>
#include <queue>
using namespace std;
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

void preorder(node *root)
{
    if (root == NULL)
        return;

    // preorder=node left right
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root)
{
    if (root == NULL)
        return;

    // preorder=node left right
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);


}

void postorder(node *root)
{
    if (root == NULL)
        return;

    // preorder=node left right
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";

}

int main()
{
    int x, first, second;

    cin >> x;
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
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
}
