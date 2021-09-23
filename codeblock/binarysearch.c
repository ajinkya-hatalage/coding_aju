#include<stdio.h>
int linearsearch(int arr[],int size,int element)
{for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
return -8;
}
int binarysearch(int arr[],int size,int element)
{
    int low=0,mid,high=size-1;
    //start searching
    while(low<=high)
   {
       mid=(low+high)/2;

    if(arr[mid]==element)
    {
        return mid;
    }
    if(arr[mid]<element)
    {
        low=mid+1;
    }
    else{
        high=mid-1;
    }
   }
   //serching end
   return -1;

}
int main()
{
    int arr[]={1,2,3,4,6,5,9},element;
    int size=sizeof(arr)/sizeof(int);
   printf("element enter=");
   scanf("%d",&element);
   // int searchindex=linearsearch(arr,size,element);
   int searchindex=binarysearch(arr,size,element);

    printf("THE ELEMENT %d IS AT THE INDEX %d\n",element,searchindex);


    return 0;
}
