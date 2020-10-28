#include <bits/stdc++.h>
using namespace std;

bool arr[1000001];
int pp[1000001];

void seive()
{
  int maxN=1000000;
  for(int i=1;i<=maxN;i++)
  {
    arr[i]=true;
  }
  arr[0]=arr[1]=false;
  for(int i=2;i*i<=maxN;i++)
  {
    if(arr[i]==true)
    {
      for(int j=i*i;j<=maxN;j+=i)
      {
        arr[j]=false;
      }
    }
  }

  int cnt=0;
  for(int i=1;i<=maxN;i++)
  {
    if(arr[i]==1)
    {
      cnt++;
    }
    if(arr[cnt])
    {
      pp[i]=1;
    }
    else
    {
      pp[i]=0;
    }
  }
  for(int i=1;i<=maxN;i++)
  {
	  pp[i]+=pp[i-1];
  }
}
int main()
{
  seive();
  int t;
  cin>>t;
  while(t--)
  {
    int l,r;
    cin>>l>>r;

    cout<<(pp[r]-pp[l-1])<<endl;
  }

  return 0;
}
