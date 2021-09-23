#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[]={1,1,4,4,6,6,8,8,1,241,24,1,4,124,1,4};
    n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int it=0;
    while(it<n)
    {
        int curr=arr[it];
        int count=0;
        while(arr[it]==curr && it<n)
        {
            it++;
            count++;
        }
        cout<<curr<<" "<<count<<endl;
    }
}
