/*RECURSIVE SOLUTION
bool search(head,x)
1)if head is NULL,return false.
2)if head's key is same as X ,return true;
3)else return search(had->next,x)
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
int data;
struct node *next;
};

void insert(struct node**head,int new_data)
{
    struct node*new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data=new_data;
    new_node->next=(*head);
    (*head)=new_node;
}
bool search(struct node *head,int x)
{
    //base case
    if(head==NULL)
        return false;
    //if data is present in current node ,return true
    if(head->data==x)
        return true;
    //recursion for remaining list
    return search(head->next,x);
}
//#driver code
int main()
{
    struct node*head=NULL;
    int x=21;
    insert(&head,10);
    insert(&head,30);
    insert(&head,13);
    insert(&head,21);
    insert(&head,14);
    search(head,21)? printf("YES") : printf("NO");
    return 0;
}
