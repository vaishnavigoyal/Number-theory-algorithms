// Question link : https://www.codechef.com/problems/GCDQ
// question based on Euclid division algorithm

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int gcd(int a,int b)
{
  if(b==0)
  {
    return a;
  }
  else
  {
    return gcd(b,a%b);
  }
}

int main()
{
  ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
      int n,q;
      cin>>n>>q;
      vector<int> arr(n+1);
      for(int i=1;i<=n;i++)
      {
        cin>>arr[i];
      }
      vector<int> pre(n+1);
      vector<int> suff(n+1);
      pre[1]=arr[1];
      for(int i=2;i<=n;i++)
      {
        pre[i]=gcd(arr[i],pre[i-1]);
      }
      suff[n]=arr[n];
      for(int i=n-1;i>0;i--)
      {
        suff[i]=gcd(suff[i+1],arr[i]);
      }
      while(q--)
      {
        int l,r;
        cin>>l>>r;
        if(l!=1&&r!=n)
        cout<<gcd(pre[l-1],suff[r+1])<<endl;
        else if(l==1)
        {
          cout<<suff[r+1]<<endl;
        }
        else
        {
          cout<<pre[l-1]<<endl;
        }
      }


    }
  return 0;
}
