#include<iostream>
using namespace std;
float area(int x)
{
    return(3.14*x*x);
}
int area(int y,int z)
{
    return(y*z);
}

int main()
{
   int r;
   cout<<"radius"<<endl;
   cin>>r;
   cout<<"AREA of c :="<<area(r)<<endl;
   int l,b;
   cout<<"enter L & B"<<endl;
   cin>>l>>b;
  cout<<"area"<<area(l,b);
}
