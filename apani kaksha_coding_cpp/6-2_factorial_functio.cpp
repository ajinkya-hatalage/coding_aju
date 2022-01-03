#include<bits\stdc++.h>
using namespace std;
int factorial(int n)
{
    int factorial=1;
    for(int i=2;i<=n;i++)
    {
        factorial*=i;
    }
    return factorial;
}
int main()
{
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
    cout<<factorial(n);//this also execute
return 0;
}