// Question link : https://www.spoj.com/problems/TDKPRIME/
// Question based on sieve of eratosthenes


#include <bits/stdc++.h>
#include <iostream>

#define pb push_back

using namespace std;

// here I am using bool array to store because integer will give tle
vector<int> primes;
bool arr[90000001];

void sieve()
{
	int maxN=90000000;

	arr[0]=arr[1]=true;

	for(int i=2;i*i<maxN;i++)
	{
		if(arr[i]==false)
		{
			for(int j=i*i;j<=maxN;j+=i)
			{
				arr[j]=true;
			}
		}
	}

	for(int i=2;i<=maxN;i++)
	{
		if(arr[i]==false)
		{
			primes.push_back(i);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	sieve();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		cout<<primes[n-1]<<endl;
		
	}
    return 0;
}


