#include<iostream>
using namespace std;
class negation{
    private:
 int num;
 int num1;
    public:
        negation()
        {
            num=0;num1=0;
        }
        negation(int x,int y)
        {
            num=x;
            num1=y;
        }
        void display()
        {
            cout<<"NUM := "<<num<<" NUM1 :="<<num1<<endl;
        }
        negation operator-(){
        num= -num;
        num1=-num1;
        return negation(num,num1);
        }
};
int main()
{
 negation n1(10,-3),n2(-2,20);
 -n1;
 n1.display();
 -n2;
 n2.display();
 return 0;
}
