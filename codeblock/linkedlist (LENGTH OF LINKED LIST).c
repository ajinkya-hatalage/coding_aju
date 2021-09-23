//FIND  THE LENGTH OF LINKED list
/*ITERATIVE SOLUTION
  1)initialize count as 0
  2)initialize a node pointer , current=head
  3)do following while current is not NULL
     a)current = current->next
     b)count++;
  4)return count;
*/
//iterative c program to find length or count of node n the linked list
#include<stdio.h>
#include<stdlib.h>
//create a node
struct node{
int data;
 struct node*next;
};
/*Given a reference (pointer to pinter)o the head of the list and
 an int .insert a new node on the front of the list
*/
void insert(struct node**head,int new_data)
{
    //allocate a node
    struct node*new_node=(struct node*)malloc(sizeof(struct node));
    //put data into it
    new_node->data=new_data;
    //link the old list of the new node
    new_node->next=(*head);
    //move the head  to point to the new node
    (*head) = new_node;
}
//count the number of nodes in the linked list
int getcount(struct node*head)
{
    int count=0; //initialize the count
    struct node*current=head;  //initialize the current
    while(current!=NULL)
    {
        count++;
        current=current->next;
    }
    return count;

}

//driver code
int main(){
    //start with empty linked list
    struct node*head = NULL ;
    //use insert() to add data in the list
    insert(&head,50);
    insert(&head,40);
    insert(&head,30);
    insert(&head,20);
    insert(&head,10);
    //check the count function:
    printf("COUNT OF NODES PRESENT IN THE LINKED LIST := %d",getcount(head));


}
/*
output
COUNT OF NODES PRESENT IN THE LINKED LIST := 5
Process returned 0 (0x0)   execution time : 0.062 s
Press any key to continue.
*/
