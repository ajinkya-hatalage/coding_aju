#include<bits\stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    /* pattern 1
    *****
    *****
    *****
    */
   for(int i=1;i<=row;i++)
   {
       for(int j=1;j<=col;j++)
       {
           cout<<"* ";
       }
       cout<<endl;
   }
   //pattern 2;
   /*
   ****
   *  *
   *  *   row 5 ;col 4
   *  *
   ****
   */
  cout<<"______________"<<endl;
 for(int i=1;i<=row;i++)
 {
     for(int j=1;j<=col;j++)
     {
         if(i==1 || i==row || j==1 || j==col)
         {
             cout<<"*";
         }
         else 
         {
             cout<<" ";
         }
     }
     cout<<endl;
 }
return 0;
}