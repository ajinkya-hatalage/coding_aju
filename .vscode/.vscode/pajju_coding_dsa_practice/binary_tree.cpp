#include<bits\stdc++.h>
using namespace std;
//binary tree ___________________________synopsis
//maximum no of nodes at level l of binary tree is 2l...(2 raise to l)
//maximum number of nodes of nodes in binary tree of height h is (2h+1)-1.....(2 to the power h)
class node
{
    public:
    //creating a node;
    int data;
    node *left;
    node *right;
    //condtructor
    node(int value)
    {
        this->data=value;
        left=NULL;
        right=NULL;
    }
};
void inorder(node *root)
{
    if(root==NULL)
     return;
    cout<<root->data<<"\n";
    inorder(root->left);
    inorder(root->right);
}
void preorder(node  *root)
{
    if(root==NULL)
     return;
    inorder(root->left);
    cout<<root->data<<" \n ";
    inorder(root->right);
}
void postorder(node*root)
{
    if(root==NULL)
     return;
    inorder(root->left);
    inorder(root->right);
    cout<<root->data<<endl;
}
int main()
{
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->right->right=new node(5);
    cout<<"enorder :="<<endl;
    inorder(root);
     cout<<"preorder :="<<endl;
    preorder(root);
      cout<<"postorder :="<<endl;
    postorder(root);

return 0;
}
