// Question link : https://www.hackerrank.com/challenges/fibonacci-finding-easy/problem
// question based on recurence nth element using matrix exponentiation

#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define M 51
ll arr[2][2],I[2][2];

void mul(ll a[][2],ll b[][2])
{
  ll res[recurence nth element using 2][2];
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      res[i][j]=0;
      for(int k=0;k<2;k++)
      {
        ll x=a[i][k]*b[k][j];
        res[i][j]=(res[i][j]+x)%1000000007;
      }
    }
  }
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      a[i][j]=res[i][j];
    }
  }
}

void power(ll a[][2],int n)
{
  I[0][0]=1;
  I[1][1]=1;
  I[0][1]=0;
  I[1][0]=0;

  while(n)
  {
    if(n%2==1)
    {
      mul(I,a);
      n--;
    }
    else
    {
      mul(a,a);
      n/=2;
    }
  }
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      a[i][j]=I[i][j];
    }
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
      int a,b,n;
      cin>>a>>b>>n;
      if(n==0)
      {
        cout<<a<<endl;
      }
      else if(n==1)
      {
        cout<<b<<endl;
      }
      else
      {
        arr[0][0]=0;
        arr[1][1]=1;
        arr[1][0]=1;
        arr[0][1]=1;
        power(arr,n);
        ll x=(a*arr[0][0]+b*arr[1][0])%1000000007;
        cout<<x<<endl;
      }


    }
  return 0;
}
