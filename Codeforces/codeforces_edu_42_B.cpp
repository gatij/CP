#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long  n,p,a,c=0,sum=0;
	cin>>n>>p>>a;
	sum+=(a+p);
	string s,s1="";
	cin>>s;
	s1+="*";
	s1+=s;
	s1+="*";
	for(long long i=1;i<=n+1;i++)
	{
		if(s1[i]=='.')
		{
			c++;
		}
		else
		{
			long long v1=c/2,v2=c-v1,mx;
			mx=max(v1,v2);
			if(a>=p)
			{
				a=a-min(a,mx);
				p=p-min(p,c-mx);
			}
			else
			{
				p=p-min(p,mx);
				a=a-min(a,c-mx);
			}
			
			c=0;
		}
	}
	cout<<sum-(a+p);
	return 0;
}
