//deleting a node in linked list
/*IETRATIVE METHOD(STEPS TO FOLLOW TO DELETE NODE AS FOLLOW)
1)FIND THE PREVIOUS NODE OF THE NODE TO BE  DELETED
2)CHANGE THE NEXT OF PREVIOUS NODE
3)FREE MEMORY FOR THE NODE TO BE DELETED;
*/
#include<stdio.h>
#include<stdlib.h>
//A LINKED LIST NODE
struct node{
int data;
struct node*next;
};
void deletenode(struct node**head,int key)
{
    //store head node
    struct node*temp=*head,*prev;
    //if head node itself holds the key t be deleted
    if(temp!=NULL && temp->data==key)
    {
        *head=temp->next;//changed head
        free(temp);//free old head
        return;
    }
    //search for the key to be deleted keep the track of the previous node  as we need to change 'prev->next'
    while(temp!=NULL && temp->data!=key)
    {
        prev=temp;
        temp=temp->next;

    }
    //if key was not present in the linked list
    if(temp==NULL)
        return;
    //unlink the node from linked list
    prev->next=temp->next;
    free(temp);

}


//TO SHOW THE LIST
void printlist(struct node*n)
{
    while(n!=NULL)
    {
        printf(" %d-->",n->data);
        n=n->next;
    }
}
//driver code
int main(){
    //creating a node
   struct node*head=NULL;
   struct node*second=NULL;
   struct node *third=NULL;
    //allocate memory in the heap;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
   third=(struct node*)malloc(sizeof(struct node));
    //assigning values and linking the nodes to each other;
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=4;
    third->next=NULL;
    printlist(head);
    /*output:
    1--> 2--> 4-->

  Process returned 0 (0x0)   execution time : 0.063 s
  Press any key to continue.
    */
    printf("\n");
    deletenode(&head,2);
    printlist(head);
    /*output:
    1--> 2--> 4-->
    1--> 4-->
 Process returned 0 (0x0)   execution time : 0.062 s
 Press any key to continue.

    */

}
