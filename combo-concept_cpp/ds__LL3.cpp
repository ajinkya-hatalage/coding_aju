/*
in this we reverse the linked list 
we need 3 pointer here;
*/
#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
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
//by iterative way to reverse list
node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;//new head
}
//reverse list using recursive way

node* reverserecursive(node*&head)
{
   // basecase
   if(head==NULL || head->next==NULL)
   {
       return head;
   }
    node*newhead=reverserecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}

//_________________________
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
    display(head);
    cout<<"by iterative way"<<endl;
  // node*newhead=reverse(head);
   //display(newhead);
    cout<<"by recursive way"<<endl;
    node*newhead=reverserecursive(head);
    display(newhead);

    return 0;
}