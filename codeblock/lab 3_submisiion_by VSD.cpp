#include<iostream>
using namespace std;
class area{

   public :
       int pi;
       int R;
       int setarea(int Radius)
       {

           R=Radius;
       }
       int setperimeter(int Radius)
       {
           R=Radius;

       }
       int getperimeter();
       float getarea();

};
int area:: getperimeter()
{
    float pi=3.14;
    cout<<"PERIMETER OF CIRCLE IS :="<<2*pi*R<<endl;
};
 float area:: getarea()
 {
     float pi=3.14;
 cout<<"AREA OF CIRCLE IS := "<< pi*R*R<<endl;
 }

int main()
{
    float pi=3.14;
    area A1;

    A1.setarea(1);
    A1.getarea();

    A1.setperimeter(1);
    A1.getperimeter();
    return 0;
}
