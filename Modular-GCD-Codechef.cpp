// Question link : https://www.codechef.com/problems/GCDMOD
// Question based on Modular Arithematic
// Concept used : found the potential candidates for the calculating gcd first

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll power(ll a,ll n,ll p)
{
  ll res=1;
  while(n)
  {
    if(n%2==1)
    {
      res=((res%p)*(a%p))%p;
      n--;
    }
    else
    {
      a=((a%p)*(a%p))%p;
      n/=2;
    }
  }
  return res;
}

ll gcd(ll a,ll b,ll n)
{
  if(a==b)
  {
    return ((power(a,n,mod)+power(b,n,mod))%mod);
  }

  ll candidate =1;
  ll num=a-b;
  for(ll i=1;i*i<=num;i++)
  {
    if(num%i==0)
    {
      ll temp = (power(a,n,i)+power(b,n,i))%i;
      if(temp==0)
      {
        candidate=max(candidate,i);
      }
      ll temp1 = (power(a,n,num/i)+power(b,n,num/i))%(num/i);
      if(temp1==0)
      {
        candidate=max(candidate,num/i);
      }
    }

  }
  return (candidate%mod);
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
      ll a,b,n;
      cin>>a>>b>>n;
      cout<<gcd(a,b,n)<<endl;
    }
  return 0;
}
