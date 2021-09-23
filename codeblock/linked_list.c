//program for just creating a linked list with 3 node
#include<stdio.h>
#include<stdlib.h>
//creating a node
struct node{
int data;
struct node*next;
};
//to print the linked list;
void printlist(struct node* n)
{
    while(n!=NULL)
    {
        printf(" %d ->> ",n->data);
        n=n->next;
    }
}
//program to create simple 3 nodes in linked list:::
int main(){
   struct node*head=NULL;
   struct node*second=NULL;
   struct node*third=NULL;

   //allocate 3 nodes in the heap;
   head=(struct node*)malloc(sizeof(struct node));
   second=(struct node*)malloc(sizeof(struct node));
   third=(struct node*)malloc(sizeof(struct node));
   head->data=1;
   head->next=second;

   second->data=3;
   second->next=third;

   third->data=6;
   third->next=NULL;
   printlist(head);

   return 0;

}
/*output==
1->>3->>6
*/
