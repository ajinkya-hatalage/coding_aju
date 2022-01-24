#include<bits\stdc++.h>
using namespace std;
void increment(int *a) // different value i.e we are giving just copy to function .
{
    a++;
    cout << "Inside the functin :\t"<<a<<endl;
    
}
int main()
{
    int a = 2;
    increment(&a);

    cout << "IN the main function :\t"<<a << endl;
    return 0;
}
/*
output :

Inside the functin :    3
IN the main function :  2

*/