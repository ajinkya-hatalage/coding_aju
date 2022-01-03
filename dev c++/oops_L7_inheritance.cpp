//AJINKYA ASHOK HATALAGE 
//PRN :=2019BTEEN00031
#include<iostream>
#include"library_1.h"
using namespace std;
class exam : public student{
	private:
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
  e.get_rn();//BASE CLASSA
  e.set_rn();//BASE CLASS 
  e.setmarks(100,100);
  e.getmarks();
  return 0;
}

