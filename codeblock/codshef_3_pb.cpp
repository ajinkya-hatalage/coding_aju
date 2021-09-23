#include<bits/stdc++.h>
using namespace std;

void solve()
{
     int n;
    int arr1[n],arr2[n];
    cin>>n;
    int e=0,o=0,e2=0,o2=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
  {

  if(arr1[i]%2==0)
  {
      e++;
  }
  else{
    o++;
  }
  }
  if(n%2==0)
  {
      e2=n/2;
      o2=n/2;
  }
  else{
    e2=n/2;
    o2=n/2+1;
  }
  int ans=0;
  ans=min(o,e2)+min(e,o2);
  cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
