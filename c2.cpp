/*#include<iostream>
using namespace std;
struct car
{
public:
     char brand_name[20];
    int price;
    float warenty;
    car input()
    {
     car c;
    cout<<"enter price warenty brand name of car"<<endl;
    cin>>price>>warenty>>brand_name;
    return(c);
     }
   void display()
  {
    cout<<price<<warenty <<brand_name<<endl;
  }
};

int main()
{
 car c1;
 c1.input();
 c1.display();
  /*  car c1;
    cout<<"ENTER THE CAR PRICE"<<endl;
    cout <<"enter the warenty year"<<endl;
    cout<<"car name"<<endl;
    cin>>c1.price>>c1.warenty>>c1.brand_name;
    c1.price;
    c1.warenty;
   c1.brand_name;
    strlen(c1.brand_name);
    car input();*/
   // c1.brand_name="ford"; --> not applicable

    //c1.brand_name=""  -->not applicable

  /*  cout<<"CAR BRAND NAME :="<<a<<endl;
    cout<<"price of car :="<<c1.price<<endl;
    cout<<"warenty of car:="<<c1.warenty<<" YEARS"<<endl;
    cout<<strlen(c1.brand_name);
    */
//return 0;
//}
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1,str2,str3;
    char a,b;
    int strlen1 ,strlen2;
    cin>>str1;
    cin>>str2;
    strlen1=str1.size();
    strlen2=str2.size();
    cout<<strlen1<<" "<<strlen2;
    str3=str1+str2;
    cout<<"\n"<<str3<<endl;
    //////
    str2[0]=a;
    str1[0]=b;
    cout<<str1<<" "<<str2;

	// Complete the program

    return 0;
}
