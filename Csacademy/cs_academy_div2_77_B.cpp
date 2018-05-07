#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
double getans(long long d1,long long d2,long long k,long long x)
{
	double ans1,ans2,ans;
	ans1=((double)(d1)+(double)(x));
	ans2=((double)(d2+k)-(double)(x));
	ans=(double)(ans1*ans2/(double)(2.0));
	return ans;
}
int main()
{
	long long d1,d2,k,x,x1,x2;
	cin>>d1>>d2>>k;
	x=(abs(d2-d1)+k);
	if(x%2==0)
	{
		x=x/2;
		std::cout<<std::setprecision(6)<<getans(d1,d2,k,x);
	}
	else
	{
		x1=x/2;
		x2=x1+1;
		std::cout<<std::setprecision(6)<<max(getans(d1,d2,k,x1),getans(d1,d2,k,x2));
	}
	
	return 0;
}
