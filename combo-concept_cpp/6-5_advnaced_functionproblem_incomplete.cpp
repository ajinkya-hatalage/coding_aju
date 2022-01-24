#include<bits\stdc++.h>
using namespace std;
int sum(int n)
{
    //sum of n terms;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans+=i;
    }
    return ans;

}
//_________________________
bool check(int x,int y,int z)
{
    int a=max(x,max(y,z));
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;c=y;
    }
    if(a*a==b*b + c*c)
    {
        return true;
    }
    else{
        return false;
    }
}
//___________________________________________

int main()
{
   /* int n;
    cin>>n;
    cout<<sum(n);//1st example ; sum upto n num*/
   /* int x,y,z;
    cin>>x>>y>>z;
    if(check(x,y,z))
    {
        cout<<"pythagorian trplate";
    }
    else{
        cout<<"NO Pythagorian triplate";
    }*/
    //octal to decimal

return 0;
}