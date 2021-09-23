/*
class is blueprint of an object (size,nature or discriptin of class).
class is non primitive/user defined data type containg data and function.
object and variable are diff. as object may contains various variable.
class is means to achieve encapsulation.
object is run time entity.
object is an instance of class ..instance means example ...
*/
#include<bits\stdc++.h>
using namespace std;
class car{
    private:
    int prize,model;
    public:
   int setdata(int x,int Y)
   {
       prize=x;
    model=Y;
   }
   void getdata()
   {
     
       cout<<"prize is :="<<prize<<endl<<model;
   
}

};
//int car :: setdata(int x,int Y)

//void car :: getdata() //using scope resolution operator 

int main()
{
    car c1;
    c1.setdata(20,1990);
    c1.getdata();
return 0;
}