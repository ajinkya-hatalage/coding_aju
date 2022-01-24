#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   /* for(int i=0;i<n;i++)
    {
        cout<<arr[i];   //to print all elements in array
    }*/
   int maxno=INT_MIN;
   int minno=INT_MAX;
   for(int i=0;i<n;i++)
   {
       //method 1
       maxno=max(maxno,arr[i]);
        minno=min(minno,arr[i]);
     /*  if(arr[i]>maxno)
       {
           maxno=arr[i];
       }
       else if(arr[i]<minno)
       {
           minno=arr[i];
       }*/
   }
   cout<<maxno<<" "<<minno;
    
return 0;
}
//tofind max and min in array