/* NAME : AJINKYA ASHOK HATALAGE
  PRN : 2019BTEEN00031
  TOPIC : CONSTRUCTOR  & DESTRUCTOR
*/
#include<iostream>
using namespace std ;
/*class book{
public:
    float prize;
    int quantity;
    void setdata(int p,int  q)
    {
        prize=p;
        quantity=q;
    }
    void getdata()
    {
        cout<<"TOTAL PRIZE OF PURCHASING BOOK :="<<prize*quantity<<endl;
    }
};
*/
class book{
    public:
  float prize;
    int quantity;
    book(int x,int y)
    {
         prize=x;
         quantity=y;
 cout<<"constructor is called "<<endl;
    }
    book()
    {
         prize=10;
         quantity=20;
 cout<<"constructor is called "<<endl;
    }
    ~book()
{
    cout<<"destructor is called"<<endl;
}
};
int main()
{
    book b1;
    book b2(20,20);
     cout<<"TOTAL PRIZE OF PURCHASING BOOK :="<<b1.prize*b1.quantity<<endl;
     cout<<"TOTAL PRIZE OF PURCHASING BOOK :="<<b2.prize*b2.quantity<<endl;
   // b1.setdata(10,10);
   // b1.getdata();
}
