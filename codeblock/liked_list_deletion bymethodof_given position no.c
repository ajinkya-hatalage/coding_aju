/*DELETE A LINKED LIST AT A GIVEN POSITION:
if the node is deleted is the root simply delete it .to delete  MIDDLE NODE we must have a
    pointer to the node previous to the node to be deleted .so if position are not zero we
    run a loop position -1 time and get a pointer to the previous node
*/
#include<stdio.h>
#include<stdlib.h>
//a linkedd list node
struct node{
   int data;
   struct node*next;
};
//given a reference (pointer to pointer)to the head of the list and an int inserts
//a new node on the front of the list.
void insert(struct node**head,int new_data)
{
    struct node*new_node=(struct node*)malloc(sizeof(struct node));//allocate memory in the heap
    new_node->data=new_data;
    new_node->next=(*head);
    (*head)=new_node;
}
//given a reference(pointer to pointer )to the head of the list
//and a position .deletes the node at given position
void deletenode(struct node**head,int position)
{
    if(*head==NULL)
    {printf("LIST IS EMPTY");
    return;}
    //store head node
    struct node*temp=*head;
    //if heads need to be removed
    if(position==0)
    {
        *head=temp->next;
        free(temp);
        return;
    }
    //find previous node of the node to be deleted
    for(int i=0;temp!=NULL && i<position-1;i++)
    {
        temp=temp->next;
    }
    //if position is more than number of nodes
    if(temp==NULL||temp->next==NULL)
    {
        return;
    }
    //node temp->next is the node to be deleted
    //store pointer to the next of node to be deleted
    struct node*next=temp->next->next;
    //unlinked the node from linked list
    free(temp->next);//free memory;
    temp->next=next;//unlink the deleted node from list

}
//the list on the screen
void printlist(struct node*n)
{
    if(n==NULL){printf("list is empty");}
    while(n!=NULL)
    {
        printf(" %d->",n->data);
        n=n->next;
    }
}
//driver code
int main(){
    struct node*head=NULL;
   insert(&head,50);
    insert(&head,40);
     insert(&head,30);
      insert(&head,20);
       insert(&head,10);
       puts("created linked list is:= ");
   printlist(head);
     deletenode(&head,1);
   puts("\nTHE NEW LINKED LIST AFTER DELETION BE:=");
 printlist(head);
}
/*output
created linked list is:=
 10-> 20-> 30-> 40-> 50->
THE NEW LINKED LIST AFTER DELETION BE:=
 10-> 30-> 40-> 50->
Process returned 0 (0x0)   execution time : 0.063 s
Press any key to continue.
*/
