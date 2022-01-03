#include<bits\stdc++.h>
using namespace std;
int main()
{
    int arr[4]={1,2,3,8};
    array<int,4>a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"ELEMENET AT 2ND INDEX := "<<a.at(2)<<endl;
    cout<<"FIRST ELEMENT :="<<a.front()<<endl;
    cout<<"LAST ELEMENT :="<<a.back()<<endl;
    cout<<"___?"<<a.empty();
    
return 0;
}
