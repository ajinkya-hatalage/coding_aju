#include<bits\stdc++.h>
using namespace std;
int main()
{
//pattern 3
 /*
          inverted half pyramid  
          *****
          ****
          ***
          **
          *


 */
int n ;
cin>>n;
for(int i=n;i>=1;i--)
{
    for(int j=1;j<=i;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
//pattern 4
 /*
           half pyramid  
        
             *
            **
           ***
          ****



 */
cout<<"--------------"<<endl;

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
      if(j<=n-i)
             {
                 cout<<" ";
             }
      else{
          cout<<"*";
      }
    }
    cout<<endl;
}
//pattern 5 : half pyramid using no
/*
1
22
333
4444
*/
cout<<"--------------"<<endl;

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
      cout<<i;
    }
    cout<<endl;
}
//pattern 6 : floyd's triangleusing no
/*
1
23
456
*/
cout<<"--------------"<<endl;
int count=1;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
      cout<<count;
      count++;
    }
    cout<<endl;
}
//pattern 7:butterfly pattern
/*
    *       *
    * *   * *
    * * * * *
    * * * * *       rows= 1to n
    * *   * *       * :=row no
    *       *        space =2*n-2*rowno   
*/
cout<<"--------------"<<endl;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
      cout<<"*";
    }
    int space=2*n - 2*i;
    for(int j=1;j<=space;j++)
    {
        cout<<" ";
    }
    for(int j=1;j<=space;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
for(int i=n;i>=1;i--)
{
    for(int j=1;j<=i;j++)
    {
      cout<<"*";
    }
    int space=2*n - 2*i;
    for(int j=1;j<=space;j++)
    {
        cout<<" ";
    }
    for(int j=1;j<=space;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}