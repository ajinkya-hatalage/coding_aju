/*Iterative solution
  1)initialize anode pointer,current=head
  2)do following while current is not NULL
     a)current->key is equal to the key being searched return true
     b)current=current->next;
  3)return false.
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
int data;
struct node*next;
};

void insert(struct node **head,int new_data)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data = new_data;

    new_node->next = (*head);
    (*head)=new_node;
}
bool search(struct node *head,int x)
{
    struct node*current =head ;//initializing current
    while(current != NULL )
    {
        if(current->data == x)
        {
            return true;
        }
        current = current->next;
    }
    return false;
}
int main()
{
    struct node*head =NULL;
    int x=21;

    insert(&head,10);
    insert(&head,30);
    insert(&head,11);
    insert(&head,21);
    insert(&head,14);
    search(head,21)?printf("YES"):printf("NO");
    return 0;
}
/*output
YES
Process returned 0 (0x0)   execution time : 0.109 s
Press any key to continue.
*/
