#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,n,s,p,x;
	cin>>k>>n>>s>>p;
	if(n%s==0)
	{
		x=n/s;
	}
	else
	x=(n/s)+1;
	
	if((k*x)%p==0)
	cout<<((k*x)/p);
	else
	cout<<((k*x)/p)+1;
	
	return 0;
}
