// Question link : https://www.codechef.com/problems/PRB01
// Question based on primality test


#include <bits/stdc++.h>
#include <iostream>

#define pb push_back

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		if(n==1)
		{
			cout<<"no"<<endl;
		}
		else
		{
			int k=0;
			for(int i=2;i<=sqrt(n);i++)
			{
				if(n%i==0)
				{
					cout<<"no"<<endl;
					k=-1;
					break;
				}
			}
			if(k!=-1)
			{
				cout<<"yes"<<endl;
			}
		}
		
	}
    return 0;
}


