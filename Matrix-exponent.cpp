#include<bits/stdc++.h>
using namespace std;
struct Matrix
{
   int mat[2][2];
};
Matrix multi(Matrix A,Matrix B)
{
	Matrix c;
	for(int row=0;row<2;row++)
	{
		for(int col=0;col<2;col++)
		{
			int res=0;
			for(int i=0;i<2;i++)
			{
				res+=A.mat[row][i]*B.mat[i][col];
			}
			c.mat[row][col]=res;
		}
	}
	return c;
}
Matrix identity()
{
	Matrix x;
	x.mat[0][0]=1,x.mat[0][1]=0;
	x.mat[1][0]=0,x.mat[1][1]=1;
	return x;
}
Matrix matpow(Matrix A,int n)
{
	if(n==0)return identity();
	Matrix ans=matpow(A,n/2);
    if(n%2==0)return multi(ans,ans);
    else
    	return multi(multi(ans,ans),A);
}
int main()
{
	Matrix A,B;
    int n;
    cin>>n;
    A.mat[0][0]=1,A.mat[0][1]=2;
	A.mat[1][0]=0,A.mat[1][1]=1;
    B=matpow(A,n);
    cout<<B.mat[0][0]<<" "<<B.mat[0][1]<<"\n";
    cout<<B.mat[1][0]<<" "<<B.mat[1][1]<<"\n";
}