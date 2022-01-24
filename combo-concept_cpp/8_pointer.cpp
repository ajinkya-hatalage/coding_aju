/*
pointers are variables that stores the address of other varible
we access that variable using pointer and modify too
-------------------------------
pointer arithmatic ++,--,+,-
-------------------------------
pointer to pointer(**)


*/
#include<bits\stdc++.h>
using namespace std;
int main()
{
   // pointer and array
    int arr[]={10,20,40};
    cout<<*arr<<endl;
    int *ptr=arr;
    for(int i=0;i<3;i++)
    {
        cout<<*ptr<<endl;//cout<<*(arr+i)  as arr++ is elligal
        ptr++;
    }
return 0;
}