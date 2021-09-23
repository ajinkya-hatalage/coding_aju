//method 1 : iterative method
/*code to get N th node in a linked list
ALGORITHM:
1) initialize count =0 ;
2) Loop through link list
 a) if count is equal to the passed index then return current node
 b)Increment count
 c) change current to point to next of the current

*/
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

struct node{
int data ;
struct node*next;
};
void insert(struct node**head,int new_data)
{
    struct node*new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=(*head);
    (*head)=new_node;
}
//take head pointer of the linked linked list and index as arguments and return data at index
int getNth(struct node*head,int index)
{
    struct node* current = head ;
    //the index of node we were currently looking at
    int count =0;
    while(current!=NULL)
    {
        if(count == index)
        {
            return (current->data);
        }
        count ++;
        current=current->next;
    }
    /*if we het this line the caller was asking for
    a non-existent elements so we assert fail*/
    assert(0);
}
int main()
{
    struct node*head=NULL;
    insert(&head,1);
    insert(&head,4);
    insert(&head,1);
    insert(&head,12);
    insert(&head,1);
    printf("ELEMENT AT INDEX 3 IS %d",getNth(head,3));
    getchar();
}
