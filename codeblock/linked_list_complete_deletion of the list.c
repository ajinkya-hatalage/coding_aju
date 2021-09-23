/*iterate through the linked list and delete all the nodes one by one.
 the main point here is not to access the next of the current pointer if the current
 pointer is deleted.
*/
//c program to delete the ;linked list
#include<stdio.h>
#include<stdlib.h>
//create a node i the linked list
struct node{
int data;
struct node*next;
};
//function to delete the entire linked list
void deletelist(struct node**head)
{
    struct node*current = *head;
    struct node*next;
    while(current!=NULL)
    {
        next= current->next;
        free(current);
        current=next;
    }
    //dereference to affect the real head back i the caller
    *head=NULL;
}
//given a reference(pointer  to the pointer)to the head of a list and
//an int . insert a new node on the front of the list
void insert(struct node**head,int new_data)
{
    //allocate a node
    struct node*new_node=(struct node*)malloc(sizeof(struct node));
    //put in the data
    new_node->data=new_data;
    //link the old list off the new node
    new_node->next=(*head);
    //move the head to point to the new node
    (*head)=new_node;
}
//driver code
int main()
{
  //start wit the empty list;
  struct node*head=NULL;
  //use insert function to construct the linked list
  insert(&head,5);
  insert(&head,4);
  insert(&head,3);
  insert(&head,2);
  insert(&head,1);

  printf("deleting the linked list :\n");
  deletelist(&head);
  printf("\nlinked list is deleted successfully");

}
/*output:
deleting the linked list :

linked list is deleted successfully
Process returned 0 (0x0)   execution time : 0.062 s
Press any key to continue.
*/
