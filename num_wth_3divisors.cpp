#include<bits/stdc++.h>
using namespace std;
const int maxi=1e6+5;
bool primes[maxi];
set<long long>s;
void gen_primes()
{
	primes[0]=false;
	primes[1]=false;
	for(int i=2;i<=maxi;i++)primes[i]=true;
	for(int i=2;i*i<=maxi;i++)
	{
		if(primes[i]==true)
		{
			s.insert(i*i);
			for(int j=i*i;j<=maxi;j+=i)
			{
				primes[j]=false;
			}
		}
	}
}
bool perfect_sq(int n)
{
	for(int i=1;i*i<=n;i++)
	{
		if(i*i==n)return true;
	}
	return false;
}
bool check(int n)
{
	if(perfect_sq(n)){
		if(s.find(n)!=s.end())return true;
		else return false;
	}
}
int main()
{
	gen_primes();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(check(n))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}