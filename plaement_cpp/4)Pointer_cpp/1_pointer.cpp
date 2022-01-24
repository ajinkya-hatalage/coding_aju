/*
# Pointers
-> pointers are variables that store the address of other variable
- using pointer we can access the variable and can be modify it.
---pointer arithmatic : ++ ,-- ,+, -
*/
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int *a_ptr;
    a_ptr = &a;
    cout << &a << endl; // op = 0x61ff08
    cout << *a_ptr << endl; //op =10  (Derefrencing )
    *a_ptr = 20;
    cout << a<<endl; //op =20
    cout << a_ptr << endl;
    a_ptr++;
    cout << a_ptr<<endl;


    return 0;
}