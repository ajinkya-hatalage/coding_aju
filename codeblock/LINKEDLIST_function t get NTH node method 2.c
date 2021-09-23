//method 2 recursion
/*ALGORITHM
getnth(node, n)
1)initialize count = 0;
2)if count ==n
return node->data
3)else
return getnth(node->next,n-1)
*/
#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;
};
void insert(struct node**head,int new_data)
{
    struct node*new_node =(struct node*)malloc(sizeof(struct node) );

    new_node->data=new_data;
    new_node->next=(*head);
    (*head)=new_node;
}
/*take the head pointer of the linked list and index as argument and return
data at index.(dont use another variable)*/
int getnth(struct node *head,int n)
{
    //if length of list is lessthan the given indexreturn -1
    if(head==NULL)
    {
        return -1;
    }
    //if n equal to 0 return node->data
    if( n == 0)
    {
        return head->data;
    }
    //increase head to next pointer  n-1; decrease the number of recursion
    return getnth(head->next,n-1);
}
int main()
{
    struct node*head=NULL;
    insert(&head,1);
     insert(&head,4);
      insert(&head,1);
       insert(&head,12);
        insert(&head,1);
        printf("ELEMENT AT INDEX 3 IS %d",getnth(head,3));
       // getchar();
}

