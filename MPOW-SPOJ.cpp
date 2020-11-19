// Question link : https://www.spoj.com/problems/MPOW/
// question based on matrix multiplication

#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define M 51
ll arr[M][M],I[M][M];

void mul(ll a[][M],ll b[][M],int m)
{
  ll res[m+1][m+1];
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<m;j++)
    {
      res[i][j]=0;
      for(int k=0;k<m;k++)
      {
        res[i][j]+=a[i][k]*b[k][j];
        res[i][j]%=1000000007;
      }
    }
  }
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<m;j++)
    {
      a[i][j]=res[i][j];
    }
  }
}

void power(ll a[][M],int m,int n)
{
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(i==j)
      {
        I[i][j]=1;
      }
      else
      {
        I[i][j]=0;
      }
    }
  }

  while(n)
  {
    if(n%2==1)
    {
      mul(I,a,m);
      n--;
    }
    else
    {
      mul(a,a,m);
      n/=2;
    }
  }
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<m;j++)
    {
      a[i][j]=I[i][j];
    }
  }
}

void printMat(ll a[][M],int m)
{
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<m;j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
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
      int m,n;
      cin>>m>>n;
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<m;j++)
        {
          cin>>arr[i][j];
        }
      }

      power(arr,m,n);
      printMat(arr,m);

    }
  return 0;
}
