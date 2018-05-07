#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	while(cin>>n)
	{
		if(n==0)
		break;
		else
		{
			long long c=0;
			for(int i=1;i<=(sqrt(n)+1);i++)
			{
				if(n%i==0)
				{
					//cout<<i<<" "<<n/i<<"\n";
					c+=2;
				}
			}
			//cout<<c<<"\n";
			long long x=sqrt(n);
			if(x*x==n)
			{
				c-=1;
			}
			
			//cout<<c<<"\n";
			if(c%2==1)
			cout<<"yes\n";
			else
			cout<<"no\n";
		}
	}
	return 0;
}
