#include <bits\stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
//----------------------
node *insertatfirst(node *head, int data)
{
    node *new_node = new node(data);
    new_node->next = head;
    head = new_node;
    return head;
}
//-----------------------
void insertatend(node *head, int data)
{
    node *new_node = new node(data);
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = new_node;
}
//----------------------
void insertatmiddle(node *head, int data, int pos)
{
    node *new_node = new node(data);
    node *temp;
    while (head->data != pos)
    {
        head = head->next;
    }
    temp = head->next;
    head->next = new_node;
    new_node->next = temp;
}
void display(node *n)
{
    while (n != NULL)
    {
        cout << n->data << "->";
        n = n->next;
    }
}
int main()
{

    node *head = new node(4);
    head->next = new node(5);
    head->next->next = new node(6);
    display(head);
    cout << endl;

    //insert at end
    insertatend(head, 10);
    display(head);
    cout << endl;
    head = insertatfirst(head, 1);
    display(head);
    //insert at midlle
    cout << endl;
    insertatmiddle(head, 8, 5);
    display(head);

    return 0;
}