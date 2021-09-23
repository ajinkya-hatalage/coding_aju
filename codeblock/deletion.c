#include<stdio.h>

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\t\a %d",arr[i]);
    }
}

int delition(int arr[],int size,int index)
             {

                 for(int i=index ;i<size-1;i++)
                 {
                     arr[i]=arr[i+1];
                 }

             }
int main()
{
    int arr[100]={1,2,6,78};
    int size =4,element=45,index=1;
    display(arr,4);
 delition(arr,size,index);
    printf("\n");
    size-=1;
    display(arr,size);
        printf("\n");
        return 0;


}

