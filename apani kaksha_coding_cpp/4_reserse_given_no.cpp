#include<bits\stdc++.h>
using namespace std;
int main()
{
    // 123  op then 321
    /*int num;
    cin>>num;
    int reverse=0;
    while(num>0)
    {
        int lastdigit=num%10;
        reverse=reverse*10 +lastdigit;
        num=num/10;
    }
    cout<<reverse;*/
    //armstrong no:
    int n;
    cin>>n;
    int sum=0;
    int original=n;
    while(n>0)
    {
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
    if(sum==original)
    {
        cout<<"ARMSTorng NO"<<endl;
    }
    else{
        cout<<"NOT ARMSTRONG No"<<endl;
    }
return 0;
}