#include<iostream>
#include<string.h>
using namespace std;



class Book
{

public:
    int page_no;
    string name;
    //string name;
Book()
{
   this->name="Shyaamchi_Aai";
    //strcpy( name, "Rutu");
    cout<<" Default Constructor is called"<<endl;
}

Book(string s, int x)

{
    cout<<"Parameterised Constructor is Called"<<endl;
    this->name="Shyaamchi_Aai";
    page_no=x;
}

~Book()
{
    cout<<"Destructor is called"<<endl;

}



};

int main()
{
 Book b1("Shyaamchi_Aai", 100);
 Book b2;
 cout<<"No of Pages:"<<b1.page_no<<endl;
 cout<<"Book name:"<<b1.name<<endl;

return 0;
}
