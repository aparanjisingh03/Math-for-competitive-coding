#include<iostream>
using namespace std;
int main()
{
	int a,t1,t2,cnt=0;
	cin>>a;
	a=a*a;
	for(int i=1;i*i<=a;i++)
	{
		if(a%i==0)
		{
           t1=i;
           t2=a/i;
           if(t1%2==t2%2 and t1!=t2)
           {
           	 cnt++;
           }
		}
	}
	cout<<cnt<<"\n";
}