//linked list creation! traversal and printing the linked list
#include<bits\stdc++.h>
using namespace std;
// node is data type -> user defined data type
//creating node .
class node
{
    public:
    int data ;
    node*next;//pointer to node---->i.e.(node*)

};
void traverse(node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<"|"<<n->next<<"|"<<"->";
        
        n=n->next;
    }
}
int main()
{
    node *head=NULL;
    node *sec=NULL;//empty list
    head= new node;
    sec=new node
    ;//in c program it like : struct node *head=(struct node*)malloc(sizeof(struct node))
   head->data=2;//(*head).data=3
   head->next=sec;
  sec->data=3;
  sec->next=NULL;
  traverse(head);

return 0;
}