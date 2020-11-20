// Question link : https://codeforces.com/problemset/problem/742/A
// question based on Modular Arithematic
// Concept used : 1378 is congurent to 8 (mod n)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int power(ll a,ll n,ll p)
{
  ll res=1;
  while(n)
  {
    if(n%2==1)
    {
      res=(res*a)%p;
      n--;
    }
    else
    {
      a=(a*a)%p;
      n/=2;
    }
  }
  return res;
}

int main()
{
  ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;
    cout<<power(8,n,10);
  return 0;
}
