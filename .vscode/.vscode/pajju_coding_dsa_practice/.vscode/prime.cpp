#include<bits\stdc++.h>
using namespace std;
void isprime(int x)
{
   
    for(int i=1;i<=sqrt(x);i++)
    {
       if(x%i==0)
       {
           cout<<i<<" ";
           cout<<x/i<<" ";

       }
    
       
    }
   
}
int main()
{
    int p,c;
    cout<<"ENTER P :=";
    cin>>p;
isprime(p);

return 0;
}