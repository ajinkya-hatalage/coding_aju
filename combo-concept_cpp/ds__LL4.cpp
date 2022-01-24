/*
To reverse K nodes in a linked list 
*/
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertattail(node *&head, int val)
{
    node *n = new node(val);
    //case
    if (head == NULL)
    {
        head = n;
        return;
    }
    /////
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
//----------------------------------
node* reversek(node* &head,int k)
{
    node*prevptr=NULL;
    node*currptr=head;
    node*nextptr;
    int count=0;
    while(currptr!=NULL && count<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
    head->next = reversek(nextptr,k);
    }
    return prevptr;
}
//----------------------------------

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node *head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    insertattail(head, 5);
    insertattail(head, 6);
    display(head);
    int k=2;
    node*newhead=reversek(head,k);
    display(newhead);

return 0;
}
/*output
1-> 2-> 3-> 4-> 5-> 6-> NULL
2-> 1-> 4-> 3-> 6-> 5-> NULL
*/