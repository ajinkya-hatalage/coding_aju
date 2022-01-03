#include<iostream>
#include "library_1.h"
using namespace std;
student :: student()
{
    int a;
    cout<<"ENTER ROLL NO := "<<endl;
    cin>>a;
    roll_no=a;
    cout<<"CONSTRUCTOR FOR BASE CLASS IS CALLED : "<<endl;
};
student::~student()
{
    cout<<"DESTRUCTOR FOR BASE CLASS IS CALLED"<<endl;
};
void student::set_rn()
{

    int s;
    cout<<"ENTER NEW ROLL NUMBER"<<endl;
    cin>>s;
    roll_no=31;
}
void student::get_rn()
{
  cout<<"ROLL NO IS := "<<roll_no<<endl;
}

