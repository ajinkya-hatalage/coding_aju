//base condition : array must be sorted
#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int s=0;//starting point 
    int e=n;//ending point
    while(s<=e)
    {
     int mid=(s+e)/2;
     if(arr[mid]==key)
     {
         return mid;
     }
     else if(arr[mid]>key)
     {
         e=mid-1;
     }
     else{
         s=mid+1;
     }
     
    }
    return -1;
    
}
int main()
{
    int n;
    cout<<"enter the size of array :=" ;
    cin>>n;
    int arr[n];
    cout<<"ENTER THE n ELEMENTS OF ARRAY";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"ENTER THE VALUE OF KEY\n";
    cin>>key;
  cout<<binarysearch(arr,n,key);
}
//time complexity = O(log n)