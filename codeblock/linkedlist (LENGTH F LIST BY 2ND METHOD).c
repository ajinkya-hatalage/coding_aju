/*recursive solution
  int getcount(head)
  1)if head is NULL return 0
  2)else return 1 + getcount(head->next)
*/
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};

void insert(struct node**head,int new_data)
{
    struct node*new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data=new_data;

    new_node->next=(*head);

    (*head) = new_node;
}
int getcount(struct node*head)
{
    if(head==NULL)
    {
        return 0;
    }
    else{
        return 1 + getcount(head->next);
    }
}
int main(){
    struct node*head=NULL;
   insert(&head,50);
   insert(&head,40);
   insert(&head,30);
   insert(&head,20);
   insert(&head,10);
   printf("count is %d",getcount(head));

}
/*output
count is 5
Process returned 0 (0x0)   execution time : 0.062 s
Press any key to continue.

*/
