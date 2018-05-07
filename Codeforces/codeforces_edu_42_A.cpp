#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,a,sum=0,ans,sum1=0;
	vector<long long>v;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		sum+=a;
		v.push_back(a);
	}
	ans=max(sum/2,sum-(sum/2));
	//cout<<ans<<"\n";
	for(int i=0;i<n;i++)
	{
		sum1+=v[i];
		if(sum1>=ans)
		{
			cout<<i+1;
			break;
		}
	}
	return 0;
}
