#include<bits\stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node*next;
};
void insert_begin(node**head,int new_data)
{
    node * new_node= new node();//alloate a node
    new_node->data=new_data;     //put data in it
    new_node->next=(*head);     //make next of new node as head
    (*head)=new node;            //move the head to point the new node
}

void insert_after(node*prev_node,int new_data)
{
    if(prev_node==NULL)
    {
      //  cout<<"list is empty";
        return;
    }
    node*new_node=new node();//allocate node
    new_node->data=new_data;//put data in it
    new_node->next= prev_node->next;//make next of new node as next of prev_node.
    prev_node->next = new_node;//move the next of prev_node as a new_node
}
void insert_end(node** head,int new_data)
{
    node*new_node=new node();//allocate node
    node *last=*head; //usedthis later
    new_node->data=new_data;//givin data to node
    new_node->next=NULL;//as it is last node
    if(*head==NULL)
    {
        *head=new_node;
        return;
    }
    while(last->next !=NULL)
    {
        last=last->next;
    }

    last->next=new_node;
    return;
}
//used to print the linked list
void printlist(node*n)
{
    while(n!=NULL)
    {
        cout<<"->"<<n->data;
        n=n->next;
    }
}
//drivr code
int main()
{
    node*head=NULL;
    insert_end(&head,7);
    insert_begin(&head,6);
    insert_after(head->next,5);
    printlist(head);
return 0;
}
