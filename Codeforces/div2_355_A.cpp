#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,h,k,ans=0;
	cin>>n>>h;
	for(int i=0;i<n;i++)
	{
		cin>>k;
		if(k>h)
		ans+=2;
		else
		ans+=1;
	}
	cout<<ans;
	return 0;
}
