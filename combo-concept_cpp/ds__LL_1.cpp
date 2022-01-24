//node [Data|Next]    head ptr stores the address of 1st ...last node is Null.
/*
in this we are going to discuss insertion and searching in lnked list
*/
#include <bits\stdc++.h>
using namespace std;
//creating node
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

//insertion at end (tail)
void insertattail(node *&head, int val)
{
    node *n = new node(val);
    //case
    if (head == NULL)
    {
        head = n;
        return;
    }
    //__
    node *temp = head; //temp is iterator  used to traverse in list
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

//insertathead
void insertathead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
    return;
}
///
void display(node* head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

//serching
bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
//main function

int main()
{
    node *head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    display(head);
    insertathead(head, 0);
    cout << endl;
    display(head);
    cout << endl;
    cout<<search(head,5);
   

    return 0;
}