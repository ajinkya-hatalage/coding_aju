#include<iostream>
#include"library.h"
using namespace std;
class exam : public student{
protected:
    float maths;
    float chemistry;
public:
    exam(){
    maths=0;
    chemistry=0;
    cout<<"CONTRUCTOR CALLED FOR DERIVED CLASS"<<endl;
    }
    void setmarks(float m,float c)
    {
        maths=m;
        chemistry=c;
    }
    void getmarks()
    {
        cout<<"MATHS MARKS ARE     := "<<maths<<endl;
        cout<<"CHEMISTRY MARKS ARE := "<<chemistry<<endl;
    }
    ~exam()
    {
        cout<<"DESTRUTOR FOR DERIVED CLASS IS CALLED := "<<endl;
    }
};
int main()
{
  exam e;
  e.get_rn();
  e.set_rn();
  e.setmarks(100,100);
  e.getmarks();
  return 0;
}
