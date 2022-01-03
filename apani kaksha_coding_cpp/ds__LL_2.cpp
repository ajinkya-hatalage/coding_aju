//
#include <bits\stdc++.h>
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
//insertion
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
void deleteathead(node*&head){
    node*todelete=head;
    head=head->next;
    delete todelete;
}
void deletion(node*&head,int val)
{
    //no node is present
     if(head==NULL)
     {
         return;
     }
    // if only one node is denorm_present
    if(head->next==NULL)
    {
        deleteathead(head);
        return;
    }
    node*temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node *todelete =temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
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
    cout << endl;
    deletion(head,3);
    display(head);
    deleteathead(head);
    display(head);
    

    return 0;
}