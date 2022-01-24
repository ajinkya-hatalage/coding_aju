#include <bits\stdc++.h>
using namespace std;
// passed by value
void swap_pass_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
//passed by reference
void swap_pass_reference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 2;
    int b = 4;
    swap_pass_value(a, b);
    cout << a << " " << b << endl;
    cout << "____Below is swappping done by refrence__________";
    int *aptr = &a;
    int *bptr = &b;
    swap_pass_reference(aptr, bptr);
    cout << a << " " << b << endl;

    return 0;
}