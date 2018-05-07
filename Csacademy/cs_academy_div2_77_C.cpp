#include<bits/stdc++.h>
using namespace std;
long long m;
long long a[2][1000000];
long long d[2][1000000];
long long dp(int row,long long M)
{
	
	if(M<=0)
	{
		return 0;
	}
	else if (d[row][M-1]!=-1000000)
	{
		return d[row][M-1];
	}
	else if(M==1)
	{
		d[0][M-1]=a[0][0];
		d[1][M-1]=a[0][0]+a[1][0];
		return d[1][M-1];
	}
	else if(M%2==1)
	{
		d[0][M-1]=
		d[1][M-1]=min(dp(0,M),dp(1,M-1))+a[1][M-1];
		return d[1][M-1];
	}
	else
	{
		d[0][M-1]=max()
		d[1][M-1]=max(d[0][M-1],d[1][M-2])+a[1][M-1];
		return d[1][M-1];
	}
	
}
int main()
{
	cin>>m;
	memset(a,0,sizeof a);
	memset(d,-1000000,sizeof a);
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	
}
