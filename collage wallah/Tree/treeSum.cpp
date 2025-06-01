#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node*left,*right;

    node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void display(node*root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
 
int sum(node*root){
    if(root==NULL) return 0;
    return root->val+ sum(root->left)+sum(root->right);
}


int main(){

    //let a is the root of the tree
node* a=new node(1);
node* b=new node(2);
node* c=new node(3);
node* d=new node(4);
node* e=new node(5);
node* f=new node(6);

a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->right=f;
display(a);
cout<<endl;
cout<<sum(a)<<" ";
}