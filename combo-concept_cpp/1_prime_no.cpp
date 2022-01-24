#include<bits\stdc++.h>
using namespace std;
int main()
{
  /*  int num;
    cin>>num;
   //case 1;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            cout<<"NOT PRIME";
            break;
        }
        else{
            cout<<"prime";
            break;
        }
    }
   //case 2;*/
  /* int a,b,i;
   cin>>a>>b;
   for(int num=a;num<b;num++)
   {
       for( i=2;i<num;i++)
       {
           if(num%i==0)
           {
              break;
           }
       }
       if(i==num)
       {
           cout<<num<<" ";
       }
   }*/
   //case 3
   int num;
   cin>>num;
   for(int i=2;i<=sqrt(num);i++)
   {
       if(num%i==0)
       {
           cout<<"not PRIME";
           break;
       }
       {
           cout<<"prime";
           break;
       }
    }
return 0;
}