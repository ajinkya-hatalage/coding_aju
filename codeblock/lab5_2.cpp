#include<iostream>
using namespace std;
class num{
   int a,b;
   public :
       num(int x,int y)
       {
           a=x;
           b=y;
       }
       void operator++()
       {
           a=++a;
           b=++b;
       }
       void operator --()
       {
           a=--a;
           b=--b;
       }
       void print()
       {
           cout<<a<<" "<<b<<endl;
       }
};
int main()
{
    num n1(3,2),n2(5,4);
    ++n1;
    cout<<"increment :="<<endl;
    n1.print();
   --n2;
    cout<<"decrement :="<<endl;
    n1.print();
    return 0;
}
