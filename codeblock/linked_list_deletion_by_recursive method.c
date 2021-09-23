//linked list deletion y using recursive method
/*
TO DELETE A NODE OF A LINKED LIST RECURSIVELY WE NEED TO FOLLOW FOLLOWING STEPS
1)we pass node*(node pointer ) ass a reference to   the function (as in node* &head)
2)now since current node pointer is derived from previous node next(which is passed by the reference)
 so now if the value of the current node pointer is changed,previous next nodes value also get changed
 which is the required operation while deleting the node(i.e.points previous nodes next to current nodes
 (containig key)next)
3)find the node containg given value
4)store this node to deallocate it later using free() function
5)change this node pointer so that it points to its next and by performing this previous nodes next also
 get properly linked
*/
#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node*next;

};
//insertion
void insert(struct node**head,int new_data)
{
   struct node*new_node=(struct node*)malloc(sizeof(struct node));
   new_node->data = new_data;
   new_node->next=(*head);
   (*head)=new_node;
   exit;


}
//recursive function to delete the list
void deletelist(struct node * head)
{
    if(head==NULL)
    {
        return;
    }
    deletelist(head->next);
    free(head);

}
//printing the linked list uiing function
void printlist(struct node*n)
{
    while(n!=NULL)
        printf("%d ->",n->data );
        n=n->next;
        return;
}

//driver code
int main()
{
    struct node*head=NULL;
   insert(&head,10);

   printlist(head);

}
