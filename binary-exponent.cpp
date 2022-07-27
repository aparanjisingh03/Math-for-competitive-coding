#include<bits/stdc++.h>
using namespace std;
int power(int base,int exp)
{
	if(exp==0)return 1;
	int x=power(base,exp/2);
	if(exp%2==0)return x*x;
	else
		return x*x*base;
}
int main()
{
	int base,exp;
	cin>>base>>exp;
	int ans=power(base,exp);
	cout<<ans;
}